#include<iostream>
#include <vector>
#include <list>
#include <memory>

class obj {
public:
    static void name() { std::cout << "name is obj" << std::endl;}
    int a = 0;
};

int main(int argc, char *argv[]){
   std::cout << "Hello World!" << std::endl;
   obj* o = nullptr;
   obj::name();
   
   std::list<int> l = { 1,2,3 };
   for (auto iter = l.begin(); iter != l.end(); iter++)
   { std::cout << *iter << std::endl;}
   
   std::shared_ptr<obj> s_o = std::make_shared<obj>();
   s_o->a = 1;
   return 0;
}
