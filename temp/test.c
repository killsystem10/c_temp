#include <stdio.h>
int main() {
	unsigned char a = 0xcd;
	unsigned char b = 0xf0;
	unsigned char c;

	printf("z=%02x\n", c=a^b);
	printf("z=%02x", c=~a|b<<2);
	/*
	a = 1000000101
	b = 1001000000
	    0001000101 = a^b = 45

		0111111010 = ~a
		0100000000 = b<<2
		0111111010 = ~a|b<<2 = 1fa

	*/
}