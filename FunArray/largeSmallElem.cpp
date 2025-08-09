#include<iostream>
using namespace std;

int main(){
    int arr[5]={20,-9,-45,85,3};
    int size=5;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }

        //THIS TWO LINES OF CODE CAN REPLACE WITH ONE LINE
        //USING min() FUNCTION

        //smallest=min(arr[i],smallest);
    }cout<<"smallest="<<smallest<<endl;

        for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }

        //THIS TWO LINES OF CODE CAN REPLACE WITH ONE LINE
        //USING max() FUNCTION

        //largest=max(arr[i],largest);
    }cout<<"largest="<<largest<<endl;
    return 0;
}