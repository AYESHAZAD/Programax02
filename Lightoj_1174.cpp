#include<bits/stdc++.h>
using namespace std;
int dist1[105],dist2[105];
vector<int> node[105];

void bfs(int src)
{
    queue<int> q;
    dist1[src]=0;
    q.push(src);

    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        for(int i=0; i<node[u].size(); i++)
        {
            int v=node[u][i];

            if(dist1[v]==-1)
            {
                dist1[v]=dist1[u]+1;
                q.push(v);
            }
        }
    }

}

void bfs2(int src)
{
    queue<int> q;
    dist2[src]=0;
    q.push(src);

    while(!q.empty())
    {
        int u=q.front();
        q.pop();

        for(int i=0; i<node[u].size(); i++)
        {
            int v=node[u][i];

            if(dist2[v]==-1)
            {
                dist2[v]=dist2[u]+1;
                q.push(v);
            }
        }
    }

}



int main()
{
    int t,n,r,c=0;
    scanf("%d",&t);

    while(t--)
    {

        scanf("%d%d",&n,&r);
        c++;
        for(int i=0; i<r; i++)
        {
            int u,v;
            scanf("%d%d",&u,&v);
            node[u].push_back(v);
            node[v].push_back(u);

        }
        int s,d,res=0;
        scanf("%d%d",&s,&d);
        memset(dist1,-1,sizeof dist1);
        bfs(s);
        memset(dist2,-1,sizeof dist2);
        bfs2(d);

        for(int i=0; i<n; i++)
            res=max(res,dist1[i]+dist2[i]);

        printf("Case %d: %d\n",c,res);

        for(int i=0; i<n; i++)
            node[i].clear();


    }
    return 0;
}
