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
   
    while(t--){
    	int n;
    	string s;
    	cin>>n>>s;
    	map<pair<int,int>,int> vis;
    	pair<int,int> cur={0,0};
    	vis[cur]=0;
    	int l=-1,r=n;
    	for(int i=0;i<n;i++){
    		if(s[i]=='L') cur.first--;
    		if(s[i]=='R') cur.first++;
    		if(s[i]=='U') cur.second++;
    		if(s[i]=='D') cur.second--;
    		if(vis.count(cur)){
    			if(i-vis[cur]+1<r-l+1){
    				l=vis[cur];
    				r=i;
    			}
    		}
    		vis[cur]=i+1;
    	}
    	if(l==-1) cout<<l<<endl;
    	else cout<<l+1<<" "<<r+1<<endl;
    }



    return 0;
}