#include <stdio.h>

// ����, ����, ����, ������, �Է�, ���

int a, b;
char c;

// input ���� 8��° ��
void input() {

}








// ���ϱ� ���� 20��° ��
int plus() {

}








// ���� ��ȣ 32��° ��
int minus() {
	return a - b;
}












// ���ϱ� ���� 48��° ��
int multiple() {

}










// ������ ���� 62��°
int dis() {

}















// â�� 81��° ��
void print() {

}















// main 100��° ��
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