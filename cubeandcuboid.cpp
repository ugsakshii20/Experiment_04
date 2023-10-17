#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
float l,b,h,v_cube,volume;
cout<<"Enter Length:";
cin>>l;
cout<<"Enter width:";
cin>>b;
cout<<"Enter height:";
cin>>h;
v_cube=(l*l*l);
volume=(l*b*h);
cout<<"Volume of Cube:"<<v_cube;
cout<<endl<<"Volume of cuboid:"<<volume;

return 0;
}
