#include<iostream>
using namespace std;

class dis
{
public:
    int feet;
    int inch;
};

int main()
{

    class dis d1 , d2 , sum;
    d1.feet = 10;
    d1.inch = 7;
    d2.feet = 7;
    d2.inch = 7;
    sum.feet = d1.feet+d2.feet;
    sum.inch = d1.inch+d2.inch;
if(sum.inch >= 12)
 {
	sum.inch = sum.inch - 12;
	sum.feet = sum.feet + 1;
    
    } 
cout << endl << "Sum of distances = " << sum.feet << " feet  " << sum.inch << " inches";
}

