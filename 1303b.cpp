#include<bits/stdc++.h>
#define ll long long
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    #endif

    ll t;
    cin>>t;
    ll n, g, b,gp,flag=1,days=0,k=0;
    while(t--){
    	n=0;
    	g=0;
    	b=0;
    	k=0;
    	gp=0;
    	flag=1;
    	days=0;
    	cin>>n>>g>>b;
    	if(n%2==0)
    		k=n/2;
    	else
    		k=n/2+1;
    	
    	if(g<k)days=k+(ceil((double)k/g)-1)*b;

    	else if(g==k)
    		days=k+(n-k);
    	else if(g>=n)
    		days=n;
    	else if(g>=k)
    		days=k+(n-k);
    	
    	if(days<n) days+=(n-days);
    	cout<<days<<endl;
    }

  

    return 0;
}