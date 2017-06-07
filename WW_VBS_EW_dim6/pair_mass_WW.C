#define pair_mass_WW_cxx
// The class definition in pair_mass_WW.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.

// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// Root > T->Process("pair_mass_WW.C")
// Root > T->Process("pair_mass_WW.C","some options")
// Root > T->Process("pair_mass_WW.C+")

#include "pair_mass_WW.h"
#include <TH2.h>
#include <TStyle.h>
#include <iostream>
#include <TParticle.h>

void LHEF::Begin(TTree * /*tree*/) {
  TString option = GetOption();
}

void LHEF::SlaveBegin(TTree * /*tree*/) {
  // Makes a new TH1F hitogram object.
  TString option = GetOption();
  wwMass = new TH1F("WW Mass","Mass of SM  WW Pair [GeV]", 100, 200., 1000.);
  wwMass->SetLineColor(1);
}

Bool_t LHEF::Process(Long64_t entry) {
  GetEntry(entry);
  TLorentzVector WW;
  Int_t wp = 0;
  Int_t wm = 0;

  // Loops over each event and stores the particle ID for the last W+
  // and last W- in the event.
  for(Int_t i = 0; i<Particle_size; i++) {

    if(Particle_PID[i] == 24) {
      wp = i;
    }

    if(Particle_PID[i] == -24){
      wm = i;
    }
  }
  // Build 4-vectors out of the selected W pair for each event.
  TLorentzVector w_p(Particle_Px[wp], Particle_Py[wp], Particle_Pz[wp], Particle_E[wp]);
  TLorentzVector w_m(Particle_Px[wm], Particle_Py[wm], Particle_Pz[wm], Particle_E[wm]);
  WW = w_p + w_m;

  // Fills the histogram with the pair mass.
  wwMass->Fill(WW.M());

  return kTRUE;
}

void LHEF::SlaveTerminate() {
  wwMass->Draw();
}

void LHEF::Terminate() {}
