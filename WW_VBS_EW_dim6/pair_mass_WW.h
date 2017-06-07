//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Apr 13 01:56:00 2015 by ROOT version 5.34/25
// from TTree LHEF/Analysis tree
// found on file: SM_ppwwjj_pythia_events.root
//////////////////////////////////////////////////////////

#ifndef pair_mass_WW_h
#define pair_mass_WW_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <iostream>
// Header file for the classes stored in the TTree if any.
//#include "/var/build/72a/x86_64-slc6-gcc48-opt-build/projects/ROOT-5.34.25/src/ROOT/5.34.25/core/cont/inc/TClonesArray.h"
//#include "/var/build/72a/x86_64-slc6-gcc48-opt-build/projects/ROOT-5.34.25/src/ROOT/5.34.25/core/base/inc/TObject.h"

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxEvent = 1;
   const Int_t kMaxRwgt = 1;
   const Int_t kMaxParticle = 24;

class LHEF : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   // Histogram object to fill with the final state WW pair mass.
   TH1F wwMass;

   // Declaration of leaf types
   Int_t           Event_;
   UInt_t          Event_fUniqueID[kMaxEvent];   //[Event_]
   UInt_t          Event_fBits[kMaxEvent];   //[Event_]
   Long64_t        Event_Number[kMaxEvent];   //[Event_]
   Int_t           Event_Nparticles[kMaxEvent];   //[Event_]
   Int_t           Event_ProcessID[kMaxEvent];   //[Event_]
   Double_t        Event_Weight[kMaxEvent];   //[Event_]
   Double_t        Event_ScalePDF[kMaxEvent];   //[Event_]
   Double_t        Event_CouplingQED[kMaxEvent];   //[Event_]
   Double_t        Event_CouplingQCD[kMaxEvent];   //[Event_]
   Int_t           Event_size;
   Int_t           Rwgt_;
   UInt_t          Rwgt_fUniqueID[kMaxRwgt];   //[Rwgt_]
   UInt_t          Rwgt_fBits[kMaxRwgt];   //[Rwgt_]
   Double_t        Rwgt_Weight[kMaxRwgt];   //[Rwgt_]
   Int_t           Rwgt_size;
   Int_t           Particle_;
   UInt_t          Particle_fUniqueID[kMaxParticle];   //[Particle_]
   UInt_t          Particle_fBits[kMaxParticle];   //[Particle_]
   Int_t           Particle_PID[kMaxParticle];   //[Particle_]
   Int_t           Particle_Status[kMaxParticle];   //[Particle_]
   Int_t           Particle_Mother1[kMaxParticle];   //[Particle_]
   Int_t           Particle_Mother2[kMaxParticle];   //[Particle_]
   Int_t           Particle_ColorLine1[kMaxParticle];   //[Particle_]
   Int_t           Particle_ColorLine2[kMaxParticle];   //[Particle_]
   Double_t        Particle_Px[kMaxParticle];   //[Particle_]
   Double_t        Particle_Py[kMaxParticle];   //[Particle_]
   Double_t        Particle_Pz[kMaxParticle];   //[Particle_]
   Double_t        Particle_E[kMaxParticle];   //[Particle_]
   Double_t        Particle_M[kMaxParticle];   //[Particle_]
   Double_t        Particle_PT[kMaxParticle];   //[Particle_]
   Double_t        Particle_Eta[kMaxParticle];   //[Particle_]
   Double_t        Particle_Phi[kMaxParticle];   //[Particle_]
   Double_t        Particle_Rapidity[kMaxParticle];   //[Particle_]
   Double_t        Particle_LifeTime[kMaxParticle];   //[Particle_]
   Double_t        Particle_Spin[kMaxParticle];   //[Particle_]
   Int_t           Particle_size;

   // List of branches
   TBranch        *b_Event_;   //!
   TBranch        *b_Event_fUniqueID;   //!
   TBranch        *b_Event_fBits;   //!
   TBranch        *b_Event_Number;   //!
   TBranch        *b_Event_Nparticles;   //!
   TBranch        *b_Event_ProcessID;   //!
   TBranch        *b_Event_Weight;   //!
   TBranch        *b_Event_ScalePDF;   //!
   TBranch        *b_Event_CouplingQED;   //!
   TBranch        *b_Event_CouplingQCD;   //!
   TBranch        *b_Event_size;   //!
   TBranch        *b_Rwgt_;   //!
   TBranch        *b_Rwgt_fUniqueID;   //!
   TBranch        *b_Rwgt_fBits;   //!
   TBranch        *b_Rwgt_Weight;   //!
   TBranch        *b_Rwgt_size;   //!
   TBranch        *b_Particle_;   //!
   TBranch        *b_Particle_fUniqueID;   //!
   TBranch        *b_Particle_fBits;   //!
   TBranch        *b_Particle_PID;   //!
   TBranch        *b_Particle_Status;   //!
   TBranch        *b_Particle_Mother1;   //!
   TBranch        *b_Particle_Mother2;   //!
   TBranch        *b_Particle_ColorLine1;   //!
   TBranch        *b_Particle_ColorLine2;   //!
   TBranch        *b_Particle_Px;   //!
   TBranch        *b_Particle_Py;   //!
   TBranch        *b_Particle_Pz;   //!
   TBranch        *b_Particle_E;   //!
   TBranch        *b_Particle_M;   //!
   TBranch        *b_Particle_PT;   //!
   TBranch        *b_Particle_Eta;   //!
   TBranch        *b_Particle_Phi;   //!
   TBranch        *b_Particle_Rapidity;   //!
   TBranch        *b_Particle_LifeTime;   //!
   TBranch        *b_Particle_Spin;   //!
   TBranch        *b_Particle_size;   //!

   LHEF(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~LHEF() { }
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

   ClassDef(LHEF,0);
};

