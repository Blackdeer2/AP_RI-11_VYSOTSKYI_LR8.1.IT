// Дано літерний рядок, який містить послідовність символів s[0], ..., s[n], ... 
// 
// 1.   Вияснити, чи є серед цих символів пара сусідніх букв “no” або “on”.
// 
// 2.   Замінити кожну пару сусідніх букв “no” трійкою зірочок “***”.

#include <iostream>

using namespace std;

bool findOut(char* str) {
	bool t = false;
	for (int i = 0; str[i + 1] != 0; i++) {
		if ((str[i] == 'n' && str[i + 1] == 'o') || (str[i] == 'o' && str[i + 1] == 'n')) {
			t = true;
		}
	}
	return t;
}
char* Change(char* str) {

	size_t len = strlen(str);
	if (len < 3)
		return str;
	char* tmp = new char[len * 3/ 2 + 1];
	char* t = tmp;   
	tmp[0] = '\0';
	size_t i = 0;
	while (i < len && str[i] != 0) {
		if (str[i] == 'n' && str[i + 1] == 'o') {
			strcat_s(t, sizeof(t), "*** ");
			t += 3;
			i += 2;
		}
		else {
			*t++ = str[i++];
			*t = '\0';
		}
	}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	return tmp;
}

int main()
{
	//char str[101];
	//cout << "Enter string:" << endl;
	//cin.getline(str, 100);
	char str[]{ "I don't know what I know" };
	cout << str << endl;

	if (findOut(str) == true) {
		cout << " IS a pair of adjacent letters 'no' or 'on'" << endl;
	}
	else {
		cout << " NO a pair of adjacent letters 'no' or 'on'" << endl;
	}
	char* dest = new char[151];   
	dest = Change(str);
	cout << dest << endl;

	return 0;
}