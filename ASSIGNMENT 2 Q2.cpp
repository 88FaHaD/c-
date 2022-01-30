
//LAB 2 ASSIGNMENT  Q2
//USE FORMULA  703 * wt_lb /ht_in2

#include<iostream>
using namespace std;
int main()
{
	double BMI=0,WT_LB,HT_IN,HEIGHT_SQUARE=0;
	cout<<"Enter weight in pounds \n";
	cin>>WT_LB;
	cout<<"Enter height  in  ft/inches \n";
	cin>>HT_IN;
	
    HEIGHT_SQUARE=HT_IN*HT_IN;
    
	BMI= (WT_LB / HEIGHT_SQUARE) *703;
	cout<<"BMI is " <<BMI <<endl ;
	
	
	if(BMI<18.5)
	{
	  cout<<"UNDERWEIGHT";
	}
	if(BMI<=24.9 && BMI>=18.5)
	{
		cout<<"NORMAL";
	}
	if(BMI<=29.9 && BMI>=25.0)
    {
    	cout<<"OVERWEIGHT";
	}
	 if(BMI>=30)
	 {
	cout<<"OBESE";
	 }
}
