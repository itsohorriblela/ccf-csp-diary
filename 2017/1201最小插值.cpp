//使用了标准库的sort()函数和vector数据结构
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    vector<int> number;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin>>tmp;
        number.push_back(tmp);
    }
    sort(begin(number),end(number));
    vector<int> ans;
    for (int i = 0; i < n-1; i++)
    {
        int tmp;
        tmp=number[i+1]-number[i];
        ans.push_back(tmp);
    }
    sort(begin(ans),end(ans));
    int answer=0;
    answer=ans.front();
    cout<<answer;
    return 0;
}
