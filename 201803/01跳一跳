#include<iostream>
using namespace std;

int main(){
    int ans=0;
    int tmp=1;
    int flag=1;//记录连续中心多少次
    while(tmp){
        cin>>tmp;
        switch (tmp)
        {
        case 1:
            ans=ans+1;
            flag=1;
            break;
        case 2:
            ans=ans+2*flag;
            flag++;
            break;
        case 0:
            break;
        }
    }
    cout<<ans;
    return 0;
}
