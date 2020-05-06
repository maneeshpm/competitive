#include<bits/stdc++.h> //include stl
using namespace std;    //so that u dont have to write std:: everytime u use some std function

int main(){
    
    string s,ans="";   //s will be the input and ans will be the ans string. it is "" because we want it to be an empty string initially.
    cin>>s;            //input s
    
    for(int i = 0 ; i < s.length() ; i++){                     //we iterate over the all the elements of s. s.length() is used to find the length of a string.
        if(s[i] == '.') ans += '0';                            //u know here there is no i++ because we are covering only one character.
        else if(s[i] == '-' && s[i+1] == '.') ans += '1', i++; //her the i++ is crucial because we are covering 2 characters here. 
        else ans += '2', i++;                                  //same as above
    }
    
    cout<<ans;    //output the ans

    return 0;
}	

//TADA
