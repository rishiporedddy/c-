#include<iostream>
using namespace std;
class rect{
	int l, b;
	public:
		rect(int x, int y);
			area(){
		int a;
		a=l*b;
		cout<<a<<endl;
		}
	};
	rect::rect(int x, int y) : l(x), b(y)
	{}
	main(){

	rect obj1(9,8); //obj(obj1);
	//obj=obj1;
	//rect obj2(10);
	obj1.area();
}
