#include <iostream>
long long fib(int n){
    if(n==1)
        return 1;
    else if(n==2)
        return 1;
    long long soll=fib(n-1)+fib(n-2);
    return soll;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    
    #endif
    
    int x;
    std::cin>>x;
    std::cout<<fib(x);
    
    return 0;
}