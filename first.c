#include <stdio.h>
//1-100��ż��
int main() {
	int i = 0;
	int n = 0;
	for (i = 1; i < 100; i++) {
		if (i % 2 == 0) {
			printf("% d", i);
		}
	}
	return 0;
}