#include <stdio.h>
int fact1(int x);

void main(void) {
	int n, kai;
	printf("�K������߂����l����͂��Ă�������:");
	scanf("%d", &n);
	while (n < 0) {
		printf("0�ȏ�̒l����͂��Ă�������\n");
		printf("�K������߂����l�����:");
		scanf("%d", &n);
	}
	kai = fact2(n);
	printf("%d�̊K���%d�ł���\n", n, kai);
}
int fact2(int x) {
	printf("x = %d�̂Ƃ��̕ϐ�x�̃A�h���X:%d\n", x, &x);
	if (x <= 1) {
		return 1;
	}
	return (x * fact2(x - 1));
}