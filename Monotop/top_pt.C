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
   TH1F *top_quark_pt = new TH1F("tquark_pt", "Top Quark Transverse Momentum", 100, 0.0, 500.0);
   top_quark_pt->SetLineColor(1);
}

Bool_t top_pt::Process(Long64_t entry)
{
   // Get each event.
   fReader.SetEntry(entry);
   GetEntry(entry);

   // Loop over particles in the event and fill the histogram with the transverse momentum
   // of intermediate state top quarks.
   for(Int_t i; i<sizeof(Particle_size); i++) {
     // t quark PID = 6
     if(Particle_Status[i] == 2 && (Particle_PID[i] == 6 || Particle_PID[i] == -6)) {
       top_quark_pt->Fill(Particle_PT[i]);
     }
   }
   return kTRUE;
}

void top_pt::SlaveTerminate()
{
   top_quark_pt->Draw();
}

void top_pt::Terminate(){}
