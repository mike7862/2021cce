///week17-1 step01-1 ���
#include <stdio.h>
int main()
{
    int N=20030101;///���ӼƦr,�C�@�ӳ���X��
    ///�l�� % �o��Ӧ��
    ///���k / �o��2003010
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
