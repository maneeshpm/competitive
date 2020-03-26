#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pop() pop_back()
using namespace std;

void show(vector<ll> vec){
	for(auto it=vec.begin();it!=vec.end();it++)
		cout<<*it<<" ";
	cout<<endl;
}


int isZero(vector<ll> vec){
	int flag=1;
	for(auto it=vec.begin();it!=vec.end();it++){
		if(*it!=0){
			flag=0;
			break;
		}
	}
	if(flag) return 1;
	else return 0;
}

void fun(vector<ll> vec,int k, int i){
	int j=0;
	if(i==-1||isZero(vec)){
		if(isZero(vec))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}else{
		for(j=0;j<=i;j++){
			if(pow(k,j)>*(vec.begin())){
				j--;
				break;
			}
			else if(pow(k,j)==*(vec.begin())){
				break;
			}
		}
		if(j==i+1)
			j--;
		*(vec.begin())-=pow(k,j);
		sort(vec.rbegin(),vec.rend());
	

	fun(vec,k,--j);
	}
	

}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    #endif
 	ll t;
 	cin>>t;
 	ll n,k,temp;
 	int flag=1;
 	while(t--){
 		flag =1;
 		cin>>n>>k;
 		vector<ll> vec;

 		for(int i=0;i<n;i++){
 			cin>>temp;
 			vec.pb(temp);
 		}
 		
 		sort(vec.rbegin(), vec.rend());

 		if(vec[0]==0){
 			flag=0;
 			cout<<"YES"<<endl;
 		} 
 		if(flag){
 			for(temp=0;temp>=0;temp++){
 				if(pow(k,temp)>vec[0]){
 					temp--;
 					break;
 				}else if(pow(k,temp)==vec[0])
 					break;
 			}
 		
 		vec[0]-=pow(k,temp);
 		sort(vec.rbegin(), vec.rend());
 		
 		fun(vec,k,--temp);
 	}
 	
 	}




    


    return 0;
}