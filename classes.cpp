#include<iostream>
using namespace std;
class addition{
	public:
		int fun(int c,int d){
			int z;
			z=c+d;
			
			return z;
		}
};
main()
{ 
addition obj;
	cout<<obj.fun(2,3);
	
}
