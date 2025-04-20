#include <stdio.h>
int data = 100;
int main() {
	int data = 10;
	int i;
	for (i = 0;i < data;i++) {
		int data = 1;
		data += 3;
		if (data > 10) {
			break;
		}
	}
	printf("%d", data);
}