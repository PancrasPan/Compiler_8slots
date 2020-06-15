//===-- DSPCallingConv.td - Calling Conventions DSP 32 --*- tablegen -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This describes the calling conventions for the DSP-32 architectures.
//
//===----------------------------------------------------------------------===//

/// CCIfSubtarget - Match if the current subtarget has a feature F.
class CCIfSubtarget<string F, CCAction A>
 : CCIf<!strconcat("State.getTarget().getSubtarget<DSPSubtarget>().", F), A>;

//===----------------------------------------------------------------------===//
// Return Value Calling Conventions
//===----------------------------------------------------------------------===//

def RetCC_DSPCommon : CallingConv<[

CCIfType<[i32], CCAssignToReg<[V0, V1]>>,
CCIfType<[dspvi8,dspvi16,dspvi32],CCAssignToReg<[VR0,VR1]>>, //extend in the future

CCIfType<[i1,i8,i16],CCPromoteToType<i32>>,//ppp i1
//CCIfInReg<CCIfType<[i32], CCAssignToReg<[V0, V1]>>>,//ppp
// Integer arguments are passed in integer registers.
  CCIfType<[i32], CCAssignToRegWithShadow<[A0, A1, A2, A3,
                                           T0, T1],
                                          [T2, T3, T4, T5, 
										  T6, T7]>>,
  CCIfType<[dspvi8,dspvi16,dspvi32], CCAssignToRegWithShadow<[VR2, VR3, VR4, VR5],
														  [VR6, VR7, VR8, VR9]>>,
// Integer values get stored in stack slots that are 4 bytes in
 // size and 4-byte aligned.
CCIfType<[i32],CCAssignToStack<16,4>>,//ppp 4->16 
CCIfType<[dspvi8,dspvi16,dspvi32],CCAssignToStack<16,256>>//ppp
]>;


def RetCC_DSP : CallingConv<[
	//CCIfType<[i16,i8], CCAssignToReg<[S0, S1, S2, S3, S4, S5, S6, S7]>>,//ppp
	//now we didn't have other suitation
	CCDelegateTo<RetCC_DSPCommon>
]>;

//def CSR_O32 : CalleeSavedRegs<(add  LR, FP, (sequence "A%u", 3, 0), (sequence "S%u", 7, 0))>;
def CSR_O32 : CalleeSavedRegs<(add  LR,FP,(sequence "S%u", 7, 0))>;