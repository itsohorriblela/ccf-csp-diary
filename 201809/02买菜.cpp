//20180902题目即为求最小的右端值减去最大的左端值，用了vector去做，但感觉定义一个time[4000]的数组应该也可以。vector从标准输入流中初始化？王少奇只会
//先用临时变量把标准输入流中的值取出来再用push_back，感觉比较麻烦
#include<vector>
#include<iostream>
using namespace std;
#define max(x,y) ( x>y?x:y )//20180902用三目运算符定义宏来快速定义min和max。#define max(x,y) ( x>y?x:y ) 当x>y时取x反之取y
#define min(x,y) ( x<y?x:y )

int main(){
    int n;
    int ans=0;
    cin>>n;
    vector<int> time1;
    vector<int> time2;
    for (int i = 0; i < 2*n; i++)
    {
        int tmp;
        cin>>tmp;
        time1.push_back(tmp);
    }
    for (int i = 0; i < 2*n; i++)
    {
        int tmp;
        cin>>tmp;
        time2.push_back(tmp);
    }
    for (int i = 0; i < 2*n; i=i+2)
    {
        for (int j = 0; j < 2*n; j=j+2)
        {
            if ((time1[i]<time2[j+1])&&(time1[i+1]>time2[j]))
            {
                ans=ans+min(time1[i+1],time2[j+1])-max(time1[i],time2[j]);
            }
        }
    }
    cout<<ans;
    return 0;
}
