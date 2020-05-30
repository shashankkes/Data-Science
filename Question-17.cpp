#include<iostream>
using namespace std;
using std::cin;
using std::cout;
int present(int arr[],int n,int m){ 
	int count=0;
	int a[n];
	for(int i=0;i<n;i++){
		if(arr[i]==m){
			a[count]=i;
			count++;
		}
	}
	cout<<count<<endl;//print the no. of the times element present
	for(int i=0;i<count;i++){// print the positions
		cout<<a[i]+1<<" ";
	}
}
int main(){
	cout<<"Enter the no. of values in the arry: ";
	int n;
	cin>>n;//take the no. input in the array
	int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];// it take the elements of the array
	int m;
	cin>>m;// element to be searched
	present(arr,n,m);
}
