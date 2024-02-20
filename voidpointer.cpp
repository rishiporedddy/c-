#include<iostream>
using namespace std;
main(){
	int a=9, b=8;
	const int *const ptr=&a;
	 a=90;
	//*ptr=&b;
	 cout<<*ptr;

}
