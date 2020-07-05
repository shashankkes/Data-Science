#include<iostream>
using namespace std;
int insertionSort(int arr[], int n){
	int j,key;
	for(int i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		while(j>=0 and arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
int print(int arr[], int n) {
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	insertionSort(arr, n);
	print(arr,n);
}
