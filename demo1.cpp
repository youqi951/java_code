#include <iostream>
#include <vector>

int main()
{
    int q;
    std::cin >> q; // 输入询问次数

    std::vector<int> ints; // 使用 vector 来存储结果

    for (int i = 0; i < q; i++)
    {
        int m, x;
        std::cin >> m >> x;           // 输入每次询问的 m 和 X
        int answer = (x - 1) % m + 1; // 计算第 X 个订单编号
        ints.push_back(answer);
    }

    // 打印结果
    for (int i = 0; i < ints.size(); i++)
    {
        std::cout << ints[i] << std::endl;
    }

    return 0;
}