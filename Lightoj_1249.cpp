#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0,n;
    scanf("%d",&t);
    while(t--)
    {
        vector< pair<int,string> > v;
        scanf("%d",&n);
        c++;
        for(int i=0; i<n; i++)
        {
            string s;
            int x,y,z,d;
            cin>>s;
            cin>>x>>y>>z;
            d=x*y*z;
            v.push_back(make_pair(d,s));
        }
        sort(v.begin(),v.end());

        /*for(int i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }*/
        int p=v.size()-1;
        string s3,s4;
        if(v[p].first>v[0].first)
        {
            s3=v[p].second;
            s4=v[0].second;
            //printf("Case %d: %s took chocolate from %s\n",c,s3,s4);

            cout<<"Case "<<c<<": "<<s3<<" took chocolate from "<<s4<<endl;
        }
        else
        {
            printf("Case %d: no thief\n",c);
        }
        v.clear();

    }

    return 0;
}
