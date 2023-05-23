//
// Created by LarrenceLee on 2022/4/12.
//

/*#include"shunxulist.h"

void InitList(SqList &L){
    L.length=0;
    cout<<"顺序表创建完成"<<endl;
}

void createList(SqList &L,Elemtype n){
    for(Elemtype i=0;i<n;i++){
        cout<<"请输入要传入的值:"<<endl;
        cin>>L.data[i];
        L.length++;
    }
}

void Listlength(SqList L){
    cout<<"顺序表的长度为："<<L.length<<endl;
}

void Print(SqList L){
    cout<<"当前顺序表为："<<endl;
    if(L.length==0){
        cout<<"顺序表目前没有元素！"<<endl;
    }
        for (Elemtype i = 0; i < L.length; ++i) {
cout<<L.data[i]<<"\t";
        }
        cout<<endl;
}

void GetElem(SqList L,Elemtype k){
    cout<<"请输入要查找元素的位置:"<<endl;
    cin>>k;
    if(k<0||k>L.length){
        cout<<"查找失败！"<<endl;
    }
    else cout<<"第"<<k<<"位的元素为："<<L.data[k]<<endl;
}

void insertElem(SqList &L,Elemtype i,Elemtype e)//将e插入第i位置
{
    if(i<1||i>L.length+1||L.length==Maxsize)
    {
        cout<<"插入地址不合法"<<endl;
        return;
    }
    for(Elemtype j=L.length;j>=i;j--)
    {
        L.data[j]=L.data[j-1];					//从后往前，逐个将元素后移

    }
    L.data[i-1]=e;
    L.length++;
    cout<<"插入成功"<<endl;
}

int deleteElem(SqList &L,Elemtype i,Elemtype &e)//删除i位置元素，返回其值
{
    if(i<1||i>L.length)						//判断地址是否合法
    {
        cout<<"地址不合法"<<endl;
        return 0;
    }
    for(Elemtype j = i;j<L.length;j++)
    {
        L.data[j-1] = L.data[j];					//从p位置开始，后面的依次前移
    }
    L.length--;
    cout<<"删除成功"<<endl;
return 1;
}*/
