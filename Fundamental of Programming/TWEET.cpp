#include<iostream>
#include<conio.h>
using namespace std; 
 class employee 
 {
 	 private:  // access modifier 
 	 	int salary ; // all data at thr end of data is saved here 
 	public :
 		void setsalary(int s) // set salary meeds to be publc 
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
cout<<"ABBAS SALARY RS:"<<myobj.getsalary();
return 0; 
}
//ENCAPSULATION MEANS TO HIDE SENSITUIVE DATA IS HIDDEN USERS, TO AVHIEVE THIS YOU MUST DECLARE CLASS VARIABLES / ATTRIBUTES ASS PRIVate 
// get set methode means getiing a date and setting a data 
