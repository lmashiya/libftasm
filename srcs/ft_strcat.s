section .text
  global ft_strcat

ft_strcat:
    mov     rax,    rdi
    cmp     rdi,    0
    je      return
    cmp     rsi,    0
    je      return

l1:
    cmp     byte [rdi], 0
    je      cat
    inc     rdi
    jmp     l1

cat:
    cmp     byte [rsi], 0
    je      end
    mov     r8, [rsi]
    mov     byte [rdi], r8b
    inc     rdi
    inc     rsi
    jmp     cat

end:
    mov     byte [rdi], 0
return:
  ret
