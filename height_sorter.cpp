#include <iostream>
using namespace std;
int main()
{
    // Declaring variable
    int element_num;
    int num, pos;
    float temp;

    // Asking user to input the values
    cout << "\nThis program helps to order heights based on ascending order.";
    cout << "\nInput how many elements are there:\t";
    cin >> element_num;

    // Now declaring array, and inputting values using for loop
    float height[element_num];

    for (int i = 0; i < element_num; i++)
    {
        num = i + 1;
        cout << "\nEnter the data " << num << ":\t";
        cin >> height[i];
        cout << "\nData " << num << " is:\t" << height[i];
    }

    // The sorting code (I am using selection sort)
    for (int j = 0; j < element_num; j++)
    {
        // Here, each iteration is each pass.
        pos = j;

        // Using a for loop for checking the shortest height in array
        for (int k = (j + 1); k < element_num; k++)
        {
            if (height[pos] > height[k])
            {
                // Assigning the array num of shortest value
                pos = k;
            }
        }

        // Checking whether the minimum value and smallest value are same or not.
        // If not, the code will swap it using a temporary variable
        if (j != pos)
        {
            // Swapping elements
            temp = height[j];
            height[j] = height[pos];
            height[pos] = temp;
        }
    }

    // Now printing the sorted loop
    cout << "\nData is sorted.";
    for (int i = 0; i < element_num; i++)
    {
        cout << "\nData" << i + 1 << ":\t" << height[i];
    }

    return 0;
}
