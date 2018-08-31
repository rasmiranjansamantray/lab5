// library
#include<iostream>
using namespace std;

int main()
{       //declare the variables 
	float x,y,z , s ;
	//ask user about the angles of triangle taken
  	cout<< "enter three nos. to be compared" << endl;
 	cin >> x >> y >> z ;
	s=x+y+z; 	
	//condition starts
	if(s>180)
		{
		cout<<"triangle is not possible"<<endl;
		}
	else if(s<180)
		{
		cout<<"triangle is not possible"<<endl;
		}
	else    {
		cout<<"it is a triangle"<<endl;
		}
	//condition ends
	return 0;
}
