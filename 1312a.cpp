#include<bits/stdc++.h>
#define ll long long
#define pb() pushback()
#define pop() pop_back()
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    #endif
    ll t,n,m,flag=0;
    double nangle,mangle;
    cin>>t;
    while(t--){
    	flag=0;
    	cin>>n>>m;
    		if(abs(ceil((double)n/m)-floor((double)n/m))) cout<<"NO"<<endl;
    		else cout<<"YES"<<endl;
    }
    
    


    return 0;
}