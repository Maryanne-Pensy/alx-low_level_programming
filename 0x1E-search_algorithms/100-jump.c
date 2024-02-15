#include <math.h>

/**
 * jump_search - searches for a value in a sorted array using the Jump search
 *               algorithm
 * @array: pointer to the first element of the array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
size_t i = 0, jump = sqrt(size);

if (array == NULL)
return (-1);

while (i < size && array[i] < value)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
i += jump;
}

jump = i - jump;

printf("Value found between indexes [%lu] and [%lu]\n", jump, i);

i = (i < size) ? i : size - 1;

while (jump <= i)
{
printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
if (array[jump] == value)
return (jump);
jump++;
}

return (-1);
}
