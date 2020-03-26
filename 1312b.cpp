#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pop pop_back
#define mp make_pair
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    #endif
    int t, temp;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<int> arr;
    	for(int i=0;i<n;i++){
   			cin>>temp;
   			arr.pb(temp);
    	}

    	sort(arr.begin(),arr.end());
    	for(auto i=arr.rbegin();i!=arr.rend();i++)
    		cout<<*i<<" ";

    	cout<<endl;
    	}
    


    return 0;
}