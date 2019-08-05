//输出结果是1 4 2 3 5 6 8，cnmd7跑哪去了，如果用sort对结构体按位置排序再输出又没有8，自闭了
#include<iostream>
#include<algorithm>
using namespace std;

struct STUDENT
{
int num;
int position;
}student[1000];

bool cmp(const STUDENT &a,const STUDENT &b)
{
    if(a.position>b.position){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        student[i].num=i+1;
        student[i].position=i+1;
    }
    /*
    for (int i = 0; i < n; i++)
    {
        cout<<student[i].num<<" ";
    }
    cout<<endl;
    */
    for (int i = 0; i < m; i++)
    {
        int number,move;
        cin>>number>>move;
        student[number-1].position=student[number-1].position+move;
        if (student[number-1].position>n)
        {
            student[number-1].position=n;
        }else
        if (student[number-1].position<=0)
        {
            student[number-1].position=1;
        }
        if (move>0)
        {
            int j=0;
            while (move)
            {
                for (int i = 0; i < n; i++)
                {
                    if (student[i].position==(student[number-1].position-j))
                    {
                        student[i].position=student[i].position-1;
                    }   
                }
                j++;
                move--;
            }           
        }
        if (move<0)
        {
            int j=0;
            while (-move)
            {
                for (int i = 0; i < n; i++)
                {
                    if (student[i].position==(student[number-1].position+j))
                    {
                        student[i].position=student[i].position+1;
                    }                   
                }
                j++;
                move++;
            }            
        }
        /*
        sort(begin(student),end(student),cmp);
        for (int i = n; i >0; i--)
        {
            cout<<student[i].num<<" ";
        }
        cout<<endl;
        */  
    }
    /*sort(begin(student),end(student),cmp);
    for (int i = n; i >0; i--)
    {
        cout<<student[i].num<<" ";
    }
    return 0;*/
    int flag=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (student[j].position==flag)
            {
                cout<<student[j].num<<" ";
            }
            
        }
        flag++;
    }
       
}
