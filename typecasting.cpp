#include<iostream>
using namespace std;
int main(){
    float price;
    cout<<"enter the price:"<<endl;
    cin>>price;
    cout<<"the price is "<<price<<endl;
    int newprice=(int)price;//--->explicit type casting
    cout<<newprice<<endl;

    cout<<11/(float)3<<endl;//--------->operators


    //implicit type casting
    char grade='A';
    int value=grade;//-------> conversion
    cout<<value<<endl;

    return 0;
}