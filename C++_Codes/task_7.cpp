#include<iostream>
using namespace std;

int main () {
string x, y;
int z, w, u, v;

cout<<"Please enter student 1 name:\n";
cin>>x;
cout<<"Please enter student 1 ID:\n";
cin>>z;
cout<<"Please enter student 1 exam grade:\n";
cin>>w;
cout<<"Please enter student 2 name:\n";
cin>>y;
cout<<"Please enter student 2 ID:\n";
cin>>u;
cout<<"Please enter student 2 exam grade:\n";
cin>>v;

cout<<"Students grades in math:\n";
cout<<x<<" (with ID: "<<z<<")"<<" got grade: "<<w<<endl;
cout<<y <<" (with ID: "<<u<<")"<<" got grade: "<<v<<endl;
cout<<"Average grade is: "<<((w+v)/2)<<endl;

return 0;
}

