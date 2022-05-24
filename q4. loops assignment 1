//Lab assignment Q4
#include<iostream>

using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the total No of days ";
	cin>>n;
	
	int tempr[n];
	cout<<"Enter various Temperatures ";
	for(int i=0; i<n; i++)
	   cin>>tempr[i];
	
	int Hot_days=0 ,Cold_days=0 ,Pleasent_days=0 ;
	double sum=0,average;
	cout<<endl;
	for (int i=0; i<n ; i++)
	{
		sum+=tempr[i];
		cout << tempr[i] <<"  ";
	
		
		if(tempr[i] >= 85)
		{
			cout << "Hot day";
		    Hot_days++;
		}
		
		else if(tempr[i] <=84 && tempr[i] >=60)
	    {
	    		cout << "Pleasent day";
		        Pleasent_days++;
		}
		
		else if(tempr[i] < 60)
	    {
	    		cout <<"Cold day";
		        Cold_days++;
		}
			cout<<endl;
	}
	cout<<endl;
	cout<<"No. of Hot days are " <<Hot_days <<endl;
	cout<<"No. of Cold days are " <<Cold_days <<endl;
	cout<<"No. of Pleasent days are " <<Pleasent_days<<endl;
	
	cout<<endl;
	average=sum/n;
	cout<<"Average temperature is " <<average;
	
}

