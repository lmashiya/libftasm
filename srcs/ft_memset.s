
section .text
  global ft_memset

ft_memset:
    cmp     rdx,    0
    je      end
    mov     r8,     rdi ; saving dest to be restored later
    mov     rax,    rsi
    mov     rcx,    rdx
    cld                 ; ++rdi at each iteration
    rep     stosb       ; *rdi = c

end:
    mov     rax,    r8
    ret
