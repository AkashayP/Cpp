#include<iostream>
using namespace std;
int main(){
    char x;        // Char to ASCII  value.
    cin>>x;     
    cout<< (int)x  <<endl; // Used to print ASCII Value of any character.
    
    
    
    // ASCIIvalue to character.
    
    int y ;
    cout<< "Enter ASCII Value: ";
    cin>> y;
    char ch = (char)y;
    cout<<ch;
    
  
}
