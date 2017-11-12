#include "heap.hpp"
#include <string.h> 
inline int POW_2(int n){ int x=1;while(n>0){x*=2;n--;}}

heap::heap(float* A,int n)
{
 array = A;
 length = n;
 int x=1;
 while(n>=x)
 {
  x *=2;
  layer++;
 }
}

void heap::max_heap(int i)//heap::max_heap(int i)//缺了函数的返回值类型，类型要与类的声明部分一致 
{
 int left,right,largest;
 float tem;
 left = LEFT(i);//LEST(i);//打错了LEFT 
 right = RIGHT(i);
 if((left <= length) && (array[left]>array[i]))
    largest = left;
 else largest = i;
 if((right<=length)&&(array[right]>array[largest]))
    largest = right;
 if (largest!=i)
 {
  tem = array[i];
  array[i] = array[largest];
  array[largest] = tem;
  max_heap(largest);
 }
 return;
}

void heap::build_max_heap()//heap::build_max_heap()
{
 for(int j=length/2;j>0;j--)
 {
  max_heap(j);
 }
}

void heap::printheap()//heap::printheap()
{
 int i=1;
 int **a;
 //a = new int[layer][POW_2(layer-1)]//layer是普通变量，不是常量，不能用来作为数组大小 
 memset(a,0,sizeof(int) * layer * POW_2(layer-1));

 while(i<=length)
 {
  std::cout<<i;i++;//不完整 
 }
}
