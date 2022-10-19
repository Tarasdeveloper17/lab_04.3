#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
 double a = 0.0, b = 0.0, c = 0.0, x , xp, xk, dx, F;
 cout << "xp = "; cin >> xp;
 cout << "xk = "; cin >> xk;
 cout << "dx = "; cin >> dx;
 cout << "a = "; cin >> dx;
 cout << "b = "; cin >> dx;
 cout << "c = "; cin >> dx;
 cout << fixed;
 cout << "---------------------------" << endl;
 cout << "|" << setw(5) << "x" << " |"
 << setw(7) << "F" << " |" << endl;
 cout << "---------------------------" << endl;
    
 x = xp;
 
while (x <= xk)

 {
  
    if (x < 0 && b!=0)
     {
       F = a *(x*x) + b;
     }
    else if (x > 0 && b == 0)
     {
       F = (x - a) / (x - c);
     }
    else
    {
       F = x / c;
    }
    
 cout << "|" << setw(7) << setprecision(2) << x
 << " |" << setw(10) << setprecision(3) << F
 << " |" << endl;
     
 x += dx;
 }
 cout << "---------------------------" << endl;
 return 0;
}

