	.file	"pre.c"
	.def	__main;	.scl	2;	.type	32;	.endef
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movq	$0, -16(%rbp)
	movw	$0, -8(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	addl	$1, -4(%rbp)
.L2:
	cmpl	$9, -4(%rbp)
	jbe	.L3
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 5.1.0"
