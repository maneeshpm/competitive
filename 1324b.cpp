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
    ll t;
    cin>>t;
    ll n, temp, max;
    int flag=0;
    while(t--){
        flag=0;
        cin>>n;
        vector<ll> vec;
        rep(i,n){
            cin>>temp;
            vec.pb(temp);
        }

        for(int i=0;i<n-1;i++){
            for(int j=i+2;j<n;j++){
                if(vec[i]==vec[j]){
                  flag=1;  
                  break;
                } 
            }
            if(flag) break;
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}