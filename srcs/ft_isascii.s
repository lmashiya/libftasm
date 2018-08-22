section .text
  global ft_isascii

ft_isascii:
  cmp rdi, '0'
  jge maxascii
  jmp ret_false

maxascii:
  cmp rdi, '127'
  jle ret_true
  jmp ret_false

ret_true:
  mov rax, 1
  ret

ret_false:
  mov rax, 0
  ret
