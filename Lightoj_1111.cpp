#include<bits/stdc++.h>
using namespace std;
int visited[1005],cnt[1005];
vector<int> node[1005];

void dfs(int u)
{
    visited[u]=1;

    cnt[u]++;
    for(int i=0; i<node[u].size(); i++)
    {
        int v=node[u][i];
        if(visited[v]==0)
        {
            visited[v]=1;

            dfs(v);
        }
    }
}


int main()
{
    int t,k,n,m,c=0;
    scanf("%d",&t);

    while(t--)
    {
        int arr[105];
        scanf("%d%d%d",&k,&n,&m);
        c++;
        for(int i=0; i<k; i++)
            cin>>arr[i];


        for(int i=0; i<m; i++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            node[a].push_back(b);
        }
        int mx=0;
        memset(cnt,0,sizeof cnt);

        for(int i=0; i<k; i++)
        {
            memset(visited,0,sizeof visited);
            if(visited[arr[i]]==0)
            {
                dfs(arr[i]);
            }
        }

        for(int i=1; i<=n; i++)
        {
            //cout<<cnt[i]<<" ";
            if(cnt[i]==k)
            {
                mx++;
            }
        }
        printf("Case %d: %d\n",c,mx);
        for(int i=0; i<=n; i++)
            node[i].clear();

    }

    return 0;
}

