/* 
目前存在的问题：1.sort函数排序时只能从大到小不能从小到大 2.不知道哪里还是不对自闭了只有十分
结构体用sort排序：sort()函数第三个参数设为一个bool变量为某个元素的大小判断
还是用暴力的方法 按照时间循环，每一秒判断是否有钥匙被拿走或者被放回，更新钥匙位置状态 
*/
#include<iostream>
#include<algorithm>
using namespace std;
struct KEY
{
    int key,starttimr,time,endtime;
}teacher[1000];
int a,b;

bool cmp(const KEY &a,const KEY &b)
{
    if(a.starttimr>b.starttimr){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    int ans[1001];
    for (int i = 0; i < n; i++)
    {
        ans[i]=i+1;
    }
    
    for (int i = 0; i < k; i++)
    {
        cin>>teacher[i].key>>teacher[i].starttimr>>teacher[i].time;
        teacher[i].endtime=teacher[i].starttimr+teacher[i].time;
    }
    sort(begin(teacher),end(teacher),cmp);

    for (int i = 0; i < 10100; i++)
    {
        int number=k-1;
        while (i==teacher[number].starttimr)
        {
            int tmp=teacher[number].key;
            ans[tmp-1]=0;
            number--;                
        }
        int nowtime=i;
        for (int j = 0; j < k; j++)
        {
            if (nowtime==teacher[j].endtime)
            {
                for (int q = 0; q < n; q++)
                {
                    if (ans[q]==0)
                    {
                        ans[q]=teacher[j].key;
                        break;
                    } 
                }
            }  
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
