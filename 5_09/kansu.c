/*
//C言語の関数について
//特定の処理をまとめたプログラム
#include <stdio.h>

int add(int a);

int main(void) {
    printf("%d\n",add(3));
}

//メイン関数は、プログラム全体で最初に実行される関数
//私たちが作った関数はすべてメイン関数で実行される

int add (int a) {
    a=a+1;
    return a;
}

//関数はリターンをかく
*/
int add(int a, int b);

int main(void){
    printf("%d\n",add(3,5));
}

int add(int a,int b){
    return a+b;
}