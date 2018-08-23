section .text
global ft_memcpy

ft_memcpy:
    mov     rax,    rdi ; set return value
    mov     rcx,    rdx ; setting len iterations
    cld                 ; ++rdi and ++rsi at each iteration
    rep     movsb       ; *rdi = *rsi

end:
    ret
