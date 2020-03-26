#include <iostream>
#include <math.h>
int main(){
    int x;
    std::cin>>x;
    for(;x>0;x--){
        int n;
        std::cin>>n;
        long p;
        long long po=0;
        long long pe=0;
        for(int i=0;i<n;i++){
            std::cin>>p;
            if(p%2)
                po++;
            else
                pe++;
        }
        int m;
        std::cin>>m;
        long q;
        long long qe=0;
        long long qo=0;
        for(int i=0;i<m;i++){
            std::cin>>q;
            if(q%2)
                qo++;
            else
                qe++;
        }

    std::cout<<pe*qe+po*qo<<std::endl;
    }
    return 0;
}