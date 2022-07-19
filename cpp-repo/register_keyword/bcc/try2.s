	.file	"try2.c"
	.def	 _try2;
	.scl	2;
	.type	32;
	.endef
	.section	_TEXT,"xr"
	.globl	_try2
	.align	16, 0x90
_try2:                                  # @try2
# BB#0:
	pushl	%ebp
	movl	%esp, %ebp
	leal	_y2, %eax
	leal	_x2, %ecx
	movl	%ecx, _p1
	movl	%eax, _p2
LBB0_1:                                 # =>This Inner Loop Header: Depth=1
	leal	_x2, %eax
	movl	_p1, %ecx
	subl	%eax, %ecx
	sarl	$2, %ecx
	cmpl	$50, %ecx
	jge	LBB0_3
# BB#2:                                 #   in Loop: Header=BB0_1 Depth=1
	movl	_p2, %eax
	movl	%eax, %ecx
	addl	$4, %ecx
	movl	%ecx, _p2
	movl	(%eax), %eax
	movl	_p1, %ecx
	movl	%ecx, %edx
	addl	$4, %edx
	movl	%edx, _p1
	movl	%eax, (%ecx)
	jmp	LBB0_1
LBB0_3:
	popl	%ebp
	ret

	.comm	_x2,200,2               # @x2
	.comm	_p1,4,2                 # @p1
	.comm	_y2,200,2               # @y2
	.comm	_p2,4,2                 # @p2
	.comm	_i,4,2                  # @i

