#include<iostream>
void test(int w){
 
    if((w%2==0) && w>2)
        std::cout<<"YES";
    else
    
        std::cout<<"NO";
    
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    int w;
    std::cin>>w;
    test(w);
    return 0;
}