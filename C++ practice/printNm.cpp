#include<iostream>
using namespace std;

void printNum(int n){
   for (int i=1;i<n;i++){
      cout<< i <<" ";
}
         cout<<endl;
}


int main(){
   int n;
   cin >>n;
   printNum(n);
   int z;
   cin>>z;
   printNum(z);
   return 0;
}

