#include<bits/stdc++.h>
using namespace std;

typedef  vector <int> ii;
ii g[10005];
ii top;

bool visited[10005];


void reset(int n)
{
    for(int i=0; i<=n; i++)
    {
        g[i].clear();

    }
    top.clear();

    memset(visited,false,sizeof visited);

}



void dfs1(int u)
{
    visited[u]=true;

    for(int i=0; i<g[u].size(); i++)
    {
        int v=g[u][i];

        if(visited[v]==false)
            dfs1(v);
    }

    top.push_back(u);
}


void dfs2(int u)
{
    visited[u]=true;


    for(int i=0; i<g[u].size(); i++)
    {
        int v=g[u][i];

        if(visited[v]==false)
            dfs2(v);
    }
}


int main()
{
    int t,c=0;
    scanf("%d",&t);

    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);

        reset(n);
        c++;

        for(int i=0; i<m; i++)
        {
            int a,b;
            cin>>a>>b;
            g[a].push_back(b);

        }


        for(int i=1; i<=n; i++)
        {
            if(visited[i]==false)
                dfs1(i);
        }

        for(int i=0; i<=n; i++)
            visited[i]=0;



        int cnt=0;
        for(int i=top.size()-1; i>=0; i--)
        {
            if(visited[top[i]]==false)
            {
                cnt++;
                dfs2(top[i]);
            }

        }

        printf("Case %d: %d\n",c,cnt);



    }







    return 0;
}

/*
2
5 4
1 2
1 3
3 4
5 3

4 4
1 2
1 3
4 2
4 3
*/



