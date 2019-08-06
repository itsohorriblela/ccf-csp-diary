#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> students;
    for (int i = 1; i <= n; i++)
    {
        students.push_back(i);//赋值从1开始
    }
    vector<int>::iterator flag;//初始化迭代器 vector<int>::iterator name
    int number,position;
    while (m--)
    {
        cin>>number>>position;
        for (flag=students.begin();flag!=students.end();flag++)//迭代器和begin()/end()参与循环体
        {
            if(*flag==number){
                flag=students.erase(flag);//为什么不能直接students.erase(flag)而是要让他等于迭代器？
                students.insert(flag+position,number);//vector插入 insert(指向插入点的迭代器,元素)
                break;
            }
        }
        
    }
    for (flag=students.begin();flag!=students.end();flag++)
    {
        cout<<*flag<<" ";
    }
    return 0;
    
}
