// BinarySearch.cpp : 二分查找。
//

#include <iostream>

const int BinarySearch(const int* dstArray, const int count, const int item)
{
	int low = 0;
	int high = count - 1;

	while (low <= high)
	{
		const int mid = (low + high) / 2;
		const int guess = dstArray[mid];
		if (guess == item)
			return mid;

		if (guess > item)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return -1;
}

int main()
{
	const int arraySize = 10;
	const int dstArray[arraySize] = { 0,1,2,3,4,5,6,7,8,9 };

	std::cout << "Input a number to search:";
	int item = -1;
	std::cin >> item;
	std::cout << item << " is at " << BinarySearch(dstArray, arraySize, item) << std::endl;

	return 0;
}

