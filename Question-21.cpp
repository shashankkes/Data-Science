#include<iostream>
using namespace std;
int binary(int arr[], int n, int ele){//binary search function
	int lb=0/*lower boung*/ ,ub=n/*upper bound*/;
	if(arr[lb]==ele || arr[ub]==ele)
	return 1;
	while(lb<=ub){
		int mid=(lb+(ub-1))/2;
		if(ele<arr[mid])
		ub=mid-1;
	 if(ele>arr[mid])
		lb=mid+1;
	 if(ele==arr[mid])
		return 1;
	}
}
int main(){
	int n,m;
	cin>>n;//the number of elements in the array
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];//takes the input in the array
	cin>>m;//element to be searched
	if(binary(arr,n,m)==1)
	cout<<"Number is present";
	else
	cout<<"Number is not present";
	
}
