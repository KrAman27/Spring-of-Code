#include<bits/stdc++.h>
using namespace std;
void maxHeapify(int arr[], int n, int i){
    int left = 2*i+1;
    int right = 2*i+2;

    int largest = i;

    if(left<n and arr[left]>arr[largest])
        largest = left;
    if(right<n and arr[right]>arr[largest])
        largest = right;
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        maxHeapify(arr,n,largest);
    }

}
void maxheap(int arr[], int n){
for(int i=(n-2)/2;i>=0;i--)
    {
        maxHeapify(arr,n,i);
    }
}

int main(){
int arr[] = {3,5,9,6,8,20,10,12,18,9};
int n = sizeof(arr)/sizeof(int);

maxheap(arr,n);

cout<<"Max heap is : \n";
for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}
