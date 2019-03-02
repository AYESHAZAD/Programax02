#include<bits/stdc++.h>
using namespace std;

int divisor(int n)
{
    int cnt=0;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            cnt++;

            if(i!=n/i)
                cnt++;
        }

    }
    return cnt;
}

bool comp( pair<int,int> a, pair<int,int> b )
{
    if(a.first!=b.first)
        return (a.first< b.first);///if div(x)!=div(y) then we check if div(x)<div(y)

    else
        return (a.second>b.second);///if x==y then we check if(x>y)
}
int main()
{
    vector<pair <int,int> > v1;
    int x;
    for(int i=1; i<=1000; i++)
    {
        x=divisor(i);
        v1.push_back(make_pair(x,i));
    }

    sort(v1.begin(),v1.end(),comp);


    /*for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i].first<<"-"<<v1[i].second<<"  ";
    }*/

    int t,c=0,z;
    scanf("%d",&t);
    while(t--)
    {
        c++;
        scanf("%d",&z);
        //cout<<v1[z-1].second<<" "<<v1[z-1].first<<endl;
        printf("Case %d: %d\n",c,v1[z-1].second);///cause index starts from 0
    }





    return 0;

}
