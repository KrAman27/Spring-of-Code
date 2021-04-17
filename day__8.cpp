#include <iostream>

using namespace std;

struct Pair{
    int min;
    int max;

};

int main()
{

int arr[] = {1,2,3,4,5};
int n = sizeof(arr)/sizeof(int);

int i;

struct Pair p;

if(n%2){
    p.min = arr[0];
    p.max = arr[0];
    i = 1;
}
else{
    p.min = min(arr[0],arr[1]);
    p.max = max(arr[0],arr[1]);
    i = 2;
}
   while(i<n-1){
       if(arr[i] > arr[i+1]){
           if(p.max < arr[i]){
               p.max = arr[i];
           }
           if(p.min>arr[i+1]){
               p.min = arr[i+1];
           }
       }

       else{
            if(p.max < arr[i+1]){
               p.max = arr[i+1];
           }
           if(p.min > arr[i]){
               p.min = arr[i];
           }
       }
       i++;
   }

   cout<<"The minimum is : "<<p.min<<"\nThe maximum is : "<<p.max;
   return 0;
}
