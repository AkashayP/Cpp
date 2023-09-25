#include<iostream>
using namespace std;
int main(){
    int cost_price;
    cout<< "Enter cost_price: ";
    cin>>cost_price;
    int selling_price;
    cout<<"Enter the selling_price: ";
    cin>> selling_price;
    if(selling_price>cost_price){
        cout<<"Profit" <<endl;
        cout<<"Profit is: "<<selling_price-cost_price;
    }
    else if(selling_price<cost_price){
        cout<<"Loss"<<endl;
        cout<<"Loss is: "<<cost_price - selling_price;
    }
    else{
        cout<<"No Profit No Loss";
    }
    
}
