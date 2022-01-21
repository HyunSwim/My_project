#include <stdio.h>

// 덧셈, 뺄셈, 곱셈, 나눗셈, 입력, 출력

int a, b;
int c;

// input 종범 8번째 줄
void input() {
	scanf_s("%d %d %d", &a, &b, &c);
}








// 더하기 윤선 20번째 줄
int plus() {
	printf("%d", a + b);
}








// 빼기 상호 32번째 줄
int minus() {
	return a - b;
}












// 곱하기 종학 48번째 줄
int multiple(int a, int b) {
	return(a * b);
}










// 나누기 지민 62번째
int dis() {
	return a / b;
}















// 창기 81번째 줄
void print(int answer) {
	printf("%d", answer)
}















// main 100번째 줄
int main() {

	input(); // a, b, c : +, -, *, /
	int answer;
	if (c == 1) {
		answer = plus();
	}
	else if (c == 2) {
		answer = minus();
	}
	else if (c == 3) {
		answer = multiple();
	}
	else if (c == 4) {
		answer = dis();
	}

	print();
}