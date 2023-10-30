.macro read(%add)
li $v0, 5
syscall
move %add, $v0
.end_macro

.data
st:.word 0:65
astr:.word 0:65
enter:.asciiz "\n"
space:.asciiz " "

.text
read($s1)
li $t0, 0
read:
  sll $t2, $t0, 2
  read($t1)
  sw $t1, astr($t2)
addi $t0, $t0, 1
blt $t0, $s1, read

li $t0, 0
li $t4, -1
li $t9, 0
for:
  li $t8, 1
  sll $t1, $t0, 2
  lw $t1, astr($t1)
  subi $t2, $t9, 1
  sll $t2, $t2, 2
  while:
  bne $t8, 1, end_while
  bge $t1, 0, end_while
  ble $t9, 0, end_while
  lw $t2, st($t2)
  ble $t2, 0, end_while
  mul $t3, $t1, $t4
  blt $t2, $t3, to1
  to0:
    li $t8, 0
  j end_if
  to1:
    li $t8, 1
  end_if:
    ble $t2, $t3, if
    j end
    if:
      subi $t9, $t9, 1
      subi $t2, $t9, 1
      sll $t2, $t2, 2
    end:
  j while
  end_while:
  beq $t8, 1, if_
  j if_end
  if_:
  sll $t2, $t9, 2
  sw $t1, st($t2)
  addi $t9, $t9, 1
if_end:
addi $t0, $t0, 1
blt $t0, $s1, for

for_end:
move $s0, $t9
move $a0, $s0
li $v0, 1
syscall
li $v0, 4
la $a0, enter
syscall
ble $s0, 0, end_exam

li $t0, 0
print:
  sll $t1, $t0, 2
  lw $a0, st($t1)
  li $v0, 1
  syscall
  li $v0, 4
  la $a0, space
  syscall
addi $t0, $t0, 1
blt $t0, $s0, print

end_exam:
li $v0, 10
syscall