#include<stdio.h>
#include<math.h>
int Euler(int n)
{
    int ret=n;
    for(int i=2;i<=sqrt(n);i++)
     if(n%i==0)
      {
        ret=ret/i*(i-1);
        while(n%i==0)
          n/=i;
     }
    if(n>1)
          ret=ret/n*(n-1);
        return ret;
}
int main()
{
	int n,m;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&m);
		int t=Euler(m);
		printf("%d\n",t);
	}
	return 0;
}
