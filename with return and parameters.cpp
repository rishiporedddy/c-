#include<iostream>
using namespace std;
main(){
	int r;
	
	char alpha(char a,char b);
	cout<<alpha(char a,char b)<<endl;
	int fun(int x,int y);
	r=fun(6,7);
	cout<<r;
}
int fun(int d,int e){
	
	int z;
	z=d+e;
	cout<<"inside the function z is"<<z<<endl;
	return z;
}
char alpha(char a,char b){
	char a='b';
	return a;
}
