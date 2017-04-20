#pragma once
#include<iostream>
#include<vector>
using namespace std;
//实现一个简单算法，将数组的后k位旋转到数组的前面，此处使用动态数组vector
class Demo {
public:
	//我们可以采用三次移动的方式来完成。即首先将0~size-k-1进行首尾交换操作，然后将size-k~size-1进行首尾交换操作，最后将整个数组进行首尾交换操作。时间复杂度为O(2n) = O(n)
	int rotate(vector<int>& nums, int k)
	{
		int n = nums.size();
		

		if (n == 0 )//判断数组为空返回标志位-1
			return -1;
		k = k%n;
		if (k == 0) {
			return nums[0];
		}
		if (k < 0)
			k = nums.size() + k;
		//下面三步顺序可以变化
		rotate(nums, 0, n - k - 1);//旋转前半部分；
		rotate(nums, n - k, n - 1);//旋转后半部分；
		rotate(nums, 0, n - 1);//旋转整个数组
		
		return nums[0];
	}
private:
	//进行旋转数组，参数：需要旋转的数组，旋转的起点，旋转的终点，前闭后闭
	//将这个函数变成私有成员函数，防止外界函数调用这个函数。
	void rotate(vector<int>& nums, int start, int end)
	{
		int temp = 0;
		while (start < end)
		{
			temp = nums[start];
			nums[start] = nums[end];
			nums[end] = temp;
			start++;
			end--;
		}
		return;
	}

};