//LAB 2 ASSIGNMENT Q3
// We can use switch statment only when we have integer or character . It can not be used in case of floating point 

#include<iostream>
using namespace std;
int main()
{
    double n;
	cout<<"Enter the Ritcher Scale number " <<endl;
	cin>>n;
	if(n < 5.0)
	{
		cout<<"Little or no damage";
	}
	if( 5.0 <=n && n < 5.5)
	{
		cout<<"Some damage";
	}
	if(5.5 <=n && n < 6.5 )
	{
		cout<<"Serious damage: walls may crack or fall";
	}
	if(6.6 <=n && n< 7.5)
	{
		cout<<"Disaster: houses and buildings may collapse";
	}
	if(n>7.5)
	{
		cout<<"Catastrophe: most buildings destroyed";
	}
}
