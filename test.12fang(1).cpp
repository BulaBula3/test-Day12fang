#include <iostream>
using namespace std;

int main1()
{
    //��ָ��
    //1����ָ�����ڸ�ָ��������г�ʼ��
    //int* p = NULL;
    //2����ָ���ǲ����Խ��з��ʵ�
    //0~255֮��Ϊϵͳռ���ڴ棬�������û�����
    //*p = 100;

    //Ұָ��  
    //int* p = (int*)0x1100;

    //cout << *p << endl;

    //����ָ�룺ָ���ָ������޸ģ�����ָ��ָ���ֵ�������޸�
    //const int* p = &a;
    int a = 10;
    int b = 10;

    const int* p = &a;
    //*p = 20;����
    p = &b;//��ȷ
    //ָ�볣����ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
    // int* const p =&a;
    int* const p2 = &a;
    *p2 = 100;//��ȷ
    //p2 =&b;����

    //������ָ�룬�����γ�����ָ��ֵ�������޸�
    //const int * const p=&a;
    const int* const p3 = &a;
    //*p3 = 100;//����
    //p3 = &b;//����

    system("pause");

    return 0;
}