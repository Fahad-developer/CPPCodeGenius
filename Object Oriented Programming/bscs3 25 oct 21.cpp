# include <iostream>
using namespace std;
void line(char,int);
int main(void)
{
    line('-',50);
    cout<<"\n UOB \n";
    line('#',70);
    cout<<"\n CSIT\n";
    line('@',80);
    cout<<"\n Quetta \n";
    line('+',100);
}
void line(char c,int ln)
{
  int a;
  for(a=0;a<=ln;a++)
  {
      cout <<c;
  }
}
