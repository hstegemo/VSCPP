	.file	"Source.c"
	.def	 _main;
	.scl	2;
	.type	32;
	.endef
	.section	_TEXT,"xr"
	.globl	_main
	.align	16, 0x90
_main:                                  # @main
# BB#0:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$8, %esp
	movl	$0, %eax
	movl	$0, -4(%ebp)
	movl	%eax, -8(%ebp)          # 4-byte Spill
	calll	_try
	movl	-8(%ebp), %eax          # 4-byte Reload
	addl	$8, %esp
	popl	%ebp
	ret


