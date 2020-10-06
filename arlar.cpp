#include <iostream>
using namespace std;
int main(){
/*int val[3][4] = {8,16,9,52,3,15,27,6,14,25,2,10};
int a[2][4];
cout<<"Display all elements of array"<<endl;
cout<<val[0][0]<<" "<<val[0][1]<<" "<<val[0][2]<<" "<<val[0][3]<<endl;
cout<<val[1][0]<<" "<<val[1][1]<<" "<<val[1][2]<<" "<<val[1][3]<<endl;
cout<<val[2][0]<<" "<<val[2][1]<<" "<<val[2][2]<<" "<<val[2][3]<<endl;
	
	for(int i = 0;i<3;i++){
		cout<<endl;
		for (int j=0;j<4;j++)
			cout<<val[i][j]<<" ";
	}
	cout<<endl;


	for(int i = 0;i<3;i++){
		cout<<endl;
		for (int j=0;j<4;j++){
			val[i][j]=val[i][j]*2;
			cout<<val[i][j]<<" ";
		}
	}
	cout<<endl;

	for(int i=0;i<2;i++){
			cout<<"Input subtest"<<i+1<< ":";
			cin>>a[i][0];
			cout<<"Inputmindterm"<<i+1<< ":";
			cin>>a[i][1];
			cout<<"Input final"<<i+1<< ":";
			cin>>a[i][2];
		}
	cout<<"**************************"<<endl;
	cout<<"NO\t"<<"Subtest\t"<<"Midterm\t"<<"Final\t"<<"Total\t"<<endl;
	cout<<"**************************"<<endl;
	for(int i=0;i<2;i++){
			cout<<i+1<<"\t";
			int total =0;
			for(int j= 0;j<3;j++){
				cout<<a[i][j]<<"\t";
				total=total+a[i][j];
				
				
			
			}
			cout<<total<<endl;
			
	}*/
	int rows,columns;
	int m[5][5];
	cout<<"Enter number of rows :";
	cin>>rows;
	cout<<"Enter number of coiumns : ";
	cin>>columns;
	cout<<"\n Enter Matrix A: \n";
	for (int i=0;i<rows;i++){
		
		for (int j=0;j<columns;j++){
			cin>>m[i][j];
		}
		
	}
	cout<<"\n Matrix 2A: \n";
	for (int i=0;i<rows;i++){
		
		for (int j=0;j<columns;j++){
			m[i][j]=m[i][j]*2;
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n Transpose Matrix 2A: \n";
	for (int j=0;j<columns;j++){
		
		for (int i=0;i<rows;i++){
			m[i][j]=m[i][j];
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}

	return(0);
}