#include <iostream>
using namespace std;

int main1()
{
    //空指针
    //1、空指针用于给指针变量进行初始化
    //int* p = NULL;
    //2、空指针是不可以进行访问的
    //0~255之间为系统占用内存，不允许用户访问
    //*p = 100;

    //野指针  
    //int* p = (int*)0x1100;

    //cout << *p << endl;

    //常量指针：指针的指向可以修改，但是指针指向的值不可以修改
    //const int* p = &a;
    int a = 10;
    int b = 10;

    const int* p = &a;
    //*p = 20;错误
    p = &b;//正确
    //指针常量：指针的指向不可以改，指针指向的值可以改
    // int* const p =&a;
    int* const p2 = &a;
    *p2 = 100;//正确
    //p2 =&b;错误

    //既修饰指针，又修饰常量：指向，值均不可修改
    //const int * const p=&a;
    const int* const p3 = &a;
    //*p3 = 100;//错误
    //p3 = &b;//错误

    system("pause");

    return 0;
}