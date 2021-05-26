#include<cstdio>
int main() {
	int i, j, f;
	for (i = 2;i <=100;i++) {
		int f = 1;
		for (j = 2; j <= i / 2;j++) {
			if (i % j == 0) {
				f = 0;
				break;
			}
		}
		if (f == 1) {
			printf("%d\n", i);
		}

	}
	return 0;
}