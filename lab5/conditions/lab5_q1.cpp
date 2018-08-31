//library
#include<iostream>
using namespace std;

int main()
{       //declare the variables 
	int x,y ;
	//ask user about the variables to be compared
	cout<<"enter 1st no. "<< endl;
	cin>> x ;
 	cout<<"enter 2nd no.  "<< endl;
        cin>> y ;

	//using boolean conditions
	//condition starts
	if(x<y){
		cout<< y <<" is the maximum value" << endl;
 		}
	else if(x>y){
		cout<< x << " is the maximum value "<< endl;
		}
	else{
		cout <<"no maximum value "<< endl;
		}
	//condition ends
	return 0;
}