#endif

#ifdef pair_mass_WW_cxx
void LHEF::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Event", &Event_, &b_Event_);
   fChain->SetBranchAddress("Event.fUniqueID", Event_fUniqueID, &b_Event_fUniqueID);
   fChain->SetBranchAddress("Event.fBits", Event_fBits, &b_Event_fBits);
   fChain->SetBranchAddress("Event.Number", Event_Number, &b_Event_Number);
   fChain->SetBranchAddress("Event.Nparticles", Event_Nparticles, &b_Event_Nparticles);
   fChain->SetBranchAddress("Event.ProcessID", Event_ProcessID, &b_Event_ProcessID);
   fChain->SetBranchAddress("Event.Weight", Event_Weight, &b_Event_Weight);
   fChain->SetBranchAddress("Event.ScalePDF", Event_ScalePDF, &b_Event_ScalePDF);
   fChain->SetBranchAddress("Event.CouplingQED", Event_CouplingQED, &b_Event_CouplingQED);
   fChain->SetBranchAddress("Event.CouplingQCD", Event_CouplingQCD, &b_Event_CouplingQCD);
   fChain->SetBranchAddress("Event_size", &Event_size, &b_Event_size);
   fChain->SetBranchAddress("Rwgt", &Rwgt_, &b_Rwgt_);
   fChain->SetBranchAddress("Rwgt.fUniqueID", &Rwgt_fUniqueID, &b_Rwgt_fUniqueID);
   fChain->SetBranchAddress("Rwgt.fBits", &Rwgt_fBits, &b_Rwgt_fBits);
   fChain->SetBranchAddress("Rwgt.Weight", &Rwgt_Weight, &b_Rwgt_Weight);
   fChain->SetBranchAddress("Rwgt_size", &Rwgt_size, &b_Rwgt_size);
   fChain->SetBranchAddress("Particle", &Particle_, &b_Particle_);
   fChain->SetBranchAddress("Particle.fUniqueID", Particle_fUniqueID, &b_Particle_fUniqueID);
   fChain->SetBranchAddress("Particle.fBits", Particle_fBits, &b_Particle_fBits);
   fChain->SetBranchAddress("Particle.PID", Particle_PID, &b_Particle_PID);
   fChain->SetBranchAddress("Particle.Status", Particle_Status, &b_Particle_Status);
   fChain->SetBranchAddress("Particle.Mother1", Particle_Mother1, &b_Particle_Mother1);
   fChain->SetBranchAddress("Particle.Mother2", Particle_Mother2, &b_Particle_Mother2);
   fChain->SetBranchAddress("Particle.ColorLine1", Particle_ColorLine1, &b_Particle_ColorLine1);
   fChain->SetBranchAddress("Particle.ColorLine2", Particle_ColorLine2, &b_Particle_ColorLine2);
   fChain->SetBranchAddress("Particle.Px", Particle_Px, &b_Particle_Px);
   fChain->SetBranchAddress("Particle.Py", Particle_Py, &b_Particle_Py);
   fChain->SetBranchAddress("Particle.Pz", Particle_Pz, &b_Particle_Pz);
   fChain->SetBranchAddress("Particle.E", Particle_E, &b_Particle_E);
   fChain->SetBranchAddress("Particle.M", Particle_M, &b_Particle_M);
   fChain->SetBranchAddress("Particle.PT", Particle_PT, &b_Particle_PT);
   fChain->SetBranchAddress("Particle.Eta", Particle_Eta, &b_Particle_Eta);
   fChain->SetBranchAddress("Particle.Phi", Particle_Phi, &b_Particle_Phi);
   fChain->SetBranchAddress("Particle.Rapidity", Particle_Rapidity, &b_Particle_Rapidity);
   fChain->SetBranchAddress("Particle.LifeTime", Particle_LifeTime, &b_Particle_LifeTime);
   fChain->SetBranchAddress("Particle.Spin", Particle_Spin, &b_Particle_Spin);
   fChain->SetBranchAddress("Particle_size", &Particle_size, &b_Particle_size);
}

Bool_t LHEF::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef pair_mass_WW_cxx
