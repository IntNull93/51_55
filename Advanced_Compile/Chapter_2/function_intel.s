	.file	"function.c"
	.intel_syntax noprefix
	.globl	nCompletionStatus
	.bss
	.align 4
	.type	nCompletionStatus, @object
	.size	nCompletionStatus, 4
nCompletionStatus:
	.zero	4
	.text
	.globl	add
	.type	add, @function
add:
.LFB0:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	sub	esp, 20
	fld	DWORD PTR [ebp+8]
	fadd	DWORD PTR [ebp+12]
	fstp	DWORD PTR [ebp-4]
	mov	eax, DWORD PTR [ebp-4]
	mov	DWORD PTR [ebp-20], eax
	fld	DWORD PTR [ebp-20]
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	add, .-add
	.globl	add_and_multiply
	.type	add_and_multiply, @function
add_and_multiply:
.LFB1:
	.cfi_startproc
	push	ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	mov	ebp, esp
	.cfi_def_cfa_register 5
	sub	esp, 28
	mov	eax, DWORD PTR [ebp+12]
	mov	DWORD PTR [esp+4], eax
	mov	eax, DWORD PTR [ebp+8]
	mov	DWORD PTR [esp], eax
	call	add
	fstp	DWORD PTR [ebp-4]
	fld	DWORD PTR [ebp-4]
	fld	DWORD PTR .LC1
	fmulp	st(1), st
	fstp	DWORD PTR [ebp-4]
	mov	eax, DWORD PTR [ebp-4]
	mov	DWORD PTR [ebp-20], eax
	fld	DWORD PTR [ebp-20]
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	add_and_multiply, .-add_and_multiply
	.section	.rodata
	.align 4
.LC1:
	.long	1077936128
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
