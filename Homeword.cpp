#include <iostream>
#include <iomanip>
void display(int salary[],int number);
int cal_bonus(int salary);
using namespace std;
int main(){
	int number;
	
	cout<<"Enter Number of person : ";
	cin>>number;
	int *salary = new int[number];
	for(int i=0;i<number;i++){
		cout<<"Enter the salary  "<<i+1<<" :";
		cin>>salary[i];}
	 display(salary,number);

	return(0);
}
void display(int salary[],int number){
	int bonus;
	cout<<setw(70)<<setfill('-')<<" "<<endl;
	cout<<"There are "<<number<< " persons ."<<endl;
	for(int i=0;i<number;i++){
		bonus=cal_bonus(salary[i]);
		cout<<"The Salary for person  "<<i+1<<"= "<<salary[i]<<"and Bonus ="<<bonus<<endl;
		
		
}
	cout<<setw(70)<<setfill('-')<<" "<<endl;
}
int cal_bonus(int salary)
{
	int bonus = 0;
	bonus = salary*2;
	return (bonus);
}