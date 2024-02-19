#include<iostream>
using namespace std;
main(){
	int a=5,b=10;
	void swap1(int *,int *);

cout<<"the values of a and b before function call"<<a<<" "<<b<<endl;;
	swap1(&a,&b);
	cout<<"the values of a and b after function call"<<a<<" "<<b<<endl;;
	
}
void swap1(int *x,int *y){
    cout<<"the values of x and y before swapping function call"<<*x<<" "<<*y<<endl;
	int z;
	z=*x;
	*x=*y;
	*y=z;
	cout<<"the values of a and b after swapping function call"<<*x<<" "<<*y<<endl;
}
