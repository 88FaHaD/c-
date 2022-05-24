

//lab q1
#include<iostream>

using namespace std;

int main()
{
	int n;
	cout <<" Enter the value of n ";
	cin>> n;
	int i;
	double array[n];
	//scaning inside the array
	cout <<"Enter elements inside the array" ;
	for(int i=0; i<n ; i++)
	{
		cin>> array[i];
	}
	//printing the array
	cout <<"Elements inside the array are ";
	for(int i=0; i<n ; i++)
	{
		cout << array[i] <<" ";
	}
	cout<<endl;
	//largest
	int largest=array[0];
	for(int i=0; i<n ; i++)
	
	if(array[i] > largest)
	{
		largest=array[i];
	}
	cout <<"largest number is " <<largest<<endl;
	//smallest
	int smallest=array[0];
    for(i=0; i<n ;i++)
    if(array[i]<smallest)
    {
    	smallest=array[i];
	}
	cout <<"smallest is " <<smallest<<endl;
	//average
	double avg;
	double sum=0;
	for(int i=0; i<n; i++)
	{
		sum=sum+array[i];
	}
	avg=sum/n;
	cout<< "average "<<avg;
}
