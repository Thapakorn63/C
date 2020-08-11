#include <iostream>
#include <string>
using namespace std;
int main()
{
	int number;
	string name;
	cout << "Enter string : ";
	cin >> name;
	cout << "Enter number : ";
	cin >> number;
	for (int n = 1 ; n <= number ; n++)
		cout << n << " : " << name << endl;
	cout << endl;
	return 0;
}