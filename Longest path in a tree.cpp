
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

vector<int>vec[10001];
int vis[10001],dis[10001],nod;
int mx = -(INT_MAX);

void dfs(int node,int d)
{
    vis[node] = 1;
    dis[node] = d;

    if(dis[node] > mx)
    {
        mx = dis[node];
        nod = node;
    }

    for(int child : vec[node])
    {
        if(vis[child] == 0)
        {
            dfs(child,dis[node]+1);
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

    int height,width;
    cin>>height>>width;


}
