#include<bits/stdc++.h>
#define pb push_back
using namespace std;

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

vector<int>vec[10000];
int dis[10000];
int vis[10000];

void dfs(int node,int distance)
{
    vis[node] = 1;
    dis[node] = distance;

    for(int child : vec[node])
    {
        if(vis[child] == 0)
        {
            dfs(child, distance + 1);
        }
    }

    int x;
    cin>>x;
    int min_value = 0,min_node;

    while(x--)
    {
        int n;
        cin>>n;

        if(min_value > dis[n])
        {
            min_value = dis[n];
            min_node = n;
        }
    }

    cout<<min_node<<"\n";
}


int main()
{
    fastIO;

    int t;
    cin>>t;
    t--;

    while(t--)
    {
        int node,edge;
        cin>>node>>edge;
        int x,y;

        while(edge--)
        {
            cin>>x>>y;

            vec[x].pb(y);
            vec[y].pb(x);
        }
    }

    dfs(1,0);
}

/*
    1
    /\\
    2 3 4
   /\
  5  6
*/
