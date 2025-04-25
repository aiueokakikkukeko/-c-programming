#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if (num%2 !=0){
    printf("%dは奇数です。\n",num);
    }else{
    printf("%dは偶数です。\n",num);
    }
    return 0;
}
