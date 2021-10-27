///week07 steo03-1
///了解 for(迴圈),你要保住姊也打字
#include <stdio.h>
int main()
{
    int i;///1973年的c發明著的寫法,1989年ANSI C的規範
    for( i=0;i<=3; i++){
        printf("有幾次呢?\n");
    }///課本的寫法,不好!!!

    ///1989/1999 新版的 c++/c寫法
    for( int i=0;i<3; i++){
        printf("老師推薦的法,有幾次?\n");
    }///會跑3次
}
