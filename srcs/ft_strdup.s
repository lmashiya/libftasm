section .text
global ft_strdup

extern  malloc
extern  ft_strlen

ft_strdup:
    cmp     rdi,    0       ; if str is null
    je      ret_null        ; return null
    push    rbx             ; storing str in a non volatile
    mov     rbx,    rdi
    call    ft_strlen

alloc:
    add     rax,    1       ; For the null termination
    mov     rdi,    rax     ; Passes the len as the first malloc argument
    push    rdi
    call    malloc
    pop     rdi
    cmp     rax,    0       ; malloc failed
    je      end

copy:
    mov     rcx,    rdi     ; set rep loop count
    mov     rdi,    rax     ; set malloc return address as destination
    mov     rsi,    rbx     ; set str as source
    cld
    rep     movsb

end:
    pop     rbx
    ret

ret_null:
    mov     rax,    0
    ret
