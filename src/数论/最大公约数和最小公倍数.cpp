// 最大公约数 和 最小公倍数的递归代码实现
//greatest common divisor(gcd)最大公约数
int gcd(int x ,int y){
    return y?gcd(y,x%y):x;
}   
//lowest common multiple (lcm)最小公倍数
int lcm(int x,int y){
    return x*y/gcd(x,y);
}  
