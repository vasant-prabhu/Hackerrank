#include<iostream>
#include<conio.h>
#include<iomanip>
#include<sstream>

int main()
{
   using namespace std;
   string s1="vasant prabhu is learning c++";
   char s2[40];
   s1.copy(s2,s1.length());
   s2[s1.length()]='\0';
   //cout.setf(std::uppercase);
   //cout<<s2;
   cout<<hex<<15<<endl;
   cout<<dec;
   cout.fill('*');
   cout<<showpoint<<setw(28)<<left<<123.456<<endl;
      cout<<showpoint<<setw(28)<<right<<123.456<<endl;
         cout<<showpoint<<setw(28)<<internal<<123.456<<endl;
   stringstream os;
   cout<<endl;
   os<<"1234.34 2375.12";
   double num1,num2;
   os>>num1>>num2;
   cout<<num1<<" "<<num2;
   
   
   
   
         
   getch();
   return 0;
}


