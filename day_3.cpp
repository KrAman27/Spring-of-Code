#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int arr[27] = {0};

    for(int i=0; i<s.length(); i++)
    {
        arr[s[i]-'`']++;
    }

    for(int i=0; i<s.length(); i++)
    {
        if(arr[s[i]-'`']==1)
        {
            cout<<"The first non-repeating character is : "<<s[i]<<endl;
            break;
        }
    }
    return 0;
}
