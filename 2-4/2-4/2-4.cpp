#include <iostream>
using namespace std;

int main() {
	int Num, sum = 0;
	cin >> Num;
	cout << 1 << " ";
	for (int i = 2; i < Num; i++) {
		if (Num % i == 0) {
			cout << "+" << " " << i << " ";
			sum += i;
		}
	}
	cout << "= " << sum+1;
}