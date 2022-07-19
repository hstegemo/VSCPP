	.file	"try3.c"
	.def	 _try3;
	.scl	2;
	.type	32;
	.endef
	.section	_TEXT,"xr"
	.globl	_try3
	.align	16, 0x90
_try3:                                  # @try3
# BB#0:
	pushl	%ebp
	movl	%esp, %ebp
	leal	_y3, %eax
	leal	_x3, %ecx
	movl	$0, _i
	movl	%ecx, _p1
	movl	%eax, _p2
LBB0_1:                                 # =>This Inner Loop Header: Depth=1
	cmpl	$50, _i
	jge	LBB0_4
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
# BB#3:                                 #   in Loop: Header=BB0_1 Depth=1
	movl	_i, %eax
	addl	$1, %eax
	movl	%eax, _i
	jmp	LBB0_1
LBB0_4:
	popl	%ebp
	ret

	.comm	_i,4,2                  # @i
	.comm	_x3,200,2               # @x3
	.comm	_p1,4,2                 # @p1
	.comm	_y3,200,2               # @y3
	.comm	_p2,4,2                 # @p2

