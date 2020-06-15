//===-- DSPSERegisterInfo.cpp - DSP Register Information ------== -------===//
//
// The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file contains the DSP implementation of the TargetRegisterInfo
// class.
//
//===----------------------------------------------------------------------===//

#include "DSPSERegisterInfo.h"
using namespace llvm;
#define DEBUG_TYPE "dsp-reg-info"

DSPSERegisterInfo::DSPSERegisterInfo(const DSPSubtarget &STI) :DSPRegisterInfo(STI){}
const  TargetRegisterClass *DSPSERegisterInfo::intRegClass(unsigned Size)const {
	return &DSP::CPURegsRegClass;
}

bool DSPSERegisterInfo::requiresRegisterScavenging(const MachineFunction &MF)const {//ppp
	return true;
}

bool DSPSERegisterInfo::requiresFrameIndexScavenging(const MachineFunction &MF) const {//
	return true;
}

bool DSPSERegisterInfo::saveScavengerRegister(MachineBasicBlock &MBB,//
		MachineBasicBlock::iterator I,
		MachineBasicBlock::iterator &UseMI,
		const TargetRegisterClass *RC,
		unsigned Reg) const {
		return true;
}
