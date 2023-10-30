.macro read(%add)
li $v0, 5
syscall
move %add, $v0
.end_macro

.macro getNum1(%lim, %now, %out)
li %out, 300
bge %now, %lim, if_end1
sll $t3, %now, 2
lw %out, num1($t3)
if_end1:
.end_macro

.macro getNum2(%lim, %now, %out)
li %out, 300
bge %now, %lim, if_end2
sll $t3, %now, 2
lw %out, num2($t3)
if_end2:
.end_macro

.data
num1:.word 0:65
num2:.word 0:65
space:.asciiz " "

.text
read($s0)
li $t0, 0
read1:
  read($t1)
  sll $t2, $t0, 2
  sw $t1, num1($t2)
addi $t0, $t0, 1
blt $t0, $s0, read1
li $t0, 0

read($s1)
read2:
  read($t1)
  sll $t2, $t0, 2
  sw $t1, num2($t2)
addi $t0, $t0, 1
blt $t0, $s1, read2

li $t0, 0
li $t1, 0
add $s2, $s1, $s0

for:
  # sll $t3, $t0, 2
  # sll $t4, $t1, 2
  # lw $t5, num1($t3)
  # lw $t6, num2($t4)
  getNum1($s0, $t0, $t5)
  getNum2($s1, $t1, $t6)
  bgt $t5, $t6, if
  move $a0, $t5
  addi $t0, $t0, 1
  j print
  if:
  move $a0, $t6
  addi $t1, $t1, 1
  print:
  li $v0, 1
  syscall
  li $v0, 4
  la $a0, space
  syscall
add $t2, $t0, $t1
blt $t2, $s2, for


li $v0, 10
syscall
