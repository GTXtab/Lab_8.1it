#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int Count(char* str) {
	if (strlen(str) < 3)
		return 0;
	int k = 0;
	for (int i = 1; str[i + 1] != 0; i++) 
		if (str[i - 1] == ',' && str[i + 1] == '-')
			k++;
	return k;
}

char* Change(char* str) {
	size_t len = strlen(str);
	if (len < 3)
		return str;

	char* tmp = new char[len * 2 + 1];
	char* t = tmp;
	size_t i = '\0';

	while (i < len - 2) {
		if (str[i] == ',' && str[i + 2] == '-') { 
			strcat(t, "**");
			t += 2;
			i += 3;
		}
		else {
			*t++ = str[i++];
			*t = '\0';
		}
	}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';

	strcpy(str, tmp);
	delete[] tmp;

	return str;
}

int main() {
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << Count(str) << " groups of ', -'" << endl;
	Change(str);
	cout << "Modified string: " << str << endl;
	return 0;
}
