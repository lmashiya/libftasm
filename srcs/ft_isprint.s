section .text
  global ft_isprint

ft_isprint:

  cmp rdi, ' '
  jge checkMaxprint
  jmp ret_false

checkMaxprint:
  cmp rdi, '~'
  jle ret_true
  jmp ret_false

ret_true:
  mov rax, 1
  ret

ret_false:
  mov rax, 0
  ret
