#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> m;
    string s;

    getline(cin,s);

    stringstream st(s);
    string word;
    while(st>>word)
    {
        m[word]++;
    }

    cout<<"The words having more than one occurrences are : ";
    for(auto i:m)
    {
        if(i.second>=2)
        {
            cout<<"\""<<i.first<<"\"  ";
        }
    }

    return 0;
}
