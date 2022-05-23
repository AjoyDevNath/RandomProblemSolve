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
vector<int>vec[10000];
bool visited[10000];

void dfs(int node)
{
    visited[node] = 1;
    for(auto it : vec[node])
    {
        if(!visited[it])
        {
            dfs(it);
        }
    }
}

int main()
{
	//init_code();
	fastIO();
    int node,edge;
    cin>>node>>edge;

    while(edge--){
        int x,y;
        cin>>x>>y;

        vec[x].pb(y);
        vec[y].pb(x);
    }
    int cnt = 0;
    for(int i = 1 ; i <= node;i++){
        if(visited[i] == 0)
        {
            cnt++;
            dfs(i);
        }
    }
    cout<<cnt<<"\n";

}
