#include<iostream>
using namespace std;

int main(){

int a=1;
int b=1;
cout<<a<<'\n';
cout<<b<<'\n';

for(int i=1;i<=100;i++){
	int c=a+b;
	cout<<c<<'\n';
	a=b;
	b=c;
}

return 0;
}