#include <iostream>
using namespace std;
int main(){
    //hollow diamond pattern

//TOP PART

    for(int i=0;i<4;i++){
        //SPACES

        for(int j=0;j<4-i-1;j++){
            cout<<" ";
        }
        //STARS
        cout<<"*";
        if(i!=0){

            //SPACES
        for(int j=0;j<2*i-1;j++){
            cout<<' ';

        }
        //STARS

        cout<<"*";}
         cout<<endl;
    }

    //BOTTOM

    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=2){
        for(int j=0;j<2*(3-1-i)-1;j++){


            cout<<" ";
        }
        cout<<"*";}
        cout<<endl;
    }
    cout<<"\n\n";
   











    //BUTTERFLY PATTERN
//TOP

    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*(4-1-i);j++){
            cout<<" ";

        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //BOTTOM

    
        for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            cout<<"*";
        }
        for(int j=0;j<2*i;j++){
            cout<<" ";

        }
        for(int j=0;j<4-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}