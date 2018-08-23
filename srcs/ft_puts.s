
section .text
  global ft_puts

ft_puts:
  cmp rdi, 0
  je aff_null
  xor rcx, rcx
  mov rbx, rdi

_begin_loop:
  cmp BYTE [rbx], 0
  je print
  inc rbx
  inc rcx
  jmp _begin_loop

print:
  mov rsi, rdi
  mov rdi, 1
  mov rdx, rcx; length
  mov rax, 0x2000004
  syscall

carriage_return:
  lea rsi, [rel msg]
  mov rdx, 1
  mov rax, 0x2000004
  syscall

  mov rax, 0xa
  ret

aff_null:
  mov rdi, 1
  lea rsi, [rel null]
  mov rdx, 6
  mov rax, 0x2000004
  syscall
  jmp carriage_return

section .rodata

msg:    db      `\n`
null:   db      "(null)"
