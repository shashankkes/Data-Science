#include<iostream>
using namespace std;
int swap(int *a, int *b){
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
int bubble(int arr[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++)
		if(arr[j]>arr[j+1])
		swap(&arr[j],&arr[j+1]);
	}
}
int print(int arr[], int n){
	for(int i=0;i<n;i++)
	cout<<arr[i];
}
int main(){
  int n;
  cout<<"Enter the value of the n";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  bubble(arr,n);
  print(arr,n);
}
