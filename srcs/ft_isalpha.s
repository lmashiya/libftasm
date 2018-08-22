section .text
  global ft_isalpha

ft_isalpha:
    cmp     rdi,    'a'
    jge     check_lowercase
    cmp     rdi,    'A'
    jge     check_uppercase
    jmp     ret_false

check_lowercase:
    cmp     rdi,    'z'
    jle     ret_true
    jmp     ret_false

check_uppercase:
    cmp     rdi,    'Z'
    jle     ret_true
    jmp     ret_false

ret_true:
    mov     rax,    1
    ret

ret_false:
    mov     rax,    0
    ret
