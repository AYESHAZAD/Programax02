#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,q=0;
    scanf("%d",&t);
    while(t--)
    {
        int ox,oy,ax,ay,bx,by;
        double oa,ab,c,p;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        q++;
        oa=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
        ab=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
        p=acos(((2*oa*oa)-(ab*ab))/(2*oa*oa));
        c=oa*p;

        printf("Case %d: %lf\n",q,c);

    }
    return 0;
}
