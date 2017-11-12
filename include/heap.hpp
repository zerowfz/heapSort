#ifndef __HEAP_HPP
#define __HEAP_HPP
#include <iostream>
class heap{
    public:
    	//类的数据成员 
        float* array;
        int length;
        int layer;//int layer=0;//在类体中不允许对所定义的数据成员进行初始化 
        //类的成员函数 
        heap(float *A,int n);//构造函数 
        inline int PARENT(int i){return i/2;}//内联函数，以空间换时间，直接插入到调用处 
        inline int LEFT(int i){return 2*i;}
        inline int RIGHT(int i){return 2*i+1;}
        void max_heap(int i);
        void build_max_heap();
        void printheap();
};//}//要有分号 
#endif
