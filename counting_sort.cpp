#include <iostream>
using namespace std;

void PrintArr(int a[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<<" ";
    }
}

void countSort(int a[] , int n){
    int freq[10000];
    int minval=INT32_MAX;
    int maxval=INT32_MIN;
    for(int i=0 ; i<n ; i++){  // O(n)
        freq[a[i]]++;
        minval=min(minval , a[i]);
        maxval=max(maxval , a[i]);

    }
    cout<<minval<<endl;

    cout<<maxval<<endl;

    for(int i=minval , j=0 ; i<=maxval ; i++){ // O(range)
            while(freq[i]>0){
                a[j++]=i;
                freq[i]--;
            }
    }
    PrintArr(a, n);
    
}
// Final time complexity will be O(n+range)
// If the range is small then only we use count sort algorithm



int main(){
    int a[] = {1,4,1,3,2,4,3,7};
    int n = sizeof(a)/sizeof(int);
    countSort(a,n);
    return 0;
}