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
#ifndef DSPSEREGISTERINFO_H
#define DSPSEREGISTERINFO_H

#include "DSPRegisterInfo.h"

namespace llvm {
	class DSPSEInstrInfo;
	class DSPSERegisterInfo :public DSPRegisterInfo{
	public:
		DSPSERegisterInfo(const DSPSubtarget &STI);
		const TargetRegisterClass *intRegClass(unsigned Size) const override;
		bool requiresRegisterScavenging(const MachineFunction &MF) const override;//ppp
		bool requiresFrameIndexScavenging(const MachineFunction &MF) const override;//
		bool saveScavengerRegister(MachineBasicBlock &MBB,
			MachineBasicBlock::iterator I,
			MachineBasicBlock::iterator &UseMI,
			const TargetRegisterClass *RC,
			unsigned Reg) const override;

	};


}
#endif