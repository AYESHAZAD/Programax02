#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,c=0,w,i,x,y;
    cin>>t;
    while(t--)
    {
        c++;


        cin>>w;
        if(w%2!=0)
        {
            cout<<"Case "<<c<<": "<<"Impossible"<<endl;
            continue;
        }

        for(i=2; i<w; i+=i)
        {
            if(w%i==0&&((w/i)*i)==w && (w/i)%2!=0)
            {
                x=w/i;
                y=i;

                break;
            }
        }


            cout<<"Case "<<c<<": "<<x<<" "<<y<<endl;


    }
    return 0;
}
