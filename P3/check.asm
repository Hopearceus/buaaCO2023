order:
ble $a0, $a1, next
move $t0, $a1
move $a1, $a0
move $a0, $t0
next:
ble $a1, $a2, done
move $t0, $a2
move $a2, $a1
move $a1, $t0
ble $a0, $a1, done
move $t0, $a1
move $a1, $a0
move $a0, $t0
done:jr $ra