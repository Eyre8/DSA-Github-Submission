#include <iostream>
#include <utility>  // includes swap() function for swapping array elements

using namespace std;

void quicksort(int array[], int length);
void quicksort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);

int main()
{
  int a[] = {12,4,15,8,17,6,11};
  int length = 7;
  
  quicksort(a, length);
  
  for (int i = 0; i < length; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl << endl;
  
  return 0;
}

void quicksort(int array[], int length)
{
  quicksort_recursion(array, 0, length - 1);
}

void quicksort_recursion(int array[], int low, int high)
{
  if (low < high)
  {
    int pivot_index = partition(array, low, high);

    quicksort_recursion(array, low, pivot_index-1);
    quicksort_recursion(array, pivot_index+1, high);
  }  
}

int partition(int array[], int low, int high)
{
  int pivot_value = array[high];

  int i = low;

  for (int j = low; j < high; j++)
  {
    if (array[j] <= pivot_value)
    {
        swap(array[i], array[j]);
        i++;
    }
  }

  swap (array[i], array[high]);

  return i;
}