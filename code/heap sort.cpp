#include <iostream>
#include <algorithm>
using namespace std;
void heapyify (int arr[],int n,int i){ //nlogn
    int left=2*i+1;
    int right=2*i+2;
    int max=i;
    if (arr[left]>arr[max]){
        max=left;
    }
    if (arr[right]>arr[max]){
        max=right;
    }
    if(max!=i){
        swap(arr[i],arr[max]);
    }
    heapyify(arr,n,max);
}
void buildheap(int arr[],int n){  //n  1
    for (int i = n/2 -1; i>=0  ;i--) {
        heapyify(arr,n,i);
    }
}
void heapsort(int arr[],int n){   //n   1
    buildheap(arr,n);
    for (int i = n-1; i >=0 ; i--) {
        swap(arr[0],arr[i]);
        heapyify(arr,i,0);
    }

}
int main() {
    int arr[]={50,20,30,70,80};
}
