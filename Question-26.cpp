#include<iostream>
using namespace std;
int lower(int *arr, int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
		if(i<j){
			if(*((arr+i*n)+j)!=0)
			return 0;
		}
	}
	
}
return 1;
}
int upper(int *arr, int n){
	for(int i=1;i<n;i++){
		for(int j=0;j<n-1;j++){
		if(i>j){
			if(*((arr+i*n)+j)!=0)
			return 0;
		}
	}
	
}
return 1;
}
int main(){
 int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	 if(lower((int *)arr, n) and upper((int *)arr,n)==1)
	 cout<<"Lower  as well as upper triangular matrix\n";
	 else if(upper((int *)arr,n)==1)
	 cout<<"Upper tirangluar matrix\n";
	 else if(lower((int *)arr , n)==1)
	 cout<<"lower triangular matrix\n";
	 else
	 cout<<"nor upper nor lower\n";
}
