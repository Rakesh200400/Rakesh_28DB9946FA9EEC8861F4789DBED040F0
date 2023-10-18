#include<iostream>
using namespace std;
class arithmetic
{
int a,b,c;
public:
   void getdata();
   int add();
   int sub();
   int mul();
   int division();
   int modulodivision();
   void display();
};
void arithmetic::getdata()
{
cout<<"\n Enter the two values:";
cin>>a>>b;
}
int arithmetic::add()
{
c=a+b;
return c;
}
int arithmetic::sub()
{
c=a-b;
return c;
}
int arithmetic::mul()
{
c=a*b;
return c;
}
int arithmetic::division()
{
c=a/b;
return c;
}
int arithmetic::modulodivision()
{
c=a%b;
return c;
}
class arith:public arithmetic
{
public:
void display()
{
cout<<"\n Addition\n"<<add();
cout<<"\n Subtraction\n"<<sub();
cout<<"\n Multiplication\n"<<mul();
cout<<"\n Division\n"<<division();
cout<<"\n Modulodivision\n"<<modulodivision();
}
};
int main()
{
cout<<"\n";
cout<<"\t Arithmetic Operation\n";
cout<<"\t ********** *********";
arith a;
a.getdata();
a.display();
return 0;
}