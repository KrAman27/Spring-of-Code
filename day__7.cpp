#include <bits/stdc++.h>
using namespace std;

void dfs(map<int,list<int>> graph, int n,int i){
    bool visited[11] = {false};

    stack<int> s;
    s.push(i);

    while(!s.empty()){
        int top_element = s.top();
        s.pop();
        for(auto x : graph[top_element]){
            if(visited[x]==false){
                visited[x]=true;
                s.push(x);}
        }
        cout<<top_element<<" ";
    }
}

int main()
{

map<int,list<int>> graph;

graph[1].push_back(2);
graph[1].push_back(6);
graph[2].push_back(3);
graph[2].push_back(5);
graph[3].push_back(4);
graph[4].push_back(9);
graph[5].push_back(8);
graph[8].push_back(10);
graph[6].push_back(7);
graph[7].push_back(10);
graph[8].push_back(11);

int n = 11;
int i = 1;

cout<<"The DFS sequence of the graph is : ";
dfs(graph,n,i);


   return 0;
}
