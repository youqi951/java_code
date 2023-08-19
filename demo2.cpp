#include <iostream>
#include <vector>
#include <algorithm>

int maximizeSum(std::vector<int> &nums)
{
    int n = nums.size();

    if (n == 0)
    {
        return 0;
    }

    int min_negative = INT_MAX; // 最小的负数
    int negative_count = 0;     // 负数的数量
    int zero_count = 0;         // 零的数量
    int sum = 0;                // 数组元素的总和

    for (int i = 0; i < n; ++i)
    {
        if (nums[i] < 0)
        {
            min_negative = std::min(min_negative, nums[i]);
            negative_count++;
        }
        else if (nums[i] == 0)
        {
            zero_count++;
        }
        sum += nums[i];
    }

    if (negative_count % 2 == 0)
    {
        // 如果负数数量为偶数，或者没有负数，则将最小的两个数相乘
        if (negative_count > 0)
        {
            sum += min_negative * min_negative;
        }
    }
    else
    {
        // 如果负数数量为奇数，将最小的负数变为正数，然后将最小值相乘
        if (negative_count > 1)
        {
            sum -= min_negative * min_negative;
        }
    }

    return sum;
}

int main()
{
    int N;
    std::cout << "请输入数组的长度 N: ";
    std::cin >> N;

    std::vector<int> nums(N);

    std::cout << "请输入 " << N << " 个整数: ";
    for (int i = 0; i < N; ++i)
    {
        std::cin >> nums[i];
    }

    int result = maximizeSum(nums);

    std::cout << "最大的和为：" << result << std::endl;

    return 0;
}
