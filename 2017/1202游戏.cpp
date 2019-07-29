//运行超时
#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int flag=n;//flag represent 删掉了多少数字.flag=1输出答案
    int jiashu=n;
    struct FRIEND
    {
        int number,ans;//被删掉的数字ans=0，最后输出最后一个数字的ans
        int time=0;//time represent第几次经过这个数。第二次经过会让加数-1
    }friends[1000];
    for (int i = 1; i <= n; i++)
    {
        friends[i].number=i;
        friends[i].ans=i;
    }
    for (int i = 1; i <= n; i++)//循环从0开始还是从1开始不要变，因为跟角标有关
    {
        if ((friends[i].number%k==0)||(friends[i].number%10==k))//条件是且还是或要注意
        {
            friends[i].ans=0;
            friends[i].time++;
            flag--;
        }
    }
    while (flag!=1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (friends[i].ans==0)
            {
                friends[i].time++;
            }
            else
            if (friends[i].time==2)
            {
                jiashu--;
            }
            else
            if (friends[i].ans!=0)
            {
                friends[i].number=friends[i].number+jiashu;
                if ((friends[i].number%k==0)||(friends[i].number%10==k))
                {
                    friends[i].ans=0;
                    friends[i].time++;
                }
                if (friends[i].time==1)
                {
                flag--;
                }
            }
            
        }
        
    }
    for (int i = 1; i <= n; i++)
    {
        if (friends[i].ans!=0)
        {
            cout<<friends[i].ans;
        }
        
    }
    return 0;
}
