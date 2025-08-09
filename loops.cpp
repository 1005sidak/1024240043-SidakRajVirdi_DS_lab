#include<iostream>
using namespace std;
// int main(){
//     int num;
//     cout<<"enter the number:\n";
//     cin>>num;
//     bool isPrime=true;
//     for(int i=2;i*i<=num;i++){          //(int i=2;i<num/2+1;i++) --->this is working but not the best way
//         if(num%i==0){
//             cout<<"not a prime number\n";
//             isPrime=false;
//             break;
//         }
        
//     }
//     if(isPrime==true){
//             cout<<"prime\n";
//         }
//     return 0;
// }

int main(){
    int x=5;
    int m=1;
    // for(int i=1;i<=x;i++){
    //     for(int j=1;j<=m;j++){
    //         cout<<"*-";
    //     }
    //     cout<<"\n";
    //     m--;
    // }
        for(int i=1;i<=x;i++){
        for(int j=1;j<=m;j++){
            cout<<"*-";
        }
        cout<<"\n";
        m++;
    }
    x++;
        for(int i=1;i<=x;i++){
        for(int j=1;j<=m;j++){
            cout<<"*-";
        }
        cout<<"\n";
        m--;
    }

        int no=4;
    for(int i=0;i<no;i++){
        
        for(int j=0;j<i+1;j++){
            cout<<i+1;
        }
        
        cout<<endl;
    }
     char ch='A';
        for(int i=0;i<5;i++){
       
        for(int j=0;j<i+1;j++){
            cout<<ch;
        }
        
        cout<<endl;
        ch=ch+1;
    }
    return 0;
}