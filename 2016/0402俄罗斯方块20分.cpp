//自闭了 做了有三个小时了吧
#include<iostream>
using namespace std;
int gamemap[15][10];//15行10列 从上至下
int block[4][4];//4行4列 从上至下

int main(){
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin>>gamemap[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>block[i][j];
        }
    }
    int blockposition [4][2];
    for (int i = 0; i < 4; i++)
    {
        int k=0;
        for (int j = 0; j < 4; j++)
        {
            if (block[i][j]==1)
            {
                blockposition[k][0]=i;
                blockposition[k][1]=j;
                k++;
            }
            
        }
    }        
    int position;
    cin>>position;
    int flag=0;
    for(int i=0;i<15;i++){
    for (int j = position-1; j < position+3; j++)
    {
        if (gamemap[i][j]==1)
        {
            for (int k = 3; k <= 0; k++)
            {
                if (block[k][j-position+1]==1)
                {
                    gamemap[i-1][j]=1;
                    int nodei=k;
                    int nodej=j-position+1;
                    for (int m = 0; m < 4; m++)
                    {
                        for (int n = 0; n < 4; n++)
                        {
                            if (block[m][n]==1)
                            {
                                gamemap[i-1-nodei+m][j-nodej+n]=1;
                            }
                        }
                    }
                    flag=1;
                    break;
                }                
            }
        }
        if (flag==1)
        {
            break;
        }                           
    }
    if (flag==1)
    {
        break;
    }
    }
    int lastflag=0;
    if (flag==0)
    {
        for (int i = 3; i >=0; i--)
        {
            for (int j = 0; j < 4; j++)
            {
                if (block[i][j]==1)
                {
                    gamemap[14][j+position-1]=1;
                    int nodei=i;
                    int nodej=j;
                    for (int m = 3; m >=0; m--)
                    {
                        for (int n = 0; n<4; n++)
                        {
                            if (block[m][n]==1)
                            {
                                gamemap[14-nodei+m][j+position-1-nodej+n]=1;
                            }                           
                        }                        
                    }
                    lastflag=1;
                    break;
                }                
            }
            break;
        }    
    }
    
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout<<gamemap[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
