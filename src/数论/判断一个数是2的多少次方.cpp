// 判断一个数是2的多少次方（ log2 ）
int log2(int value){   
  if (value == 1)return 0;
  else return 1+log2(value>>1);
}
//或者log(b)/log(a) 表示以a为底b的对数        即log(8.0)/log(2.0) = 3
