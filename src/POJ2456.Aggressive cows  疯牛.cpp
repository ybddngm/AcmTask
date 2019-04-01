#include <stdio.h>
#include <algorithm>
using namespace std;

const int MAX = 100005;
static int a[MAX],n,c;  //n个隔间，c头牛
bool judge(int mid){    //判断能否找出测试_最小距离为 mid 的解决方案
    int cnt = 1,t = a[0]; //cnt 计牛的数量，t记录当前隔间
    for(int i = 1;i < n;i++){   // 遍历剩下的隔间
        if(a[i] - t >= mid){    //判断两个房间之间的距离是否大于测试距离
            cnt++;  //如果距离大于测试距离，插入一头牛
            t = a[i];   //改变当前隔间
            if(cnt >= c) return true;   //找到 C 头牛的插入方案
        }
    }   //判断每个隔间的距离，如果大于测试距离 mid 即插入

    return false;
}
int binary_search(){    //二分查找符合要求的最大 mid

    int low = 0,high = a[n-1]-a[0],mid; //编号(0，n-1)
    while(low <= high){ //结束条件
        mid = (low + high)/2;
        if(judge(mid)){ //如果找到了解决方案，查找是否有更大的最小距离
            low = mid+1;
        }else high = mid-1; //没有找到解决方案，以更小的最小距离进行查找
    }
    return low - 1; //最后low == high，上一步low = mid + 1,mid为最小距离，所以返回low-1
}
int main()
{
    while(~scanf("%d%d",&n,&c))
       {
           int i;
           for(i=0;i<n;i++) scanf("%d",&a[i]);
           sort(a,a+n);
           printf("%d\n",binary_search());
       }
       return 0;
}
