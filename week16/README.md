這是week16的程式

'''''''''''''
///week16-1.cpp step01-1 字串
#include <stdio.h>
int a[100];///整數陣列
char s[20];///字母的陣列,字串

int main()
{
    printf("請輸入你的名子: ");
    scanf("%s", s );
    ///Q: scanf("%d", &n );

    printf("你剛剛輸入:%s\n", s );
}
''''''''''''''''

   
///week16-2.cpp step01-2 字串換個名子
#include <stdio.h>
char line[100];///長度看狀況

int main()
{
    printf("Please input a line: ");
    scanf("%s", line );///只讀到空格為止

    printf("%s\n", line );
}
'''''''''''''''''''

   
///week16-3.cpp step02-1 讀入一整行
#include <stdio.h>
char line[300];
int main()
{
    printf("請照著打: -256 0.0000 10101010110101010\n");
    int n;
    float f;
    scanf("%d %f %s", &n ,&f , line );

    printf("我們讀到了整數:%d\n", n );
    printf("我們讀到了整數:%f\n", f );
    printf("很長很長的字串:%s\n", line );
}
'''''''''''''''''''''

   
///week16-4.cpp step02-2 想分析字串,裡面有幾個0幾個1
#include <stdio.h>
char line[300]="10101001010101010101011010001001010100";
int main()
{
    int ans=0;

    ///for(int i=0; i<100; i++){ ///以前,知道長度的話
    int i=0;///課本
    while( line[i] != '\0' ){
        if( line[i] == '1') ans++;

        i++;
    } printf("有%d個1\n", ans );
}
''''''''''''''''''

   
///week16-4.cpp step02-2 想分析字串,裡面有幾個0幾個1
#include <stdio.h>
char line[300]="10101001010101010101011010001001010100";
int main()
{
    int ans=0;

    for(int i=0; line[i] != '\0' ; i++){ ///以前,知道長度的話
    ///int i=0;///課本
    ///while( line[i] != '\0' ){
        if( line[i] == '1') ans++;

        ///i++;
    } printf("有%d個1\n", ans );
}
'''''''''''''''''''''

   
#include <stdio.h>
#include <string.h>//(2)¦r¦ê,­n¥Î½Ò¥»strlen()
char line[3000];
int main()
{
	scanf("%s",line);
	int n = strlen( line );//(2)¦r¦êªø«×
	int bad=0;
	for(int i=0; i<n; i++){
		//a[i] vs. a[n-1-i]
		if( line[i]!=line[n-1-i] ) bad=1;
	}
	if(bad==0) printf("YES");
	else printf("NO");
}
