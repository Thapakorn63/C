#include <iostream>
#include <string>
using namespace std;
int main()
{
	
	char menu;
	string username ,password,user,pass;
	cout<<"Please Enter Menu \n";
	cout<<"----------------------\n";
	cout<<"1. Register "<<endl;
	cout<<"2. Login "<<endl;
	cout<<"Q. Exit "<<endl;

	cin>>menu;
  	do
	{ if(menu=='1')
	{cout<<"Enter Username"<<endl;
	 cin>>username;
	 cout<<"Enter Password ";
	 cin>>password;
	
	
	}
	else if(menu=='2')
	{
	 cout<<"Input Username";
	 cin>>user;
	 cout<<"Input Password ";
	 cin>>pass;
	 if(username==user&&password==pass){
		cout<<"Username and password"<<endl;
	 
	 }
	}
	else cout<<"*****Wrong Menu*****"<<endl;
	cout<<"Select :";
	cin>>menu;

	}while(menu!='Q');



	return 0;
}