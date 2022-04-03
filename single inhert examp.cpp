// Inheritance 
// single level example

#include<iostream>
using namespace std;

class base
{
	public:
		int a;
	
	void getdata()
	{
		cout<<"enter value of a "; cin>>a;
		
		
	}	
		
};

class child : public base
{
	private:
	int b;
	public:
	void getanotherdata()
	{
		cout<<"enter value of b ";cin>>b;
		
	}
	
	void product()
	{
		cout<<"product is " << a*b;
	}
};

int main()
{
	child c;
	c.getdata();
	c.getanotherdata();
	c.product();
}




























