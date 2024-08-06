#include<iostream>
using namespace std;
class A
{
int a,b;
public:A(int x,int y)   //parametarised constructor
{
a=x;
b=y;
}

A(A&ref) //copy constructor
{
a=ref.a;
b=ref.b;
}
void show()
{cout<<a<<" "<<b<<endl;
}
};
int main()
{
A obj(10,20);
A obj2(obj); //object declare & intilize from another object
obj.show();
obj2.show();
return 0;
}
