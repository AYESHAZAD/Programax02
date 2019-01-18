#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        c++;
        stack <string> bk;
        stack <string> fr;

        printf("Case %d:\n",c);

        string s1,s2,s;
        s2="http://www.lightoj.com/";
        bk.push(s2);

        while(cin>>s1 && s1!="QUIT")
        {

            if(s1=="VISIT")
            {

                cin>>s2;
                cout<<s2<<endl;
                bk.push(s2);
                if(!fr.empty())
                {
                    while(!fr.empty())
                    {
                        fr.pop();
                    }
                }


            }


            else  if(s1=="BACK")
            {

                s=bk.top();
                fr.push(s);
                bk.pop();

                if(!bk.empty())
                {
                    cout<<bk.top()<<endl;
                }

                else
                {
                    printf("Ignored\n");
                    s=fr.top();
                    bk.push(s);
                    fr.pop();
                }

            }


            else if(s1=="FORWARD")
            {
                if(!fr.empty())
                {
                    cout<<fr.top()<<endl;
                    s=fr.top();
                    bk.push(s);
                    fr.pop();

                }
                else
                {
                    printf("Ignored\n");
                }

            }




        }

    }

    return 0;
}
