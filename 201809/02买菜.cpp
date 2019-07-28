#include<vector>
#include<iostream>
using namespace std;
#define max(x,y) ( x>y?x:y )
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
