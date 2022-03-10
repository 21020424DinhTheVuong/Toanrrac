#include<iostream>
using namespace std;

int Trisearch(int a[], int n, int x){
	int u,v,step,result=0;
	
	int l=1;  //l la diem nut tren
	int r=n;  // r la diem nut duoi
	
	while ((l<=r) && result==0){
		step =(r-l+1)/3;
		u=l+step;
		v=l+step*2;
		if(x==a[u]) result=u;
		else if(x==a[v]) result=v;
		else if(x>a[v]) l=v+1;
		else if(x>a[u]) {
			l=u+1;
			r=v-1;
		}else r=u-1;
	}
	return result;
}

const int MAX=1000;
int main(){
	int n,x;
	cin>>n;
	int a[MAX];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	cin>>x;
	cout<<Trisearch(a,n,x);
	
}
