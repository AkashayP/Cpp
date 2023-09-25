/*Given the length and breadth of a reactangle, write a program to find whether the area of the
rectangle is greater than its perimeter,*/


#include<iostream>
using namespace std;
int main(){

    int l;
    cout<<"Enter l: ";
    cin>>l;
    int b;
    cout<<"Enter b: ";
    cin>>b;
    int Area = l*b;
    int Perimeter = 2*(l+b);
    if(Area>Perimeter){
        cout<<"Area is greater.";
    }
    else if(Area<Perimeter){
        cout<<" Perimeter is greater";
    }
    else{
        cout<<"Both are equal";
         }
    
}
