#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y,cnt=0;
    cin>>n;

    map<int,vector<int> > graph;

    while(cin>>x>>y){
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for(int i=1;i<=n;i++){
        if(graph[i].size()==0){
            cnt++;
        }
    }

    cout<<"Count of single node isolated sub-graphs : "<<cnt;
}
