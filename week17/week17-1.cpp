///week17-1 step01-1 剝皮
#include <stdio.h>
int main()
{
    int N=20030101;///有個數字,每一個都拆出來
    ///餘數 % 得到個位數
    ///除法 / 得到2003010
    printf("%d => %d %d\n", N, N/10, N%10);

    N=N/10;
    printf("%d => %d %d\n", N, N/10, N%10);

    N=N/10;
    printf("%d => %d %d\n", N, N/10, N%10);

    N=N/10;
    printf("%d => %d %d\n", N, N/10, N%10);

    N=N/10;
    printf("%d => %d %d\n", N, N/10, N%10);
}
