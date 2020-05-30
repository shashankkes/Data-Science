#include<iostream>
using namespace std;
int linear_Search(int arr[],int n,int m){
	int flag=0;
	for(int i=0;i<n;i++){
		if(arr[i]==m){
			flag=1;
			break;
		}
	}
	if(flag==1){
		std::cout<<"element is present in array "<<endl;
	}
	else
	std::cout<<"element is not present in the array"<<endl;
}
int main(){
int n;
std::cin>>n;
int a[n];
for(int i=0;i<n;i++)
std::cin>>a[i];
int m;
std::cin>>m;
linear_Search(a,n,m);
}
