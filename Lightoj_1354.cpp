#include<bits/stdc++.h>
using namespace std;
int arr1[1000],arr2[1000],p=0,q=0;
void func1(string ss)
{
    int ans=0;
    for(int i=0; i<ss.length(); i++)
    {
        ans=(ans*10)+(ss[i]-48);
    }
    arr1[p++]=ans;

}
void func2(string ss)
{
    int ans1=0;
    for(int i=0; i<ss.length(); i++)
    {
        ans1=(ans1*10)+(ss[i]-48);
    }
    arr2[q++]=ans1;

}
int func3(int z)
{
    int sum=0;
    int f=1;
    while(z>0)
    {
        int a=z%10;
        sum+=a*f;
        z=z/10;
        f=f*2;
    }
    return sum;
}

int main()
{
    int t,n,m,c=0;
    scanf("%d",&t);
 getchar();
    while(t--)
    {

        c++;
        string s1,s2,s3,s4;
        getline(cin,s1);
        getline(cin,s2);

        p=0,q=0;

        for(int i=0;i<s1.size(); i++)
        {
            if(s1[i]!='.')
            {
                s3+=s1[i];
            }
            else
            {

                func1(s3);
                s3="";
            }
        }  func1(s3);

        for(int i=0; i<s2.size(); i++)
        {
            if(s2[i]!='.')
            {
                s4+=s2[i];
            }
            else
            {
                func2(s4);
                s4="";
            }
        }
        func2(s4);


        int y=0;
        for(int i=0; i<p; i++)
        {
            int x=func3(arr2[i]);

            if(arr1[i]==x)
               y++;
        }

    if(y==4)
        printf("Case %d: Yes\n",c);
    else
        printf("Case %d: No\n",c);





    }
    return 0;

}

