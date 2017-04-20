#pragma once
#include<iostream>
#include<vector>
using namespace std;
//ʵ��һ�����㷨��������ĺ�kλ��ת�������ǰ�棬�˴�ʹ�ö�̬����vector
class Demo {
public:
	//���ǿ��Բ��������ƶ��ķ�ʽ����ɡ������Ƚ�0~size-k-1������β����������Ȼ��size-k~size-1������β��������������������������β����������ʱ�临�Ӷ�ΪO(2n) = O(n)
	int rotate(vector<int>& nums, int k)
	{
		int n = nums.size();
		

		if (n == 0 )//�ж�����Ϊ�շ��ر�־λ-1
			return -1;
		k = k%n;
		if (k == 0) {
			return nums[0];
		}
		if (k < 0)
			k = nums.size() + k;
		//��������˳����Ա仯
		rotate(nums, 0, n - k - 1);//��תǰ�벿�֣�
		rotate(nums, n - k, n - 1);//��ת��벿�֣�
		rotate(nums, 0, n - 1);//��ת��������
		
		return nums[0];
	}
private:
	//������ת���飬��������Ҫ��ת�����飬��ת����㣬��ת���յ㣬ǰ�պ��
	//������������˽�г�Ա��������ֹ��纯���������������
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