#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int dist[30005];
vector< pair<int,int> > node[30005];

void tree_bfs_values(int src)
{
    queue< pair<int,int> >q;
    dist[src]=0;
    q.push(make_pair(src,0));
    while(!q.empty())
    {
        int u=q.front().first;
        q.pop();

        for(int i=0; i<node[u].size(); i++)
        {
            int v=node[u][i].first;
            int w=node[u][i].second;
            if(dist[v]==-1)
            {
                dist[v]=dist[u]+w;
                q.push(make_pair(v,w));
            }
        }
    }
}


int main()
{
    int t,n,c=0;
    scanf("%d",&t);
    while(t--)
    {
        c++;
        scanf("%d",&n);
        for(int i=0; i<n-1; i++)
        {
            int a,b,cost;
            cin>>a>>b>>cost;
            node[a].push_back(make_pair(b,cost));
            node[b].push_back(make_pair(a,cost));

        }

        memset(dist,-1,sizeof dist);
        tree_bfs_values(0);
        int mx=0,mx2=0,p;

        for(int i=0; i<n; i++)
        {
            if(dist[i]>mx)
            {
                mx=dist[i];
                p=i;

            }
        }

        memset(dist,-1,sizeof dist);
        tree_bfs_values(p);

        for(int i=0; i<n; i++)
        {
            if(dist[i]>mx2)
            {
                mx2=dist[i];


            }
        }

        printf("Case %d: %d\n",c,mx2);

        for(int i=0; i<n; i++)
        {
            node[i].clear();
        }
    }
    return 0;
}
