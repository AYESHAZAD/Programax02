#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    scanf("%d",&t);
    while(t--)
    {  c++;
        int arr[105],n,m;
         scanf("%d%d",&n,&m);

         for(int i=0;i<n;i++)
         {
              scanf("%d",&arr[i]);
         }

         for(int i=0;i<m;i++)
         {
             char q;
             cin>>q;
             if(q=='S')
             {
                 int d;
                  scanf("%d",&d);
                  for(int j=0;j<n;j++)
                  {
                      arr[j]+=d;
                  }

             }


           else if(q=='M')
             {
                 int d;
                  scanf("%d",&d);
                  for(int j=0;j<n;j++)
                  {
                      arr[j]*=d;
                  }

             }

             else if(q=='D')
             {
                 int k;
                  scanf("%d",&k);
                  for(int j=0;j<n;j++)
                  {
                      arr[j]/=k;
                  }

             }


              else if(q=='P')
             {
                 int y,z,temp;
                  scanf("%d%d",&y,&z);
                  temp=arr[y];
                  arr[y]=arr[z];
                  arr[z]=temp;

             }


              else if(q=='R')
             {
                 reverse(arr,arr+n);

             }
         }

             printf("Case %d:\n",c);
             for(int k=0;k<n;k++)
             {
                 if(k>0)
                printf(" ");


                 printf("%d",arr[k]);

             }
             printf("\n");





    }
    return 0;
}
