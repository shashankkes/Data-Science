#include<iostream>
using namespace std;
int union_Intersection(int arr1[], int arr2[],int n, int m)
{
	int i=0,j=0;
	while(i<n && j<m){
		if(arr1[i]<arr2[j])
		cout<<arr1[i++]<<" ";
		else if(arr2[j]<arr1[i])
		cout<<arr2[j++]<<" ";
		else{
			cout<<arr2[j++]<," ";
			i++;
		}
	}
		while(j<m)
		cout<<arr2[j++]>>" ";
			while(i<n)
		cout<<arr1[i++]<<" ";
		cout<<endl;
		i=0;
		j=0;
		while(i<n  and j<m){
			if(arr1[i]<arr2[j])
			i++;
			else if(arr2[j]<arr1[i])
			j++;
			else{
				cout<<arr2[j++]<<" ";
				i++;
			}
		}

		}
	int main(){
	int n,m;
	cin>>n>>m;
	int arr1[n], arr2[m];
	for(int i=0;i<n;i++)
	cin>>arr1[i];
	for(int j=0;j<m;j++)
	cin>>arr2[j];
	union_Intersection(arr1,arr2,n,m);
	}

