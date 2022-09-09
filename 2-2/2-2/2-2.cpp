#include <iostream>
#include <random>
using namespace std;

int main() {
	cout << "산수 문제를 자동으로 출제합니다." << endl;
	char ARITHMETIC;
	int solution, answer;
	random_device rd;
	mt19937_64 generator(rd());
	uniform_int_distribution<int> range(1, 10);

	auto Num1 = round(range(generator));
	auto Num2 = round(range(generator));

	cout << Num1 << " " << Num2 << endl;
	cout << "연산자 입력하기(+, -, *, /)" << endl;
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
	cout << "결과 입력하기" << endl;
	cin >> answer;
	if(solution==answer)
		cout << "맞았습니다" << endl;
	else
		cout << "틀렸습니다" << endl;
}