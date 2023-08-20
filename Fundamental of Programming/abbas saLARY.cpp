#include<iostream>
#include<conio.h>
using namespace std; 
 class employee 
 {
 	 private:
 	 	int salary ; 
 	public :
 		void setsalary(int s)
 		{ 
 		salary=s; 
		 }
		 int getsalary ()
		 {
		return salary; 
		 }
 };
 int main()
{ 
employee myobj; 
myobj.setsalary(2);
cout<<myobj.getsalary();
return 0; 
}
