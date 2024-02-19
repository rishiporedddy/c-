#include<iostream>
using namespace std;
class rect{
	int l, b;
	public:
	rect(){
		l=20;
		b=30;
		cout<<"ygcvhbaj"<<endl;
	}
	rect(int x, int y){
		l=x;
		b=y;
		cout<<"jaswanth puks"<<endl;
	}
	
	
		area(){
		int a;
		a=l*b;
		cout<<a<<endl;
		}
		
		rect(rect &obj){
			l=obj.l;
			b=obj.b;
		}
		
};
main(){

	rect obj1(9,8), obj(obj1);
	//obj=obj1;
	//rect obj2(10);
	obj.area();
}
