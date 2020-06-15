//===-- DSPSchedule.td - DSP Scheduling Definitions ------*- tablegen -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

//===----------------------------------------------------------------------===//
// Functional units across DSP chips sets. Based on GCC/DSP backend files.
//===----------------------------------------------------------------------===//
def ALU     : FuncUnit;
def IMULDIV : FuncUnit;

//===----------------------------------------------------------------------===//
// Instruction Itinerary classes used for DSP
//===----------------------------------------------------------------------===//
def IIAlu              : InstrItinClass;
def II_CLO             : InstrItinClass;
def II_CLZ             : InstrItinClass;
def IILoad             : InstrItinClass;
def IIStore            : InstrItinClass;

def IIHiLo             : InstrItinClass;
def IIImul             : InstrItinClass;
def IIIdiv             : InstrItinClass;

def IIBranch           : InstrItinClass;

def IIPseudo           : InstrItinClass;
def IIVMax			   : InstrItinClass;
def IIVLoad			   : InstrItinClass;
def IIVStore		   : InstrItinClass;

def SLOT0       : FuncUnit;
def SLOT1       : FuncUnit;
def SLOT2       : FuncUnit;
def SLOT3       : FuncUnit;
def SLOT4       : FuncUnit;
def SLOT5       : FuncUnit;
def SLOT6       : FuncUnit;
def SLOT7       : FuncUnit;

//def SLOT_ENDLOOP: FuncUnit;

def PSEUDO      : InstrItinClass;					//αָ��
def NOP_SLOT01234567 :InstrItinClass;				//��ָ��
def ALU32_S_SLOT06 :InstrItinClass;					//��������MUL64
def ALU32_S_SLOT0167 :InstrItinClass;				//��������
def ALU32_V_SLOT23 :InstrItinClass;					//ʸ������
def ControlFlow_SLOT0 :InstrItinClass;				//����ָ��
def Data_Transmission_0_SLOT01 :InstrItinClass;		//���ݴ��� 
def Data_Transmission_1_SLOT67 :InstrItinClass;     //���ݴ���        
def Data_Transmission_2_SLOT24567 :InstrItinClass;	//���ݴ���
def Data_Transmission_3_SLOT014567 :InstrItinClass;	//���ݴ���
def Data_Transmission_4_SLOT2 :InstrItinClass;		//���ݴ��� + VFMUL.10,VFMUL.20,VFMUL.40,VFMAC.10,VFMAC.20,VFMAC.40,VCMUL.20
													//VCMULR.40,VCMULI.40,VCMAC.10,VCMAC.20
def LD_Ins_SLOT45 :InstrItinClass;					//����
def ST_Ins_SLOT67 :InstrItinClass;					//�洢


//===----------------------------------------------------------------------===//
// DSP Generic instruction itineraries.
//===----------------------------------------------------------------------===//
// http://llvm.org/docs/doxygen/html/structllvm_1_1InstrStage.html

def DSPGenericItineraries :ProcessorItineraries<[SLOT0, SLOT1, SLOT2, SLOT3,SLOT4, SLOT5, SLOT6, SLOT7],[],[
	  InstrItinData<NOP_SLOT01234567      , [InstrStage<1, [SLOT0, SLOT1, SLOT2, SLOT3,SLOT4, SLOT5, SLOT6, SLOT7]>]>,
	  InstrItinData<ALU32_S_SLOT06      , [InstrStage<1, [SLOT0, SLOT6]>]>,
	  InstrItinData<ALU32_S_SLOT0167      , [InstrStage<1, [SLOT0, SLOT1, SLOT6, SLOT7]>]>,
	  InstrItinData<ALU32_V_SLOT23      , [InstrStage<1, [SLOT2, SLOT3]>]>,
	  InstrItinData<ControlFlow_SLOT0      , [InstrStage<1, [SLOT0]>]>,
	  InstrItinData<Data_Transmission_0_SLOT01      , [InstrStage<1, [SLOT0, SLOT1]>]>,
	  InstrItinData<Data_Transmission_1_SLOT67      , [InstrStage<1, [SLOT6, SLOT7]>]>,
	  InstrItinData<Data_Transmission_2_SLOT24567      , [InstrStage<1, [SLOT2, SLOT4, SLOT5, SLOT6, SLOT7]>]>,
	  InstrItinData<Data_Transmission_3_SLOT014567      , [InstrStage<1, [SLOT0, SLOT1, SLOT4, SLOT5, SLOT6, SLOT7]>]>,
	  InstrItinData<Data_Transmission_4_SLOT2      , [InstrStage<1, [SLOT2]>]>,
	  InstrItinData<LD_Ins_SLOT45    , [InstrStage<1, [SLOT4, SLOT5]>]>,
	  InstrItinData<ST_Ins_SLOT67      , [InstrStage<1, [SLOT6, SLOT7]>]>,
	  InstrItinData<PSEUDO , [InstrStage<1, [SLOT0, SLOT1, SLOT2, SLOT3,SLOT4, SLOT5, SLOT6, SLOT7]>]>
]>;

def DSPModel : SchedMachineModel {
  // Max issue per cycle == bundle width.
  let IssueWidth = 4;
  let Itineraries = DSPGenericItineraries;
  let LoadLatency = 1;
}	

