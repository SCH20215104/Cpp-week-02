#include <iostream>
using namespace std;

int main()
{
	char gameboard[3][3];
	int x, y;

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			gameboard[i][j] = ' ';

	for (int k = 0; k < 9; k++)
	{
		cout << "(x,y) ÁÂÇ¥ : ";
		cin >> x >> y;
		gameboard[x][y] = (k % 2 == 0) ? 'X' : 'O';

		for (int i = 0; i < 3; i++) {
			cout << "--|---|--" << endl;
			cout << gameboard[i][0] << " | " << gameboard[i][1] << " | " << gameboard[i][2] << endl;
		}
		cout << "--|---|--" << endl;
	}
}