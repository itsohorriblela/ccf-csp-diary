#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n;
    cin>>n;
    int price[1000]={};
    int ans[1000]={};
    for (int i = 0; i < n; i++)
    {
        cin>>price[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i==0)
        {
            ans[i]=(price[i]+price[i+1])/2;
        }else
        if (i==n-1)
        {
            ans[i]=(price[i]+price[i-1])/2;
        }
        else
        {
            ans[i]=(price[i]+price[i+1]+price[i-1])/3;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
