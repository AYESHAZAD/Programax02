#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int visited[10000],cycle=0;
vector<int> node[10000];

void dfs_cycle(int u)
{
    visited[u]=1;

    for(int i=0;i<node[u].size();i++)
    {
        int v=node[u][i];
        if(visited[v]==0)
        {
            dfs_cycle(v);
        }
        else if(visited[v]==1)
        {
            cycle=1;
            break;
        }
    }
    visited[u]=2;
}


int main()
{
    int t,m,c=0;
    scanf("%d",&t);
    while(t--)
    {
        c++;

         map<string,int> mp;
          int l=1;
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {

          string a,b;
          cin>>a>>b;
          if(mp[a]==0)
          {
          mp[a]= l++;

          }

          if(mp[b]==0)
          {

          mp[b]=l++;
          }


          node[mp[a]].push_back(mp[b]);
        }

        memset(visited,0,sizeof visited);
        cycle=0;
        for(int i=1;i<=l&&cycle==0;i++)
        {
            if(visited[i]==0)
            {
                dfs_cycle(i);
            }
        }
        if(cycle)
        {
            printf("Case %d: No\n",c);
        }
        else
        {
              printf("Case %d: Yes\n",c);
        }
      mp.clear();
      for(int i=1;i<=l;i++)
      {
          node[i].clear();
      }

    }
    return 0;
}
