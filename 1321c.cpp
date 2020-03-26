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
    ll n;
    string s;
    cin>>n>>s;
    ll count=0;

    for(char c='z';c>='a';c--){
    	for(ll i=0;i<s.length();i++){
    		if(s.length()==1) break;
    		if(c!=s[i]) continue;
    		if(i==0 && s[1]==(c-1)){
    			s.erase(s.begin()+0);
    			// cout<<s<<endl;
    			count++;
    			i=-1;
    		}else if(i==(s.length()-1) && s[i-1]==(c-1)){
    			s.erase(s.begin()+s.length()-1);
    			count++;
    			// cout<<s<<endl;
    			i=-1;
    		}else if(s[i-1]==(c-1)||s[i+1]==(c-1)){
    			s.erase(s.begin()+i);
    			count++;
    			// cout<<s<<endl;
    			i=-1;
    		}
    	}
    }

    cout<<count;
    return 0;
}