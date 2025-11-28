#include <iostream>
#include <vector>

using namespace std;

int count_positives(vector <int> nums);


int main()
{
	cout << count_positives({ 5, 8, -2, -60, 23 });

	return 0;
}

int count_positives(vector <int> nums)
{
	int count{ 0 };
	int index{ 0 };
	while (index < nums.size())
	{
		if (nums.at(index) > 0)
		{
			count++;
		}

		index++;
	}

	return count;
}