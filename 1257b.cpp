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
    ll x, y;
    while(t--){
    	cin>>x>>y;

    	if(x>=y) cout<<"YES"<<endl;
    	else if(x>3&&x<y) cout<<"YES"<<endl;
    	else if(x<=3&&y>3) cout<<"NO"<<endl;
    	else if(x==2&&y==3) cout<<"YES"<<endl;
    	else if(x==1&&y>x) cout<<"NO"<<endl;
    }



    return 0;
}