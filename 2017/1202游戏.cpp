//采用双向队列，用一个flag标记每轮的报数（因为报数不用保存，用完+1到下一轮就可以了），每轮把队列第一个数取出来，如果不符合条件放入队尾，直到剩下最后一个数
//注意empty（）要写成员函数deque.empty(),empty(deque)会导致编译错误，csp用的编译器太垃圾了
#include<iostream>
using namespace std;
#include<deque>

int main(){
    int n,k;
    cin>>n>>k;
    deque<int> numbers;
    for (int i = 1; i <= n; i++)
    {
        numbers.push_back(i);
    }
    int flag=0;
    int ans;
    while (!numbers.empty())
    {
        flag++;
        ans=numbers.front();
        numbers.pop_front();
        if ((flag%k!=0)&&(flag%10!=k))
        {
            numbers.push_back(ans);
        }
    }
    cout<<ans;
    return 0;    
}
