#include<iostream>
using namespace std;
    
    int add(int y, int x){
        int result = y+x;
        return result;
    }
    
    int main(){
       int a;
       cin>>a;
       int b;
       cin>>b;
       int sum = add( b,a);
       cout<< sum<<endl;
       return 0;
    }
