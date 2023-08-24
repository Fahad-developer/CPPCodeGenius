/*
Encapsulation is a process of combining data members and functions in a single unit called class.
This is to prevent the access to the data directly, the access to them is provided through the functions of the class.
It is one of the popular feature of Object Oriented Programming(OOPs) that helps in data hiding.
*/



# include <iostream>
# include <stdio.h>
using namespace std;
class stu
{
            // Private Scope  (all data is in private scope)
    int rno;
    char sname[15];
    float marks;

    public:     // Public Scop  (All member Function in public scope)

    void getinput(void)                 // this function is use for get input from user
    {
    cout << "Enter Student Name: ";
    gets(sname);
    cout << "Enter Student Roll No: ";
     cin >> rno ;
     fflush(stdin);
     cout<< endl;
    }

  void showdata(void)                // this function is use for show data that is store in class data members variables
  {

    cout<<"roll no--------------------------------- = " << rno <<endl;
    cout << "Name---------------------------------- = " << sname<< endl << endl;

  }
};


int main(void)
{
    class stu s1[3];

int a;
    for (a=0;a<3;a++)
    {
        cout << "********* Enter Student " << a+1 << "  Record ********" << endl << endl;
       s1[a].getinput();
    }

     for (a=0;a<3;a++)
    {
        cout << "############################# Student " << a+1 << "  Record #############################" << endl;
       s1[a].showdata();
    }

}
