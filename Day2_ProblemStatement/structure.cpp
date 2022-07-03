/*Define struct point3 with x,y,z as member data.
Write parameter CTOR for point3 struct.
Create 2 object one on stack and one on heap. Note its CTOR and
DTOR calls and scope.

Define a class PointCloud which holds an dynamic array of Point3.
Delete memory in DTOR of PointCloud class
Write member function to return point by index. Return const
object. Try to change contents at client code

*/
#include<iostream>
using namespace std;
struct Point3
{
   int x, y, z;

    Point3(int a,int b,int c)
    {
        cout<<"inside parametrized cunstructor"<<endl;

        x=a;
        y=b;
        z=c;
    }

Point3()
{
    cout<<"inside no args cunstructor"<<endl;
}

     ~Point3()
    {
        cout<<"inside destructor"<<endl;

       
    }


};


 
int main()
{
   struct Point3 p1(10,20,30);  //p1 will be stored in the stack
struct Point3* p2=new Point3(40,50,60);//Object will be placed in the heap section, and local pointer variable will be stored inside stack
  
}