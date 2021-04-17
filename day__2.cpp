#include<bits/stdc++.h>
using namespace std;

int main(){

queue<int> q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60);
q.push(70);
q.push(80);
q.push(90);
q.push(100);

int k = 5;

stack<int> s;

for(int i=0;i<k;i++){
    s.push(q.front());
    q.pop();
}

queue<int> fq;

while(!q.empty()){
    fq.push(q.front());
    q.pop();
}

while(!s.empty()){
    q.push(s.top());
    s.pop();
}

while(!fq.empty()){
    q.push(fq.front());
    fq.pop();
}

while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}

return 0;
}
