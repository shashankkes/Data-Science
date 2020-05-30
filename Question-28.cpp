#include<iostream>
using namespace std;
int max(int *arr, int n, int m){
	int i=0,j=0;
	int max=*((arr+i*m));
	for(i=0;i<n;i++){
		for( j=0;j<m;j++){
			if(*((arr+i*m)+j)>max)
			max=*((arr+i*m)+j);
		}
	}
	cout<<endl;
	return max;
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
	cout<<max((int *)arr, n, m);
}
