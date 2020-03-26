#include<bits/stdc++.h>
#define ll long long int 
#define pb push_back
#define pop pop_back
#define rep(i, n) for(ll i=0;i<n;i++)
#define mp make_pair
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    #endif
    ll t, n, temp,sum=0;
    int flag=1;
    cin>>t;
    while(t--){
    	flag=1;
    	sum=0;
    	cin>>n;
    	rep(i,n){
    		cin>>temp;
    		sum+=temp%2;
    	}
    	if(sum==0 ||sum==n) flag =1;
    	else flag=0;
    	
    	if(flag) cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    }


    return 0;
}