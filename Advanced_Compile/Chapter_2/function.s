	.file	"function.c"
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
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$20, %esp
	flds	8(%ebp)
	fadds	12(%ebp)
	fstps	-4(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, -20(%ebp)
	flds	-20(%ebp)
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
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$28, %esp
	movl	12(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	add
	fstps	-4(%ebp)
	flds	-4(%ebp)
	flds	.LC1
	fmulp	%st, %st(1)
	fstps	-4(%ebp)
	movl	-4(%ebp), %eax
	movl	%eax, -20(%ebp)
	flds	-20(%ebp)
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
