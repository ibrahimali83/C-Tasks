#include<iostream>

int main () {
int x, y;
int result1, result2, result3, result4;

std::cout<<"Please enter No.1: "<<std::endl;
std::cin>>x;
std::cout<<"Please enter No.2: "<<std::endl;
std::cin>>y;

result1=x+y; 
result2=x-y; 
result3=x*y; 
result4=x/y; 

std::cout<<"No.1 + No.2= "<<result1<<std::endl;
std::cout<<"No.1 - No.2= "<<result2<<std::endl;
std::cout<<"No.1 X No.2= "<<result3<<std::endl;
std::cout<<"No.1 / No.2= "<<result4<<std::endl;

return 0;
}