#include <bits/stdc++.h>
using namespace std;

int main()
{

map<string,int> m;
int n;
cin>>n;

for(int i=0;i<n;i++){
    string s;
    cin>>s;

    m[s] = s.length();
}

int maxi = INT_MIN;
for(auto x:m){
    maxi = max(maxi,x.second);
}

for(auto x:m){
    if(x.second==maxi){
        cout<<x.first<<endl;
    }
}

   return 0;
}
