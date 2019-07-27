#include<iostream>
using namespace std;
typedef unsigned long long ull;

int main(){
    ull r,y,g,n;
    ull ans=0;
    cin>>r>>y>>g;
    cin>>n;
    for (ull i = 0; i < n; i++)
    {
        ull status,time;
        cin>>status>>time;
        if (status==0)
        {
            ans=ans+time;
        }else
        if (status==1)//red
        {
            ull rt=ans%(r+y+g);
            ull tmp=0;
            tmp=time-rt;
            if (tmp>0)
            {
                ans=ans+tmp;
            }else
            if (tmp<-(g+y))
            {
                ans=ans+tmp+r+y+g;
            }
        }else
        if (status==2)//yellow
        {
            ull rt=ans%(r+y+g);
            ull tmp=0;
            tmp=time-rt;
            if ((tmp<0)&&(tmp>-(r)))
            {
                ans=ans+tmp+(r);//30
            }
        }else
        if (status==3)//green
        {
            ull rt=ans%(r+y+g);
            ull tmp=0;
            tmp=time-rt;
            if (tmp<-(y))
            {
                ans=ans+(r+y)+tmp;//33
             }
        }
    }
    cout<<ans;
}
