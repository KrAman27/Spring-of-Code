#include<bits/stdc++.h>
using namespace std;

void print(stack<int> s){
    while(!(s.empty())){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
}

int largest(stack<int> s){
    int max = s.top();
    s.pop();

    while(!(s.empty())){
        if(max<s.top()){
            max = s.top();
            s.pop();
        }
        else{
            s.pop();
        }
    }

    return max;
}

int main(){
    stack<int> s;

    s.push(54);
    s.push(64);
    s.push(22);
    s.push(12);
    s.push(15);
    s.push(2);

    print(s); 

    cout<<"The largest data is : "<<largest(s)<<endl;
}
