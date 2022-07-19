	.file	"try.c"
	.def	 _try;
	.scl	2;
	.type	32;
	.endef
	.section	_TEXT,"xr"
	.globl	_try
	.align	16, 0x90
_try:                                   # @try
# BB#0:
	pushl	%ebp
	movl	%esp, %ebp
	movl	$0, _i
LBB0_1:                                 # =>This Inner Loop Header: Depth=1
	cmpl	$50, _i
	jge	LBB0_4
# BB#2:                                 #   in Loop: Header=BB0_1 Depth=1
	movl	_i, %eax
	movl	_y(,%eax,4), %eax
	movl	_i, %ecx
	movl	%eax, _x(,%ecx,4)
# BB#3:                                 #   in Loop: Header=BB0_1 Depth=1
	movl	_i, %eax
	addl	$1, %eax
	movl	%eax, _i
	jmp	LBB0_1
LBB0_4:
	popl	%ebp
	ret

	.comm	_i,4,2                  # @i
	.comm	_y,200,2                # @y
	.comm	_x,200,2                # @x

