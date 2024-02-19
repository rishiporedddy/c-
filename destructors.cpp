#include<iostream>
using namespace std;
class abc{
 int a, b;
	public:	abc(int x, int y){
		cout<<"const"<<endl;
	}
	~abc(){
		cout<<"destructor"<<endl;
	}
	
};
main(){
	abc obj(1,2), obj2(3,4);
	
}
