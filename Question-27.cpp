#include<iostream>
using namespace std;
int row_col_max(int *arr, int n,int m){
	int i=0,j=0;
	for(i=0;i<n;i++){
		int row_max=*((arr+i*m));
		for( j=0;j<m;j++){
			cout<<*((arr+i*m)+j)<<" ";
			if(*((arr+i*m)+j)>row_max)
			row_max=*((arr+i*m)+j);
		}
		cout<<" "<<row_max;
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<m;i++){
		int col_max=*((arr+j*m));
		for(int j=0;j<n;j++){
		if(*((arr+j*m)+i)>col_max)
			col_max=*((arr+j*m)+i);
	}
	cout<<col_max<<" ";
}
}
int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	row_col_max((int *)arr,n,m);
}
