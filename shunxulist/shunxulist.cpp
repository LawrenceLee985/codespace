//
// Created by LarrenceLee on 2022/4/12.
//

/*#include"shunxulist.h"

void InitList(SqList &L){
    L.length=0;
    cout<<"˳��������"<<endl;
}

void createList(SqList &L,Elemtype n){
    for(Elemtype i=0;i<n;i++){
        cout<<"������Ҫ�����ֵ:"<<endl;
        cin>>L.data[i];
        L.length++;
    }
}

void Listlength(SqList L){
    cout<<"˳���ĳ���Ϊ��"<<L.length<<endl;
}

void Print(SqList L){
    cout<<"��ǰ˳���Ϊ��"<<endl;
    if(L.length==0){
        cout<<"˳���Ŀǰû��Ԫ�أ�"<<endl;
    }
        for (Elemtype i = 0; i < L.length; ++i) {
cout<<L.data[i]<<"\t";
        }
        cout<<endl;
}

void GetElem(SqList L,Elemtype k){
    cout<<"������Ҫ����Ԫ�ص�λ��:"<<endl;
    cin>>k;
    if(k<0||k>L.length){
        cout<<"����ʧ�ܣ�"<<endl;
    }
    else cout<<"��"<<k<<"λ��Ԫ��Ϊ��"<<L.data[k]<<endl;
}

void insertElem(SqList &L,Elemtype i,Elemtype e)//��e�����iλ��
{
    if(i<1||i>L.length+1||L.length==Maxsize)
    {
        cout<<"�����ַ���Ϸ�"<<endl;
        return;
    }
    for(Elemtype j=L.length;j>=i;j--)
    {
        L.data[j]=L.data[j-1];					//�Ӻ���ǰ�������Ԫ�غ���

    }
    L.data[i-1]=e;
    L.length++;
    cout<<"����ɹ�"<<endl;
}

int deleteElem(SqList &L,Elemtype i,Elemtype &e)//ɾ��iλ��Ԫ�أ�������ֵ
{
    if(i<1||i>L.length)						//�жϵ�ַ�Ƿ�Ϸ�
    {
        cout<<"��ַ���Ϸ�"<<endl;
        return 0;
    }
    for(Elemtype j = i;j<L.length;j++)
    {
        L.data[j-1] = L.data[j];					//��pλ�ÿ�ʼ�����������ǰ��
    }
    L.length--;
    cout<<"ɾ���ɹ�"<<endl;
return 1;
}*/
