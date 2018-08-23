section .text
  global ft_toupper

ft_toupper:
  cmp rdi, 'a'
  jge checkTheRest
  jmp return

checkTheRest:
  cmp rdi, 'z'
  ja return
  sub rdi, 32
  jmp return

return:
  mov rax, rdi
  ret
