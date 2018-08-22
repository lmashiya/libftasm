section .text
  global ft_isdigit

ft_isdigit:

  cmp rdi, '0'
  jge checker
  jmp ret_false

checker:
  cmp rdi, '9'
  jle ret_true
  jmp ret_false

ret_true:
  mov rax, 1
  ret

ret_false:
  mov rax, 0
  ret
