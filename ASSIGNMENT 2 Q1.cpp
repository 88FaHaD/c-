//LAB ASSIGNMENT 2 Q1
#include<iostream>
using namespace std;

int main()
{
	double total_purchase,total_discount,sales_tax,discount_total,total; 
	
	int compare=2,z;
	cout<<"Enter 2 for teacher and 1 for non teacher \n";
	cin>>z;
	
	
	
	if(z==compare)
	{
		cout <<"For Teacher \n";
		cout <<"Total purchase in $";
		cin  >>total_purchase;
		
		
	 	    
	    // when teacher purchase is less or equal to 100
	
		
		if(total_purchase<=100)
		{
			cout<<"Teachers discount is 10% \n";
		total_discount=total_purchase/100*10;
		
		cout<<"Total discount is $" <<total_discount <<endl ;
		
		
		discount_total=total_purchase-total_discount;
		cout<<"Discount total is $" <<discount_total <<endl ;
		
		//sales tax is 5% = 0.05
		
		sales_tax=discount_total*0.05;
		
		cout<<"Sales tax is $" <<sales_tax <<endl;
		
		total=discount_total+sales_tax;
		cout<<"Total is $" <<total <<endl;
		
		}
		
		// when total purchase is more then 100
		
		
		
		if(total_purchase>100)
		{
				cout<<"Teachers discount is 12% \n";
		total_discount=total_purchase/100*12;
		
		cout<<"Total discount is $" <<total_discount <<endl ;
		
		
		discount_total=total_purchase-total_discount;
		cout<<"Discount total is $" <<discount_total <<endl ;
		
		//sales tax is 5% = 0.05
		
		sales_tax=discount_total*0.05;
		
		cout<<"Sales tax is $" <<sales_tax <<endl;
		
		total=discount_total+sales_tax;
		cout<<"Total is $" <<total <<endl;
			
		}
	
		
		
	}
	
	// for non teacher
	
	else
	cout<<"For Non-Teacher " <<endl;
	cout<<"Enter total purchase in $";
	cin>>total_purchase;
	cout<<"Total purchase is $" <<total_purchase <<endl;
	//sales tax is 5% = 0.05
	
	sales_tax=total_purchase*0.05;
	cout<<"Sales tax is $" <<sales_tax <<endl;
	
	total=total_purchase+sales_tax;
	cout<<"Total is $" <<total <<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

