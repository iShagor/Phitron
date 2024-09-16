#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int groudp_size[N];
void dsu_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        groudp_size[i] = 1;
    }
    // par[1] = 3;
    // par[2] = 1;
    // par[5] = 6;
    // par[6] = 7;
}
int dsu_find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}
void dsu_union(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    par[leaderA] = leaderB;
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (groudp_size[leaderA] > groudp_size[leaderB])
    {
        par[leaderB] = leaderA;
        groudp_size[leaderA] += groudp_size[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        groudp_size[leaderB] += groudp_size[leaderA];
    }
}
int main()
{
    dsu_initialize(7);
    // for (int i = 1; i <= 7; i++)
    //     cout << par[i] << endl;
    // cout << dsu_find(1) << endl;
    // dsu_union(1, 5);
    // cout << dsu_find(1) << endl;
    dsu_union_by_size(1, 2);
    dsu_union_by_size(2, 3);
    dsu_union_by_size(4, 5);
    dsu_union_by_size(5, 6);
    dsu_union_by_size(1, 4);
    cout << dsu_find(1) << endl;
    cout << dsu_find(4) << endl;

    return 0;
}