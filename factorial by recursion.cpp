#include<iostream>
using namespace std;
main(){
	int fun(int);
	int n, fact;
	n=5;
	fact= fun(n);
	cout<<fact<<endl;
	}
	int fun(int x){
		int b;
		if(x<=1){
		return 1;	
		}
		else{
			b=x*fun(x-1);
			return b;
		}
	}
