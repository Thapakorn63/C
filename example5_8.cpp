#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter number : ";
	cin >> num;
	int sum = 0;
	int value;
	for (int n = 1 ; n <= num ; n++){
	cout << "Enter integer value(" << n << ") : ";
	cin >> value;
	sum = sum + value;
	}
	cout << "\nSummation of integer " << num;
	cout << " Value = " << sum << endl;
	return 0;
}