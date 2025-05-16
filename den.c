#include <stdio.h>
/*プロトタイプ宣言*/    
float tasu(float x,float y);
float hiku(float x,float y);
float kakeru(float x,float y);
int main(void){/*メイン関数*/
        float wa = tasu(5.0,3.0);
        printf("%f\n",wa);
        float sa = hiku(5.0,3.0);
        printf("%f\n",sa);
        float seki = kakeru(5.0,3.0);
        printf("%f\n",seki);
        return 0;
    }

float tasu(float x,float y){/*ここは引数*/
float hiku(float x,float y){
float kakeru(float x,float y){
        float wa,sa,seki;
        wa = x + y;/*計算式*/
        sa = x - y;/*計算式*/
        seki = x * y;/*計算式*/
        return wa,sa,seki ;
    }
}
}

