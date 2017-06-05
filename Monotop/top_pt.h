//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Jun  4 13:45:04 2017 by ROOT version 6.08/06
// from TTree LHEF/Analysis tree
// found on file: monotop_zeroJet_rightHanded_hadronic_run01.root
//////////////////////////////////////////////////////////

#ifndef top_pt_h
#define top_pt_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector
#include "TClonesArray.h"



class top_pt : public TSelector {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain

   TH1F *top_quark_pt;

   // Readers to access the data (delete the ones you do not need).
   TTreeReaderArray<unsigned int> Event_fUniqueID = {fReader, "Event.fUniqueID"};
   TTreeReaderArray<unsigned int> Event_fBits = {fReader, "Event.fBits"};
   TTreeReaderArray<Long64_t> Event_Number = {fReader, "Event.Number"};
   TTreeReaderArray<Int_t> Event_Nparticles = {fReader, "Event.Nparticles"};
   TTreeReaderArray<Int_t> Event_ProcessID = {fReader, "Event.ProcessID"};
   TTreeReaderArray<Double_t> Event_Weight = {fReader, "Event.Weight"};
   TTreeReaderArray<Double_t> Event_ScalePDF = {fReader, "Event.ScalePDF"};
   TTreeReaderArray<Double_t> Event_CouplingQED = {fReader, "Event.CouplingQED"};
   TTreeReaderArray<Double_t> Event_CouplingQCD = {fReader, "Event.CouplingQCD"};
   TTreeReaderValue<Int_t> Event_size = {fReader, "Event_size"};
   TTreeReaderArray<unsigned int> Rwgt_fUniqueID = {fReader, "Rwgt.fUniqueID"};
   TTreeReaderArray<unsigned int> Rwgt_fBits = {fReader, "Rwgt.fBits"};
   TTreeReaderArray<Double_t> Rwgt_Weight = {fReader, "Rwgt.Weight"};
   TTreeReaderValue<Int_t> Rwgt_size = {fReader, "Rwgt_size"};
   TTreeReaderArray<unsigned int> Particle_fUniqueID = {fReader, "Particle.fUniqueID"};
   TTreeReaderArray<unsigned int> Particle_fBits = {fReader, "Particle.fBits"};
   TTreeReaderArray<Int_t> Particle_PID = {fReader, "Particle.PID"};
   TTreeReaderArray<Int_t> Particle_Status = {fReader, "Particle.Status"};
   TTreeReaderArray<Int_t> Particle_Mother1 = {fReader, "Particle.Mother1"};
   TTreeReaderArray<Int_t> Particle_Mother2 = {fReader, "Particle.Mother2"};
   TTreeReaderArray<Int_t> Particle_ColorLine1 = {fReader, "Particle.ColorLine1"};
   TTreeReaderArray<Int_t> Particle_ColorLine2 = {fReader, "Particle.ColorLine2"};
   TTreeReaderArray<Double_t> Particle_Px = {fReader, "Particle.Px"};
   TTreeReaderArray<Double_t> Particle_Py = {fReader, "Particle.Py"};
   TTreeReaderArray<Double_t> Particle_Pz = {fReader, "Particle.Pz"};
   TTreeReaderArray<Double_t> Particle_E = {fReader, "Particle.E"};
   TTreeReaderArray<Double_t> Particle_M = {fReader, "Particle.M"};
   TTreeReaderArray<Double_t> Particle_PT = {fReader, "Particle.PT"};
   TTreeReaderArray<Double_t> Particle_Eta = {fReader, "Particle.Eta"};
   TTreeReaderArray<Double_t> Particle_Phi = {fReader, "Particle.Phi"};
   TTreeReaderArray<Double_t> Particle_Rapidity = {fReader, "Particle.Rapidity"};
   TTreeReaderArray<Double_t> Particle_LifeTime = {fReader, "Particle.LifeTime"};
   TTreeReaderArray<Double_t> Particle_Spin = {fReader, "Particle.Spin"};
   TTreeReaderValue<Int_t> Particle_size = {fReader, "Particle_size"};


   top_pt(TTree * /*tree*/ =0) { }
   virtual ~top_pt() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(top_pt,0);

};

#endif

#ifdef top_pt_cxx
void top_pt::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t top_pt::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef top_pt_cxx
