#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pop pop_back
#define rep(i,a) for(int i=1;i<a;i++)
using namespace std;

void show(vector<ll> arr){
	for(auto it=arr.begin();it!=arr.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    #endif
    ll t;
    cin>>t;
    ll n, temp, sum=0;
    while(t--){
    	sum=0;
        cin>>n;
        vector<ll> a;
        for(int i=0;i<n;i++){
        	cin>>temp;
        	a.pb(temp%2);
        	sum+=temp%2;
        }
        if(sum==0) cout<<"NO"<<endl;
        else if(sum==n && !(n%2)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

     
    }


    return 0;
}