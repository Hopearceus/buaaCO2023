.macro get_add(%add, %i, %j, %rank)
mul %add, %i, %rank
add %add, %j, %add
mul %add, %add, 4
.end_macro

.data
data1:.word 0:65
data2:.word 0:65
ans:.word 0:65
space:.asciiz " "
enter:.asciiz "\n"

.text
li $v0, 5
syscall
move $s0, $v0 # s0 is row

li $t0, 0 # t0 is now
mul $t8, $s0, $s0

for1:
beq $t0, $t8, end_for1
li $v0, 5
syscall
sll $t1, $t0, 2
sw $v0, data1($t1)
addi $t0, $t0, 1
j for1
end_for1:
li $t0, 0

for2:
beq $t0, $t8, work
li $v0, 5
syscall
sll $t1, $t0, 2
sw $v0, data2($t1)
addi $t0, $t0, 1
j for2

work:
li $t0, 0
li $t1, 0
li $t2, 0

loop1:
loop2:
li $t9, 0
loop3:
get_add($t3, $t0, $t2, $s0)
lw $t3, data1($t3)
get_add($t4, $t2, $t1, $s0)
lw $t4, data2($t4)
mul $t3, $t3, $t4
add $t9, $t9, $t3

addi $t2, $t2, 1
blt $t2, $s0, loop3
li $t2, 0
get_add($t3, $t0, $t1, $s0)
sw $t9, ans($t3)

addi $t1, $t1, 1
blt $t1, $s0, loop2
li $t1, 0

addi $t0, $t0, 1
blt $t0, $s0, loop1
li $t0, 0

print_1:
print_2:
get_add($t2, $t0, $t1, $s0)
lw $a0, ans($t2)
li $v0, 1
syscall
la $a0, space
li $v0, 4
syscall
addi $t1, $t1, 1
blt $t1, $s0, print_2
la $a0, enter
li $v0, 4
syscall
li $t1, 0
addi $t0, $t0, 1
blt $t0, $s0, print_1

li $v0, 10
syscall
