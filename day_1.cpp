#include <iostream>

using namespace std;

int main()
{

string s;
cin>>s;

int arr[27] = {0};

int n = s.length();

for(int i=0;i<n;i++){
    arr[s[i]-'`']++;
}

char ch;
int max = 0;
for(int i= 1;i<27;i++){
    if(arr[i]>max){
        ch = i+96;
        max = arr[i];
    }
}
cout<<ch<<endl;

   return 0;
}
