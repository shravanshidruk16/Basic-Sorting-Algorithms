#include <iostream>
using namespace std;

void PrintArr(char a[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}

void charSort(char a[] , int n){
    for(int i=1 ; i<n ; i++){
        int curr=a[i];
        int prev = i-1;
        while(prev>=0 && a[prev] > curr){
            swap(a[prev] , a[prev+1]);
            prev--;
        }
        a[prev+1]=curr;
    }
    PrintArr(a,n);
}


int main(){
    char b[] ={'d','a','c','b'};
    int n=sizeof(b)/sizeof(char);
    charSort(b,n);
    return 0;
}