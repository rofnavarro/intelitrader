#include <iostream>
#include <climits>

int	main(void)
{
	int	array1[] = {-1, 5, 19, -19, 8, -16, 0, 22, 65, 72};
	int	array2[] = {26, 6, -88, -6, -45, -3, 29, 15, -18, 100};

	int	size_array1 = sizeof(array1) / sizeof(array1[0]);
	int	size_array2 = sizeof(array2) / sizeof(array2[0]);
	
	unsigned int	distance;
	long			shortest_distance = LONG_MAX;

	for (int i = 0; i < size_array1; i++)
	{
		for (int j = 0; j < size_array2; j++)
		{
			if (array1[i] > array2[j])
				distance = array1[i] - array2[j];
			else
				distance = array2[j] - array1[i];
			if (distance < shortest_distance)
				shortest_distance = distance;
		}
	}
	std::cout << "The shortest distance between the numbers on both arrays is: " << shortest_distance << "\n";
	return (0);
}