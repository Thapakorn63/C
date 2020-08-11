#include <iostream>
using namespace std;
int mul(int,int);
void show_sum(int);
int main(){

	/*int num1,num2,sum=0;
	cout<<"Enter start num :";
	cin>>num1;
	cout<<"Enter stop number";
	cin>>num2;
	
	for(int i=1;;i++){
	if(num1<num2)
		{
	cout<<"The stop number us less thai start anmber."<<endl;
	cout<<"Enter stop number";
	cin>>num2;
		}
	      else break; //หลุดออกจากการทำงานของfor
	}
	
	
	for (int n = num1 ; n >= num2 ; n=n-2)
	{
	cout << n;
	cout << endl;
	sum = sum+n;
	cout<<"sum = "<<sum<<endl;  //เเสดงค่าsum ออกมาทุกรอบ

	}
	cout<<"sum = "<<sum<<endl;  //เเสดงค่าsum ออกมาตัวเดียว*/
	//-------------------------------------------------------------------------------
	
	
	int num1,num2;
	cout<<"Input first number";
	cin>>num1;
	cout<<"Input second number";
	cin>>num2;
	int total = mul(num1,num2);//ให้totalเก็บค่าที่คืรมาจากmul
	show_sum(total);
	

	return 0;

}
int mul(int num1, int num2 )
{	int sum=0;
	for(int n=1;n<=num2;n++)
	{
	cout<<num1<<" * " <<n<<" = "<< num1*n <<endl;
	sum = sum+(num1*n);//หาผลรวมของการคูณในเเต่ละรอบ
	}
	return(sum);
	
}
void show_sum(int sum)
{
	cout<<"sum = "<<sum<<endl;

}