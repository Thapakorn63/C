#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	string name;
	float weight;
	float high,score;
	cout<<"Enter Name :";
	cin>>name;
	cout<<"Enter Weight:";
	cin>>weight;
	cout<<"Enter High:";
	cin>>high;
	score=weight/pow(high/100,2);
	cout<<"BMI ="<<score<<endl;
	if(score>=18.50 && 22.90)
		cout<<"Normal"<<endl;
	else if (score<18.50)
		cout<<"Thin"<<endl;
	else if (score>=23&&24.90)
		cout<<"FAT 1"<<endl;
	else if (score>=25&&29.90)
		cout<<"FAT 2"<<endl;
	else
		cout<<"VERY FAT"<<endl;







	
	
	
	
	/*int num ;
	cout<<"Enter score :";
	cin>>num;
	if(num>=50)
	   cout<<"PASS"<<endl;
	else
	   cout<<"Failed"<<endl;*/



	
	
	
	

	







	return(0);
}