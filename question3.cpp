#include<iostream>
using namespace std;
class rectangular
{
 public:
 float l,b;
 float perimeter(float l,float b);
 float area(float l,float b);
};
float rectangular::perimeter(float l,float b)
{ return(2*l+2*b);}
float rectangular::area(float l,float b)
{ return(l*b);}
int main()
{
 rectangular rect1,rect2;
 float pr1,pr2,ar1,ar2,L1,L2,b1,b2;
 cout<<"Enter the length and breadth respectively of 1st rectangle : "<<endl;
 cout<<"Length : ";
 cin>>L1;
 cout<<" Breadth : ";
 cin>>b1;
 cout<<"Enter the length and breadth respectively of 2nd rectangle : "<<endl;
 cout<<"Length : ";
 cin>>L2;
 cout<<" Breadth : ";
 cin>>b2;
 pr1=rect1.perimeter(L1,b1);
 pr2=rect2.perimeter(L2,b2);
 ar1=rect1.area(L1,b1);
 ar2=rect2.area(L2,b2);

 cout<<"Area and Perimeter of the 1st rectangle ; "<<endl<<"Area1 : "<<ar1<<endl<<"Perimeter1 : "<<pr1<<endl;
 cout<<"Area and Perimeter of the 2nd rectangle ; "<<endl<<"Area2 : "<<ar2<<endl<<"Perimeter2 : "<<pr2<<endl;
 if(pr1>pr2)
 { cout<<pr1<<" is greater perimeter."<<endl;}
 else
 {cout<<pr2<<" is smaller perimeter."<<endl;}
 if(ar1>ar2)
 { cout<<ar1<<" is greater area."<<endl;}
 else
 {cout<<ar2<<" is smaller area."<<endl;}

 return 0;
}
