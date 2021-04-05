// Demo121.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    int i, j, k;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                if (i != k && i != j && j != k)
                {
                    printf("%d %d %d  ", i, j, k);
                }
            }
        }
        printf("\n");
    }

    int a{ 10 }, b{ 1 }, c;
    c = b++ + a;
    std::cout << "c:" << c << std::endl;

    auto a1{ 100.0 };
    std::cout << typeid(a1).name() << std::endl;

    int a2{ 255 };
    std::cout << std::hex << a2 << std::endl;

    int a3{ 0xff };
    std::cout << std::hex << a3 << std::endl;

    int x1 = (int)(666 || 312);
    std::cout << x1;

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
