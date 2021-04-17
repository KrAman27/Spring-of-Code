#include<bits/stdc++.h>
using namespace std;

int main(){
queue<int> q;
queue<int> fq;

q.push(11);
q.push(12);
q.push(13);
q.push(14);
q.push(15);
q.push(16);
q.push(17);
q.push(18);
q.push(19);
q.push(20);

int length = q.size();

for(int i=0;i<length/2;i++){
fq.push(q.front());
q.pop();
}

while(!q.empty()){
    cout<<fq.front()<<" "<<q.front()<<" ";
    q.pop();
    fq.pop();
}

return 0;
}
