#include <iostream>
using namespace std;

int main() {
	char Alphabet;
	int vowel = 0, consonants = 0;

	cout << "영문자를 입력하고 Ctrl+Z를 치세요" << endl;

	while (cin >> Alphabet) {
		switch (Alphabet) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			vowel++;
			break;
		default:
			consonants++;
			break;
		}
	}
	cout << "모음 : " << vowel << endl;
	cout << "자음 : " << consonants << endl;
}