#include <stdio.h>

// ����, ����, ����, ������, �Է�, ���

int a, b;
int c;

// input ���� 8��° ��
void input() {
	scanf_s("%d %d %d", &a, &b, &c);
}








// ���ϱ� ���� 20��° ��
int plus() {
	printf("%d", a + b);
}








// ���� ��ȣ 32��° ��
int minus() {
	return a - b;
}












// ���ϱ� ���� 48��° ��
int multiple(int a, int b) {
	return(a * b);
}










// ������ ���� 62��°
int dis() {
	return a / b;
}















// â�� 81��° ��
void print(int answer) {
	printf("%d", answer)
}















// main 100��° ��
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