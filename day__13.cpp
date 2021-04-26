#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<n and arr[left]>arr[largest]) largest = left;
    if(right<n and arr[right]>arr[largest]) largest = right;

    if(i!=largest) {swap(arr[largest],arr[i]);

    heapify(arr,n,largest);}

}

void heap_sort(int arr[], int n){
    for(int i=(n/2)-1;i>=0;i--){
        heapify(arr,n,i);
    }

    for(int i=n-1;i>0;i--){
        swap(arr[i],arr[0]);

        heapify(arr,i,0);
    }
}
int main(){
    int arr[] = {4,5,0,1,3,2};
    int n = sizeof(arr)/sizeof(int);

    heap_sort(arr,n);

    cout<<"Sorted array is : ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
