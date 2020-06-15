/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*DAG Instruction Selector for the DSP target                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/       OPC_SwitchOpcode /*32 cases */, 42|128,8/*1066*/, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->1071
/*5*/         OPC_RecordNode, // #0 = 'intrinsic_w_chain' chained node
/*6*/         OPC_Scope, 37, /*->45*/ // 44 children in Scope
/*8*/           OPC_CheckChild1Integer, 5|128,3/*389*/, 
/*11*/          OPC_RecordChild2, // #1 = $rb
/*12*/          OPC_RecordChild3, // #2 = $imm5_2
/*13*/          OPC_MoveChild, 3,
/*15*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*18*/          OPC_CheckPredicate, 0, // Predicate_immSExt5
/*20*/          OPC_MoveParent,
/*21*/          OPC_RecordChild4, // #3 = $imm5_1
/*22*/          OPC_MoveChild, 4,
/*24*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*27*/          OPC_CheckPredicate, 0, // Predicate_immSExt5
/*29*/          OPC_MoveParent,
/*30*/          OPC_EmitMergeInputChains1_0,
/*31*/          OPC_EmitConvertToTarget, 2,
/*33*/          OPC_EmitConvertToTarget, 3,
/*35*/          OPC_MorphNodeTo, TARGET_VAL(DSP::BFEXT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 4, 5, 
                // Src: (intrinsic_w_chain:i32 389:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt5>>:$imm5_2, (imm:i32)<<P:Predicate_immSExt5>>:$imm5_1) - Complexity = 16
                // Dst: (BFEXT:i32 CPURegs:i32:$rb, (imm:i32):$imm5_2, (imm:i32):$imm5_1)
/*45*/        /*Scope*/ 37, /*->83*/
/*46*/          OPC_CheckChild1Integer, 6|128,3/*390*/, 
/*49*/          OPC_RecordChild2, // #1 = $rb
/*50*/          OPC_RecordChild3, // #2 = $imm5_2
/*51*/          OPC_MoveChild, 3,
/*53*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*56*/          OPC_CheckPredicate, 0, // Predicate_immSExt5
/*58*/          OPC_MoveParent,
/*59*/          OPC_RecordChild4, // #3 = $imm5_1
/*60*/          OPC_MoveChild, 4,
/*62*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*65*/          OPC_CheckPredicate, 0, // Predicate_immSExt5
/*67*/          OPC_MoveParent,
/*68*/          OPC_EmitMergeInputChains1_0,
/*69*/          OPC_EmitConvertToTarget, 2,
/*71*/          OPC_EmitConvertToTarget, 3,
/*73*/          OPC_MorphNodeTo, TARGET_VAL(DSP::BFEXTU), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 4, 5, 
                // Src: (intrinsic_w_chain:i32 390:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt5>>:$imm5_2, (imm:i32)<<P:Predicate_immSExt5>>:$imm5_1) - Complexity = 16
                // Dst: (BFEXTU:i32 CPURegs:i32:$rb, (imm:i32):$imm5_2, (imm:i32):$imm5_1)
/*83*/        /*Scope*/ 66, /*->150*/
/*84*/          OPC_CheckChild1Integer, 7|128,3/*391*/, 
/*87*/          OPC_RecordChild2, // #1 = $ra
/*88*/          OPC_RecordChild3, // #2 = $rb
/*89*/          OPC_RecordChild4, // #3 = $imm5_2
/*90*/          OPC_MoveChild, 4,
/*92*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*95*/          OPC_CheckPredicate, 0, // Predicate_immSExt5
/*97*/          OPC_MoveParent,
/*98*/          OPC_RecordChild5, // #4 = $imm5_1
/*99*/          OPC_MoveChild, 5,
/*101*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*104*/         OPC_CheckPredicate, 0, // Predicate_immSExt5
/*106*/         OPC_MoveParent,
/*107*/         OPC_EmitMergeInputChains1_0,
/*108*/         OPC_EmitConvertToTarget, 3,
/*110*/         OPC_EmitConvertToTarget, 4,
/*112*/         OPC_Scope, 11, /*->125*/ // 3 children in Scope
/*114*/           OPC_MorphNodeTo, TARGET_VAL(DSP::BFST), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 5, 6, 
                  // Src: (intrinsic_w_chain:i32 391:iPTR, CPURegs:i32:$ra, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt5>>:$imm5_2, (imm:i32)<<P:Predicate_immSExt5>>:$imm5_1) - Complexity = 16
                  // Dst: (BFST:i32 CPURegs:i32:$ra, CPURegs:i32:$rb, (imm:i32):$imm5_2, (imm:i32):$imm5_1)
/*125*/         /*Scope*/ 11, /*->137*/
/*126*/           OPC_MorphNodeTo, TARGET_VAL(DSP::BST), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 5, 6, 
                  // Src: (intrinsic_w_chain:i32 391:iPTR, CPURegs:i32:$ra, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt5>>:$imm5_2, (imm:i32)<<P:Predicate_immSExt5>>:$imm5_1) - Complexity = 16
                  // Dst: (BST:i32 CPURegs:i32:$ra, CPURegs:i32:$rb, (imm:i32):$imm5_2, (imm:i32):$imm5_1)
/*137*/         /*Scope*/ 11, /*->149*/
/*138*/           OPC_MorphNodeTo, TARGET_VAL(DSP::BCLR), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 5, 6, 
                  // Src: (intrinsic_w_chain:i32 391:iPTR, CPURegs:i32:$ra, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt5>>:$imm5_2, (imm:i32)<<P:Predicate_immSExt5>>:$imm5_1) - Complexity = 16
                  // Dst: (BCLR:i32 CPURegs:i32:$ra, CPURegs:i32:$rb, (imm:i32):$imm5_2, (imm:i32):$imm5_1)
/*149*/         0, /*End of Scope*/
/*150*/       /*Scope*/ 25, /*->176*/
/*151*/         OPC_CheckChild1Integer, 35|128,3/*419*/, 
/*154*/         OPC_RecordChild2, // #1 = $rb
/*155*/         OPC_RecordChild3, // #2 = $imm5
/*156*/         OPC_MoveChild, 3,
/*158*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*161*/         OPC_CheckPredicate, 0, // Predicate_immSExt5
/*163*/         OPC_MoveParent,
/*164*/         OPC_EmitMergeInputChains1_0,
/*165*/         OPC_EmitConvertToTarget, 2,
/*167*/         OPC_MorphNodeTo, TARGET_VAL(DSP::TESTI), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:i32 419:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt5>>:$imm5) - Complexity = 12
                // Dst: (TESTI:i32 CPURegs:i32:$rb, (imm:i32):$imm5)
