#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> numbers;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin>>tmp;
        numbers.push_back(tmp);
    }
    sort(begin(numbers),end(numbers));
    int flag=n&1;
    int qua=0;
    if (flag==1)
    {
        int tmp=numbers[(n-1)/2];
        for (int i = 0; i < n; i++)
        {
            if (numbers[i]==tmp)
            {
                qua++;
            }   
        }
        int quaflag=qua&1;
        if (quaflag==1)
        {
            cout<<tmp;
        }else
        {
            cout<<-1;
        }

    }else
    {
        if (numbers[(n-2)/2]==numbers[n/2])
        {
            int tmp=numbers[n/2];
            for (int i = 0; i < n; i++)
            {
                if (numbers[i]==tmp)
                {
                    qua++;
                }   
            }
            int quaflag=qua&1;
            if (quaflag==1)
            {
                cout<<-1;
            }else
            {
                cout<<tmp;
            }
        }else
        {
            cout<<-1;
        }
    }
    return 0;
}
