#include <iostream>

using namespace std;

int main()
{

int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

int even = 0;
int odd = 0;
for(int i=0;i<n;i++){
    if(arr[i]%2){
        odd = i;
        break;
    }
}

for(int i=0;i<n;i++){
    if(arr[i]%2==0){
        even = i;
        break;
    }
}

int i = even;
int j = odd;

while(i<n and j<n){
    if(((arr[i]%2) and !(arr[j]%2)) or(!(arr[i]%2) and (arr[j]%2))){
        swap(arr[i],arr[j]);
    }
    i++;
    j++;
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
   return 0;
}
