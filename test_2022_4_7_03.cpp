#include <iostream>

using namespace std;
//【构造函数和析构函数】构造 - 初始工作  析构 - 清理工作

// 构造函数和析构函数，这两个函数将会被编译器自动调用

/*  构造函数完成对象的初始化动作 - 主要作用在于创建对象时(实例化对象时)为对象成员属性赋值，
 构造函数由编译器自动调用，无须手动调用。【语法】：构造函数 函数名 和 类名 相同，没有返回类型，void 也不行，但可以有参数，可以重载。 */

/*  析构函数在对行结束时完成清理工作值 - 主要用于对象销毁前(对象释放时)系统自动调用，执行一些清理工作。
 【语法】：析构函数 函数名 是在 类名 前 加"~" 组成，没有返回类型，void 也不行，不能有参数，不能重载。*/

/*【注意】对象的初始化和清理工作是编译器强制的，即使用户不提供初始化操作和清理操作，编译器也会增加默认操作，
 只是这个默认操作不会做任何事情（空函数）  */
#if 0
#endif
//
class Data
{
private:
    int num;
public:
    //构造函数(无参的构造)
    Data()
    {
        num = 0;
        cout<<"无参的构造函数"<<endl;
    }
    //构造函数(有参的构造)
    Data(int n)
    {
        num = n;
        cout<<"有参的构造函数"<<endl;
    }

    //析构函数
    ~Data()
    {
         cout<<"析构函数"<<endl;
    }
};
void test()
{
    //类实例化对象，让系统自动调用构造函数
    Data ob;

    //函数结束时，局部对象ob被释放，系统自动调用析构函数。
}

int main(int argc, char *argv[])
{
    cout<<"-----------执行前-----------"<<endl;
    test();
    cout<<"-----------执行后-----------"<<endl;
    return 0;
}
