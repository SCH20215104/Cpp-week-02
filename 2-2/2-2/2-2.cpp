#include <iostream>
#include <random>
using namespace std;

int main() {
	cout << "��� ������ �ڵ����� �����մϴ�." << endl;
	char ARITHMETIC;
	int solution, answer;
	random_device rd;
	mt19937_64 generator(rd());
	uniform_int_distribution<int> range(1, 10);

	auto Num1 = round(range(generator));
	auto Num2 = round(range(generator));

	cout << Num1 << " " << Num2 << endl;
	cout << "������ �Է��ϱ�(+, -, *, /)" << endl;
	cin >> ARITHMETIC;
	switch (ARITHMETIC) {
	case '+':
		solution = Num1 + Num2;
		break;
	case '-':
		solution = Num1 - Num2;
		break;
	case '*':
		solution = Num1 * Num2;
		break;
	case '/':
		solution = Num1 / Num2;
		break;
	}
	cout << "��� �Է��ϱ�" << endl;
	cin >> answer;
	if(solution==answer)
		cout << "�¾ҽ��ϴ�" << endl;
	else
		cout << "Ʋ�Ƚ��ϴ�" << endl;
}