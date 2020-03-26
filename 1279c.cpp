#include<bits/stdc++.h>
#define ll long long
using namespace std;

void presentSort(int a[], int b[],int n, int m, int p, int i){
	
	int x=0,acnt=0;
	for(int i=p;i<m;i++){
		for(int j=0;j<i;j++){
			if(a[j]==b[i]){
				x=a[acnt];
				a[acnt]=b[i];
				a[j]=x;
				acnt++;
			}
		}
	}

}

int find(int a[], int b[],int n, int m,int c){
	int x =b[c];
	for(int i=0;i<=n;i++){
		if(a[i]==x)
			break;
	}
	present(a,b,n,m,c++,i);
	return 2*i+1;
}

int main(){
	#ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    #endif

	ll t,n,m;
	cin>>t;
	while(t>0){
		t--;
		cin>>n>>m;
		cout<<n<<" "<<m<<endl;
		int a[n]={}, b[m]={};
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<m;i++)
			cin>>b[i];
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		for(int i=0;i<m;i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}

}