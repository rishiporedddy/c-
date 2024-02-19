#include<iostream>
using namespace std;
void some(int );
void some(int a, int b);
void some(double, double);
void some(char, char, int);
main(){
	some(2);
	some(2,3);
	some(10.1,9.5);
	some('a','b',5);
}
void some(int a){
	cout<<a<<endl;
}
void some(int a, int b){
	cout<<a<<" "<<b<<endl;
}
void some(double a, double b){
	cout<<a<<" "<<b<<endl;
}
void some(char a, char b, int c){
	cout<<a<<" "<<b<<" "<<c;
}
