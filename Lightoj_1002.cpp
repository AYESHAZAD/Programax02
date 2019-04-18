#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef vector<ii> vc;
vc v[505];
int dist[505];

void dijkstra(int src)
{
    priority_queue <ii ,vector<ii> , greater<ii> > pq;

    dist[src]=0;
    pq.push(make_pair(0,src));

    while(!pq.empty())
    {
        int d=pq.top().first;
        int u=pq.top().second;
        pq.pop();

        if(d>dist[u])
            continue;

        for(int i=0; i<v[u].size(); i++)
        {
            ii x=v[u][i];
            int z= max(dist[u],x.second);
            if(z<dist[x.first])
            {
                dist[x.first]=z;
                pq.push(make_pair(dist[x.first],x.first));
            }
        }
    }

}


int main()
{
    int tes,n,m,s,c=0;
    scanf("%d",&tes);

    while(tes--)
    {
        scanf("%d%d",&n,&m);
        int arr[n+1][n+1];
        c++;
        memset(arr,999999,sizeof arr);

        for(int i=0; i<m; i++)
        {
            int a,b,w;
            cin>>a>>b>>w;
            if(w<arr[a][b])
            {
                arr[a][b]=w;
                arr[b][a]=w;
                v[a].push_back(make_pair(b,w));
                v[b].push_back(make_pair(a,w));
            }

        }

        scanf("%d",&s);
        memset(dist,999999,sizeof dist);
        dijkstra(s);

        printf("Case %d:\n",c);

        for(int i=0; i<n; i++)
        {
            if(dist[i]<=20000)
            {
                printf("%d\n",dist[i]);

            }

            else
                printf("Impossible\n");
        }


        for(int i=0; i<n; i++)
            v[i].clear();


    }

    return 0;
}

/*
2
5 6
0 1 5
0 1 4
2 1 3
3 0 7
3 4 6
3 1 8
1
5 4
0 1 5
0 1 4
2 1 3
3 4 7
1

*/