/*176*/       /*Scope*/ 25, /*->202*/
/*177*/         OPC_CheckChild1Integer, 15|128,3/*399*/, 
/*180*/         OPC_RecordChild2, // #1 = $rb
/*181*/         OPC_RecordChild3, // #2 = $imm9
/*182*/         OPC_MoveChild, 3,
/*184*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*187*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*189*/         OPC_MoveParent,
/*190*/         OPC_EmitMergeInputChains1_0,
/*191*/         OPC_EmitConvertToTarget, 2,
/*193*/         OPC_MorphNodeTo, TARGET_VAL(DSP::loadu_8), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:i32 399:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (loadu_8:i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*202*/       /*Scope*/ 25, /*->228*/
/*203*/         OPC_CheckChild1Integer, 13|128,3/*397*/, 
/*206*/         OPC_RecordChild2, // #1 = $rb
/*207*/         OPC_RecordChild3, // #2 = $imm9
/*208*/         OPC_MoveChild, 3,
/*210*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*213*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*215*/         OPC_MoveParent,
/*216*/         OPC_EmitMergeInputChains1_0,
/*217*/         OPC_EmitConvertToTarget, 2,
/*219*/         OPC_MorphNodeTo, TARGET_VAL(DSP::loadu_16), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:i32 397:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (loadu_16:i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*228*/       /*Scope*/ 25, /*->254*/
/*229*/         OPC_CheckChild1Integer, 14|128,3/*398*/, 
/*232*/         OPC_RecordChild2, // #1 = $rb
/*233*/         OPC_RecordChild3, // #2 = $imm9
/*234*/         OPC_MoveChild, 3,
/*236*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*239*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*241*/         OPC_MoveParent,
/*242*/         OPC_EmitMergeInputChains1_0,
/*243*/         OPC_EmitConvertToTarget, 2,
/*245*/         OPC_MorphNodeTo, TARGET_VAL(DSP::loadu_32), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:i32 398:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (loadu_32:i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*254*/       /*Scope*/ 13, /*->268*/
/*255*/         OPC_CheckChild1Integer, 3|128,3/*387*/, 
/*258*/         OPC_RecordChild2, // #1 = $rb
/*259*/         OPC_EmitMergeInputChains1_0,
/*260*/         OPC_MorphNodeTo, TARGET_VAL(DSP::ABS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 387:iPTR, CPURegs:i32:$rb) - Complexity = 8
                // Dst: (ABS:i32 CPURegs:i32:$rb)
/*268*/       /*Scope*/ 15, /*->284*/
/*269*/         OPC_CheckChild1Integer, 34|128,3/*418*/, 
/*272*/         OPC_RecordChild2, // #1 = $rb
/*273*/         OPC_RecordChild3, // #2 = $rc
/*274*/         OPC_EmitMergeInputChains1_0,
/*275*/         OPC_MorphNodeTo, TARGET_VAL(DSP::TEST), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:i32 418:iPTR, CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 8
                // Dst: (TEST:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*284*/       /*Scope*/ 13, /*->298*/
/*285*/         OPC_CheckChild1Integer, 9|128,3/*393*/, 
/*288*/         OPC_RecordChild2, // #1 = $rb
/*289*/         OPC_EmitMergeInputChains1_0,
/*290*/         OPC_MorphNodeTo, TARGET_VAL(DSP::CBW), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 393:iPTR, CPURegs:i32:$rb) - Complexity = 8
                // Dst: (CBW:i32 CPURegs:i32:$rb)
/*298*/       /*Scope*/ 13, /*->312*/
/*299*/         OPC_CheckChild1Integer, 10|128,3/*394*/, 
/*302*/         OPC_RecordChild2, // #1 = $rb
/*303*/         OPC_EmitMergeInputChains1_0,
/*304*/         OPC_MorphNodeTo, TARGET_VAL(DSP::CHW), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 394:iPTR, CPURegs:i32:$rb) - Complexity = 8
                // Dst: (CHW:i32 CPURegs:i32:$rb)
/*312*/       /*Scope*/ 15, /*->328*/
/*313*/         OPC_CheckChild1Integer, 11|128,3/*395*/, 
/*316*/         OPC_RecordChild2, // #1 = $rb
/*317*/         OPC_RecordChild3, // #2 = $rc
/*318*/         OPC_EmitMergeInputChains1_0,
/*319*/         OPC_MorphNodeTo, TARGET_VAL(DSP::loado_16), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:i32 395:iPTR, CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 8
                // Dst: (loado_16:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*328*/       /*Scope*/ 15, /*->344*/
/*329*/         OPC_CheckChild1Integer, 12|128,3/*396*/, 
/*332*/         OPC_RecordChild2, // #1 = $rb
/*333*/         OPC_RecordChild3, // #2 = $rc
/*334*/         OPC_EmitMergeInputChains1_0,
/*335*/         OPC_MorphNodeTo, TARGET_VAL(DSP::loado_32), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:i32 396:iPTR, CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 8
                // Dst: (loado_32:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*344*/       /*Scope*/ 15, /*->360*/
/*345*/         OPC_CheckChild1Integer, 22|128,3/*406*/, 
/*348*/         OPC_RecordChild2, // #1 = $rb
/*349*/         OPC_RecordChild3, // #2 = $rc
/*350*/         OPC_EmitMergeInputChains1_0,
/*351*/         OPC_MorphNodeTo, TARGET_VAL(DSP::storeo_16), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:i32 406:iPTR, CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 8
                // Dst: (storeo_16:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*360*/       /*Scope*/ 15, /*->376*/
/*361*/         OPC_CheckChild1Integer, 23|128,3/*407*/, 
/*364*/         OPC_RecordChild2, // #1 = $rb
/*365*/         OPC_RecordChild3, // #2 = $rc
/*366*/         OPC_EmitMergeInputChains1_0,
/*367*/         OPC_MorphNodeTo, TARGET_VAL(DSP::storeo_32), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:i32 407:iPTR, CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 8
                // Dst: (storeo_32:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*376*/       /*Scope*/ 25, /*->402*/
/*377*/         OPC_CheckChild1Integer, 70|128,3/*454*/, 
/*380*/         OPC_RecordChild2, // #1 = $rb
/*381*/         OPC_RecordChild3, // #2 = $imm9
/*382*/         OPC_MoveChild, 3,
/*384*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*387*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*389*/         OPC_MoveParent,
/*390*/         OPC_EmitMergeInputChains1_0,
/*391*/         OPC_EmitConvertToTarget, 2,
/*393*/         OPC_MorphNodeTo, TARGET_VAL(DSP::vloadr_8), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v16i8 454:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (vloadr_8:v16i8 CPURegs:i32:$rb, (imm:i32):$imm9)
/*402*/       /*Scope*/ 25, /*->428*/
/*403*/         OPC_CheckChild1Integer, 68|128,3/*452*/, 
/*406*/         OPC_RecordChild2, // #1 = $rb
/*407*/         OPC_RecordChild3, // #2 = $imm9
/*408*/         OPC_MoveChild, 3,
/*410*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*413*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*415*/         OPC_MoveParent,
/*416*/         OPC_EmitMergeInputChains1_0,
/*417*/         OPC_EmitConvertToTarget, 2,
/*419*/         OPC_MorphNodeTo, TARGET_VAL(DSP::vloadr_16), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v8i16 452:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (vloadr_16:v8i16 CPURegs:i32:$rb, (imm:i32):$imm9)
/*428*/       /*Scope*/ 25, /*->454*/
/*429*/         OPC_CheckChild1Integer, 69|128,3/*453*/, 
/*432*/         OPC_RecordChild2, // #1 = $rb
/*433*/         OPC_RecordChild3, // #2 = $imm9
/*434*/         OPC_MoveChild, 3,
/*436*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*439*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*441*/         OPC_MoveParent,
/*442*/         OPC_EmitMergeInputChains1_0,
/*443*/         OPC_EmitConvertToTarget, 2,
/*445*/         OPC_MorphNodeTo, TARGET_VAL(DSP::vloadr_32), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i32 453:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (vloadr_32:v4i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*454*/       /*Scope*/ 25, /*->480*/
/*455*/         OPC_CheckChild1Integer, 73|128,3/*457*/, 
/*458*/         OPC_RecordChild2, // #1 = $rb
/*459*/         OPC_RecordChild3, // #2 = $imm9
/*460*/         OPC_MoveChild, 3,
/*462*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*465*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*467*/         OPC_MoveParent,
/*468*/         OPC_EmitMergeInputChains1_0,
/*469*/         OPC_EmitConvertToTarget, 2,
/*471*/         OPC_MorphNodeTo, TARGET_VAL(DSP::vloadu_8), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v16i8 457:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (vloadu_8:v16i8 CPURegs:i32:$rb, (imm:i32):$imm9)
/*480*/       /*Scope*/ 25, /*->506*/
/*481*/         OPC_CheckChild1Integer, 71|128,3/*455*/, 
/*484*/         OPC_RecordChild2, // #1 = $rb
/*485*/         OPC_RecordChild3, // #2 = $imm9
/*486*/         OPC_MoveChild, 3,
/*488*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*491*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*493*/         OPC_MoveParent,
/*494*/         OPC_EmitMergeInputChains1_0,
/*495*/         OPC_EmitConvertToTarget, 2,
/*497*/         OPC_MorphNodeTo, TARGET_VAL(DSP::vloadu_16), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v8i16 455:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (vloadu_16:v8i16 CPURegs:i32:$rb, (imm:i32):$imm9)
/*506*/       /*Scope*/ 25, /*->532*/
/*507*/         OPC_CheckChild1Integer, 72|128,3/*456*/, 
/*510*/         OPC_RecordChild2, // #1 = $rb
/*511*/         OPC_RecordChild3, // #2 = $imm9
/*512*/         OPC_MoveChild, 3,
/*514*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*517*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*519*/         OPC_MoveParent,
/*520*/         OPC_EmitMergeInputChains1_0,
/*521*/         OPC_EmitConvertToTarget, 2,
/*523*/         OPC_MorphNodeTo, TARGET_VAL(DSP::vloadu_32), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i32 456:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (vloadu_32:v4i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*532*/       /*Scope*/ 25, /*->558*/
/*533*/         OPC_CheckChild1Integer, 76|128,3/*460*/, 
/*536*/         OPC_RecordChild2, // #1 = $rb
/*537*/         OPC_RecordChild3, // #2 = $imm9
/*538*/         OPC_MoveChild, 3,
/*540*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*543*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*545*/         OPC_MoveParent,
/*546*/         OPC_EmitMergeInputChains1_0,
/*547*/         OPC_EmitConvertToTarget, 2,
/*549*/         OPC_MorphNodeTo, TARGET_VAL(DSP::vloadur_8), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v16i8 460:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (vloadur_8:v16i8 CPURegs:i32:$rb, (imm:i32):$imm9)
/*558*/       /*Scope*/ 25, /*->584*/
/*559*/         OPC_CheckChild1Integer, 74|128,3/*458*/, 
/*562*/         OPC_RecordChild2, // #1 = $rb
/*563*/         OPC_RecordChild3, // #2 = $imm9
/*564*/         OPC_MoveChild, 3,
/*566*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*569*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*571*/         OPC_MoveParent,
/*572*/         OPC_EmitMergeInputChains1_0,
/*573*/         OPC_EmitConvertToTarget, 2,
/*575*/         OPC_MorphNodeTo, TARGET_VAL(DSP::vloadur_16), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v8i16 458:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (vloadur_16:v8i16 CPURegs:i32:$rb, (imm:i32):$imm9)
/*584*/       /*Scope*/ 25, /*->610*/
/*585*/         OPC_CheckChild1Integer, 75|128,3/*459*/, 
/*588*/         OPC_RecordChild2, // #1 = $rb
/*589*/         OPC_RecordChild3, // #2 = $imm9
/*590*/         OPC_MoveChild, 3,
/*592*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*595*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*597*/         OPC_MoveParent,
/*598*/         OPC_EmitMergeInputChains1_0,
/*599*/         OPC_EmitConvertToTarget, 2,
/*601*/         OPC_MorphNodeTo, TARGET_VAL(DSP::vloadur_32), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i32 459:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (vloadur_32:v4i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*610*/       /*Scope*/ 25, /*->636*/
/*611*/         OPC_CheckChild1Integer, 24|128,3/*408*/, 
/*614*/         OPC_RecordChild2, // #1 = $rb
/*615*/         OPC_RecordChild3, // #2 = $imm9
/*616*/         OPC_MoveChild, 3,
/*618*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*621*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*623*/         OPC_MoveParent,
/*624*/         OPC_EmitMergeInputChains1_0,
/*625*/         OPC_EmitConvertToTarget, 2,
/*627*/         OPC_MorphNodeTo, TARGET_VAL(DSP::storeu_10), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v16i8 408:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (storeu_10:v16i8 CPURegs:i32:$rb, (imm:i32):$imm9)
/*636*/       /*Scope*/ 25, /*->662*/
/*637*/         OPC_CheckChild1Integer, 26|128,3/*410*/, 
/*640*/         OPC_RecordChild2, // #1 = $rb
/*641*/         OPC_RecordChild3, // #2 = $imm9
/*642*/         OPC_MoveChild, 3,
/*644*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*647*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*649*/         OPC_MoveParent,
/*650*/         OPC_EmitMergeInputChains1_0,
/*651*/         OPC_EmitConvertToTarget, 2,
/*653*/         OPC_MorphNodeTo, TARGET_VAL(DSP::storeu_20), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v8i16 410:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (storeu_20:v8i16 CPURegs:i32:$rb, (imm:i32):$imm9)
/*662*/       /*Scope*/ 25, /*->688*/
/*663*/         OPC_CheckChild1Integer, 28|128,3/*412*/, 
/*666*/         OPC_RecordChild2, // #1 = $rb
/*667*/         OPC_RecordChild3, // #2 = $imm9
/*668*/         OPC_MoveChild, 3,
/*670*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*673*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*675*/         OPC_MoveParent,
/*676*/         OPC_EmitMergeInputChains1_0,
/*677*/         OPC_EmitConvertToTarget, 2,
/*679*/         OPC_MorphNodeTo, TARGET_VAL(DSP::storeu_40), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i32 412:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (storeu_40:v4i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*688*/       /*Scope*/ 25, /*->714*/
/*689*/         OPC_CheckChild1Integer, 101|128,3/*485*/, 
/*692*/         OPC_RecordChild2, // #1 = $rb
/*693*/         OPC_RecordChild3, // #2 = $imm9
/*694*/         OPC_MoveChild, 3,
/*696*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*699*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*701*/         OPC_MoveParent,
/*702*/         OPC_EmitMergeInputChains1_0,
/*703*/         OPC_EmitConvertToTarget, 2,
/*705*/         OPC_MorphNodeTo, TARGET_VAL(DSP::vstoreu_10), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v16i8 485:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (vstoreu_10:v16i8 CPURegs:i32:$rb, (imm:i32):$imm9)
/*714*/       /*Scope*/ 25, /*->740*/
/*715*/         OPC_CheckChild1Integer, 102|128,3/*486*/, 
/*718*/         OPC_RecordChild2, // #1 = $rb
/*719*/         OPC_RecordChild3, // #2 = $imm9
/*720*/         OPC_MoveChild, 3,
/*722*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*725*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*727*/         OPC_MoveParent,
/*728*/         OPC_EmitMergeInputChains1_0,
/*729*/         OPC_EmitConvertToTarget, 2,
/*731*/         OPC_MorphNodeTo, TARGET_VAL(DSP::vstoreu_20), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v8i16 486:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (vstoreu_20:v8i16 CPURegs:i32:$rb, (imm:i32):$imm9)
/*740*/       /*Scope*/ 25, /*->766*/
/*741*/         OPC_CheckChild1Integer, 103|128,3/*487*/, 
/*744*/         OPC_RecordChild2, // #1 = $rb
/*745*/         OPC_RecordChild3, // #2 = $imm9
/*746*/         OPC_MoveChild, 3,
/*748*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*751*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*753*/         OPC_MoveParent,
/*754*/         OPC_EmitMergeInputChains1_0,
/*755*/         OPC_EmitConvertToTarget, 2,
/*757*/         OPC_MorphNodeTo, TARGET_VAL(DSP::vstoreu_40), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i32 487:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (vstoreu_40:v4i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*766*/       /*Scope*/ 25, /*->792*/
/*767*/         OPC_CheckChild1Integer, 18|128,3/*402*/, 
/*770*/         OPC_RecordChild2, // #1 = $rb
/*771*/         OPC_RecordChild3, // #2 = $imm9
/*772*/         OPC_MoveChild, 3,
/*774*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*777*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*779*/         OPC_MoveParent,
/*780*/         OPC_EmitMergeInputChains1_0,
/*781*/         OPC_EmitConvertToTarget, 2,
/*783*/         OPC_MorphNodeTo, TARGET_VAL(DSP::loadvh), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i32 402:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (loadvh:v4i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*792*/       /*Scope*/ 25, /*->818*/
/*793*/         OPC_CheckChild1Integer, 19|128,3/*403*/, 
/*796*/         OPC_RecordChild2, // #1 = $rb
/*797*/         OPC_RecordChild3, // #2 = $imm9
/*798*/         OPC_MoveChild, 3,
/*800*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*803*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*805*/         OPC_MoveParent,
/*806*/         OPC_EmitMergeInputChains1_0,
/*807*/         OPC_EmitConvertToTarget, 2,
/*809*/         OPC_MorphNodeTo, TARGET_VAL(DSP::loadvl), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i32 403:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (loadvl:v4i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*818*/       /*Scope*/ 25, /*->844*/
/*819*/         OPC_CheckChild1Integer, 32|128,3/*416*/, 
/*822*/         OPC_RecordChild2, // #1 = $rb
/*823*/         OPC_RecordChild3, // #2 = $imm9
/*824*/         OPC_MoveChild, 3,
/*826*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*829*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*831*/         OPC_MoveParent,
/*832*/         OPC_EmitMergeInputChains1_0,
/*833*/         OPC_EmitConvertToTarget, 2,
/*835*/         OPC_MorphNodeTo, TARGET_VAL(DSP::storevh), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i32 416:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (storevh:v4i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*844*/       /*Scope*/ 25, /*->870*/
/*845*/         OPC_CheckChild1Integer, 33|128,3/*417*/, 
/*848*/         OPC_RecordChild2, // #1 = $rb
/*849*/         OPC_RecordChild3, // #2 = $imm9
/*850*/         OPC_MoveChild, 3,
/*852*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*855*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*857*/         OPC_MoveParent,
/*858*/         OPC_EmitMergeInputChains1_0,
/*859*/         OPC_EmitConvertToTarget, 2,
/*861*/         OPC_MorphNodeTo, TARGET_VAL(DSP::storevl), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i32 417:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (storevl:v4i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*870*/       /*Scope*/ 25, /*->896*/
/*871*/         OPC_CheckChild1Integer, 16|128,3/*400*/, 
/*874*/         OPC_RecordChild2, // #1 = $rb
/*875*/         OPC_RecordChild3, // #2 = $imm9
/*876*/         OPC_MoveChild, 3,
/*878*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*881*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*883*/         OPC_MoveParent,
/*884*/         OPC_EmitMergeInputChains1_0,
/*885*/         OPC_EmitConvertToTarget, 2,
/*887*/         OPC_MorphNodeTo, TARGET_VAL(DSP::loaduvh), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i32 400:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (loaduvh:v4i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*896*/       /*Scope*/ 25, /*->922*/
/*897*/         OPC_CheckChild1Integer, 17|128,3/*401*/, 
/*900*/         OPC_RecordChild2, // #1 = $rb
/*901*/         OPC_RecordChild3, // #2 = $imm9
/*902*/         OPC_MoveChild, 3,
/*904*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*907*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*909*/         OPC_MoveParent,
/*910*/         OPC_EmitMergeInputChains1_0,
/*911*/         OPC_EmitConvertToTarget, 2,
/*913*/         OPC_MorphNodeTo, TARGET_VAL(DSP::loaduvl), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i32 401:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (loaduvl:v4i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*922*/       /*Scope*/ 25, /*->948*/
/*923*/         OPC_CheckChild1Integer, 30|128,3/*414*/, 
/*926*/         OPC_RecordChild2, // #1 = $rb
/*927*/         OPC_RecordChild3, // #2 = $imm9
/*928*/         OPC_MoveChild, 3,
/*930*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*933*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*935*/         OPC_MoveParent,
/*936*/         OPC_EmitMergeInputChains1_0,
/*937*/         OPC_EmitConvertToTarget, 2,
/*939*/         OPC_MorphNodeTo, TARGET_VAL(DSP::storeuvh), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i32 414:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (storeuvh:v4i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*948*/       /*Scope*/ 25, /*->974*/
/*949*/         OPC_CheckChild1Integer, 31|128,3/*415*/, 
/*952*/         OPC_RecordChild2, // #1 = $rb
/*953*/         OPC_RecordChild3, // #2 = $imm9
/*954*/         OPC_MoveChild, 3,
/*956*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*959*/         OPC_CheckPredicate, 1, // Predicate_immSExt9
/*961*/         OPC_MoveParent,
/*962*/         OPC_EmitMergeInputChains1_0,
/*963*/         OPC_EmitConvertToTarget, 2,
/*965*/         OPC_MorphNodeTo, TARGET_VAL(DSP::storeuvl), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_w_chain:v4i32 415:iPTR, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (storeuvl:v4i32 CPURegs:i32:$rb, (imm:i32):$imm9)
/*974*/       /*Scope*/ 15, /*->990*/
/*975*/         OPC_CheckChild1Integer, 67|128,3/*451*/, 
/*978*/         OPC_RecordChild2, // #1 = $rb
/*979*/         OPC_RecordChild3, // #2 = $rc
/*980*/         OPC_EmitMergeInputChains1_0,
/*981*/         OPC_MorphNodeTo, TARGET_VAL(DSP::vloado_8), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v16i8 451:iPTR, CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 8
                // Dst: (vloado_8:v16i8 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*990*/       /*Scope*/ 15, /*->1006*/
/*991*/         OPC_CheckChild1Integer, 65|128,3/*449*/, 
/*994*/         OPC_RecordChild2, // #1 = $rb
/*995*/         OPC_RecordChild3, // #2 = $rc
/*996*/         OPC_EmitMergeInputChains1_0,
/*997*/         OPC_MorphNodeTo, TARGET_VAL(DSP::vloado_16), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v8i16 449:iPTR, CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 8
                // Dst: (vloado_16:v8i16 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*1006*/      /*Scope*/ 15, /*->1022*/
/*1007*/        OPC_CheckChild1Integer, 66|128,3/*450*/, 
/*1010*/        OPC_RecordChild2, // #1 = $rb
/*1011*/        OPC_RecordChild3, // #2 = $rc
/*1012*/        OPC_EmitMergeInputChains1_0,
/*1013*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vloado_32), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v4i32 450:iPTR, CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 8
                // Dst: (vloado_32:v4i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*1022*/      /*Scope*/ 15, /*->1038*/
/*1023*/        OPC_CheckChild1Integer, 98|128,3/*482*/, 
/*1026*/        OPC_RecordChild2, // #1 = $rb
/*1027*/        OPC_RecordChild3, // #2 = $rc
/*1028*/        OPC_EmitMergeInputChains1_0,
/*1029*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vstoreo_10), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v16i8 482:iPTR, CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 8
                // Dst: (vstoreo_10:v16i8 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*1038*/      /*Scope*/ 15, /*->1054*/
/*1039*/        OPC_CheckChild1Integer, 99|128,3/*483*/, 
/*1042*/        OPC_RecordChild2, // #1 = $rb
/*1043*/        OPC_RecordChild3, // #2 = $rc
/*1044*/        OPC_EmitMergeInputChains1_0,
/*1045*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vstoreo_20), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v8i16 483:iPTR, CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 8
                // Dst: (vstoreo_20:v8i16 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*1054*/      /*Scope*/ 15, /*->1070*/
/*1055*/        OPC_CheckChild1Integer, 100|128,3/*484*/, 
/*1058*/        OPC_RecordChild2, // #1 = $rb
/*1059*/        OPC_RecordChild3, // #2 = $rc
/*1060*/        OPC_EmitMergeInputChains1_0,
/*1061*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vstoreo_40), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_w_chain:v4i32 484:iPTR, CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 8
                // Dst: (vstoreo_40:v4i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*1070*/      0, /*End of Scope*/
/*1071*/    /*SwitchOpcode*/ 31|128,1/*159*/, TARGET_VAL(ISD::LOAD),// ->1234
/*1075*/      OPC_RecordMemRef,
/*1076*/      OPC_RecordNode, // #0 = 'ld' chained node
/*1077*/      OPC_RecordChild1, // #1 = $addr
/*1078*/      OPC_CheckPredicate, 2, // Predicate_unindexedload
/*1080*/      OPC_Scope, 19, /*->1101*/ // 6 children in Scope
/*1082*/        OPC_CheckPredicate, 3, // Predicate_load
/*1084*/        OPC_CheckPredicate, 4, // Predicate_load_a
/*1086*/        OPC_CheckType, MVT::i32,
/*1088*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1091*/        OPC_EmitMergeInputChains1_0,
/*1092*/        OPC_MorphNodeTo, TARGET_VAL(DSP::LD), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 13
                // Dst: (LD:i32 addr:i32:$addr)
/*1101*/      /*Scope*/ 19, /*->1121*/
/*1102*/        OPC_CheckPredicate, 5, // Predicate_sextload
/*1104*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1106*/        OPC_CheckType, MVT::i32,
/*1108*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1111*/        OPC_EmitMergeInputChains1_0,
/*1112*/        OPC_MorphNodeTo, TARGET_VAL(DSP::LDHS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LDHS:i32 addr:i32:$addr)
/*1121*/      /*Scope*/ 19, /*->1141*/
/*1122*/        OPC_CheckPredicate, 7, // Predicate_zextload
/*1124*/        OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*1126*/        OPC_CheckType, MVT::i32,
/*1128*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1131*/        OPC_EmitMergeInputChains1_0,
/*1132*/        OPC_MorphNodeTo, TARGET_VAL(DSP::LDHZ), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LDHZ:i32 addr:i32:$addr)
/*1141*/      /*Scope*/ 19, /*->1161*/
/*1142*/        OPC_CheckPredicate, 5, // Predicate_sextload
/*1144*/        OPC_CheckPredicate, 9, // Predicate_sextloadi8
/*1146*/        OPC_CheckType, MVT::i32,
/*1148*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1151*/        OPC_EmitMergeInputChains1_0,
/*1152*/        OPC_MorphNodeTo, TARGET_VAL(DSP::LDBS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
                // Dst: (LDBS:i32 addr:i32:$addr)
/*1161*/      /*Scope*/ 19, /*->1181*/
/*1162*/        OPC_CheckPredicate, 7, // Predicate_zextload
/*1164*/        OPC_CheckPredicate, 10, // Predicate_zextloadi8
/*1166*/        OPC_CheckType, MVT::i32,
/*1168*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1171*/        OPC_EmitMergeInputChains1_0,
/*1172*/        OPC_MorphNodeTo, TARGET_VAL(DSP::LDBZ), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LDBZ:i32 addr:i32:$addr)
/*1181*/      /*Scope*/ 51, /*->1233*/
/*1182*/        OPC_CheckPredicate, 3, // Predicate_load
/*1184*/        OPC_CheckPredicate, 4, // Predicate_load_a
/*1186*/        OPC_SwitchType /*3 cases */, 13, MVT::v4i32,// ->1202
/*1189*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1192*/          OPC_EmitMergeInputChains1_0,
/*1193*/          OPC_MorphNodeTo, TARGET_VAL(DSP::VLOAD32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:v4i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 13
                  // Dst: (VLOAD32:v4i32 addr:i32:$addr)
/*1202*/        /*SwitchType*/ 13, MVT::v8i16,// ->1217
/*1204*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1207*/          OPC_EmitMergeInputChains1_0,
/*1208*/          OPC_MorphNodeTo, TARGET_VAL(DSP::VLOAD16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:v8i16 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 13
                  // Dst: (VLOAD16:v8i16 addr:i32:$addr)
/*1217*/        /*SwitchType*/ 13, MVT::v16i8,// ->1232
/*1219*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*1222*/          OPC_EmitMergeInputChains1_0,
/*1223*/          OPC_MorphNodeTo, TARGET_VAL(DSP::VLOAD8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:v16i8 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_a>> - Complexity = 13
                  // Dst: (VLOAD8:v16i8 addr:i32:$addr)
/*1232*/        0, // EndSwitchType
/*1233*/      0, /*End of Scope*/
/*1234*/    /*SwitchOpcode*/ 8|128,1/*136*/, TARGET_VAL(ISD::STORE),// ->1374
/*1238*/      OPC_RecordMemRef,
/*1239*/      OPC_RecordNode, // #0 = 'st' chained node
/*1240*/      OPC_RecordChild1, // #1 = $ra
/*1241*/      OPC_Scope, 61, /*->1304*/ // 4 children in Scope
/*1243*/        OPC_CheckChild1Type, MVT::i32,
/*1245*/        OPC_RecordChild2, // #2 = $addr
/*1246*/        OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*1248*/        OPC_Scope, 17, /*->1267*/ // 3 children in Scope
/*1250*/          OPC_CheckPredicate, 12, // Predicate_truncstore
/*1252*/          OPC_CheckPredicate, 13, // Predicate_truncstorei16
/*1254*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*1257*/          OPC_EmitMergeInputChains1_0,
/*1258*/          OPC_MorphNodeTo, TARGET_VAL(DSP::STH), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st CPURegs:i32:$ra, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                  // Dst: (STH CPURegs:i32:$ra, addr:i32:$addr)
/*1267*/        /*Scope*/ 17, /*->1285*/
/*1268*/          OPC_CheckPredicate, 14, // Predicate_store
/*1270*/          OPC_CheckPredicate, 15, // Predicate_store_a
/*1272*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*1275*/          OPC_EmitMergeInputChains1_0,
/*1276*/          OPC_MorphNodeTo, TARGET_VAL(DSP::ST), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st CPURegs:i32:$ra, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 13
                  // Dst: (ST CPURegs:i32:$ra, addr:i32:$addr)
/*1285*/        /*Scope*/ 17, /*->1303*/
/*1286*/          OPC_CheckPredicate, 12, // Predicate_truncstore
/*1288*/          OPC_CheckPredicate, 13, // Predicate_truncstorei16
/*1290*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*1293*/          OPC_EmitMergeInputChains1_0,
/*1294*/          OPC_MorphNodeTo, TARGET_VAL(DSP::STH), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st CPURegs:i32:$src1, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                  // Dst: (STH CPURegs:i32:$src1, addr:i32:$addr)
/*1303*/        0, /*End of Scope*/
/*1304*/      /*Scope*/ 22, /*->1327*/
/*1305*/        OPC_CheckChild1Type, MVT::v4i32,
/*1307*/        OPC_RecordChild2, // #2 = $addr
/*1308*/        OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*1310*/        OPC_CheckPredicate, 14, // Predicate_store
/*1312*/        OPC_CheckPredicate, 15, // Predicate_store_a
/*1314*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*1317*/        OPC_EmitMergeInputChains1_0,
/*1318*/        OPC_MorphNodeTo, TARGET_VAL(DSP::VSTORE32), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st VPR4Out:v4i32:$ra, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 13
                // Dst: (VSTORE32 VPR4Out:v4i32:$ra, addr:i32:$addr)
/*1327*/      /*Scope*/ 22, /*->1350*/
/*1328*/        OPC_CheckChild1Type, MVT::v8i16,
/*1330*/        OPC_RecordChild2, // #2 = $addr
/*1331*/        OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*1333*/        OPC_CheckPredicate, 14, // Predicate_store
/*1335*/        OPC_CheckPredicate, 15, // Predicate_store_a
/*1337*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*1340*/        OPC_EmitMergeInputChains1_0,
/*1341*/        OPC_MorphNodeTo, TARGET_VAL(DSP::VSTORE16), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st VPR8Out:v8i16:$ra, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 13
                // Dst: (VSTORE16 VPR8Out:v8i16:$ra, addr:i32:$addr)
/*1350*/      /*Scope*/ 22, /*->1373*/
/*1351*/        OPC_CheckChild1Type, MVT::v16i8,
/*1353*/        OPC_RecordChild2, // #2 = $addr
/*1354*/        OPC_CheckPredicate, 11, // Predicate_unindexedstore
/*1356*/        OPC_CheckPredicate, 14, // Predicate_store
/*1358*/        OPC_CheckPredicate, 15, // Predicate_store_a
/*1360*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*1363*/        OPC_EmitMergeInputChains1_0,
/*1364*/        OPC_MorphNodeTo, TARGET_VAL(DSP::VSTORE8), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st VPR16Out:v16i8:$ra, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_a>> - Complexity = 13
                // Dst: (VSTORE8 VPR16Out:v16i8:$ra, addr:i32:$addr)
/*1373*/      0, /*End of Scope*/
/*1374*/    /*SwitchOpcode*/ 84, TARGET_VAL(ISD::INTRINSIC_VOID),// ->1461
/*1377*/      OPC_RecordNode, // #0 = 'intrinsic_void' chained node
/*1378*/      OPC_Scope, 26, /*->1406*/ // 3 children in Scope
/*1380*/        OPC_CheckChild1Integer, 29|128,3/*413*/, 
/*1383*/        OPC_RecordChild2, // #1 = $ra
/*1384*/        OPC_RecordChild3, // #2 = $rb
/*1385*/        OPC_RecordChild4, // #3 = $imm9
/*1386*/        OPC_MoveChild, 4,
/*1388*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1391*/        OPC_CheckPredicate, 1, // Predicate_immSExt9
/*1393*/        OPC_MoveParent,
/*1394*/        OPC_EmitMergeInputChains1_0,
/*1395*/        OPC_EmitConvertToTarget, 3,
/*1397*/        OPC_MorphNodeTo, TARGET_VAL(DSP::storeu_8), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 2, 4, 
                // Src: (intrinsic_void 413:iPTR, CPURegs:i32:$ra, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (storeu_8 CPURegs:i32:$ra, CPURegs:i32:$rb, (imm:i32):$imm9)
/*1406*/      /*Scope*/ 26, /*->1433*/
/*1407*/        OPC_CheckChild1Integer, 25|128,3/*409*/, 
/*1410*/        OPC_RecordChild2, // #1 = $ra
/*1411*/        OPC_RecordChild3, // #2 = $rb
/*1412*/        OPC_RecordChild4, // #3 = $imm9
/*1413*/        OPC_MoveChild, 4,
/*1415*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1418*/        OPC_CheckPredicate, 1, // Predicate_immSExt9
/*1420*/        OPC_MoveParent,
/*1421*/        OPC_EmitMergeInputChains1_0,
/*1422*/        OPC_EmitConvertToTarget, 3,
/*1424*/        OPC_MorphNodeTo, TARGET_VAL(DSP::storeu_16), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 2, 4, 
                // Src: (intrinsic_void 409:iPTR, CPURegs:i32:$ra, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (storeu_16 CPURegs:i32:$ra, CPURegs:i32:$rb, (imm:i32):$imm9)
/*1433*/      /*Scope*/ 26, /*->1460*/
/*1434*/        OPC_CheckChild1Integer, 27|128,3/*411*/, 
/*1437*/        OPC_RecordChild2, // #1 = $ra
/*1438*/        OPC_RecordChild3, // #2 = $rb
/*1439*/        OPC_RecordChild4, // #3 = $imm9
/*1440*/        OPC_MoveChild, 4,
/*1442*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1445*/        OPC_CheckPredicate, 1, // Predicate_immSExt9
/*1447*/        OPC_MoveParent,
/*1448*/        OPC_EmitMergeInputChains1_0,
/*1449*/        OPC_EmitConvertToTarget, 3,
/*1451*/        OPC_MorphNodeTo, TARGET_VAL(DSP::storeu_32), 0|OPFL_Chain,
                    0/*#VTs*/, 3/*#Ops*/, 1, 2, 4, 
                // Src: (intrinsic_void 411:iPTR, CPURegs:i32:$ra, CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt9>>:$imm9) - Complexity = 12
                // Dst: (storeu_32 CPURegs:i32:$ra, CPURegs:i32:$rb, (imm:i32):$imm9)
/*1460*/      0, /*End of Scope*/
/*1461*/    /*SwitchOpcode*/ 110|128,1/*238*/, TARGET_VAL(ISD::BRCOND),// ->1703
/*1465*/      OPC_RecordNode, // #0 = 'brcond' chained node
/*1466*/      OPC_Scope, 85|128,1/*213*/, /*->1682*/ // 2 children in Scope
/*1469*/        OPC_MoveChild, 1,
/*1471*/        OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*1474*/        OPC_RecordChild0, // #1 = $lhs
/*1475*/        OPC_CheckChild0Type, MVT::i32,
/*1477*/        OPC_RecordChild1, // #2 = $rhs
/*1478*/        OPC_MoveChild, 1,
/*1480*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1483*/        OPC_Scope, 81, /*->1566*/ // 3 children in Scope
/*1485*/          OPC_CheckPredicate, 16, // Predicate_immSExt16Plus1
/*1487*/          OPC_MoveParent,
/*1488*/          OPC_MoveChild, 2,
/*1490*/          OPC_Scope, 36, /*->1528*/ // 2 children in Scope
/*1492*/            OPC_CheckCondCode, ISD::SETGT,
/*1494*/            OPC_MoveParent,
/*1495*/            OPC_CheckType, MVT::i32,
/*1497*/            OPC_MoveParent,
/*1498*/            OPC_RecordChild2, // #3 = $dst
/*1499*/            OPC_MoveChild, 2,
/*1501*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1504*/            OPC_MoveParent,
/*1505*/            OPC_EmitMergeInputChains1_0,
/*1506*/            OPC_EmitConvertToTarget, 2,
/*1508*/            OPC_EmitNodeXForm, 0, 4, // Plus1
/*1511*/            OPC_EmitNode, TARGET_VAL(DSP::LTI), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*1520*/            OPC_MorphNodeTo, TARGET_VAL(DSP::JNC), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 6, 3, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETGT:Other), (bb:Other):$dst) - Complexity = 10
                    // Dst: (JNC (LTI:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), (bb:Other):$dst)
/*1528*/          /*Scope*/ 36, /*->1565*/
/*1529*/            OPC_CheckCondCode, ISD::SETUGT,
/*1531*/            OPC_MoveParent,
/*1532*/            OPC_CheckType, MVT::i32,
/*1534*/            OPC_MoveParent,
/*1535*/            OPC_RecordChild2, // #3 = $dst
/*1536*/            OPC_MoveChild, 2,
/*1538*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1541*/            OPC_MoveParent,
/*1542*/            OPC_EmitMergeInputChains1_0,
/*1543*/            OPC_EmitConvertToTarget, 2,
/*1545*/            OPC_EmitNodeXForm, 0, 4, // Plus1
/*1548*/            OPC_EmitNode, TARGET_VAL(DSP::LTI), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*1557*/            OPC_MorphNodeTo, TARGET_VAL(DSP::JNC), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 6, 3, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16Plus1>>:$rhs, SETUGT:Other), (bb:Other):$dst) - Complexity = 10
                    // Dst: (JNC (LTI:i32 CPURegs:i32:$lhs, (Plus1:i32 (imm:i32):$rhs)), (bb:Other):$dst)
/*1565*/          0, /*End of Scope*/
/*1566*/        /*Scope*/ 75, /*->1642*/
/*1567*/          OPC_CheckPredicate, 17, // Predicate_immSExt16
/*1569*/          OPC_MoveParent,
/*1570*/          OPC_MoveChild, 2,
/*1572*/          OPC_Scope, 33, /*->1607*/ // 2 children in Scope
/*1574*/            OPC_CheckCondCode, ISD::SETEQ,
/*1576*/            OPC_MoveParent,
/*1577*/            OPC_CheckType, MVT::i32,
/*1579*/            OPC_MoveParent,
/*1580*/            OPC_RecordChild2, // #3 = $dst
/*1581*/            OPC_MoveChild, 2,
/*1583*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1586*/            OPC_MoveParent,
/*1587*/            OPC_EmitMergeInputChains1_0,
/*1588*/            OPC_EmitConvertToTarget, 2,
/*1590*/            OPC_EmitNode, TARGET_VAL(DSP::EQI), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*1599*/            OPC_MorphNodeTo, TARGET_VAL(DSP::JC), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 5, 3, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETEQ:Other), (bb:Other):$dst) - Complexity = 10
                    // Dst: (JC (EQI:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16), (bb:Other):$dst)
/*1607*/          /*Scope*/ 33, /*->1641*/
/*1608*/            OPC_CheckCondCode, ISD::SETNE,
/*1610*/            OPC_MoveParent,
/*1611*/            OPC_CheckType, MVT::i32,
/*1613*/            OPC_MoveParent,
/*1614*/            OPC_RecordChild2, // #3 = $dst
/*1615*/            OPC_MoveChild, 2,
/*1617*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1620*/            OPC_MoveParent,
/*1621*/            OPC_EmitMergeInputChains1_0,
/*1622*/            OPC_EmitConvertToTarget, 2,
/*1624*/            OPC_EmitNode, TARGET_VAL(DSP::NEQI), 0|OPFL_Chain,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*1633*/            OPC_MorphNodeTo, TARGET_VAL(DSP::JC), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 5, 3, 
                    // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16, SETNE:Other), (bb:Other):$dst) - Complexity = 10
                    // Dst: (JC (NEQI:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$imm16), (bb:Other):$dst)
/*1641*/          0, /*End of Scope*/
/*1642*/        /*Scope*/ 38, /*->1681*/
/*1643*/          OPC_CheckPredicate, 1, // Predicate_immSExt9
/*1645*/          OPC_MoveParent,
/*1646*/          OPC_MoveChild, 2,
/*1648*/          OPC_CheckCondCode, ISD::SETLE,
/*1650*/          OPC_MoveParent,
/*1651*/          OPC_CheckType, MVT::i32,
/*1653*/          OPC_MoveParent,
/*1654*/          OPC_RecordChild2, // #3 = $dst
/*1655*/          OPC_MoveChild, 2,
/*1657*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1660*/          OPC_MoveParent,
/*1661*/          OPC_EmitMergeInputChains1_0,
/*1662*/          OPC_EmitConvertToTarget, 2,
/*1664*/          OPC_EmitNode, TARGET_VAL(DSP::LEI), 0|OPFL_Chain,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5
/*1673*/          OPC_MorphNodeTo, TARGET_VAL(DSP::JC), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 5, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt9>>:$imm9, SETLE:Other), (bb:Other):$dst) - Complexity = 10
                  // Dst: (JC (LEI:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt9>>:$imm9), (bb:Other):$dst)
/*1681*/        0, /*End of Scope*/
/*1682*/      /*Scope*/ 19, /*->1702*/
/*1683*/        OPC_RecordChild1, // #1 = $cond
/*1684*/        OPC_CheckChild1Type, MVT::i32,
/*1686*/        OPC_RecordChild2, // #2 = $dst
/*1687*/        OPC_MoveChild, 2,
/*1689*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1692*/        OPC_MoveParent,
/*1693*/        OPC_EmitMergeInputChains1_0,
/*1694*/        OPC_MorphNodeTo, TARGET_VAL(DSP::JC), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (brcond CPURegs:i32:$cond, (bb:Other):$dst) - Complexity = 3
                // Dst: (JC CPURegs:i32:$cond, (bb:Other):$dst)
/*1702*/      0, /*End of Scope*/
/*1703*/    /*SwitchOpcode*/ 15, TARGET_VAL(ISD::FrameIndex),// ->1721
/*1706*/      OPC_RecordNode, // #0 = $addr
/*1707*/      OPC_CheckType, MVT::i32,
/*1709*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddr:$addr #1 #2
/*1712*/      OPC_MorphNodeTo, TARGET_VAL(DSP::LEA), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: addr:i32:$addr - Complexity = 9
              // Dst: (LEA:i32 addr:i32:$addr)
/*1721*/    /*SwitchOpcode*/ 75|128,1/*203*/, TARGET_VAL(ISD::ADD),// ->1928
/*1725*/      OPC_Scope, 61, /*->1788*/ // 3 children in Scope
/*1727*/        OPC_RecordChild0, // #0 = $hi
/*1728*/        OPC_MoveChild, 1,
/*1730*/        OPC_SwitchOpcode /*2 cases */, 33, TARGET_VAL(DSPISD::Lo),// ->1767
/*1734*/          OPC_RecordChild0, // #1 = $lo
/*1735*/          OPC_MoveChild, 0,
/*1737*/          OPC_SwitchOpcode /*2 cases */, 11, TARGET_VAL(ISD::TargetGlobalAddress),// ->1752
/*1741*/            OPC_MoveParent,
/*1742*/            OPC_MoveParent,
/*1743*/            OPC_MorphNodeTo, TARGET_VAL(DSP::MovIGL), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (DSPLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                    // Dst: (MovIGL:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
/*1752*/          /*SwitchOpcode*/ 11, TARGET_VAL(ISD::TargetConstantPool),// ->1766
/*1755*/            OPC_MoveParent,
/*1756*/            OPC_MoveParent,
/*1757*/            OPC_MorphNodeTo, TARGET_VAL(DSP::MovIGL), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 CPURegs:i32:$hi, (DSPLo:i32 (tconstpool:i32):$lo)) - Complexity = 9
                    // Dst: (MovIGL:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
/*1766*/          0, // EndSwitchOpcode
/*1767*/        /*SwitchOpcode*/ 17, TARGET_VAL(DSPISD::GPRel),// ->1787
/*1770*/          OPC_RecordChild0, // #1 = $in
/*1771*/          OPC_MoveChild, 0,
/*1773*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*1776*/          OPC_MoveParent,
/*1777*/          OPC_MoveParent,
/*1778*/          OPC_MorphNodeTo, TARGET_VAL(DSP::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (DSPGPRel:i32 (tglobaladdr:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
/*1787*/        0, // EndSwitchOpcode
/*1788*/      /*Scope*/ 63, /*->1852*/
/*1789*/        OPC_MoveChild, 0,
/*1791*/        OPC_SwitchOpcode /*2 cases */, 35, TARGET_VAL(DSPISD::Lo),// ->1830
/*1795*/          OPC_RecordChild0, // #0 = $lo
/*1796*/          OPC_MoveChild, 0,
/*1798*/          OPC_SwitchOpcode /*2 cases */, 12, TARGET_VAL(ISD::TargetGlobalAddress),// ->1814
/*1802*/            OPC_MoveParent,
/*1803*/            OPC_MoveParent,
/*1804*/            OPC_RecordChild1, // #1 = $hi
/*1805*/            OPC_MorphNodeTo, TARGET_VAL(DSP::MovIGL), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (DSPLo:i32 (tglobaladdr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (MovIGL:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
/*1814*/          /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TargetConstantPool),// ->1829
/*1817*/            OPC_MoveParent,
/*1818*/            OPC_MoveParent,
/*1819*/            OPC_RecordChild1, // #1 = $hi
/*1820*/            OPC_MorphNodeTo, TARGET_VAL(DSP::MovIGL), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (DSPLo:i32 (tconstpool:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                    // Dst: (MovIGL:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
/*1829*/          0, // EndSwitchOpcode
/*1830*/        /*SwitchOpcode*/ 18, TARGET_VAL(DSPISD::GPRel),// ->1851
/*1833*/          OPC_RecordChild0, // #0 = $in
/*1834*/          OPC_MoveChild, 0,
/*1836*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*1839*/          OPC_MoveParent,
/*1840*/          OPC_MoveParent,
/*1841*/          OPC_RecordChild1, // #1 = $gp
/*1842*/          OPC_MorphNodeTo, TARGET_VAL(DSP::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (DSPGPRel:i32 (tglobaladdr:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
/*1851*/        0, // EndSwitchOpcode
/*1852*/      /*Scope*/ 74, /*->1927*/
/*1853*/        OPC_RecordChild0, // #0 = $rb
/*1854*/        OPC_RecordChild1, // #1 = $imm11
/*1855*/        OPC_Scope, 21, /*->1878*/ // 5 children in Scope
/*1857*/          OPC_MoveChild, 1,
/*1859*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1862*/          OPC_CheckPredicate, 18, // Predicate_immSExt11
/*1864*/          OPC_MoveParent,
/*1865*/          OPC_CheckType, MVT::i32,
/*1867*/          OPC_EmitConvertToTarget, 1,
/*1869*/          OPC_MorphNodeTo, TARGET_VAL(DSP::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 CPURegs:i32:$rb, (imm:i32)<<P:Predicate_immSExt11>>:$imm11) - Complexity = 7
                  // Dst: (ADDiu:i32 CPURegs:i32:$rb, (imm:i32):$imm11)
/*1878*/        /*Scope*/ 11, /*->1890*/
/*1879*/          OPC_CheckType, MVT::i32,
/*1881*/          OPC_MorphNodeTo, TARGET_VAL(DSP::ADDu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 3
                  // Dst: (ADDu:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*1890*/        /*Scope*/ 11, /*->1902*/
/*1891*/          OPC_CheckType, MVT::v4i32,
/*1893*/          OPC_MorphNodeTo, TARGET_VAL(DSP::VADD32), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 3
                  // Dst: (VADD32:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*1902*/        /*Scope*/ 11, /*->1914*/
/*1903*/          OPC_CheckType, MVT::v8i16,
/*1905*/          OPC_MorphNodeTo, TARGET_VAL(DSP::VADD16), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 3
                  // Dst: (VADD16:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*1914*/        /*Scope*/ 11, /*->1926*/
/*1915*/          OPC_CheckType, MVT::v16i8,
/*1917*/          OPC_MorphNodeTo, TARGET_VAL(DSP::VADD8), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (add:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 3
                  // Dst: (VADD8:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*1926*/        0, /*End of Scope*/
/*1927*/      0, /*End of Scope*/
/*1928*/    /*SwitchOpcode*/ 26, TARGET_VAL(ISD::CALLSEQ_END),// ->1957
/*1931*/      OPC_RecordNode, // #0 = 'callseq_end' chained node
/*1932*/      OPC_CaptureGlueInput,
/*1933*/      OPC_RecordChild1, // #1 = $amt1
/*1934*/      OPC_MoveChild, 1,
/*1936*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*1939*/      OPC_MoveParent,
/*1940*/      OPC_RecordChild2, // #2 = $amt2
/*1941*/      OPC_MoveChild, 2,
/*1943*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*1946*/      OPC_MoveParent,
/*1947*/      OPC_EmitMergeInputChains1_0,
/*1948*/      OPC_MorphNodeTo, TARGET_VAL(DSP::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
/*1957*/    /*SwitchOpcode*/ 83, TARGET_VAL(ISD::EXTRACT_VECTOR_ELT),// ->2043
/*1960*/      OPC_RecordChild0, // #0 = $rb
/*1961*/      OPC_Scope, 23, /*->1986*/ // 3 children in Scope
/*1963*/        OPC_RecordChild1, // #1 = $imm
/*1964*/        OPC_MoveChild, 1,
/*1966*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1969*/        OPC_CheckPredicate, 19, // Predicate_immZExt16
/*1971*/        OPC_MoveParent,
/*1972*/        OPC_EmitConvertToTarget, 1,
/*1974*/        OPC_EmitNodeXForm, 1, 2, // LO16
/*1977*/        OPC_MorphNodeTo, TARGET_VAL(DSP::MovV2G40), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (extractelt:i32 VPR4Out:v4i32:$rb, (imm:iPTR)<<P:Predicate_immZExt16>><<X:LO16>>:$imm) - Complexity = 7
                // Dst: (MovV2G40:i32 VPR4Out:v4i32:$rb, (LO16:i32 (imm:iPTR):$imm))
/*1986*/      /*Scope*/ 27, /*->2014*/
/*1987*/        OPC_CheckChild0Type, MVT::v8i16,
/*1989*/        OPC_RecordChild1, // #1 = $imm
/*1990*/        OPC_MoveChild, 1,
/*1992*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1995*/        OPC_CheckPredicate, 19, // Predicate_immZExt16
/*1997*/        OPC_MoveParent,
/*1998*/        OPC_CheckType, MVT::i32,
/*2000*/        OPC_EmitConvertToTarget, 1,
/*2002*/        OPC_EmitNodeXForm, 1, 2, // LO16
/*2005*/        OPC_MorphNodeTo, TARGET_VAL(DSP::MovV2G20), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (vector_extract:i32 VPR8Out:v8i16:$rb, (imm:iPTR)<<P:Predicate_immZExt16>><<X:LO16>>:$imm) - Complexity = 7
                // Dst: (MovV2G20:i32 VPR8Out:v8i16:$rb, (LO16:i32 (imm:iPTR):$imm))
/*2014*/      /*Scope*/ 27, /*->2042*/
/*2015*/        OPC_CheckChild0Type, MVT::v16i8,
/*2017*/        OPC_RecordChild1, // #1 = $imm
/*2018*/        OPC_MoveChild, 1,
/*2020*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2023*/        OPC_CheckPredicate, 19, // Predicate_immZExt16
/*2025*/        OPC_MoveParent,
/*2026*/        OPC_CheckType, MVT::i32,
/*2028*/        OPC_EmitConvertToTarget, 1,
/*2030*/        OPC_EmitNodeXForm, 1, 2, // LO16
/*2033*/        OPC_MorphNodeTo, TARGET_VAL(DSP::MovV2G10), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (vector_extract:i32 VPR16Out:v16i8:$rb, (imm:iPTR)<<P:Predicate_immZExt16>><<X:LO16>>:$imm) - Complexity = 7
                // Dst: (MovV2G10:i32 VPR16Out:v16i8:$rb, (LO16:i32 (imm:iPTR):$imm))
/*2042*/      0, /*End of Scope*/
/*2043*/    /*SwitchOpcode*/ 61, TARGET_VAL(DSPISD::JmpLink),// ->2107
/*2046*/      OPC_RecordNode, // #0 = 'DSPJmpLink' chained node
/*2047*/      OPC_CaptureGlueInput,
/*2048*/      OPC_RecordChild1, // #1 = $target
/*2049*/      OPC_Scope, 44, /*->2095*/ // 2 children in Scope
/*2051*/        OPC_MoveChild, 1,
/*2053*/        OPC_SwitchOpcode /*3 cases */, 11, TARGET_VAL(ISD::Constant),// ->2068
/*2057*/          OPC_MoveParent,
/*2058*/          OPC_EmitMergeInputChains1_0,
/*2059*/          OPC_EmitConvertToTarget, 1,
/*2061*/          OPC_MorphNodeTo, TARGET_VAL(DSP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 2, 
                  // Src: (DSPJmpLink (imm:iPTR):$target) - Complexity = 6
                  // Dst: (CALL (imm:iPTR):$target)
/*2068*/        /*SwitchOpcode*/ 11, TARGET_VAL(ISD::TargetGlobalAddress),// ->2082
/*2071*/          OPC_CheckType, MVT::i32,
/*2073*/          OPC_MoveParent,
/*2074*/          OPC_EmitMergeInputChains1_0,
/*2075*/          OPC_MorphNodeTo, TARGET_VAL(DSP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (DSPJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                  // Dst: (CALL (tglobaladdr:i32):$dst)
/*2082*/        /*SwitchOpcode*/ 9, TARGET_VAL(ISD::TargetExternalSymbol),// ->2094
/*2085*/          OPC_MoveParent,
/*2086*/          OPC_EmitMergeInputChains1_0,
/*2087*/          OPC_MorphNodeTo, TARGET_VAL(DSP::CALL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      0/*#VTs*/, 1/*#Ops*/, 1, 
                  // Src: (DSPJmpLink (texternalsym:iPTR):$dst) - Complexity = 6
                  // Dst: (CALL (texternalsym:iPTR):$dst)
/*2094*/        0, // EndSwitchOpcode
/*2095*/      /*Scope*/ 10, /*->2106*/
/*2096*/        OPC_CheckChild1Type, MVT::i32,
/*2098*/        OPC_EmitMergeInputChains1_0,
/*2099*/        OPC_MorphNodeTo, TARGET_VAL(DSP::CALLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (DSPJmpLink CPURegs:i32:$rs) - Complexity = 3
                // Dst: (CALLR CPURegs:i32:$rs)
/*2106*/      0, /*End of Scope*/
/*2107*/    /*SwitchOpcode*/ 41, TARGET_VAL(DSPISD::Hi),// ->2151
/*2110*/      OPC_RecordChild0, // #0 = $in
/*2111*/      OPC_MoveChild, 0,
/*2113*/      OPC_SwitchOpcode /*2 cases */, 15, TARGET_VAL(ISD::TargetGlobalAddress),// ->2132
/*2117*/        OPC_MoveParent,
/*2118*/        OPC_CheckType, MVT::i32,
/*2120*/        OPC_EmitRegister, MVT::i32, DSP::ZERO,
/*2123*/        OPC_MorphNodeTo, TARGET_VAL(DSP::MovIGH), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (DSPHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
                // Dst: (MovIGH:i32 ZERO:i32, (tglobaladdr:i32):$in)
/*2132*/      /*SwitchOpcode*/ 15, TARGET_VAL(ISD::TargetConstantPool),// ->2150
/*2135*/        OPC_MoveParent,
/*2136*/        OPC_CheckType, MVT::i32,
/*2138*/        OPC_EmitRegister, MVT::i32, DSP::ZERO,
/*2141*/        OPC_MorphNodeTo, TARGET_VAL(DSP::MovIGH), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (DSPHi:i32 (tconstpool:i32):$in) - Complexity = 6
                // Dst: (MovIGH:i32 ZERO:i32, (tconstpool:i32):$in)
/*2150*/      0, // EndSwitchOpcode
/*2151*/    /*SwitchOpcode*/ 17, TARGET_VAL(ISD::CALLSEQ_START),// ->2171
/*2154*/      OPC_RecordNode, // #0 = 'callseq_start' chained node
/*2155*/      OPC_RecordChild1, // #1 = $amt
/*2156*/      OPC_MoveChild, 1,
/*2158*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2161*/      OPC_MoveParent,
/*2162*/      OPC_EmitMergeInputChains1_0,
/*2163*/      OPC_MorphNodeTo, TARGET_VAL(DSP::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
              // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
/*2171*/    /*SwitchOpcode*/ 19, TARGET_VAL(ISD::Constant),// ->2193
/*2174*/      OPC_RecordNode, // #0 = $in
/*2175*/      OPC_CheckPredicate, 20, // Predicate_immSExt32
/*2177*/      OPC_CheckType, MVT::i32,
/*2179*/      OPC_EmitRegister, MVT::i32, DSP::ZERO,
/*2182*/      OPC_EmitConvertToTarget, 0,
/*2184*/      OPC_MorphNodeTo, TARGET_VAL(DSP::MovGR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immSExt32>>:$in - Complexity = 4
              // Dst: (MovGR:i32 ZERO:i32, (imm:i32):$in)
/*2193*/    /*SwitchOpcode*/ 9, TARGET_VAL(DSPISD::RET),// ->2205
/*2196*/      OPC_RecordNode, // #0 = 'DSPRet' chained node
/*2197*/      OPC_CaptureGlueInput,
/*2198*/      OPC_EmitMergeInputChains1_0,
/*2199*/      OPC_MorphNodeTo, TARGET_VAL(DSP::RetLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (DSPRet) - Complexity = 3
              // Dst: (RetLR)
/*2205*/    /*SwitchOpcode*/ 12, TARGET_VAL(ISD::BRIND),// ->2220
/*2208*/      OPC_RecordNode, // #0 = 'brind' chained node
/*2209*/      OPC_RecordChild1, // #1 = $ra
/*2210*/      OPC_CheckChild1Type, MVT::i32,
/*2212*/      OPC_EmitMergeInputChains1_0,
/*2213*/      OPC_MorphNodeTo, TARGET_VAL(DSP::Ret), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind CPURegs:i32:$ra) - Complexity = 3
              // Dst: (Ret CPURegs:i32:$ra)
/*2220*/    /*SwitchOpcode*/ 16, TARGET_VAL(ISD::BR),// ->2239
/*2223*/      OPC_RecordNode, // #0 = 'br' chained node
/*2224*/      OPC_RecordChild1, // #1 = $imm21
/*2225*/      OPC_MoveChild, 1,
/*2227*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2230*/      OPC_MoveParent,
/*2231*/      OPC_EmitMergeInputChains1_0,
/*2232*/      OPC_MorphNodeTo, TARGET_VAL(DSP::Jmp), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$imm21) - Complexity = 3
              // Dst: (Jmp (bb:Other):$imm21)
/*2239*/    /*SwitchOpcode*/ 48, TARGET_VAL(ISD::SUB),// ->2290
/*2242*/      OPC_RecordChild0, // #0 = $rb
/*2243*/      OPC_RecordChild1, // #1 = $rc
/*2244*/      OPC_SwitchType /*4 cases */, 9, MVT::i32,// ->2256
/*2247*/        OPC_MorphNodeTo, TARGET_VAL(DSP::SUBu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 3
                // Dst: (SUBu:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2256*/      /*SwitchType*/ 9, MVT::v4i32,// ->2267
/*2258*/        OPC_MorphNodeTo, TARGET_VAL(DSP::VSUB32), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 3
                // Dst: (VSUB32:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*2267*/      /*SwitchType*/ 9, MVT::v8i16,// ->2278
/*2269*/        OPC_MorphNodeTo, TARGET_VAL(DSP::VSUB16), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (sub:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 3
                // Dst: (VSUB16:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*2278*/      /*SwitchType*/ 9, MVT::v16i8,// ->2289
/*2280*/        OPC_MorphNodeTo, TARGET_VAL(DSP::VSUB8), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (sub:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 3
                // Dst: (VSUB8:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*2289*/      0, // EndSwitchType
/*2290*/    /*SwitchOpcode*/ 13, TARGET_VAL(ISD::MUL),// ->2306
/*2293*/      OPC_RecordChild0, // #0 = $rb
/*2294*/      OPC_RecordChild1, // #1 = $rc
/*2295*/      OPC_CheckType, MVT::i32,
/*2297*/      OPC_MorphNodeTo, TARGET_VAL(DSP::MUL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 3
              // Dst: (MUL:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2306*/    /*SwitchOpcode*/ 13, TARGET_VAL(ISD::OR),// ->2322
/*2309*/      OPC_RecordChild0, // #0 = $rb
/*2310*/      OPC_RecordChild1, // #1 = $rc
/*2311*/      OPC_CheckType, MVT::i32,
/*2313*/      OPC_MorphNodeTo, TARGET_VAL(DSP::ORu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (or:i32 CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 3
              // Dst: (ORu:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2322*/    /*SwitchOpcode*/ 15, TARGET_VAL(ISD::SHL),// ->2340
/*2325*/      OPC_RecordChild0, // #0 = $rb
/*2326*/      OPC_RecordChild1, // #1 = $rc
/*2327*/      OPC_CheckChild1Type, MVT::i32,
/*2329*/      OPC_CheckType, MVT::i32,
/*2331*/      OPC_MorphNodeTo, TARGET_VAL(DSP::SHL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i32 CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 3
              // Dst: (SHL:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2340*/    /*SwitchOpcode*/ 15, TARGET_VAL(ISD::SRA),// ->2358
/*2343*/      OPC_RecordChild0, // #0 = $rb
/*2344*/      OPC_RecordChild1, // #1 = $rc
/*2345*/      OPC_CheckChild1Type, MVT::i32,
/*2347*/      OPC_CheckType, MVT::i32,
/*2349*/      OPC_MorphNodeTo, TARGET_VAL(DSP::SRA), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:i32 CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 3
              // Dst: (SRA:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2358*/    /*SwitchOpcode*/ 15, TARGET_VAL(ISD::SRL),// ->2376
/*2361*/      OPC_RecordChild0, // #0 = $rb
/*2362*/      OPC_RecordChild1, // #1 = $rc
/*2363*/      OPC_CheckChild1Type, MVT::i32,
/*2365*/      OPC_CheckType, MVT::i32,
/*2367*/      OPC_MorphNodeTo, TARGET_VAL(DSP::SRL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i32 CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 3
              // Dst: (SRL:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2376*/    /*SwitchOpcode*/ 13, TARGET_VAL(ISD::AND),// ->2392
/*2379*/      OPC_RecordChild0, // #0 = $rb
/*2380*/      OPC_RecordChild1, // #1 = $rc
/*2381*/      OPC_CheckType, MVT::i32,
/*2383*/      OPC_MorphNodeTo, TARGET_VAL(DSP::AND), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:i32 CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 3
              // Dst: (AND:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2392*/    /*SwitchOpcode*/ 13, TARGET_VAL(ISD::XOR),// ->2408
/*2395*/      OPC_RecordChild0, // #0 = $rb
/*2396*/      OPC_RecordChild1, // #1 = $rc
/*2397*/      OPC_CheckType, MVT::i32,
/*2399*/      OPC_MorphNodeTo, TARGET_VAL(DSP::XORu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 CPURegs:i32:$rb, CPURegs:i32:$rc) - Complexity = 3
              // Dst: (XORu:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2408*/    /*SwitchOpcode*/ 52|128,2/*308*/, TARGET_VAL(ISD::SETCC),// ->2720
/*2412*/      OPC_RecordChild0, // #0 = $rb
/*2413*/      OPC_CheckChild0Type, MVT::i32,
/*2415*/      OPC_RecordChild1, // #1 = $rc
/*2416*/      OPC_MoveChild, 2,
/*2418*/      OPC_Scope, 14, /*->2434*/ // 20 children in Scope
/*2420*/        OPC_CheckCondCode, ISD::SETEQ,
/*2422*/        OPC_MoveParent,
/*2423*/        OPC_CheckType, MVT::i32,
/*2425*/        OPC_MorphNodeTo, TARGET_VAL(DSP::EQ), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$rb, CPURegs:i32:$rc, SETEQ:Other) - Complexity = 3
                // Dst: (EQ:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2434*/      /*Scope*/ 14, /*->2449*/
/*2435*/        OPC_CheckCondCode, ISD::SETNE,
/*2437*/        OPC_MoveParent,
/*2438*/        OPC_CheckType, MVT::i32,
/*2440*/        OPC_MorphNodeTo, TARGET_VAL(DSP::NEQ), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$rb, CPURegs:i32:$rc, SETNE:Other) - Complexity = 3
                // Dst: (NEQ:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2449*/      /*Scope*/ 14, /*->2464*/
/*2450*/        OPC_CheckCondCode, ISD::SETGT,
/*2452*/        OPC_MoveParent,
/*2453*/        OPC_CheckType, MVT::i32,
/*2455*/        OPC_MorphNodeTo, TARGET_VAL(DSP::GT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$rb, CPURegs:i32:$rc, SETGT:Other) - Complexity = 3
                // Dst: (GT:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2464*/      /*Scope*/ 14, /*->2479*/
/*2465*/        OPC_CheckCondCode, ISD::SETUGT,
/*2467*/        OPC_MoveParent,
/*2468*/        OPC_CheckType, MVT::i32,
/*2470*/        OPC_MorphNodeTo, TARGET_VAL(DSP::GTU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$rb, CPURegs:i32:$rc, SETUGT:Other) - Complexity = 3
                // Dst: (GTU:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2479*/      /*Scope*/ 14, /*->2494*/
/*2480*/        OPC_CheckCondCode, ISD::SETGE,
/*2482*/        OPC_MoveParent,
/*2483*/        OPC_CheckType, MVT::i32,
/*2485*/        OPC_MorphNodeTo, TARGET_VAL(DSP::GE), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$rb, CPURegs:i32:$rc, SETGE:Other) - Complexity = 3
                // Dst: (GE:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2494*/      /*Scope*/ 14, /*->2509*/
/*2495*/        OPC_CheckCondCode, ISD::SETUGE,
/*2497*/        OPC_MoveParent,
/*2498*/        OPC_CheckType, MVT::i32,
/*2500*/        OPC_MorphNodeTo, TARGET_VAL(DSP::GEU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$rb, CPURegs:i32:$rc, SETUGE:Other) - Complexity = 3
                // Dst: (GEU:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2509*/      /*Scope*/ 14, /*->2524*/
/*2510*/        OPC_CheckCondCode, ISD::SETLT,
/*2512*/        OPC_MoveParent,
/*2513*/        OPC_CheckType, MVT::i32,
/*2515*/        OPC_MorphNodeTo, TARGET_VAL(DSP::LT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$rb, CPURegs:i32:$rc, SETLT:Other) - Complexity = 3
                // Dst: (LT:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2524*/      /*Scope*/ 14, /*->2539*/
/*2525*/        OPC_CheckCondCode, ISD::SETULT,
/*2527*/        OPC_MoveParent,
/*2528*/        OPC_CheckType, MVT::i32,
/*2530*/        OPC_MorphNodeTo, TARGET_VAL(DSP::LTU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$rb, CPURegs:i32:$rc, SETULT:Other) - Complexity = 3
                // Dst: (LTU:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2539*/      /*Scope*/ 14, /*->2554*/
/*2540*/        OPC_CheckCondCode, ISD::SETLE,
/*2542*/        OPC_MoveParent,
/*2543*/        OPC_CheckType, MVT::i32,
/*2545*/        OPC_MorphNodeTo, TARGET_VAL(DSP::LE), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$rb, CPURegs:i32:$rc, SETLE:Other) - Complexity = 3
                // Dst: (LE:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2554*/      /*Scope*/ 14, /*->2569*/
/*2555*/        OPC_CheckCondCode, ISD::SETULE,
/*2557*/        OPC_MoveParent,
/*2558*/        OPC_CheckType, MVT::i32,
/*2560*/        OPC_MorphNodeTo, TARGET_VAL(DSP::LEU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$rb, CPURegs:i32:$rc, SETULE:Other) - Complexity = 3
                // Dst: (LEU:i32 CPURegs:i32:$rb, CPURegs:i32:$rc)
/*2569*/      /*Scope*/ 14, /*->2584*/
/*2570*/        OPC_CheckCondCode, ISD::SETEQ,
/*2572*/        OPC_MoveParent,
/*2573*/        OPC_CheckType, MVT::i32,
/*2575*/        OPC_MorphNodeTo, TARGET_VAL(DSP::EQ), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other) - Complexity = 3
                // Dst: (EQ:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*2584*/      /*Scope*/ 14, /*->2599*/
/*2585*/        OPC_CheckCondCode, ISD::SETNE,
/*2587*/        OPC_MoveParent,
/*2588*/        OPC_CheckType, MVT::i32,
/*2590*/        OPC_MorphNodeTo, TARGET_VAL(DSP::NEQ), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other) - Complexity = 3
                // Dst: (NEQ:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*2599*/      /*Scope*/ 14, /*->2614*/
/*2600*/        OPC_CheckCondCode, ISD::SETLT,
/*2602*/        OPC_MoveParent,
/*2603*/        OPC_CheckType, MVT::i32,
/*2605*/        OPC_MorphNodeTo, TARGET_VAL(DSP::LT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLT:Other) - Complexity = 3
                // Dst: (LT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*2614*/      /*Scope*/ 14, /*->2629*/
/*2615*/        OPC_CheckCondCode, ISD::SETULT,
/*2617*/        OPC_MoveParent,
/*2618*/        OPC_CheckType, MVT::i32,
/*2620*/        OPC_MorphNodeTo, TARGET_VAL(DSP::LTU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULT:Other) - Complexity = 3
                // Dst: (LTU:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*2629*/      /*Scope*/ 14, /*->2644*/
/*2630*/        OPC_CheckCondCode, ISD::SETLE,
/*2632*/        OPC_MoveParent,
/*2633*/        OPC_CheckType, MVT::i32,
/*2635*/        OPC_MorphNodeTo, TARGET_VAL(DSP::LE), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other) - Complexity = 3
                // Dst: (LE:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*2644*/      /*Scope*/ 14, /*->2659*/
/*2645*/        OPC_CheckCondCode, ISD::SETULE,
/*2647*/        OPC_MoveParent,
/*2648*/        OPC_CheckType, MVT::i32,
/*2650*/        OPC_MorphNodeTo, TARGET_VAL(DSP::LEU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other) - Complexity = 3
                // Dst: (LEU:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*2659*/      /*Scope*/ 14, /*->2674*/
/*2660*/        OPC_CheckCondCode, ISD::SETGT,
/*2662*/        OPC_MoveParent,
/*2663*/        OPC_CheckType, MVT::i32,
/*2665*/        OPC_MorphNodeTo, TARGET_VAL(DSP::GT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGT:Other) - Complexity = 3
                // Dst: (GT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*2674*/      /*Scope*/ 14, /*->2689*/
/*2675*/        OPC_CheckCondCode, ISD::SETUGT,
/*2677*/        OPC_MoveParent,
/*2678*/        OPC_CheckType, MVT::i32,
/*2680*/        OPC_MorphNodeTo, TARGET_VAL(DSP::GTU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGT:Other) - Complexity = 3
                // Dst: (GTU:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*2689*/      /*Scope*/ 14, /*->2704*/
/*2690*/        OPC_CheckCondCode, ISD::SETGE,
/*2692*/        OPC_MoveParent,
/*2693*/        OPC_CheckType, MVT::i32,
/*2695*/        OPC_MorphNodeTo, TARGET_VAL(DSP::GE), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other) - Complexity = 3
                // Dst: (GE:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*2704*/      /*Scope*/ 14, /*->2719*/
/*2705*/        OPC_CheckCondCode, ISD::SETUGE,
/*2707*/        OPC_MoveParent,
/*2708*/        OPC_CheckType, MVT::i32,
/*2710*/        OPC_MorphNodeTo, TARGET_VAL(DSP::GEU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other) - Complexity = 3
                // Dst: (GEU:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*2719*/      0, /*End of Scope*/
/*2720*/    /*SwitchOpcode*/ 13, TARGET_VAL(DSPISD::MAX),// ->2736
/*2723*/      OPC_RecordChild0, // #0 = $rb
/*2724*/      OPC_RecordChild1, // #1 = $rt
/*2725*/      OPC_CheckType, MVT::i32,
/*2727*/      OPC_MorphNodeTo, TARGET_VAL(DSP::MAX), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (DSPMAX:i32 CPURegs:i32:$rb, CPURegs:i32:$rt) - Complexity = 3
              // Dst: (MAX:i32 CPURegs:i32:$rb, CPURegs:i32:$rt)
/*2736*/    /*SwitchOpcode*/ 13, TARGET_VAL(DSPISD::MIN),// ->2752
/*2739*/      OPC_RecordChild0, // #0 = $rb
/*2740*/      OPC_RecordChild1, // #1 = $rt
/*2741*/      OPC_CheckType, MVT::i32,
/*2743*/      OPC_MorphNodeTo, TARGET_VAL(DSP::MIN), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (DSPMIN:i32 CPURegs:i32:$rb, CPURegs:i32:$rt) - Complexity = 3
              // Dst: (MIN:i32 CPURegs:i32:$rb, CPURegs:i32:$rt)
/*2752*/    /*SwitchOpcode*/ 102|128,5/*742*/, TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->3498
/*2756*/      OPC_Scope, 14, /*->2772*/ // 50 children in Scope
/*2758*/        OPC_CheckChild0Integer, 49|128,3/*433*/, 
/*2761*/        OPC_RecordChild1, // #0 = $rb
/*2762*/        OPC_RecordChild2, // #1 = $rc
/*2763*/        OPC_MorphNodeTo, TARGET_VAL(DSP::veq_40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i32 433:iPTR, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 8
                // Dst: (veq_40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*2772*/      /*Scope*/ 14, /*->2787*/
/*2773*/        OPC_CheckChild0Integer, 48|128,3/*432*/, 
/*2776*/        OPC_RecordChild1, // #0 = $rb
/*2777*/        OPC_RecordChild2, // #1 = $rc
/*2778*/        OPC_MorphNodeTo, TARGET_VAL(DSP::veq_20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v8i16 432:iPTR, VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 8
                // Dst: (veq_20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*2787*/      /*Scope*/ 14, /*->2802*/
/*2788*/        OPC_CheckChild0Integer, 47|128,3/*431*/, 
/*2791*/        OPC_RecordChild1, // #0 = $rb
/*2792*/        OPC_RecordChild2, // #1 = $rc
/*2793*/        OPC_MorphNodeTo, TARGET_VAL(DSP::veq_10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v16i8 431:iPTR, VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 8
                // Dst: (veq_10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*2802*/      /*Scope*/ 14, /*->2817*/
/*2803*/        OPC_CheckChild0Integer, 61|128,3/*445*/, 
/*2806*/        OPC_RecordChild1, // #0 = $rb
/*2807*/        OPC_RecordChild2, // #1 = $rc
/*2808*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vgt_40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i32 445:iPTR, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 8
                // Dst: (vgt_40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*2817*/      /*Scope*/ 14, /*->2832*/
/*2818*/        OPC_CheckChild0Integer, 60|128,3/*444*/, 
/*2821*/        OPC_RecordChild1, // #0 = $rb
/*2822*/        OPC_RecordChild2, // #1 = $rc
/*2823*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vgt_20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v8i16 444:iPTR, VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 8
                // Dst: (vgt_20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*2832*/      /*Scope*/ 14, /*->2847*/
/*2833*/        OPC_CheckChild0Integer, 59|128,3/*443*/, 
/*2836*/        OPC_RecordChild1, // #0 = $rb
/*2837*/        OPC_RecordChild2, // #1 = $rc
/*2838*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vgt_10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v16i8 443:iPTR, VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 8
                // Dst: (vgt_10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*2847*/      /*Scope*/ 14, /*->2862*/
/*2848*/        OPC_CheckChild0Integer, 79|128,3/*463*/, 
/*2851*/        OPC_RecordChild1, // #0 = $rb
/*2852*/        OPC_RecordChild2, // #1 = $rc
/*2853*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vlt_40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i32 463:iPTR, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 8
                // Dst: (vlt_40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*2862*/      /*Scope*/ 14, /*->2877*/
/*2863*/        OPC_CheckChild0Integer, 78|128,3/*462*/, 
/*2866*/        OPC_RecordChild1, // #0 = $rb
/*2867*/        OPC_RecordChild2, // #1 = $rc
/*2868*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vlt_20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v8i16 462:iPTR, VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 8
                // Dst: (vlt_20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*2877*/      /*Scope*/ 14, /*->2892*/
/*2878*/        OPC_CheckChild0Integer, 77|128,3/*461*/, 
/*2881*/        OPC_RecordChild1, // #0 = $rb
/*2882*/        OPC_RecordChild2, // #1 = $rc
/*2883*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vlt_10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v16i8 461:iPTR, VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 8
                // Dst: (vlt_10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*2892*/      /*Scope*/ 14, /*->2907*/
/*2893*/        OPC_CheckChild0Integer, 58|128,3/*442*/, 
/*2896*/        OPC_RecordChild1, // #0 = $rb
/*2897*/        OPC_RecordChild2, // #1 = $rc
/*2898*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vge_40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i32 442:iPTR, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 8
                // Dst: (vge_40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*2907*/      /*Scope*/ 14, /*->2922*/
/*2908*/        OPC_CheckChild0Integer, 57|128,3/*441*/, 
/*2911*/        OPC_RecordChild1, // #0 = $rb
/*2912*/        OPC_RecordChild2, // #1 = $rc
/*2913*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vge_20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v8i16 441:iPTR, VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 8
                // Dst: (vge_20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*2922*/      /*Scope*/ 14, /*->2937*/
/*2923*/        OPC_CheckChild0Integer, 56|128,3/*440*/, 
/*2926*/        OPC_RecordChild1, // #0 = $rb
/*2927*/        OPC_RecordChild2, // #1 = $rc
/*2928*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vge_10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v16i8 440:iPTR, VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 8
                // Dst: (vge_10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*2937*/      /*Scope*/ 14, /*->2952*/
/*2938*/        OPC_CheckChild0Integer, 64|128,3/*448*/, 
/*2941*/        OPC_RecordChild1, // #0 = $rb
/*2942*/        OPC_RecordChild2, // #1 = $rc
/*2943*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vle_40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i32 448:iPTR, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 8
                // Dst: (vle_40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*2952*/      /*Scope*/ 14, /*->2967*/
/*2953*/        OPC_CheckChild0Integer, 63|128,3/*447*/, 
/*2956*/        OPC_RecordChild1, // #0 = $rb
/*2957*/        OPC_RecordChild2, // #1 = $rc
/*2958*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vle_20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v8i16 447:iPTR, VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 8
                // Dst: (vle_20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*2967*/      /*Scope*/ 14, /*->2982*/
/*2968*/        OPC_CheckChild0Integer, 62|128,3/*446*/, 
/*2971*/        OPC_RecordChild1, // #0 = $rb
/*2972*/        OPC_RecordChild2, // #1 = $rc
/*2973*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vle_10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v16i8 446:iPTR, VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 8
                // Dst: (vle_10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*2982*/      /*Scope*/ 14, /*->2997*/
/*2983*/        OPC_CheckChild0Integer, 41|128,3/*425*/, 
/*2986*/        OPC_RecordChild1, // #0 = $rb
/*2987*/        OPC_RecordChild2, // #1 = $rc
/*2988*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vadd_40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i32 425:iPTR, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 8
                // Dst: (vadd_40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*2997*/      /*Scope*/ 14, /*->3012*/
/*2998*/        OPC_CheckChild0Integer, 40|128,3/*424*/, 
/*3001*/        OPC_RecordChild1, // #0 = $rb
/*3002*/        OPC_RecordChild2, // #1 = $rc
/*3003*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vadd_20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v8i16 424:iPTR, VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 8
                // Dst: (vadd_20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*3012*/      /*Scope*/ 14, /*->3027*/
/*3013*/        OPC_CheckChild0Integer, 39|128,3/*423*/, 
/*3016*/        OPC_RecordChild1, // #0 = $rb
/*3017*/        OPC_RecordChild2, // #1 = $rc
/*3018*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vadd_10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v16i8 423:iPTR, VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 8
                // Dst: (vadd_10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*3027*/      /*Scope*/ 14, /*->3042*/
/*3028*/        OPC_CheckChild0Integer, 106|128,3/*490*/, 
/*3031*/        OPC_RecordChild1, // #0 = $rb
/*3032*/        OPC_RecordChild2, // #1 = $rc
/*3033*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsub_40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i32 490:iPTR, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 8
                // Dst: (vsub_40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*3042*/      /*Scope*/ 14, /*->3057*/
/*3043*/        OPC_CheckChild0Integer, 105|128,3/*489*/, 
/*3046*/        OPC_RecordChild1, // #0 = $rb
/*3047*/        OPC_RecordChild2, // #1 = $rc
/*3048*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsub_20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v8i16 489:iPTR, VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 8
                // Dst: (vsub_20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*3057*/      /*Scope*/ 14, /*->3072*/
/*3058*/        OPC_CheckChild0Integer, 104|128,3/*488*/, 
/*3061*/        OPC_RecordChild1, // #0 = $rb
/*3062*/        OPC_RecordChild2, // #1 = $rc
/*3063*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsub_10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v16i8 488:iPTR, VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 8
                // Dst: (vsub_10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*3072*/      /*Scope*/ 14, /*->3087*/
/*3073*/        OPC_CheckChild0Integer, 88|128,3/*472*/, 
/*3076*/        OPC_RecordChild1, // #0 = $rb
/*3077*/        OPC_RecordChild2, // #1 = $rc
/*3078*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsl_40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i32 472:iPTR, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 8
                // Dst: (vsl_40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*3087*/      /*Scope*/ 14, /*->3102*/
/*3088*/        OPC_CheckChild0Integer, 87|128,3/*471*/, 
/*3091*/        OPC_RecordChild1, // #0 = $rb
/*3092*/        OPC_RecordChild2, // #1 = $rc
/*3093*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsl_20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v8i16 471:iPTR, VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 8
                // Dst: (vsl_20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*3102*/      /*Scope*/ 14, /*->3117*/
/*3103*/        OPC_CheckChild0Integer, 86|128,3/*470*/, 
/*3106*/        OPC_RecordChild1, // #0 = $rb
/*3107*/        OPC_RecordChild2, // #1 = $rc
/*3108*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsl_10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v16i8 470:iPTR, VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 8
                // Dst: (vsl_10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*3117*/      /*Scope*/ 14, /*->3132*/
/*3118*/        OPC_CheckChild0Integer, 91|128,3/*475*/, 
/*3121*/        OPC_RecordChild1, // #0 = $rb
/*3122*/        OPC_RecordChild2, // #1 = $rc
/*3123*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsls_40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i32 475:iPTR, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 8
                // Dst: (vsls_40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*3132*/      /*Scope*/ 14, /*->3147*/
/*3133*/        OPC_CheckChild0Integer, 90|128,3/*474*/, 
/*3136*/        OPC_RecordChild1, // #0 = $rb
/*3137*/        OPC_RecordChild2, // #1 = $rc
/*3138*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsls_20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v8i16 474:iPTR, VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 8
                // Dst: (vsls_20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*3147*/      /*Scope*/ 14, /*->3162*/
/*3148*/        OPC_CheckChild0Integer, 89|128,3/*473*/, 
/*3151*/        OPC_RecordChild1, // #0 = $rb
/*3152*/        OPC_RecordChild2, // #1 = $rc
/*3153*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsls_10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v16i8 473:iPTR, VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 8
                // Dst: (vsls_10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*3162*/      /*Scope*/ 14, /*->3177*/
/*3163*/        OPC_CheckChild0Integer, 94|128,3/*478*/, 
/*3166*/        OPC_RecordChild1, // #0 = $rb
/*3167*/        OPC_RecordChild2, // #1 = $rc
/*3168*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsra_40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i32 478:iPTR, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 8
                // Dst: (vsra_40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*3177*/      /*Scope*/ 14, /*->3192*/
/*3178*/        OPC_CheckChild0Integer, 93|128,3/*477*/, 
/*3181*/        OPC_RecordChild1, // #0 = $rb
/*3182*/        OPC_RecordChild2, // #1 = $rc
/*3183*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsra_20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v8i16 477:iPTR, VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 8
                // Dst: (vsra_20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*3192*/      /*Scope*/ 14, /*->3207*/
/*3193*/        OPC_CheckChild0Integer, 92|128,3/*476*/, 
/*3196*/        OPC_RecordChild1, // #0 = $rb
/*3197*/        OPC_RecordChild2, // #1 = $rc
/*3198*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsra_10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v16i8 476:iPTR, VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 8
                // Dst: (vsra_10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*3207*/      /*Scope*/ 14, /*->3222*/
/*3208*/        OPC_CheckChild0Integer, 97|128,3/*481*/, 
/*3211*/        OPC_RecordChild1, // #0 = $rb
/*3212*/        OPC_RecordChild2, // #1 = $rc
/*3213*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsrl_40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i32 481:iPTR, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 8
                // Dst: (vsrl_40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*3222*/      /*Scope*/ 14, /*->3237*/
/*3223*/        OPC_CheckChild0Integer, 96|128,3/*480*/, 
/*3226*/        OPC_RecordChild1, // #0 = $rb
/*3227*/        OPC_RecordChild2, // #1 = $rc
/*3228*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsrl_20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v8i16 480:iPTR, VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 8
                // Dst: (vsrl_20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*3237*/      /*Scope*/ 14, /*->3252*/
/*3238*/        OPC_CheckChild0Integer, 95|128,3/*479*/, 
/*3241*/        OPC_RecordChild1, // #0 = $rb
/*3242*/        OPC_RecordChild2, // #1 = $rc
/*3243*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsrl_10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v16i8 479:iPTR, VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 8
                // Dst: (vsrl_10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*3252*/      /*Scope*/ 12, /*->3265*/
/*3253*/        OPC_CheckChild0Integer, 38|128,3/*422*/, 
/*3256*/        OPC_RecordChild1, // #0 = $rb
/*3257*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vabs_40), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 422:iPTR, VPR4Out:v4i32:$rb) - Complexity = 8
                // Dst: (vabs_40:v4i32 VPR4Out:v4i32:$rb)
/*3265*/      /*Scope*/ 12, /*->3278*/
/*3266*/        OPC_CheckChild0Integer, 37|128,3/*421*/, 
/*3269*/        OPC_RecordChild1, // #0 = $rb
/*3270*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vabs_20), 0,
                    1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v8i16 421:iPTR, VPR8Out:v8i16:$rb) - Complexity = 8
                // Dst: (vabs_20:v8i16 VPR8Out:v8i16:$rb)
/*3278*/      /*Scope*/ 12, /*->3291*/
/*3279*/        OPC_CheckChild0Integer, 36|128,3/*420*/, 
/*3282*/        OPC_RecordChild1, // #0 = $rb
/*3283*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vabs_10), 0,
                    1/*#VTs*/, MVT::v16i8, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v16i8 420:iPTR, VPR16Out:v16i8:$rb) - Complexity = 8
                // Dst: (vabs_10:v16i8 VPR16Out:v16i8:$rb)
/*3291*/      /*Scope*/ 12, /*->3304*/
/*3292*/        OPC_CheckChild0Integer, 109|128,3/*493*/, 
/*3295*/        OPC_RecordChild1, // #0 = $rb
/*3296*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsum_40), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v4i32 493:iPTR, VPR4Out:v4i32:$rb) - Complexity = 8
                // Dst: (vsum_40:v4i32 VPR4Out:v4i32:$rb)
/*3304*/      /*Scope*/ 12, /*->3317*/
/*3305*/        OPC_CheckChild0Integer, 108|128,3/*492*/, 
/*3308*/        OPC_RecordChild1, // #0 = $rb
/*3309*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsum_20), 0,
                    1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v8i16 492:iPTR, VPR8Out:v8i16:$rb) - Complexity = 8
                // Dst: (vsum_20:v8i16 VPR8Out:v8i16:$rb)
/*3317*/      /*Scope*/ 12, /*->3330*/
/*3318*/        OPC_CheckChild0Integer, 107|128,3/*491*/, 
/*3321*/        OPC_RecordChild1, // #0 = $rb
/*3322*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vsum_10), 0,
                    1/*#VTs*/, MVT::v16i8, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:v16i8 491:iPTR, VPR16Out:v16i8:$rb) - Complexity = 8
                // Dst: (vsum_10:v16i8 VPR16Out:v16i8:$rb)
/*3330*/      /*Scope*/ 14, /*->3345*/
/*3331*/        OPC_CheckChild0Integer, 55|128,3/*439*/, 
/*3334*/        OPC_RecordChild1, // #0 = $rb
/*3335*/        OPC_RecordChild2, // #1 = $rc
/*3336*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vfmul_40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i32 439:iPTR, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 8
                // Dst: (vfmul_40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*3345*/      /*Scope*/ 14, /*->3360*/
/*3346*/        OPC_CheckChild0Integer, 54|128,3/*438*/, 
/*3349*/        OPC_RecordChild1, // #0 = $rb
/*3350*/        OPC_RecordChild2, // #1 = $rc
/*3351*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vfmul_20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v8i16 438:iPTR, VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 8
                // Dst: (vfmul_20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*3360*/      /*Scope*/ 14, /*->3375*/
/*3361*/        OPC_CheckChild0Integer, 53|128,3/*437*/, 
/*3364*/        OPC_RecordChild1, // #0 = $rb
/*3365*/        OPC_RecordChild2, // #1 = $rc
/*3366*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vfmul_10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v16i8 437:iPTR, VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 8
                // Dst: (vfmul_10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*3375*/      /*Scope*/ 16, /*->3392*/
/*3376*/        OPC_CheckChild0Integer, 52|128,3/*436*/, 
/*3379*/        OPC_RecordChild1, // #0 = $dst
/*3380*/        OPC_RecordChild2, // #1 = $rb
/*3381*/        OPC_RecordChild3, // #2 = $rc
/*3382*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vfmac_40), 0,
                    1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (intrinsic_wo_chain:v4i32 436:iPTR, VPR4Out:v4i32:$dst, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 8
                // Dst: (vfmac_40:v4i32 VPR4Out:v4i32:$dst, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*3392*/      /*Scope*/ 14, /*->3407*/
/*3393*/        OPC_CheckChild0Integer, 51|128,3/*435*/, 
/*3396*/        OPC_RecordChild1, // #0 = $rb
/*3397*/        OPC_RecordChild2, // #1 = $rc
/*3398*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vfmac_20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v8i16 435:iPTR, VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 8
                // Dst: (vfmac_20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*3407*/      /*Scope*/ 14, /*->3422*/
/*3408*/        OPC_CheckChild0Integer, 50|128,3/*434*/, 
/*3411*/        OPC_RecordChild1, // #0 = $rb
/*3412*/        OPC_RecordChild2, // #1 = $rc
/*3413*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vfmac_10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v16i8 434:iPTR, VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 8
                // Dst: (vfmac_10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*3422*/      /*Scope*/ 14, /*->3437*/
/*3423*/        OPC_CheckChild0Integer, 43|128,3/*427*/, 
/*3426*/        OPC_RecordChild1, // #0 = $rb
/*3427*/        OPC_RecordChild2, // #1 = $rc
/*3428*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vcmac_20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v8i16 427:iPTR, VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 8
                // Dst: (vcmac_20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*3437*/      /*Scope*/ 14, /*->3452*/
/*3438*/        OPC_CheckChild0Integer, 42|128,3/*426*/, 
/*3441*/        OPC_RecordChild1, // #0 = $rb
/*3442*/        OPC_RecordChild2, // #1 = $rc
/*3443*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vcmac_10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v16i8 426:iPTR, VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc) - Complexity = 8
                // Dst: (vcmac_10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rc)
/*3452*/      /*Scope*/ 14, /*->3467*/
/*3453*/        OPC_CheckChild0Integer, 44|128,3/*428*/, 
/*3456*/        OPC_RecordChild1, // #0 = $rb
/*3457*/        OPC_RecordChild2, // #1 = $rc
/*3458*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vcmul_20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v8i16 428:iPTR, VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc) - Complexity = 8
                // Dst: (vcmul_20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rc)
/*3467*/      /*Scope*/ 14, /*->3482*/
/*3468*/        OPC_CheckChild0Integer, 46|128,3/*430*/, 
/*3471*/        OPC_RecordChild1, // #0 = $rb
/*3472*/        OPC_RecordChild2, // #1 = $rc
/*3473*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vcmulr_40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i32 430:iPTR, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 8
                // Dst: (vcmulr_40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*3482*/      /*Scope*/ 14, /*->3497*/
/*3483*/        OPC_CheckChild0Integer, 45|128,3/*429*/, 
/*3486*/        OPC_RecordChild1, // #0 = $rb
/*3487*/        OPC_RecordChild2, // #1 = $rc
/*3488*/        OPC_MorphNodeTo, TARGET_VAL(DSP::vcmuli_40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:v4i32 429:iPTR, VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc) - Complexity = 8
                // Dst: (vcmuli_40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rc)
/*3497*/      0, /*End of Scope*/
/*3498*/    /*SwitchOpcode*/ 40, TARGET_VAL(ISD::INSERT_VECTOR_ELT),// ->3541
/*3501*/      OPC_RecordChild0, // #0 = $ra
/*3502*/      OPC_RecordChild1, // #1 = $rb
/*3503*/      OPC_RecordChild2, // #2 = $imm
/*3504*/      OPC_MoveChild, 2,
/*3506*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3509*/      OPC_CheckPredicate, 19, // Predicate_immZExt16
/*3511*/      OPC_MoveParent,
/*3512*/      OPC_EmitConvertToTarget, 2,
/*3514*/      OPC_EmitNodeXForm, 1, 3, // LO16
/*3517*/      OPC_Scope, 10, /*->3529*/ // 2 children in Scope
/*3519*/        OPC_MorphNodeTo, TARGET_VAL(DSP::MovG2V40), 0,
                    1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 4, 
                // Src: (insertelt:v4i32 VPR4Out:v4i32:$ra, CPURegs:i32:$rb, (imm:iPTR)<<P:Predicate_immZExt16>><<X:LO16>>:$imm) - Complexity = 7
                // Dst: (MovG2V40:v4i32 VPR4Out:v4i32:$ra, CPURegs:i32:$rb, (LO16:i32 (imm:iPTR):$imm))
/*3529*/      /*Scope*/ 10, /*->3540*/
/*3530*/        OPC_MorphNodeTo, TARGET_VAL(DSP::MovG2V20), 0,
                    1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 4, 
                // Src: (insertelt:v4i32 CPU128Regs:v4i32:$ra, CPURegs:i32:$rb, (imm:iPTR)<<P:Predicate_immZExt16>><<X:LO16>>:$imm) - Complexity = 7
                // Dst: (MovG2V20:v4i32 CPU128Regs:v4i32:$ra, CPURegs:i32:$rb, (LO16:i32 (imm:iPTR):$imm))
/*3540*/      0, /*End of Scope*/
/*3541*/    /*SwitchOpcode*/ 30, TARGET_VAL(DSPISD::InsertVE8),// ->3574
/*3544*/      OPC_RecordChild0, // #0 = $ra
/*3545*/      OPC_RecordChild1, // #1 = $rb
/*3546*/      OPC_CheckChild1Type, MVT::i32,
/*3548*/      OPC_RecordChild2, // #2 = $imm
/*3549*/      OPC_MoveChild, 2,
/*3551*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3554*/      OPC_CheckPredicate, 19, // Predicate_immZExt16
/*3556*/      OPC_MoveParent,
/*3557*/      OPC_CheckType, MVT::v16i8,
/*3559*/      OPC_EmitConvertToTarget, 2,
/*3561*/      OPC_EmitNodeXForm, 1, 3, // LO16
/*3564*/      OPC_MorphNodeTo, TARGET_VAL(DSP::MovG2V10), 0,
                  1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 0, 1, 4, 
              // Src: (DSPVecInsert8:v16i8 VPR16Out:v16i8:$ra, CPURegs:i32:$rb, (imm:iPTR)<<P:Predicate_immZExt16>><<X:LO16>>:$imm) - Complexity = 7
              // Dst: (MovG2V10:v16i8 VPR16Out:v16i8:$ra, CPURegs:i32:$rb, (LO16:i32 (imm:iPTR):$imm))
/*3574*/    /*SwitchOpcode*/ 51, TARGET_VAL(DSPISD::VMAX),// ->3628
/*3577*/      OPC_RecordChild0, // #0 = $rb
/*3578*/      OPC_SwitchType /*3 cases */, 14, MVT::v4i32,// ->3595
/*3581*/        OPC_CheckChild0Type, MVT::v4i32,
/*3583*/        OPC_RecordChild1, // #1 = $rt
/*3584*/        OPC_CheckChild1Type, MVT::v4i32,
/*3586*/        OPC_MorphNodeTo, TARGET_VAL(DSP::VMAX40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (DSPVMAX:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rt) - Complexity = 3
                // Dst: (VMAX40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rt)
/*3595*/      /*SwitchType*/ 14, MVT::v8i16,// ->3611
/*3597*/        OPC_CheckChild0Type, MVT::v8i16,
/*3599*/        OPC_RecordChild1, // #1 = $rt
/*3600*/        OPC_CheckChild1Type, MVT::v8i16,
/*3602*/        OPC_MorphNodeTo, TARGET_VAL(DSP::VMAX20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (DSPVMAX:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rt) - Complexity = 3
                // Dst: (VMAX20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rt)
/*3611*/      /*SwitchType*/ 14, MVT::v16i8,// ->3627
/*3613*/        OPC_CheckChild0Type, MVT::v16i8,
/*3615*/        OPC_RecordChild1, // #1 = $rt
/*3616*/        OPC_CheckChild1Type, MVT::v16i8,
/*3618*/        OPC_MorphNodeTo, TARGET_VAL(DSP::VMAX10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (DSPVMAX:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rt) - Complexity = 3
                // Dst: (VMAX10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rt)
/*3627*/      0, // EndSwitchType
/*3628*/    /*SwitchOpcode*/ 51, TARGET_VAL(DSPISD::VMIN),// ->3682
/*3631*/      OPC_RecordChild0, // #0 = $rb
/*3632*/      OPC_SwitchType /*3 cases */, 14, MVT::v4i32,// ->3649
/*3635*/        OPC_CheckChild0Type, MVT::v4i32,
/*3637*/        OPC_RecordChild1, // #1 = $rt
/*3638*/        OPC_CheckChild1Type, MVT::v4i32,
/*3640*/        OPC_MorphNodeTo, TARGET_VAL(DSP::VMIN40), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (DSPVMIN:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rt) - Complexity = 3
                // Dst: (VMIN40:v4i32 VPR4Out:v4i32:$rb, VPR4Out:v4i32:$rt)
/*3649*/      /*SwitchType*/ 14, MVT::v8i16,// ->3665
/*3651*/        OPC_CheckChild0Type, MVT::v8i16,
/*3653*/        OPC_RecordChild1, // #1 = $rt
/*3654*/        OPC_CheckChild1Type, MVT::v8i16,
/*3656*/        OPC_MorphNodeTo, TARGET_VAL(DSP::VMIN20), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (DSPVMIN:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rt) - Complexity = 3
                // Dst: (VMIN20:v8i16 VPR8Out:v8i16:$rb, VPR8Out:v8i16:$rt)
/*3665*/      /*SwitchType*/ 14, MVT::v16i8,// ->3681
/*3667*/        OPC_CheckChild0Type, MVT::v16i8,
/*3669*/        OPC_RecordChild1, // #1 = $rt
/*3670*/        OPC_CheckChild1Type, MVT::v16i8,
/*3672*/        OPC_MorphNodeTo, TARGET_VAL(DSP::VMIN10), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (DSPVMIN:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rt) - Complexity = 3
                // Dst: (VMIN10:v16i8 VPR16Out:v16i8:$rb, VPR16Out:v16i8:$rt)
/*3681*/      0, // EndSwitchType
/*3682*/    0, // EndSwitchOpcode
    0
  }; // Total Array size is 3684 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 17
  // #OPC_RecordNode                     = 13
  // #OPC_RecordChild                    = 265
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 3
  // #OPC_MoveChild                      = 66
  // #OPC_MoveParent                     = 102
  // #OPC_CheckSame                      = 0
  // #OPC_CheckChildSame                 = 0
  // #OPC_CheckPatternPredicate          = 0
  // #OPC_CheckPredicate                 = 75
  // #OPC_CheckOpcode                    = 56
  // #OPC_SwitchOpcode                   = 7
  // #OPC_CheckType                      = 52
  // #OPC_SwitchType                     = 4
  // #OPC_CheckChildType                 = 27
  // #OPC_CheckInteger                   = 0
  // #OPC_CheckChildInteger              = 97
  // #OPC_CheckCondCode                  = 25
  // #OPC_CheckValueType                 = 0
  // #OPC_CheckComplexPat                = 15
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 0
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 3
  // #OPC_EmitConvertToTarget            = 49
  // #OPC_EmitMergeInputChains           = 76
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 5
  // #OPC_EmitNodeXForm                  = 7
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 188

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckNodePredicate(SDNode *Node,
                        unsigned PredNo) const override {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_immSExt5
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<5>(N->getSExtValue()); 
  }
  case 1: { // Predicate_immSExt9
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<9>(N->getSExtValue()); 
  }
  case 2: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 3: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 4: { // Predicate_load_a
    SDNode *N = Node;

LoadSDNode *LD = cast<LoadSDNode>(N);
return LD->getMemoryVT().getSizeInBits()/8 <= LD->getAlignment();

  }
  case 5: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 8: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 9: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 10: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 11: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 12: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 13: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 14: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 15: { // Predicate_store_a
    SDNode *N = Node;

StoreSDNode *SD = cast<StoreSDNode>(N);
return SD->getMemoryVT().getSizeInBits()/8 <= SD->getAlignment();

  }
  case 16: { // Predicate_immSExt16Plus1
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return isInt<17>(N->getSExtValue()) && isInt<16>(N->getSExtValue() + 1);

  }
  case 17: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<16>(N->getSExtValue()); 
  }
  case 18: { // Predicate_immSExt11
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<11>(N->getSExtValue()); 
  }
  case 19: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

if (N->getValueType(0) == MVT::i32)
return (uint32_t)N->getZExtValue() == (unsigned short)N->getZExtValue();
else
return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 20: { // Predicate_immSExt32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
return isInt<32>(N->getSExtValue());
  }
  }
}

bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
                         SDValue N, unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) override {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
    return SelectAddr(Parent, N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) override {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // Plus1
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());
 return getImm(N, N->getSExtValue() + 1); 
  }
  case 1: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

return getImm(N, N->getZExtValue() & 0xffff);

  }
  }
}

