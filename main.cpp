#include <iostream>
#include "string.h"

using namespace std;

int main()
{
	String str1("Hello ");
	String str2("Mister");
	String str3 = str1 + str2;
	String str4;
	String str5;

	cout << str1 << endl;
	cout << str2 << endl;
	cout << str3 << endl;

	str2 = str1;

	cout << str2 << endl;

	str3 = "okay";
	cout << str3<< endl;
	cout << "Enter string 1: ";
	cin >> str4;
	cout << "Enter string 2: ";
	cin >> str5;
	if (str4 < str5)
		cout << "string 2 longer"<<endl;
	else
		cout << "string 1 longer"<<endl;
	system("pause");

	return 0;
}
