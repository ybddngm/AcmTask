判断一个数是否为2的幂:  (n&n-1) == 0 ? true : false;  //注意== 的优先级大于 &
                   //n&(n-1) == 0错误，根据优先级先计算(n-1) == 0
理解： 数值 二进制  数值-1 二进制
       2     10    1      01
       4    100    3     011
       8   1000    7    0111
可见 ，当进行&(与)运算时, n&n-1) 必定等于 0
