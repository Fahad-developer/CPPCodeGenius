#include<iostream>
using namespace std;
void myFunction(string fname)
{
	cout<< fname <<"Refrences\n";
}
int main()
{
	myFunction("lian");
	myFunction("jenny");
	myFunction("anja");
	return 0;
}
