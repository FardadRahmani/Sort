#include <iostream>
#include <cstdlib>


int BinSearch(int data[], int numElements, int searchKey)
{
    int low = 0;
    int high = numElements - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (searchKey == data[mid])
        {
            return mid;

        }
        else if (searchKey < data[mid])
        {
            high = mid - 1;


        }
        else
        {
            low = mid + 1;

        }

    }
    return -1;


}

using namespace std;


int main()
{
    int data[] = { 1, 4, 5, 6, 9, 14, 21, 23, 28, 31, 35, 42, 46, 50, 53, 57, 62, 63, 65, 74, 79, 89, 95 };
    int numElements = sizeof(data) / sizeof(data[0]);
    cout << numElements << endl;
    cout << "Array= ";
    for (int cnt = 0; cnt < numElements; ++cnt)
    {

        cout << data[cnt] << " ";
    }
    cout << endl;
    cout << "Which number of Array are you looking for?" << endl;
    int arrayNumber;
    cin >> arrayNumber;


    cout << "The number you are looking for is the " << (BinSearch(data, numElements, arrayNumber)+1) << "th Element of Array" << endl;



    return 0;
}
