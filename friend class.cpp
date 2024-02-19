#include<iostream>
using namespace std;
class wife;
class husband{
	private:
		int handsalary, bonus, ta, salary;
		public:
			void gethusband(){
			handsalary=50000;
			bonus=5000;
			ta=1000;
			salary=handsalary+bonus+ta;
			cout<<salary<<endl;
			}
			friend class wife;
};
class wife{
	int oldsalary, total;
	public:
		void getwife(){
			oldsalary=10000;
			cout<<oldsalary<<endl;
		}
		void total(husband objh){
			total=oldsalary+ objh.salary;
			cout<<total;
		}
};

main(){
	husband objh;
	wife objwife;
       objhusband.gethusband();
	   objwife.getwife();	
	   objwife.total(objh);
}
