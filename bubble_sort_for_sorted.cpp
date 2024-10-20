#include <iostream>
using namespace std;

void printArray(int a[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<",";
    }
}

void bubblesort(int a[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        bool isSwap=false;
        cout<<"outer loop"<<endl;
        for(int j=0 ; j<n-i-1; j++){
            if(a[j]>a[j+1]){ // change the operator only [< , >] to change the order ascending or descending
            cout<<"Inner Loop"<<endl;
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                isSwap=true;

            }
        }
        if(!isSwap){
     
            return ;
        }
    }
    printArray(a,n);
}



int main(){
    int a[5]={1,2,3,4,5};
    bubblesort(a,5);
    return 0;
}