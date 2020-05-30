#include<iostream>
#define MAX 100
using namespace std;
int symmetric(int arr[][MAX],int n)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j)
			if(arr[i][j]!=arr[j][i])
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	cin>>n;
	int arr[n][MAX];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		cin>>arr[i][j];
		}
	}
	if(symmetric(arr,n)==1)
	cout<<"The given matrix is symmetric";
	else
	cout<<"The given matrix is not symmetric";
}
