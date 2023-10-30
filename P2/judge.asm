.data
words:.byte 25

.text
li $v0, 5
syscall
move $s0, $v0

li $t0, 0
for:
li $v0, 12
syscall
sb $v0, words($t0)
addi $t0, $t0, 1
blt $t0, $s0, for

li $t0, 0
for_2:
lb $t1, words($t0)
sub $t2, $s0, $t0
subi $t2, $t2, 1
lb $t2, words($t2)
bne $t1, $t2, notEqual
addi $t0, $t0, 1
blt $t0, $s0, for_2

li $a0, 1
li $v0, 1
syscall
li $v0, 10
syscall

notEqual:
li $a0, 0
li $v0, 1
syscall
li $v0, 10
syscall