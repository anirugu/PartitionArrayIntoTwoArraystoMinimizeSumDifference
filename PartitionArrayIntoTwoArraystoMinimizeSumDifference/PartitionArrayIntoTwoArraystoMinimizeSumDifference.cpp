// PartitionArrayIntoTwoArraystoMinimizeSumDifference.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int minimumDifference(vector<int>&);

int main()
{
	vector<int> value{ 1,2,3,4,5 };
	minimumDifference(value);
}


int minimumDifference(vector<int>& nums) {

	int size = nums.size();
	if (size % 2 == 0)

		return 0;
}
/*
1,2,3,4
*/