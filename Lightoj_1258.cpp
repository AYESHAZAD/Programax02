#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll prefix[1000006];

void set_prefix(string s)
{
    int i=0,j=-1,len;
    len=s.size();
    prefix[0]=-1;

    while(i<len)
    {
        while(j>=0 && s[i]!=s[j])
            j=prefix[j];

        i++;
        j++;
        prefix[i]=j;
    }

}

int kmp_search(string s1,string s2)
{
    int i=0,j=0,n,m;
    n=s1.size();
    m=s2.size();
    set_prefix(s2);

    while(i<n)
    {
        while(j>=0 && s1[i]!=s2[j])
            j=prefix[j];

        i++;
        j++;

    }
    return j;
}


int main()
{
    int t,c=0;
    scanf("%d",&t);

    while(t--)
    {   int x,y,a;
        string s1,s2;
        cin>>s1;
        a=s1.size();
        s2+=s1;
        c++;
        reverse(s2.begin(),s2.end());

        x=kmp_search(s1,s2);
        y=a+(a-x);
        printf("Case %d: %d\n",c,y);
    }
    return 0;
}
