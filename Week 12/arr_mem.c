// array_mem.c
#include<stdio.h>

#define MAX_COUNT 5 // 최대 입력을 5회로 제한함

int main(void) {
	int num[MAX_COUNT],
		count = 0,
		sum = 0,
		j;

	// 최대 5회까지 입력 받고 중간에 9999에 누르면 종료
	while (count < MAX_COUNT){
		printf("숫자를 입력하세요. (9999를 누르면 종료): ");
		
		// scanf_s("%D", &num[count]);와 같은 표현
		scanf_s("%d", num + count); // *p + 1와 비슷함

		if (num[count] == 9999) break;

		count++; // 입력된 횟수를 계산함
	}

	// 입력된 횟수만큼 숫자를 출력
	for (int i = 0; i < count; i++) {
		if (i > 0) printf(" + ");
		printf("%d", num[i]);
		sum = sum + num[i];
	}
	printf(" = %d\n",sum);

	return 0;
}