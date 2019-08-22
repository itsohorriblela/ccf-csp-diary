#include<iostream>
using namespace std;
typedef long long LL;

int main(){
    int r,y,g;
    cin>>r>>y>>g;
    int count;
    cin>>count;
    int status,time;
    int tmp;
    LL ans=0;
    for (LL i = 0; i < count; i++)
    {
        cin>>status>>time;
        switch (status)
        {
        case 0:
            ans=ans+time;
            break;
        case 1:
            tmp=ans;
            tmp=tmp%(r+g+y);
            if ((time-tmp)>0)
            {
                ans=ans+time-tmp;
            }else
            if ((time-tmp)>-(g+y))
            {
                ans=ans;
            }else
            if ((time-tmp)>-(r+y+g))
            {
                ans=ans+r-(tmp-y-g-time);
            }
            break;
        case 3:
            tmp=ans;
            tmp=tmp%(r+g+y);
            if ((time-tmp)>-y)
            {
                ans=ans;
                break;
            }else
            if ((time-tmp)>-(y+r))
            {
                ans=ans+r-(tmp-time-y);
                break;
            }else
            if ((time-tmp)>-(r+y+g))
            {
                ans=ans;
                break;
            }
        case 2:
            tmp=ans;
            tmp=tmp%(r+g+y);
            if ((time-tmp>0))
            {
                ans=ans;
                break;
            }else
            if ((time-tmp)>-r)
            {
                ans=ans+r-(tmp-time);
                break;
            }else
            if ((time-tmp)>-(r+g+y))
            {
                ans=ans;
                break;
            }
        }
    }
    cout<<ans;
    return 0;
}
