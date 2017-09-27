	.file	"point.cpp"
	.section	.rodata
.LC0:
	.string	"1, 2, 3"
.LC1:
	.string	"%d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$96, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	$.LC0, -88(%rbp)
	movb	$4, -80(%rbp)
	movb	$5, -79(%rbp)
	movb	$6, -78(%rbp)
	movabsq	$3978425819141910832, %rax
	movq	%rax, -64(%rbp)
	movabsq	$3833745473465760056, %rax
	movq	%rax, -56(%rbp)
	movabsq	$3689065127958034230, %rax
	movq	%rax, -48(%rbp)
	movabsq	$3544395820347831604, %rax
	movq	%rax, -40(%rbp)
	movabsq	$4123106164818064178, %rax
	movq	%rax, -32(%rbp)
	movb	$0, -24(%rbp)
	movzbl	-64(%rbp), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	movl	$.LC1, %edi
	movl	$0, %eax
	call	printf
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.4) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
