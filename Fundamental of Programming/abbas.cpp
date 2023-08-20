#include<iostream>
#include<conio.h>
using namespace std; 
 class jamat
 {
 	public:
 	int marks;
 	int session;
 	string position;
 };
 int main(){
 
 
 jamat murtaza; 
 murtaza.marks=99;
 murtaza.session=35;
 murtaza.position="fail";
 jamat abbas; 
 abbas.marks= 01;
 abbas.session=15;
 abbas.position=" first";
 cout<<murtaza.marks<<murtaza.position<<murtaza.session<<"\n";
 cout<<abbas.marks<<abbas.position<<abbas.session<<"\n";
 return 0; 
 

}
