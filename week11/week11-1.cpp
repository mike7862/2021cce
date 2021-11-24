///week11-1.cpp step01-1 把篩子法,改造成 印出 m以下的質數
#include <stdio.h>
int a[10000000];
int main()
{
	int m;
	scanf("%d",&m);

	///int ans=0;
	for(int i=2;i<m;i++){
		if(a[i]==0)
		{
			///ans++;
			printf("%d ",i);
			for(int k=i+i;k<m;k+=i){
				a[k]=1;

			}
		}
	}
	///printf("%d\n",ans);
}
