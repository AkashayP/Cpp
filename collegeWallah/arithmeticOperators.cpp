#include<iostream>
using namespace std;
int main(){
    int x = 7 , y = 2;
    cout<<x+y<<endl;  //9
    cout<<x-y<<endl;  //5
    cout<<x*y<<endl;  //14
    //issue
    cout<<x/y<<endl;  //3.5   byt output will be 3 because int doesnot show the float values.

   // instead of using int if we use float it will provide answer witbh decimal values.
}
