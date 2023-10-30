.data
symbol:.word 0:7
array:.word 0:7
space:.asciiz " "
enter:.asciiz "\n"

.text
li $v0, 5
syscall
move $s0, $v0 # s0 = n
li $v1, 0
jal fullArray
li $v0, 10
syscall

fullArray:
bge $v1, $s0, print # v1 = index
li $t0, 0
for:
  sll $t2, $t0, 2
  lw $t1, symbol($t2)
  
  bne $t1, $0, end_for
  sll $t3, $v1, 2
  addi $t4, $t0, 1
  sw $t4, array($t3)
  li $t4, 1
  sw $t4, symbol($t2)
  subi $sp, $sp, 12
  sw $v1, ($sp)
  sw $ra, 4($sp)
  sw $t0, 8($sp)
  addi $v1, $v1, 1
  jal fullArray
  lw $v1, ($sp)
  lw $ra, 4($sp)
  lw $t0, 8($sp)
  addi $sp, $sp, 12
  sll $t2, $t0, 2
  li $t4, 0
  sw $t4, symbol($t2)
  
end_for:
addi $t0, $t0, 1
blt $t0, $s0, for
jr $ra


print:
li $t0, 0
for_:
  li $v0, 1
  sll $a0, $t0, 2
  lw $a0, array($a0)
  syscall
  li $v0, 4
  la $a0, space
  syscall
addi $t0, $t0, 1
blt $t0, $s0, for_
li $v0, 4
la $a0, enter
syscall
jr $ra