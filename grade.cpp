#include <iostream>
using namespace std;
int main()
{
	float first,second,third,mid_team,final,sum,score;
	cout<<"==========QUIZZES=========\n";
	cout<<"Enter first quizz  (10): ";
	cin>>first;
	cout<<"Enter second quizz (10): ";
	cin>>second;
	cout<<"Enter third quizz  (10): ";
	cin>>third;
	cout<<"==========MID-TERM=========\n";
	cout<<"Enter mid-term quizz (40): ";
	cin>>mid_team;
	cout<<"==========FINAL============\n";
	cout<<"Enter final quizz (50): ";
	cin>>final;
	sum = (first+second+third)/3;
	cout<<"Quizz Total :"<<sum<<endl;
	cout<<"Mid Term :"<<mid_team<<endl;
	cout<<"Final :"<<final<<endl;
	score=final+mid_team+sum;
	cout<<"Total :"<<score<<endl;
	cout<<"Your score is"<<(score>=50?"PASS":"FALL")<<endl;







	return(0);	
}
