#include<iostream>
using namespace std;

void BinaryInsertionSort(int a[],int n){
	for(int i=1;i<n;i++){
		int x=a[i];
		int left=0, right=i-1;
		
		while(left<=right){
			int mid=(left+right)/2;
			if(x<a[mid]) right=mid-1;
			else left=mid+1;
		}
		for( int j= i-1;j>=left;j--){
			a[j+1]=a[j];
		}
		a[left]=x;
	}
}

const int MAX=1000;
int main(){
	int n;
	cin>>n;
	int a[MAX];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	BinaryInsertionSort(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
