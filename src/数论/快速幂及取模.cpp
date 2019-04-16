/********************
快速幂及快速求幂取模 的递归及其非递归实现
********************/
// 快速幂(递归实现)
int spow(int a,int n){
    if(n == 1) return a;    //递归结束条件
    int ret = spow(a,n/2);
    return (ret*ret)*(n&1?a:1); //条件表达式
}
// 快速幂(非递归实现)
int spow(int a,int n){      //返回a的n次方
    int ret=1;
    while(n){
        if(n&1) ret *= a;     //位运算，判断奇偶性
        a *= a;
        n >>= 1;
    }
    return ret;
}
// 快速求幂取模(递归实现)
int spow(int a,int n,int b){    //返回a^n mod b
    if(n==1) return a%b;
    long long ret = spow(a,n/2,b);    //long long防止溢出
    return (ret*ret%b)*((n&1?a:1)%b)%b;
}
// 快速求幂取模(非递归实现)
int spow(long long a,int n,int b){
    long long ret=1;
    while(n){
        if(n&1) ret=ret*a%b;
        a=a*a%b;
        n >>= 1;
    }
    return ret;
}
// 快速求幂取模(大数)
typedef long long ll;
ll spow(ll a,ll n,ll b){
    ll ret=1;
    while(n){
        if(n&1) ret=ret*a%b;
        a=a*a%b;
        n >>= 2;
    }
    return ret;
}

