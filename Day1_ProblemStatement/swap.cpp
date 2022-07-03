/*Define 3 separate functions to swap its contents. (pass by value, pass
by reference, pass by address)
Print the values before and after swap in caller.*/
#include <iostream>
using namespace std;
//function to swap to value by pass by value
void swapPassByValue(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

//function to swap to value by pass by reference
void swapPassByReference(int &a, int &b)
{
    //&num1 and &bnum2 are Reference variables

        int temp;
        temp=a;
        a=b;
        b=temp;
}



//function to swap to value by pass by address
void swapPassByAddress(int *a,int *b)
{
    
        int c;
        c=*a;
        *a=*b;
        *b=c;
       // cout<<"\nInside Function After Swapping, Value of :: \n\tA = "<<*a<<"\tB = "<<*b<<"\n";
}




int main() {
   int x,y;
   cout<<"enter value of x"<<endl;
   cin>>x;
   cout<<"enter value of y"<<endl;
   cin>>y;
   cout<<"Value of x "<<x<<endl;
   cout<<"Value of y "<<y<<endl;
   swapPassByValue(x, y);
   cout<<"After swapping, the values by pass by value are: "<<"x = " <<x<<"y = "<<y<<endl;
  
  cout<<"enter value of x"<<endl;
   cin>>x;
   cout<<"enter value of y"<<endl;
   cin>>y;
   cout<<"Value of x "<<x<<endl;
   cout<<"Value of y "<<y<<endl;
  swapPassByReference(x, y);
   cout<<"After swapping, the values by pass by reference are: "<<"x = " <<x<<"y = "<<y<<endl;

cout<<"enter value of x"<<endl;
   cin>>x;
   cout<<"enter value of y"<<endl;
   cin>>y;
   cout<<"Value of x "<<x<<endl;
   cout<<"Value of y "<<y<<endl;
   swapPassByAddress(&x, &y);
   cout<<"After swapping, the values by pass by address are: "<<"x = " <<x<<"y = "<<y<<endl;
  
  
   return 0;
}