#include <iostream>
using namespace std;

void printArray(int a[] , int n){
    for(int i=0 ; i<n ;i++){
        cout<<a[i]<<",";
    }
}

void SelectionSort(int a[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        int minId=i;
        for(int j=i+1 ; j<n ; j++){
            if(a[j]< a[minId]){
                minId=j;
                
            }

        }
        swap(a[i] , a[minId]);
    }
    printArray(a,n);
}




int main(){
    int a[5]= {5,4,1,3,2};
    int n=5;
    SelectionSort(a,n) ;
    return 0;
}