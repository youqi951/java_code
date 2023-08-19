#include <stdio.h>

int main()
{
    int n; // 元素个数
    printf("请输入元素个数：");
    scanf("%d", &n);

    int arr[n]; // 存储元素的数组
    printf("请输入%d个元素：\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // 统计每个元素的出现次数
    int count[1001] = {0}; // 假设元素范围为0到1000，可根据实际情况调整
    int maxCount = 0;      // 最大的出现次数
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
        if (count[arr[i]] > maxCount)
        {
            maxCount = count[arr[i]];
        }
    }

    // 计算除了众数以外的其他元素的总和与众数之间的差值
    int diff = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[maxCount])
        {
            diff += arr[i] - arr[maxCount];
        }
    }

    // 计算最小操作次数
    int minOperations = (diff + 1) / 2;

    printf("最小的操作次数为：%d\n", minOperations);

    return 0;
}