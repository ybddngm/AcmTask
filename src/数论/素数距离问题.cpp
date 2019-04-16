// 素数距离问题
//1000000以内的素数78498个
//1000100以内的素数78504个
#include<stdio.h>
#include<math.h>
int prime[80000]={2,3},p;
void make()             //建立素数数组表
{
    int i,j;
    p=2;
    for(i=5;i<1000100;i+=2)
    {
        for(j=0;prime[j]<=sqrt(i);j++) if(i%prime[j]==0) break;  //判断i是不是素数
        if(prime[j]>sqrt(i)) prime[p++]=i;                       //判断是素数则添进素数表
    }
}
int find(int n) //二分查找
{
    int low=0,high=78500,mid;
    if(n==1) return 2;
    while(high>low){
        mid=(low+high)/2;                                        //循环取中值
        if(prime[mid]<n)
            low=mid+1;
        else high=mid;
    }
    if(prime[low]==n) return n;
    return (prime[low]-n<n-prime[low-1])?prime[low]:prime[low-1];   
    }
int main()
{
    int t,x,n;
    make();
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        x=find(n);
        printf("%d %d\n",x,abs(x-n));
    }
    return 0;
}
