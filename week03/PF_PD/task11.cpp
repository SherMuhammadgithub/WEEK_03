#include<iostream>
using namespace std;
main()
{
	int age , moved , avg;
	cout<<"Enter the person's age: ";
	cin>>age;
	cout<<"Enter the number of times they've moved: ";
	cin>>moved;
	avg = age / (moved + 1);
	cout<<"Average number of years lived in the same house: "<<avg;
	


}