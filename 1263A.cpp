#include<iostream>

int sp(int r, int g, int b){
    int count =0;
    if(r>=g && r>=b){
        if(g<=b){
            count = g;
            r=r-g;
        }
        if(b<=r){
            count+=b;
        }else if(r<=b){
            count+=r;
        }
    }
    if(g>=r && g>=b){
        if(r<=b){
            count = r;
            g=g-r;
        }
        if(b<=g){
            count+=b;
        }else if(g<=b){
            count+=g;
        }
    }
    if(b>=g && b>=r){
        if(g<=r){
            count = g;
            b=b-g;
        }
        if(r<=b){
            count+=r;
        }else if(b<=r){
            count+=b;
        }
    }
    return count;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r", stdin);
        freopen("output.txt","w", stdout); 
    #endif
    int x;
    int r,b,g;
    std::cin>>x;
    while(x){
        std::cin>>r;
        std::cin>>b;
        std::cin>>g;
        std::cout<<sp(r,b,g);

    }
    return 0;
}