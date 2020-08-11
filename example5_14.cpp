#include <iostream>
#include <string>
using namespace std;
int main()
{
	char ch = ' ';
	int  Count = 0;
	string str;
	cout << "Enter string : ";
	while (ch != '.'){
		cin >> ch;
		Count++;
		str += ch;
	}
	cout << "\nLength of string(" << str << ") is ";
	cout << Count << endl;
	return 0;
}