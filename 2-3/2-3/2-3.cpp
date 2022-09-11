#include <iostream>
using namespace std;

int main() {

	int n, m, sum = 0;
	cin >> n;
	cin >> m;
	cout << "N 값은 " << n << ", M 값은 " << m << endl;
	for (int i = 1; i <= n; i++) 
	{
		if (i % m == 0) sum += i;
	}
	cout << sum << endl;
}