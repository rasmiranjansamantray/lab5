//including library
#include<iostream>
using namespace std;
//including main function
int main(){
//defining integers
int i=1;
int n;
int factorial=1;
//asking user for value of n
cout<<"what is the value of n?"<<endl;
cin>>n;
while (i<=n){
factorial=factorial*i;
i=i+1;
}
cout<<"the factorial of n is"<<factorial<<endl;
return 0;
}
