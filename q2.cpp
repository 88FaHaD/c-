
// Lab assignment Q2
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout<<"total no of values";
	cin>>n;
	
	int values[n];
	cout<<"Enter " <<n<< " values " <<endl;
	for(int i=0; i<n ; i++)
	    cin >> values[i];
	    
	    
	int small,large, range;
	double sum=0, average , sum_squares=0 ,standard_deviation;
	
	small=large=values[0];
	for(int i=0; i<n; i++)
	{
		sum += values[i];
		sum_squares += values[i] * values[i];
		
		if (values[i] < small)
		   small = values[i];
		   
		if (values[i] > large)  
		   large = values[i];
		    
	}
	
	cout<< endl;
	range = large-small;
	average = sum/n;
	standard_deviation = sqrt((sum_squares/n)-(average * average));
	
	cout << "Range is " << range <<endl;
	cout << "Standard_deviation is" << standard_deviation ;
}
