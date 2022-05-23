#include<bits/stdc++.h>
#define pb push_back
using namespace std;

void init_code()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

vector<int>vec[1000];

bool visited[10000];
int dist[10000];

void dfs(int source_node,int dis)
{
    visited[source_node] = 1;

    dist[source_node] = dis;

    for(auto it : vec[source_node])
    {
        if(!visited[it])
        {
            dfs(it,dis + 1);
        }
    }
}


int main()
{
    //init_code();
    fastIO();

    int node;
    cin>>node;
    node--;
    while(node--)
    {
        int x,y;
        cin>>x>>y;

        vec[x].pb(y);
        vec[y].pb(x);
    }

    dfs(1,0);//1

    int mn = INT_MAX;

    int x,index;
    cin>>x;
    while(x--){
        int n;
        cin>>n;

        if(dist[n] < mn){
            mn = dist[n];
            index = n;
        }
    }
    cout<<index<<"\n";
}

/*
    1
   /
   2
  / \
 3   4
    / \
   5   6

*/

