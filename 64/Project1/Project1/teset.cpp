#include <iostream>
#include <iomanip>
#include <vector>

void InVector(std::vector<std::vector<int> > &arr, int rows, int columns)
{
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			std::cout << "Nhap a[" << i << "][" << j << "] = ";
			std::cin >> arr.at(i).at(j);
		}
	}
}

void OutVector(std::vector<std::vector<int> > arr)
{
	int rows = arr.size();
	int columns = arr.at(0).size();
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < columns; ++j)
		{
			std::cout << std::setw(5) << arr.at(i).at(j);
		}
		std::cout << std::endl;
	}
}

int main()
{
	std::vector<std::vector<int> > arr;
	arr.resize(3);
	for (int i = 0; i < 3; ++i)
		arr.at(i).resize(4);
	InVector(arr, 3, 4);
	OutVector(arr);
	system("pause");
	return 0;
}
