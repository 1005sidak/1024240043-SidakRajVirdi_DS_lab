#include<iostream>
using namespace std;
int main(){
    //MY WAY MY CODE
    int num=1;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(j<i){
                cout<<" ";

            }else{
                cout<<num;
            }
        }
        cout<<"\n";
        num++;
    }



    //ANOTHER WAY OF TWO INNER LOOPS----->>for n=4


    //                     spaces   num
    // i=0 1111             0        4  (n-i)
    // i=1  222             1        3  (n-i)
    // i=2   33             2        2  (n-i)
    // i=3    4             3        1  (n-i)
    
    for(int i=0;i<4;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<4-i;j++){
            cout<<i+1;
        }
        cout<<endl;
        

    }


        char ch='A';
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(j<i){
                cout<<" ";

            }else{
                cout<<ch;
            }
        }
        cout<<"\n";
        ch++;
    }

    return 0;
}