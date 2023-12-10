#include<iostream>
using namespace std;

class volume
{
    public:
    double pi=3.14;
    //Function to calculate volume of cube
    void calculatevolume(double side)
    {
       cout<<"Volume of the cube is:"<<side*side*side<<endl;
    }
    //Function to calculate volume of cuboid
    void calculatevolume(double lenght,double height,double breadth)
    {
        cout<<"Volume of the cuboid is:"<<lenght*height*breadth<<endl;
    }
    //Function to calculate volume of cylinder
    void calculatevolume(double radius,double height)
    {
        cout<<"Volume of the cylinder is:"<<pi*radius*radius*height<<endl;
    }
};
int main()
{
    volume v1;
    v1.calculatevolume(5);
    v1.calculatevolume(3,4,6);
    v1.calculatevolume(4,9);

    return 0;
}
