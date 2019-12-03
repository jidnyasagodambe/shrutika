#include<iostream>
#define MAXROW 10
#define MAXCOL 10

using namespace std;

int main()
{
		int r,c,i,j,matrix[MAXROW][MAXCOL];

	cout<<"enter number of rows";
	cin>>r;
	
	cout<<"enter number of cols";
	cin>>c;		
	cout<<"enter array elements for matrix :";
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		cin>>matrix[i][j];
			
		}
	
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		
			cout<<matrix[i][j]<<endl;
		}
	cout<<endl;
	}
	
	
	
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
		cout<<matrix[j][i];

		}
	
	cout<<endl;
	}

	
	
	return 0;

}
