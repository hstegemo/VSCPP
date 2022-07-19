	.file	"try5.c"
	.def	 _try5;
	.scl	2;
	.type	32;
	.endef
	.section	_TEXT,"xr"
	.globl	_try5
	.align	16, 0x90
_try5:                                  # @try5
# BB#0:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	leal	_y5, %eax
	leal	_x5, %ecx
	movl	%ecx, -4(%ebp)
	movl	%eax, -8(%ebp)
LBB0_1:                                 # =>This Inner Loop Header: Depth=1
	leal	_x5, %eax
	addl	$200, %eax
	cmpl	%eax, -4(%ebp)
	jae	LBB0_3
# BB#2:                                 #   in Loop: Header=BB0_1 Depth=1
	movl	-8(%ebp), %eax
	movl	%eax, %ecx
	addl	$4, %ecx
	movl	%ecx, -8(%ebp)
	movl	(%eax), %eax
	movl	-4(%ebp), %ecx
	movl	%ecx, %edx
	addl	$4, %edx
	movl	%edx, -4(%ebp)
	movl	%eax, (%ecx)
	jmp	LBB0_1
LBB0_3:
	addl	$8, %esp
	popl	%ebp
	ret

	.comm	_x5,200,2               # @x5
	.comm	_y5,200,2               # @y5

