#include <stdio.h>

// 덧셈, 뺄셈, 곱셈, 나눗셈, 입력, 출력

int a, b;
char c;

// input 종범 8번째 줄
void input() {

}








// 더하기 윤선 20번째 줄
int plus() {
	printf("%d", a + b);
}








// 빼기 상호 32번째 줄
int minus() {

}












// 곱하기 종학 48번째 줄
int multiple() {

}










// 나누기 지민 62번째
int dis() {

}















// 창기 81번째 줄
void print() {

}















// main 100번째 줄
int main() {

	input(); // a, b, c : +, -, *, /
	int answer;
	if (c == "+") {
		answer = plus();
	}
	else if (c == '-') {
		answer = minus();
	}
	else if (c == '*') {
		answer = multiple();
	}
	else if (c == '/') {
		answer = dis();
	}

	print();
}