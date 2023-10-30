.macro get_add(%add, %i, %j, %rank)
mul %add, %i, %rank
add %add, %j, %add
mul %add, %add, 4
.end_macro

.macro read(%add)
li $v0, 5
syscall
move %add, $v0
.end_macro

.data
data1:.word 0:100
data2:.word 0:100
ans:.word 0:100
space:.asciiz " "
enter:.asciiz "\n"

.text
read($s0) # s0 = m1
read($s1) # s1 = n1
read($s2) # s2 = m2
read($s3) # s3 = n2
li $s4, 1
li $s5, 1
add $s4, $s0, $s4
add $s5, $s1, $s5
sub $s4, $s4, $s2 # s4 = m3
sub $s5, $s5, $s3 # s5 = n3

li $t0, 0
li $t1, 0
li $t2, 0
li $t3, 0

read1_1:
  read1_2:
    read($t9)
    get_add($t8, $t0, $t1, $s1)
    sw $t9, data1($t8)
  addi $t1, $t1, 1
  blt $t1, $s1, read1_2
  li $t1, 0
addi $t0, $t0, 1
blt $t0, $s0, read1_1
li $t0, 0

read2_1:
  read2_2:
    read($t9)
    get_add($t8, $t0, $t1, $s3)
    sw $t9, data2($t8)
  addi $t1, $t1, 1
  blt $t1, $s3, read2_2
  li $t1, 0
addi $t0, $t0, 1
blt $t0, $s2, read2_1
li $t0, 0

for_1:
  for_2:
  li $t9, 0
    for_3:
      for_4:
      get_add($t7, $t2, $t3, $s3)
      add $t8, $t0, $t2
      add $t5, $t1, $t3
      get_add($t8, $t8, $t5, $s1)
      lw $t7, data2($t7)
      lw $t8, data1($t8)
      mul $t7, $t7, $t8
      add $t9, $t9, $t7
      
      addi $t3, $t3, 1
      blt $t3, $s3, for_4
      li $t3, 0
    addi $t2, $t2, 1
    blt $t2, $s2, for_3
    li $t2, 0
  get_add($t8, $t0, $t1, $s5)
  sw $t9, ans($t8)
  addi $t1, $t1, 1
  blt $t1, $s5, for_2
  li $t1, 0
addi $t0, $t0, 1
blt $t0, $s4, for_1
li $t0, 0

print_1:
  print_2:
    li $v0, 1
    get_add($t9, $t0, $t1, $s5)
    lw $a0, ans($t9)
    syscall
    li $v0, 4
    la $a0, space
    syscall
  addi $t1, $t1, 1
  blt $t1, $s5, print_2
  li $t1, 0
  li $v0, 4
  la $a0, enter
  syscall
addi $t0, $t0, 1
blt $t0, $s4, print_1

li $v0, 10
syscall