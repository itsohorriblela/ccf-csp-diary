//20190302二十四点：将数据保存在堆栈中，如果是*/直接算出结果保存，如果是-将下一位保存为负数
#include<stdio.h>
#include<iostream>
#include<cstring>
#include<stack>
//stack库可进行堆栈操作 
using namespace std;
//字符串变量声明 char str[n]
int main(){
    int n;
    char tmp[7];

    stack<int> num;
    //stack<char> sign;
    //堆栈初始化 stack<type> name
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        for(int j=0;j<7;j++){
            if((tmp[j]>='0')&&(tmp[j]<='9'))
            //判断一个字符是否为数字if(c >='0' && c<='9')
            //判断是否为字母'a' 'z' 'A' 'Z'
            {
                num.push(tmp[j]-'0');
                //将字符转换为数字char-'0'
            }else
            if(tmp[j]=='+'){
                //sign.push('+');
            }else
            if(tmp[j]=='-'){
                //sign.push('-');
                num.push((tmp[j+1]-'0')*(-1));//忘记乘-1
                j++;//如果是-则要把后一位数存为负数
            }else
            if (tmp[j]=='x')
            {
                int left=num.top();//取堆栈中的值用top（）而不是pop（）
                num.pop();//忘记pop
                num.push((tmp[j+1]-'0')*left);
                j++;
            }else            
            if (tmp[j]=='/'){
                int left=num.top();
                num.pop();
                num.push(left/(tmp[j+1]-'0'));
                j++;
            }            
        }
        int result=0;
        while(!num.empty())//while的条件全部运行完才会判断一次
        {
            int right=num.top();
            result=right+result;
            num.pop();
        }
        if(result==24){
            cout<<"Yes"<<endl;
        }else
        {
            cout<<"No"<<endl;
        }
    }  
    return 0;  
}
