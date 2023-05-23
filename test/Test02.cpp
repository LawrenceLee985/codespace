//
// Created by LarrenceLee on 2022/4/1.
//

/*
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct student{
    string name;
    int grade;
};

struct teacher{
    string name;
   student stu[5];
};

void givenvalue(int len,teacher teach[]){
string nameseed="ABCDE";
for(int i=0;i<len;i++){
    teach[i].name="Teacher_";
    teach[i].name+=nameseed[i];
    for(int j=0;j<5;j++){
        teach[i].stu[j].name="Student_";
        teach[i].stu[j].name+=nameseed[j];
    }
}
}

void printInfo(teacher teach[],int len) {
    for (int i = 0; i < len; i++) {
        cout << "老师：" << teach[i].name << endl;
        for (int j = 0; j < 5; j++) {
            cout << "\t学生：" << teach[i].stu[j].name;
            int random=rand()%101;
            teach[i].stu[j].grade=random;
            cout<<" 学生成绩："<<teach[i].stu[j].grade<<endl;
        }
    }
}

int main(){
    srand((unsigned int) time(NULL));
teacher teach[3];
int len= sizeof(teach)/ sizeof(teach[0]);
givenvalue( len,teach);
printInfo(teach,len);
}*/
