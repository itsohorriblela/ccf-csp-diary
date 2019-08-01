//服了 这么简单的题目 王少奇提交了四次 switch王少奇又用错了，余数为0王少奇也没有讨论
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int yushu;
    yushu=n%50;
    int tmp;
    tmp=(n/50)*7;
    int ans;
    switch (yushu)
    {
    case 10:
        ans=tmp+1;
        break;
    case 20:
        ans=tmp+2;
        break;
    case 30:
        ans=tmp+4;
        break;
        case 40:
        ans=tmp+5;
        break;
        case 0:
        ans=tmp;
    }    
    cout<<ans;
    return 0;
}
