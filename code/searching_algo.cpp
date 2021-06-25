#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key){
    for (int i = 0; i <n ; ++i) {
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[],int l,int h ,int key) {
    int m;
    while (l <= h) {
        m = (l + h) / 2;
        if (arr[m] == key) {
            return m;
        } else if  (arr[m] > key){
            h=m-1;
        }else{
            l=m+1;
        }
    }
    return -1;
}
int main() {
    int arr[]={1,2,3,4,5};
    int n=5;
    int num;
    cout<<"pls enter the num you want"<<endl;
    cin>>num;
    int res=linearSearch(arr,n,num);
    int result=binarySearch(arr,0,n-1,num);
    if(result==-1){
        cout<<"the number wasnot found"<<endl;
    }else{
        cout<<"the number is "<<arr[result]<<" and the index is "<<result;
    }
    return 0;
}
