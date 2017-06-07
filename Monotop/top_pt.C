#define top_pt_cxx

#include "top_pt.h"
#include <TH2.h>
#include <TStyle.h>

void top_pt::Begin(TTree * /*tree*/)
{
   TString option = GetOption();
}

void top_pt::SlaveBegin(TTree * /*tree*/)
{
   TString option = GetOption();
   // Define a TH1F 1D histogram to fill with the top quark PT.
   top_quark_pt = new TH1F("tquark_pt", "Top Quark Transverse Momentum", 100, 0.0, 600.0);
   top_quark_pt->SetLineColor(1);
   top_quark_pt->GetXaxis()->SetTitle("Pt");
   top_quark_pt->GetYaxis()->SetTitle("Number of events");
}

Bool_t top_pt::Process(Long64_t entry)
{
   // Get each event.
   fReader.SetEntry(entry);
   GetEntry(entry);

   // Loop over particles in the event and fill the histogram with the transverse momentum
   // of intermediate state top quarks.
   while(fReader.Next()) {
     int nParticles = Event_Nparticles[0];
     // printf("Number of particles = %d | ", nParticles); // Uncomment for debugging.

     for(int pt = 0; pt < nParticles; ++pt) {
       // t quark PID = 6
       if(Particle_Status[pt] == 2 && abs(Particle_PID[pt]) == 6) {
         top_quark_pt->Fill(Particle_PT[pt]);

         // Uncomment for debugging.
         // printf("Top quark Pt = %4.2f | ", Particle_PT[pt]);
         // printf("Top quark id = %d \n", Particle_PID[pt]);
       }
     }
   }
   return kTRUE;
}

void top_pt::SlaveTerminate()
{
   top_quark_pt->Draw();
}

void top_pt::Terminate(){}
