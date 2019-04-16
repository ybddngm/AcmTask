多边形面积（坐标表示）
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double ans,sum;
	sum=0;
	int x[1000],y[1000];
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>x[i]>>y[i];
	for(i=1;i<=n-1;i++)
	{
		sum+=x[i]*y[i+1]-y[i]*x[i+1];
	}
	sum+=x[i]*y[1]-y[i]*x[1]; 
	ans=0.5*abs(sum);
	printf("%.1f\n",ans);
}
