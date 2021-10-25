.data
	.align 2
	pt: .space 4000

.text  
          la        $t7, pt           
 

          sw       $v0, 0($t7) 
 

          add     $s2, $zero, $v0   
 

          add     $s3, $zero, $zero  

FOR1: slt       $t7, $s3, $s0     
 

          beq     $t7, $zero, SAI1 
 

          sw       $v0, 0($s2)      
 

          addi    $s2, $s2, 4      
 

          addi    $s3, $s3, 1 
 

          j          FOR1 
 

SAI1:   srl      $s4, $s0, 1 