# include <iostream>
# include <conio.h>

using namespace std;
class stu
{

int rno;
float marks;
char sname[15];
public:
    void getdata(void)
    {   cout << "enter Student Name";
        gets(sname);
        cout << "enter roll no";
        cin >> rno;
        cout << "enter Marks";
        cin >> marks;
        fflush(stdin);

    }

    void showdata(void)
    {
        cout << "rno=" << rno << endl;
        cout << "Student Name=" << sname;
        cout << "Marks=" << marks << endl;

    }
};

int main(void)
{
    class stu s[3];
    int a;
    for (a=0;a<3;a++)
    {
       s[a].getdata();
    }
    for (a=0;a<3;a++)
    {
     s[a].showdata();
    }




}
