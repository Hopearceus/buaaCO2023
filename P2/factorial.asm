.data
ans:.word 0:1010
.text
li $v0, 5
syscall
move $s0, $v0

li $t0, 1
li $t6, 10
sw $t0, ans+4
li $s1, 1
beq $s0, 0, print

for1:
  li $t1, 1
  for2:
    sll $t2, $t1, 2
    lw $t3, ans($t2)
    mul $t3, $s0, $t3
    add $t3, $t3, $t4
    # blt $t3, 10, endIff
    div $t3, $t6
    mfhi $t3
    mflo $t4
    blt $t1, $s1, endIff
    bgt $t1, $s1, do
    bgt $t4, 0, do
    blt $t3, 10, endIff
    # div $t3, $t6
    # mfhi $t3
    # mflo $t4
    do:
    addi $s1, $s1, 1
    endIff:
    sw $t3, ans($t2)
  addi $t1, $t1, 1
  ble $t1, $s1, for2
li $t4, 0
subi $s0, $s0, 1
bgt $s0, 0, for1

print:
  sll $t1, $s1, 2
  lw $a0, ans($t1)
  li $v0, 1
  syscall
subi $s1, $s1, 1
bgt $s1, 0, print

end:
li $v0, 10
syscall
