
section .text
  global ft_bzero

ft_bzero:

  loopChanger:
    cmp rsi, 0
    je end
    mov byte[rdi],0
    inc rdi
    dec rsi
    jmp loopChanger

end:
  ret
