// 任意进制间转换---将a进制的s转换为b进制
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0); //关闭读写缓存,提高cin和cout效率
    int a,b;
    char s[1025];
    int f[1025];
    int ans[1025];
    while(scanf("%d%d%s",&a,&b,s)){
        printf("%d %s\n%d ",a,s,b);
        int len=strlen(s);
        for(int i=0;i<len;i++)
            f[i]=isdigit(s[i])?s[i]-'0':(islower(s[i])?s[i]-'a'+36:s[i]-'A'+10);
        int j=0;
        while(len>0){
            int s=0;
            bool flag=false;
            int start=0;
            for(int i=0;i<len;i++){
                s=s*a+f[i];
                if(s/b) flag=true;
                if(flag){
                    f[start++]=s/b;
                    s%=b;
                }
            }
            len=start;
            ans[j++]=s;
        }
        for(int i=j-1;i>=0;i--)
            printf("%c",ans[i]>=36?ans[i]-36+'a':(ans[i]>=10?ans[i]-10+'A':ans[i]+'0'));
        printf("\n\n");
    }
    return 0;
}
// 10进制转换任意进制
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    char a[200];
    while(~scanf("%d%d",&n,&m)){
        int i = 0;
        if(n < 0){
            cout << "-";
            n = -n;
        }
        while(n > 0){
            int x = n % m;
            if(i >= 10) a[i] = x + 'A';
            else a[i] = x + '0';
            i++;
            n/=m;
        }
        cout << "位数 = " << i << endl;
        for(int j = i - 1;j >= 0;j--){
            cout << a[j];
        }
        cout << endl;
    }
    return 0;
}
