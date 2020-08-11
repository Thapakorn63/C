#include <iostream>
#include <string>
using namespace std;
char check_score(int);
void show_grade(char );
int main(){
	int score,total,number,std;
	char grade;
	string name;
	cout<<"Enter Number Studend : ";
	cin>>std;
	for(int i=1;i<=std;i++){
	cout<<"Enter name  "<<i<<":";
	cin>>name;
	cout<<"Enter score  "<<i<<":";
	cin>>score;
	cout<<name << " got : ";
	char grade=check_score(score);
	show_grade(grade);
	cout<<endl;
	cout<<"------------------------"<<endl;

	}

    
	return(0);

}
char check_score(int score)
{	char  grade;
	if(score>=80)grade = 'A';
		
	else if (score>=70)grade = 'B';
		
	else if (score>=60)grade = 'C';
		
	else if (score>=50)grade = 'D';
		
	else grade = 'F';
	return(grade);
}
void show_grade(char g){
	cout<<g;

}
