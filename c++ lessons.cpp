// c++ lessons.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//复利计算：
//姓名 ：2023080910004戴海涵
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    float n{0};//本金
    float rate{0};//利率
    int year{0};
    cout << "请输入本金：\n";
    cin >> n;
    cout << "请输入年利率：(小数形式)\n";
    cin >> rate;
    cout << "请输入存钱时间（年）\n";
    cin >> year;
    cout << "你的本金为:"; cout << n<<endl;
    cout << "年利率为:"; cout << rate << endl<<endl;
    float a[10000]{ 0 };
    for (int i = 0; i < year; i++)
    {
        float base =(1 + rate);
        a[i] = n*pow(base, i+1);
        cout << "第"<< i+1<< "年的余额：";
        cout << a[i]<<endl;
    }
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
