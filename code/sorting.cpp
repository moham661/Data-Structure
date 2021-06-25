#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr[],int n){ // 60 40 50 30 10 20
    int minIdx;
    for (int i = 0; i <n-1 ; ++i) {
        minIdx=i; //60  //40
        for (int j = i+1; j <n ; ++j) {
            if (arr[j]<arr[minIdx]){
                minIdx=j;// 40 < 60 // 40< 50  // 40<
                swap(arr[minIdx],arr[i]); // 40
            }
        }
    }
}
void bubbleSort(int arr[],int n){
    bool flag =true;
    for (int i = 0; i <n-1 ; ++i) {
        for (int j = 0; j <n-i-1 ; ++j) {
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }if(flag==true){
            break;
    }
    }
}
void insertionSort(int arr[],int n){
    int key,j;
    for (int i = 1; i <n ; ++i) {
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j] > key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}/*
void mergesort(int arr[],int l, int m, int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int *L=new int[n1] , *R=new int[n2];

    for (int n = 0; n <n1 ; ++n) {
        L[n]=arr[l+n];
    }
    for (int i1 = 0; i1 <n2 ; ++i1) {
        R[n2]=arr[m+1+i1];
    }
    i=j=0;
    k=l;
    while (i<n1 && j<n2){
        if(L([i] <= R[j]){
            arr[k]=L[i];
            i++
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++
    }
}*/
void print(int arr[],int size){
    for (int i = 0; i <size ; ++i) {
        cout<<arr[i]<<"\t";
    }
}
int main() {
    int arr[] ={60,40,50,30,20,10};
    int n=6;
   // selectionSort(arr,n);
   //cout<<"selection sort : \n";
   //bubbleSort(arr,n);
    //cout<<"bubble sort : \n";
    insertionSort(arr,n);
    cout<<"insertion sort : \n";
    print(arr,n);
    return 0;
}
