	.file	"try4.c"
	.def	 _try4;
	.scl	2;
	.type	32;
	.endef
	.section	_TEXT,"xr"
	.globl	_try4
	.align	16, 0x90
_try4:                                  # @try4
# BB#0:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$12, %esp
	leal	_y4, %eax
	leal	_x4, %ecx
	movl	$0, -4(%ebp)
	movl	%ecx, -8(%ebp)
	movl	%eax, -12(%ebp)
LBB0_1:                                 # =>This Inner Loop Header: Depth=1
	cmpl	$50, -4(%ebp)
	jge	LBB0_4
# BB#2:                                 #   in Loop: Header=BB0_1 Depth=1
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	addl	$4, %ecx
	movl	%ecx, -12(%ebp)
	movl	(%eax), %eax
	movl	-8(%ebp), %ecx
	movl	%ecx, %edx
	addl	$4, %edx
	movl	%edx, -8(%ebp)
	movl	%eax, (%ecx)
# BB#3:                                 #   in Loop: Header=BB0_1 Depth=1
	movl	-4(%ebp), %eax
	addl	$1, %eax
	movl	%eax, -4(%ebp)
	jmp	LBB0_1
LBB0_4:
	addl	$12, %esp
	popl	%ebp
	ret

	.comm	_x4,200,2               # @x4
	.comm	_y4,200,2               # @y4

