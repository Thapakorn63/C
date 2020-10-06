#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void display(string name[5],float price[5][3]);
float calprice(float price[5][3]);
int main(){
	string name[5];
	float price[5][3];
	for(int i=0;i<5;i++){
		cout<<"Enter Product Name : ";
		cin>>name[i];
		cout<<"\tprice : ";
		cin>>price[i][0];
	}
	calprice (price);
	
	
	display( name, price);
	return (0);
}
void display(string name[5],float price[5][3]){
	cout<<"No.\t\tProduct\t\tprice\t\tvat7%\t\tNet\n";
	for(int i=0;i<5;i++){
		cout<<i+1<<"\t\t"<<name[i]<<"\t\t" ;

	for(int j=0;j<3;j++){
		cout<<fixed<<setprecision(2)<<price[i][j]<<"\t\t";
	}
	cout<<endl;
	}
}
float calprice(float price[5][3]){
	for(int i = 0;i<5;i++){
		for(int j = 0;j<5;j++){
			price[i][1]=price[i][0]*7/100;
			price[i][2]=price[i][0]+price[i][1];
	}
	}
	return (price[5][3]);
}