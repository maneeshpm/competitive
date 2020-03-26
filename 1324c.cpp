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
    string s;
    ll firR,maxR,lasR;
    while(t--){
    	firR=-1;
    	maxR=-1;
    	lasR=-1;
    	cin>>s;
    	
    	if(s=="R") cout<<1<<endl;
    	else if(s=="L") cout<<2<<endl;
    	else{
    		for(int i=0;i<s.length();i++){
    			if(s[i]=='R'){
    				firR=i+1;
    				break;
    			}
    		}

    		for(int i=0;i<s.length()-1;i++){
				if(s[i]=='R'){
    				for(int j=i+1;j<s.length();j++){
    					if(s[j]=='R'){
    						if((j-i)>maxR)
    							maxR=(j-i);
    						break;
    					}
    				}
    			}
    		}
    		for(int i=s.length()-1;i>=0;i--){
    			if(s[i]=='R'){
    				lasR=s.length()-i;
    				break;
    			}	
    		}
    		if(firR==-1) cout<<s.length()+1<<endl;
    		else cout<<max(max(lasR,firR),maxR)<<endl;
    	}
    }


    return 0;
}