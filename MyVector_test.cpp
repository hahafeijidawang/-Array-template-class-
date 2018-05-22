/*

    1）请设计一个数据模板类<MyVector>,完成对int、char、Teacher类型元素的管理。
    2）请仔细思考：
        a) 如果数组模板中的元素是Teacher元素时，需要Teacher类做什么工作
        b) 如果数组模板类中的元素是Teacher元素时，Theacher 类含有指针的属性？

*/
#include <iostream>

#include<MyVector.h>
#include<MyVector.cpp>
#include<string.h>
using namespace std;
class Teacher{

public:
    Teacher(){
        age= 22;
        strcpy(name,"");

    }

    Teacher(char *name,int age){

        this->age=age;

        strcpy(this->name,name);

    }

  void printT(){

        cout<<"name:"<<name<<","<<"age:"<<age<<endl;

    }

 private:

    int age;

    char name[32];




};




//再升级 复杂类型数据。
int main(){

    Teacher t1("t1",31),t2("t2",32),t3("t3",33),t4("t4",34);

    t1.printT();

    MyVector<Teacher> tArray(4);


    tArray[0] = t1;

    tArray[1] = t2;

    tArray[2] = t3;

    tArray[3] = t4;

    for(int i=0;i<4;i++){

        Teacher tmp = tArray[i];

        tmp.printT();

    }




return 0;


}








//升级版
int main02(){

    MyVector<char> myv1(10);

    myv1[0] = 'a';

    myv1[1] = 'b';

    myv1[2] = 'c';

    myv1[3] = 'd';

   // cout<<myv1;


return 0;
}





//初始版
int main01()
{

    MyVector<int> myv1(10);

    for(int i = 0;i < myv1.getlen();i++){

        myv1[i] = i+1;

        cout<<myv1[i]<<" ";

    }

        cout<<endl;


    MyVector<int> myv2=myv1;

    for(int i = 0;i < myv2.getlen();i++){

        cout<<myv2[i]<<" ";

    }

        //cout<<myv2<<endl;



    return 0;
}

