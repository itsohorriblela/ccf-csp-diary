#include<iostream>
using namespace std;

int main(){
    int r,y,g,n;
    int t=0;
    cin>>r>>y>>g;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int tmp1,tmp2;
        cin>>tmp1>>tmp2;
        if (tmp1==0)
        {
            t=t+tmp2;
        }else
        if (tmp1==1)
        {
            t=t+tmp2;
        }else
        if(tmp1==2){
            t=t+tmp2+r;
        }
    }
    cout<<t;
    return 0;
}
