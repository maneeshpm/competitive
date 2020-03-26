#include<bits/stdc++.h>
#define ll long long
using namespace std;

void swapab(ll* a, ll* b){
	ll c =*a;
	*a=*b;
	*b=c;
}




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    #endif
    ll t;
    cin>>t;
    ll n,x,a,b,max=0;
    while(t--){
    	max=0;
    	cin>>n>>x>>a>>b;

    	if(b<a) swapab(&a, &b);

    	while(x&&a>1){
    		a--;
    		x--;
    	}

    	while(x&&b<n){
    		b++;
    		x--;
    	}

    	max=b-a;
    	cout<<max<<endl;
    }


    return 0;
}