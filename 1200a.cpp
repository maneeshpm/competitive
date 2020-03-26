#include<iostream>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif


    int n,k;
    cin>>n;
    cin>>k;

    char a[n][k];
    for(int i=0;i<n;i++)
        for(int j=0;j<k;j++)
            cin>>a[i][j];
    //show the set
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<k;j++)
    //         cout<<a[i][j]<<" ";
    //     cout<<endl;
    // }

    int i=0, j=0, m=0, count =0,l=0, flag=0;
    int check[k]={};
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(j==i || j==m)
                continue;
            for(m=j;m<n;m++){
                    if(m==j || m==i)
                        continue;
                    for(l=0;l<k;l++)
                        check[l]=0;
                    // for(int l=0;l<k;l++)
                    //     cout<<a[i][l]<<" ";
                    // cout<<"-- ";
                    // for(int l=0;l<k;l++)
                    //     cout<<a[j][l]<<" ";
                    // cout<<"-- ";
                    // for(int l=0;l<k;l++)
                    //     cout<<a[m][l]<<" ";
                    // cout<<endl;
                    for(l=0;l<k;l++){
                        if(a[i][l]==a[j][l] && a[j][l]==a[m][l])
                            check[l]=1;
                        else if(a[i][l]!=a[j][l] && a[i][l]!=a[m][l] && a[j][l]!=a[m][l])
                            check[l]=1;
                        else
                            break;
                    }
                    flag=1;
                    for(l=0;l<k;l++)
                        if(check[l]==0)
                            flag=0;
                    if(flag)
                        count++;
                    
            }
        }
    }

    cout<<count;

    return 0;


}