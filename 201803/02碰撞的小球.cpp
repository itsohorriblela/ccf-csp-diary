//注意输出格式！每个数字之间有空格
//注意循环中嵌套循环有可能导致取到相同的点
//不要怕循环次数多复杂度高，先做出题目
#include<iostream>
using namespace std;

int main(){
    int n,l,t;
    cin>>n>>l>>t;
    struct BALL
    {
        int position,direcion;
    }ball[100];
    for (int i = 0; i < n; i++)
    {
        cin>>ball[i].position;
        ball[i].direcion=1;//1 reprisent right;
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (((ball[j].position==l)&&(ball[j].direcion==1))||((ball[j].position==0)&&(ball[j].direcion==-1)))
            {
                ball[j].direcion=ball[j].direcion*(-1);
                ball[j].position=ball[j].position+ball[j].direcion;
            }else
            {
                int flag=0;
                for (int k = 0; k < n; k++)
                {
                    if ((ball[k].position==ball[j].position)&&(k!=j))
                    {
                        ball[k].direcion=ball[k].direcion*(-1);
                        ball[j].direcion=ball[j].direcion*(-1);
                        ball[j].position=ball[j].position+ball[j].direcion;
                        flag=1;
                        break;
                    }                    
                }
                if(flag==0)
                {
                        ball[j].position=ball[j].position+ball[j].direcion;
                }
            }   
        }  
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ball[i].position<<" ";
    }
    return 0;
}
