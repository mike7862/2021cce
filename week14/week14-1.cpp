///week14-1 step01-1
#include <stdio.h>
int a[2][3] = {///左手i,右手j
    {10, 20, 30},
    {40, 50, 60}
};
int main()
{
    for(int i=0;i<2;i++){///左手i
        for(int j=0;j<3;j++){///右手j
            printf("%d ",a[i][j]);
        }            ///左手i,右手j
        printf("\n");
    }
}
