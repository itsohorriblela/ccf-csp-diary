#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int max,min,tmp,n;
    double mid=0;

    cin>>n;
    int flag=n&1;

    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        if(i==0){
            max=tmp;
        }
        if(i==n-1){
            min=tmp;
        }       
        if((flag==0)&&((i==n/2)||(i==n/2-1))){
            mid=mid+tmp/2.0;
        }
        if(flag&&i==n/2){
            mid=tmp;
        }
    }

    if(min>max){
        tmp=min;
        min=max;
        max=tmp;
    }
    	if((mid-(int)mid)==0){ //中位数为整数 
		printf("%d %d %d\n", max,(int)mid, min);
	}
	else{
		printf("%d %.1f %d\n",max,mid,min);
	}
    return 0;
}
