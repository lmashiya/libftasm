section .text
  global ft_tolower

ft_tolower:
  cmp rdi, 'A'
  jge checkTheRest
  jmp return

checkTheRest:
  cmp rdi, 'Z'
  ja return
  add rdi, 32
  jmp return

return:
  mov rax, rdi
  ret
