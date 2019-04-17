#include<bits/stdc++.h>
using namespace std;

struct node
{
    int u,v,w;

    node(int a,int b,int c)
    {
        u=a;
        v=b;
        w=c;
    }

    bool operator <(const node &p)const
    {
        return w<p.w;
    }
};

vector<node> edge;
int par[10000];

int find(int u)
{
    if(u!=par[u])
        par[u]=find(par[u]);

    return par[u];
}


int krushkal(int n)
{
    int u,v,cost,cnt;

    for(int i=0; i<=n; i++)
        par[i]=i;
    cost=0;
    cnt=0;
    for(int i=0; i<(int)edge.size(); i++)
    {
        u=find(edge[i].u);
        v=find(edge[i].v);

        if(u!=v)
        {
            cnt++;
            par[u]=v;
            cost+=edge[i].w;

            if(cnt==n)
                break;
        }

    }
    return cost;
}



int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {
        int n,u,v,w,sum1=0,sum2=0,z,res=0;
        scanf("%d",&n);
        c++;
        while(cin>>u>>v>>w)
        {
            if(u==0&&v==0&&w==0)
                break;

            edge.push_back(node(u,v,w));
        }
        sort(edge.begin(),edge.end());
        sum1=krushkal(n);

        reverse(edge.begin(),edge.end());
        sum2=krushkal(n);

        res=sum1+sum2;
        //cout<<res<<endl;

        if(res%2==0)
        {
            z=res/2;
            printf("Case %d: %d\n",c,z);
        }

        else
            printf("Case %d: %d/2\n",c,res);


        edge.clear();
    }
   return 0;
}

/*
3
1
0 1 10
0 1 20
0 0 0

3
0 1 99
0 2 10
1 2 30
2 3 30
0 0 0


2
0 1 10
0 2 5
0 0 0

*/

