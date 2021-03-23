from pwn import *

p = process("./a.out")
p.sendline("\x01\x02\x03\x04")
print(p.recvline())
