//题目很简单。。然而别人的代码还是 太棒了 精简 自己只能写出来一大堆嵌套的垃圾
#include<stdio.h>
#define MAXN 200000
int main(){
    int T;
    scanf("%d",&T);
    if(T<=3500) printf("%d\n",T);
    else for(int S=3600;S<=MAXN;S+=100){
        int A=S-3500;
        int tax=0;
        if(A>1500) tax+=1500*0.03;
        else {tax+=A*0.03;goto end;}
        if(A>4500) tax+=3000*0.10;
        else {tax+=(A-1500)*0.10;goto end;}
        if(A>9000) tax+=4500*0.20;
        else {tax+=(A-4500)*0.20;goto end;}
        if(A>35000) tax+=26000*0.25;
        else {tax+=(A-9000)*0.25;goto end;}
        if(A>55000) tax+=20000*0.30;
        else {tax+=(A-35000)*0.30;goto end;}
        if(A>80000) tax+=25000*0.35;
        else {tax+=(A-55000)*0.35;goto end;}
        tax+=(A-80000)*0.45;

        end:
            if(S-tax==T){
                printf("%d\n",S);
                break;
            }
    }
    return 0;
}
