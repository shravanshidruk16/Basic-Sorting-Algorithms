#include <iostream>
using namespace std;

void PrintArr(int a[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<",";
    }
}

void insertionSort(int a[] , int n){
    for(int i=1 ; i<n ; i++){
        int curr = a[i];
        int prev = i-1;
        while(prev>=0 && a[prev]>curr){
            swap(a[prev] , a[prev+1]);
            prev--;
        }
        a[prev+1]=curr;

    }
    PrintArr(a,n);
}



int main(){
    int b[]={5,4,1,3,2};
    int c=sizeof(b)/sizeof(int);
    insertionSort(b,c);




    return 0;
}