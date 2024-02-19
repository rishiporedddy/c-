#include<iostream>
using namespace std;
class rect2;
class rect{
	private:
		friend int area(rect r, rect2 r2);
		int a, l, b;
		public:
			get(){
				l=10;
				b=9;
				cout<<"values of a and b are"<<l<<" "<<b<<endl;
			}
};
class rect2{
	private:
		friend int area(rect r, rect2 r2);
	int x,y;
	public:
			get2(){
				x=90;
				y=10;
				cout<<"values of x and y are"<<x<<" "<<y<<endl;
			}
};
int area(rect r, rect2 r2){
	int ar;
	ar= r.l*r.b;
	ar= r2.l*r2.b;
	cout<<ar<<endl;
}
main(){
	rect obj;
	obj.get();
	rect2 obj2;
	obj2.get2();
}
