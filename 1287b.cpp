#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


    int n,k, ct=0;
    cin>>n;
    cin>>k;
    set<string> st;
    string m[n];
    
    int i=0,j=0,l=0;
    for(i=0;i<n;i++){
        cin>>m[i];
        
        st.insert(m[i]);
    }
    string temp=m[0];
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            
            for(l=0;l<k;l++){
                
                if(m[i][l]==m[j][l])
                    temp[l]=m[i][l];
                else if((m[i][l]=='S' && m[j][l]=='E') || (m[i][l]=='E' && m[j][l]=='S'))
                    temp[l]='T';
                else if((m[i][l]=='S' && m[j][l]=='T') || (m[i][l]=='T' && m[j][l]=='S'))
                    temp[l]='E';
                else 
                    temp[l]='S';
            }
                if(st.find(temp)!=st.end())
                    ct++;
                
            
    }

   }
    cout << ct/3; 

   
    
    return 0;


}