#include<iostream>
using namespace std;
int selection(int arr[], int n){
	int min;
	for(int i=0;i<n-1;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min])
			min=j;
		}
		int temp=arr[min];
		arr[min]=arr[i];
		arr[i]=temp;
	}
}
int print(int arr[], int n) {
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
  int main(){
  int n;
  cout<<"Enter the value of the n";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  selection(arr,n);
  print(arr,n);
}
