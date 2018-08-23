
section .text
  global ft_strlen

ft_strlen:

  push  rcx
  xor   rcx, rcx

strlenNextChar:

  cmp   [rdi], byte 0
  jz    strlen_null
  inc   rcx
  inc   rdi

  jmp   strlenNextChar

strlen_null:

  mov   rax, rcx
  pop   rcx

  ret
