#include<iostream>
using namespace std;
// int main(){
//     int age;
//     cout<<"enter your age:"<<endl;
//     cin>>age;
//     if(age>=18){
//         cout<<"Eigible for driving  licence !!"<<endl;

//     }else{
//         cout<<"Not eligible for driving licence!!"<<endl;
//     }
//     return 0;
// }



int main(){
    int marks;
    cout<<"enter the marks"<<endl;
    cin>>marks;
    if(marks>=90){
        cout<<"A grade"<<endl;
    }else if(marks>=80 ){
        cout<<"B grade"<<endl;

    }else{
        cout<<"C grade"<<endl;

    }


    // upper/lower case
    
    char ch;
    cout<<"enter the character:"<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"lower case"<<endl;
    }else if(ch>='A' && ch<='Z'){
        cout<<"upper case"<<endl;
    }else{
        cout<<"not the alphabet!!"<<endl;
    }
    return 0;
}