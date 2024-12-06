#include <iostream>
#include <vector>
using namespace std;

//bubble sort to sort units per box in descending order
void sortDescending(vector<vector<int>>& boxTypes)
{
    int n = boxTypes.size();
    
    for (int i=0; i< n-1; i++)
    {
        for (int j=0; j< n-i-1; j++)
        {
            if(boxTypes[j][1]<boxTypes[j+1][1])
            {
                swap(boxTypes[j], boxTypes[j+1]);
            }
        }
    }
}

int maximumUnits(vector<vector<int>>& boxTypes, int truckSize)
{
    sortDescending(boxTypes);
    //apply bubble sort to the 2d array

    int totalUnits = 0;
    
    for (const auto& box:boxTypes)
    {
        if (truckSize <=0) break;

        int boxCount = box[0];
        int unitsPerBox = box[1];

        int boxesToTake = min(boxCount, truckSize);
        totalUnits += boxesToTake * unitsPerBox;
        truckSize -= boxesToTake;
    }

    return totalUnits;
}

int main ()
{
    //Example 1
    vector<vector<int>> boxTypes1 = {{1,3}, {2,2}, {3,1}};
    int trucksize1 = 4;
    cout << "Output: " << maximumUnits(boxTypes1, trucksize1) << endl;;

    //Example 2
    vector<vector<int>> boxTypes2 = {{5,10}, {2,5}, {4,7}, {3,9}};
    int trucksize2 = 10;
    cout << "Output: " << maximumUnits(boxTypes2, trucksize2) << endl;
}