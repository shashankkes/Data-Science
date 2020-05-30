#include<iostream>
#include<vector>
using namespace std;
int main(){
	int r,c;
		cin>>r>>c;
		std::vector<std::vector<int> > arr;
		arr.resize(r);
		for(int i=0;i<r;i++){
			arr[i].resize(c);
		}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<arr[j][i];
		}
		cout<<endl;
	}
	return 0;
	
}
