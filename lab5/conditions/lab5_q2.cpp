// library
#include<iostream>
using namespace std;

int main()
{       //declare the variables 
	float x,y,z ;
	//ask user about the variables to be compared
  	cout<< "enter three nos. to be compared" << endl;
 	cin >> x >> y >> z ;
	
	//condition starts
	if(x>y && z )
		{
		cout<< x << " is max"<< endl;
 		}
		 if(z>x && y)
 			{
			cout << z << " is max"<< endl;
			 }
	else if(y>x && z)
			{
			cout<< y <<" is max"<<endl;
			}
	else{
		cout <<"no max"<<endl;
		}
	//condition ends
	return 2;
}  
