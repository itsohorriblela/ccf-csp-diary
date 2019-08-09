#include<iostream>
using namespace std;

int main(){
    int count;
    cin>>count;
    int seat[20];
    for (int i = 0; i < 20; i++)
    {
        seat[i]=5;
    }
    int ticket[100];
    for (int i = 0; i < count; i++)
    {
        cin>>ticket[i];
    }
    int flag=1;//给for循环增加一个判断条件：座位是否成功分配
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; flag&&j < 20; j++)
        {
            if (seat[j]>=ticket[i])
            {
                for (int k = 0; k < ticket[i]; k++)
                {
                    cout<<5*j+6-seat[j]+k<<" ";
                }
                cout<<endl;
                flag=0;
                seat[j]=seat[j]-ticket[i];
            }
        }
        for (int j = 0; flag&&j < 20; j++)
        {
            if (seat[j]>=0)
            {
                for(;seat[j]&&ticket;seat[j]--){
                    cout<<5*j+6-seat[j]<<" ";
                    ticket[i]--;
                }
            }
            if (ticket==0)
            {
                flag=0;
                cout<<endl;
            }
        }
        flag=1;//忘记重置flag
    }
    return 0;
}
