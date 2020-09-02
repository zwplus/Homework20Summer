#include <iostream>//P252  8
#include <string>
using namespace std;
class cat{
    int age,weight;
    string color,name;
public:
   void setname(const char *p){//const char 的指针类型可给string直接赋值 
       name = p;
   }
   void setcolor(const char *p){
       color = p;
   }
   void setage(int a){
       this->age = a;
    }
   void setweight(int b){
       this->weight = b;
    }
	int getage(){
       return age;
    }
   int getweight(){
       return weight;
    }
   const string & getname(){//直接返回string类型的函数写法 
       return name;
    }
    const char *getcolor(){
       return color.c_str();//string的c_str()函数将string类转为c字符串赋值给const char * 
    }
   void show(){
       cout<<"小猫的名字是"<<getname()<<";";
       cout<<"小猫的年龄是"<<getage()<<"岁;";
       cout<<"小猫的体重是"<<getweight()<<"斤;";
       cout<<"小猫的颜色是"<<getcolor()<<endl;
   }

};
int main(){
    cat hei,bai;
    hei.setname("小黑");
    hei.setcolor("黑色");
    hei.setage(2);
    hei.setweight(6);
    bai = hei;
    bai.setname("小白");
    bai.setcolor("白色");
    bai.setage(4);
    bai.setweight(5);
    hei.show();
    bai.show();
return 0;
}
