// #include <iostream>
// // #include <cmath>
// // #include <iomanip>
// #include <vector>
// // #include <string>
// // #include <dirent.h>
// // #include <fstream>
// // #include <cstring>
// // #include <random>
// // #include <chrono>
// #include <cstdlib>

// #include "cgnslib.h"
// // #include "mpi.h"

// using namespace std;
// void test(int *p);
// void test(int *p){
//     int a[3]={3,4,5};
//     p=a;
// }

// int main()
// {
//     // double x=53;
//     // double re=270947;
//     // //270947;1135200
//     // double ans;
//     // double ans2;
//     // ans=x*0.16/pow(re,1.0/7);
//     // ans2=x*5.0/pow(re,1.0/2);
//     // cout<<ans<<endl;
//     // cout<<ans2<<endl;
//     // cout<<pow(8,1.0/3)<<endl;
//     int *p;
//     test(p);
//     cout<<*p<<endl;
    
    
//     return 0;

// }
#include <vector> 
#include <iostream> 
using namespace std;
class testDemo
{
public:
    testDemo(int num):num(num){
        std::cout << "调用构造函数" << endl;
    }
    testDemo(const testDemo& other) :num(other.num) {
        std::cout << "调用拷贝构造函数" << endl;
    }
    testDemo(testDemo&& other) :num(other.num) {
        std::cout << "调用移动构造函数" << endl;
    }
    ~testDemo(){
        std::cout << "调用析构函数" << endl;
    }
private:
    int num;
};
int main()
{
    cout << "emplace_back:" << endl;
    std::vector<testDemo> demo1;
    testDemo a(4);
    demo1.emplace_back(a);  
    cout << "push_back:" << endl;
    std::vector<testDemo> demo2;
    demo2.push_back(a);
}