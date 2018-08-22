section .text
global ft_isalnum

extern ft_isalpha
extern ft_isdigit

ft_isalnum:
    push    rbx
    mov     rbx,    rdi
    call    ft_isalpha
    cmp     rax,    1
    je      end
    mov     rdi,    rbx
    call    ft_isdigit

end:
    pop rbx
    ret
