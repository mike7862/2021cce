///week08-4.cpp step03-1
#include <stdio.h>
int main()
{   ///三角形
    printf("1: *\n");///1樓,1顆星
    printf("1: **\n");///2樓,2顆星
    printf("1: ***\n");///3樓,3顆星
    printf("1: ****\n");///4樓,4顆星
    printf("1: *****\n");///5樓,5顆星
    printf("1: ******\n");///6樓,6顆星

    int n=6;
    for(int i=1; i<=n; i++){///先建出樓層
        printf("%d: \n", i);
    }
}///高度越高,程式越多... ex. 40層
