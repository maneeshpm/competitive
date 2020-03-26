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
    int min=0,n=0,flag,flag2=0,count, temp=0;

    while(t--){
    	string s;
    	cin>>s;
    	n=s.length();
    	count=0;
    	flag=0;
    	temp=0;
    	
    	for(int i=0;i<n;i++){
    		
    		if(i>0)if(s[i]=='0'&&s[i-1]=='1'){
    			flag=1;
    			count++;
    			continue;
    		}
    		if(flag&&s[i]=='0')
    			count++;
    		if(i>0)if(s[i]=='1'&&s[i-1]=='0'){
    			temp+=count;
    			count=0;
    			flag=0;
    		}
    	}

    	cout<<temp<<endl;
    

    }
    return 0;
}