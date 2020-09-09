#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    static int array[]{4,12,56,754,1235,435,64,1,2,3,4};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array, array + size);
    int x = 3;
    int k = 0;

    for (int b = size/2; b >= 1; b/=2) {
        while(k+b < size && array[k+b] <= x) {
            k += b;
        }
        if (array[k] == x) {
            cout << "Found at Index: " << k;
        }
    }


}
