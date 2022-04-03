// Multilevel inheritance

#include<iostream>
using namespace std;

class base
{
	public :
	int a;
	void getdata1()
	{
		cout<<"enter value of a "; cin>>a;
		
	}
	void inherit()
	{
		cout<<" this property will be trnsfered \n ";
	}
};

class child: public base
{
	public :
	int b;
	void getdata2()
	{
		cout<<"enter value of b ";cin>>b;
		
	}
	
};

class grandchild:public child
{
	private:
	int c;
	public:
	void getdata3()
	{
		cout <<"enter value of c ";cin>>c;
	}
	
	void product()
	{
       cout<<"product is "   <<a*b*c;
	}
};

int main()
{
	grandchild zzz;
	
	zzz.inherit();
	
	zzz.getdata1();
	
	zzz.getdata2();
	
	zzz.getdata3();
	
	zzz.product();
	
}
























