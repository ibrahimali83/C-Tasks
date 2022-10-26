#include<iostream>
using namespace std;

int main () {
int x, i, sum;

cout<<"Please enter the number: ";
cin>>x;
sum=0;
for(i=0;i<=x;i++)
sum=sum+i;
cout<<"Result is: "<<sum<<endl;

return 0;
}
