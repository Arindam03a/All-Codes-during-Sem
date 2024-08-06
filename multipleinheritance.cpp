#include<iostream>
using namespace std;

class A                         // Base class
{
	
	public:
		int i;
		void showi()
		{
			cout<<"In A"<<i<<endl;
			
		}
		
		
};
class B                      //Base class
{
	
	public:
		int j;
		void showj()
		{
			cout<<"In B"<<j<<endl;
			
		}
};

class C:public  A, public B                  //Dereived class
{

public:
	void showij()
	{
		cout<<"In C"<<i<<"  "<<j<<endl;
	}
};

int main()
{
	
	C c;
	c.i=10;
	c.j=20;
	c.showi();
	c.showj();
	c.showij();
	return 0;
}

