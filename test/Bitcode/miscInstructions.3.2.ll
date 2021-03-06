; RUN:  llvm-dis < %s.bc| FileCheck %s

; miscInstructions.3.2.ll.bc was generated by passing this file to llvm-as-3.2.
; The test checks that LLVM does not misread miscellaneous instructions of
; older bitcode files.

define void @icmp(i32 %x1, i32 %x2, i32* %ptr1, i32* %ptr2, <2 x i32> %vec1, <2 x i32> %vec2){
entry:
; CHECK: %res1 = icmp eq i32 %x1, %x2
  %res1 = icmp eq i32 %x1, %x2
  
; CHECK-NEXT: %res2 = icmp ne i32 %x1, %x2
  %res2 = icmp ne i32 %x1, %x2
  
; CHECK-NEXT: %res3 = icmp ugt i32 %x1, %x2
  %res3 = icmp ugt i32 %x1, %x2
  
; CHECK-NEXT: %res4 = icmp uge i32 %x1, %x2
  %res4 = icmp uge i32 %x1, %x2
  
; CHECK-NEXT: %res5 = icmp ult i32 %x1, %x2
  %res5 = icmp ult i32 %x1, %x2
  
; CHECK-NEXT: %res6 = icmp ule i32 %x1, %x2
  %res6 = icmp ule i32 %x1, %x2
  
; CHECK-NEXT: %res7 = icmp sgt i32 %x1, %x2
  %res7 = icmp sgt i32 %x1, %x2
  
; CHECK-NEXT: %res8 = icmp sge i32 %x1, %x2
  %res8 = icmp sge i32 %x1, %x2
  
; CHECK-NEXT: %res9 = icmp slt i32 %x1, %x2
  %res9 = icmp slt i32 %x1, %x2
  
; CHECK-NEXT: %res10 = icmp sle i32 %x1, %x2
  %res10 = icmp sle i32 %x1, %x2
  
; CHECK-NEXT: %res11 = icmp eq i32* %ptr1, %ptr2
  %res11 = icmp eq i32* %ptr1, %ptr2
  
; CHECK-NEXT: %res12 = icmp eq <2 x i32> %vec1, %vec2
  %res12 = icmp eq <2 x i32> %vec1, %vec2
  
  ret void
}


define void @fcmp(float %x1, float %x2, <2 x float> %vec1, <2 x float> %vec2){
entry:
; CHECK: %res1 = fcmp oeq float %x1, %x2
  %res1 = fcmp oeq float %x1, %x2
  
; CHECK-NEXT: %res2 = fcmp one float %x1, %x2
  %res2 = fcmp one float %x1, %x2
  
; CHECK-NEXT: %res3 = fcmp ugt float %x1, %x2
  %res3 = fcmp ugt float %x1, %x2
  
; CHECK-NEXT: %res4 = fcmp uge float %x1, %x2
  %res4 = fcmp uge float %x1, %x2
  
; CHECK-NEXT: %res5 = fcmp ult float %x1, %x2
  %res5 = fcmp ult float %x1, %x2
  
; CHECK-NEXT: %res6 = fcmp ule float %x1, %x2
  %res6 = fcmp ule float %x1, %x2
  
; CHECK-NEXT: %res7 = fcmp ogt float %x1, %x2
  %res7 = fcmp ogt float %x1, %x2
  
; CHECK-NEXT: %res8 = fcmp oge float %x1, %x2
  %res8 = fcmp oge float %x1, %x2
  
; CHECK-NEXT: %res9 = fcmp olt float %x1, %x2
  %res9 = fcmp olt float %x1, %x2
  
; CHECK-NEXT: %res10 = fcmp ole float %x1, %x2
  %res10 = fcmp ole float %x1, %x2
  
; CHECK-NEXT: %res11 = fcmp ord float %x1, %x2
  %res11 = fcmp ord float %x1, %x2
  
; CHECK-NEXT: %res12 = fcmp ueq float %x1, %x2
  %res12 = fcmp ueq float %x1, %x2
  
; CHECK-NEXT: %res13 = fcmp une float %x1, %x2
  %res13 = fcmp une float %x1, %x2
  
; CHECK-NEXT: %res14 = fcmp uno float %x1, %x2
  %res14 = fcmp uno float %x1, %x2
  
; CHECK-NEXT: %res15 = fcmp true float %x1, %x2
  %res15 = fcmp true float %x1, %x2
  
; CHECK-NEXT: %res16 = fcmp false float %x1, %x2
  %res16 = fcmp false float %x1, %x2
  
; CHECK-NEXT: %res17 = fcmp oeq <2 x float> %vec1, %vec2
  %res17 = fcmp oeq <2 x float> %vec1, %vec2
  
  ret void
}

declare i32 @printf(i8* noalias nocapture, ...)

define void @call(i32 %x, i8* %msg ){
entry:

; CHECK: %res1 = call i32 @test(i32 %x)
  %res1 = call i32 @test(i32 %x)
  
; CHECK-NEXT: %res2 = tail call i32 @test(i32 %x)
  %res2 = tail call i32 @test(i32 %x)
  
; CHECK-NEXT: %res3 = call i32 (i8*, ...)* @printf(i8* %msg, i32 12, i8 42)
  %res3 = call i32 (i8*, ...)* @printf(i8* %msg, i32 12, i8 42)
  
  ret void
}

define i32 @test(i32 %x){
entry:

  ret i32 %x
}
