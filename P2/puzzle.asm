.data
rt:.word 0:100
vis:.word 0:100
d:.word 0:10

.macro read(%add)
li $v0, 5
syscall
move %add, $v0
.end_macro

.macro get_add(%add, %i, %j, %m)
mul %add, %i, %m
add %add, %add, %j
sll %add, %add, 2
.end_macro

.macro push(%vis, %i, %j, %t0)
li $t9, 1
sw $t9, vis(%vis)
subi $sp, $sp, 20
sw %vis, ($sp)
sw %i, 4($sp)
sw %j, 8($sp)
sw %t0, 12($sp)
sw $ra, 16($sp)
.end_macro

.macro pop(%vis, %i, %j, %t0)
li $t9, 0
lw %vis, ($sp)
lw %i, 4($sp)
lw %j, 8($sp)
lw %t0, 12($sp)
lw $ra, 16($sp)
addi $sp, $sp, 20
sw $t9, vis(%vis)
.end_macro

.text
read($s0) # s0 = n
read($s1) # s1 = m
li $t0, 1
li $t1, 1
readFor1:
  readFor2:
    read($t2)
    get_add($t3, $t0, $t1, $s1)
    sw $t2, rt($t3)
  addi $t1, $t1, 1
  ble $t1, $s1, readFor2
  li $t1, 1
addi $t0, $t0, 1
ble $t0, $s0, readFor1
li $t0, 1

read($s2) # s2 = sx
read($s3) # s3 = sy
read($s4) # s4 = tx
read($s5) # s5 = ty

li $t0, 0
li $t1, 1
li $t2, -1
sw $t1, d
sw $t0, d+4($0)
sw $t2, d+8($0)
sw $t0, d+12($0)
sw $t0, d+16($0)
sw $t1, d+20($0)
sw $t0, d+24($0)
sw $t2, d+28($0)

move $t2, $s2
move $t3, $s3 #t2, t3 is now

li $t9, 1
get_add($t8, $t2, $t3, $s1)
sw $t9, vis($t8)

jal dfs
li $v0, 1
move $a0, $s7 #s7 is ans
syscall
li $v0, 10
syscall

dfs:
bne $t2, $s4, notEnd
bne $t3, $s5, notEnd
addi $s7, $s7, 1
jr $ra
notEnd:
li $t0, 0
for_:
  sll $t9, $t0, 3
  lw $t7, d($t9)
  lw $t8, d+4($t9)
  add $t7, $t7, $t2
  add $t8, $t8, $t3
  get_add($t6, $t7, $t8, $s1)
  lw $t5, rt($t6)
  lw $t4, vis($t6)
  ble $t7, 0, endIf
  ble $t8, 0, endIf
  bgt $t7, $s0, endIf
  bgt $t8, $s1, endIf
  beq $t4, 1, endIf
  beq $t5, 1, endIf
  push($t6, $t2, $t3, $t0)
  move $t2, $t7
  move $t3, $t8
  jal dfs
  pop($t6, $t2, $t3, $t0)
  endIf:
addi $t0, $t0, 1
blt $t0, 4, for_
jr $ra
