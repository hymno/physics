#define top_bottom_energy_ratio_cxx

#include "top_bottom_energy_ratio.h"
#include <TH2.h>
#include <TStyle.h>

void top_bottom_energy_ratio::Begin(TTree * /*tree*/)
{
   TString option = GetOption();
}

void top_bottom_energy_ratio::SlaveBegin(TTree * /*tree*/)
{
   TString option = GetOption();
   // Define a TH1F 1D histogram to fill with the top/bottom energy ratio.
   eb_et_hist = new TH1F("eb_div_et", "E(b)/E(t)", 100, 0.0, 1.0);
   eb_et_hist->SetLineColor(1);
}

Bool_t top_bottom_energy_ratio::Process(Long64_t entry)
{
   // Get each event.
   fReader.SetEntry(entry);
   GetEntry(entry);

   // Loop over particles in the event and fill the histogram with the energy ratio
   // of the bottom quark to the top quark.
   while(fReader.Next()) {
     int nParticles = Event_Nparticles[0];

     for(int p = 0; p < nParticles; ++p) {
       // t quark PID = 6
       if(Particle_Status[p] == 2 && abs(Particle_PID[p]) == 6) {
         top_energy = Particle_E[p];
       }
       // b quark PID = 5
       if(Particle_Status[p] == 1 && abs(Particle_PID[p]) == 5) {
         bottom_energy = Particle_E[p];
       }
     }

     eb_et_hist->Fill(bottom_energy / top_energy);
   }
   return kTRUE;
}

void top_bottom_energy_ratio::SlaveTerminate()
{
   eb_et_hist->Draw();
}

void top_bottom_energy_ratio::Terminate(){}
