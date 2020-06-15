//===-- DSP.h - Top-level interface for DSP representation ----*- C++ -*-===//
//
// The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file contains the entry points for global functions defined in
// the LLVM DSP back-end.
//
//===----------------------------------------------------------------------===//
#ifndef TARGET_DSP_H
#define TARGET_DSP_H
#include "MCTargetDesc/DSPMCTargetDesc.h"
#include "llvm/Target/TargetMachine.h"
namespace llvm {
	namespace DSP{
		enum SlotsState {
			NO_AVA = 0b0,
			SLOT0 = 0b1, 
			SLOT1 = 0b10, 
			SLOT2 = 0b100, 
			SLOT3 = 0b1000,
			SLOT4 = 0b10000,
			SLOT5 = 0b100000,
			SLOT6 = 0b1000000,
			SLOT7 = 0b10000000,
			ALL_AVA = 0b11111111
		};		
	}
class DSPTargetMachine;
class FunctionPass;
class DSPMCInst;
FunctionPass *createDSPISelDag(DSPTargetMachine &TM);

#ifdef ENABLE_GPRESTORE
FunctionPass *createDSPEmitGPRestorePass(DSPTargetMachine &TM);
#endif
FunctionPass *createDSPHardwareLoops();
FunctionPass *createDSPVLIWBundlerDrive(TargetMachine &TM);
FunctionPass *createDSPPacketizer();
FunctionPass *createDSPDelaySlotFillerPass(DSPTargetMachine &TM);
FunctionPass *createDSPDelJmpPass(DSPTargetMachine &TM);
FunctionPass *createDSPFixupHwLoops();
FunctionPass *createDSPHandlerCCPass();
FunctionPass *createDSPMemEst();

} // end namespace llvm;
#endif
