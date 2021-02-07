#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cout<<"Enter your Age :";
	cin>>a;
	cout<<endl;
 //people with only age above 17 are qualified to vote
 	if ( a > 17)
 	{
 		cout<<"You are elegible to vote";
	}
	else 
	{
		cout<<"You are not elegible to vote";
	}
	return 0;
}
