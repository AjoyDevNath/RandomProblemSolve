
/*
    Finding Diameter of tree
    Author : Ajoy Nath
*/

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;


int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

vector<int>vec[10000];
int vis[10000],dis[10000];
int mx = -(INT_MAX),nod;

bool dfs(int node,int d)
{
    vis[node] = 1;
    dis[node] = d;//0

    if(dis[node] > mx)
    {
        mx = dis[node];//0
        nod = node;
    }
    for(int child : vec[node])
    {
        if(vis[child] == 0)
        {
            dfs(child,dis[node] + 1);
        }
    }
}

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int main()
{
    fastIO();

    int node,edge;
    cin>>node>>edge;

    while(edge--)
    {
        int x,y;
        cin>>x>>y;
        vec[x].pb(y);
        vec[y].pb(x);
    }

    dfs(1,0);
    cout<<mx<<" "<<nod<<"\n";

    mx = -1;

    for(int i = 1 ; i <= node ; i++)
    {
        vis[i] = 0;
    }

    dfs(nod,0);
    cout<<mx<<" "<<nod<<"\n";
    cout<<mx<<"\n";
}
