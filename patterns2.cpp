#include<iostream>
using namespace std;
int main(){
    
    for(int i=0;i<5;i++){
        int num=1;
        for(int j=0;j<=i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }

    //reverse triangle pattern!!
       //

       //---------------------------------->>>>>>>>>>>    very very important
        for(int i=1;i<=5;i++){
        
        for(int j=i;j>0;j--){
            cout<<j;
            
        }
    cout<<endl;
    }
        cout<<"\n";
       for(int i=1;i<=5;i++){
        char cha='A';
        for(int j=0;j<i;j++){
            cout<<cha;
            cha++;   
        }
        cout<<endl;
    }
   //FLOYDS TRIANGLE PATTERN
//    1
//    23
//    456
//    78910

    int no=1;
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cout<<no;
            no++;
        }
        cout<<endl;
    }

        char ch='A';
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}