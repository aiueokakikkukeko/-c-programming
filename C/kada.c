#include <stdio.h>
/*プロトタイプ宣言*/    
float ttyk(float x,float y);

int main(void){/*メイン関数*/
        float menn = ttyk(5.0,3.0);
        printf("%f\n",menn);
        return 0;
    }

float ttyk(float x,float y){/*ここは引数*/
        float menn;
        menn = x * y;/*計算式*/
        return menn ;
    }