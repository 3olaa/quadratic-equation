// FCI - programming 1 -2018 - Assignment 2
// program Name: Quadratic equation.cpp
// last Modification Date: 28/2/2018
// Author1 and ID and Group: Ola Sameh El-Sayed  20170165  G7
// Author2 and ID and Group: Mostafa Khaled      20170288  G7
// Teaching Assistant: Eng.Ibrahim Zidan, Mohamed Atta
// purpose:calculate the Quadratic equation
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double a,b,c,x1,x2,discriminant,imag,real;
   int choise;

   while (true)
   { cout<< "Do you want to calculate a quadratic equation"<<endl;
   cout<< "1-yes"<<endl;
   cout<< "2-No,done"<<endl;
   cin>>choise;
   if (choise==1)
   {
       cout<< "enter the coefficients"<<endl;
       cout<<"a=";
       cin>>a;
       cout<< "b=";
       cin>>b;
       cout<<"c=";
       cin>>c;
       discriminant=(b*b)-4*a*c;
   if (a==0)
    {cout<< "undefined"<<endl;}
   else if (discriminant>0)
   {
       x1=(-b+sqrt((b*b)-4*a*c))/(2*a);
       x2=(-b-sqrt((b*b)-4*a*c))/(2*a);
       cout<< "the quadratic equation has two real root "<<endl;
       cout<< "x1= "<<x1<<endl;
       cout<< "x2= "<<x2<<endl;
   }
   else if (discriminant==0)
   {
       x1=(-b+sqrt((b*b)-4*a*c))/(2*a);
       cout<< "the quadratic equation has the same real root "<<endl;
       cout<<"x1=x2= "<< x1<<endl;
   }
    else if (discriminant<0)
    {
        real=(-b)/(2*a);
        imag=sqrt(-discriminant)/(2*a);
        cout<< "the quadratic equation has two complex roots"<<endl;
        cout<< "x1= "<<real<<"+"<<imag<<"i"<<endl;
        cout <<"x2=" <<real<<"-"<<imag<<"i"<<endl;
    }

   }



    else if (choise==2)
    {
        cout<< "Good bye"<<endl;
        return 0;
    }
   }
    return 0;
}

