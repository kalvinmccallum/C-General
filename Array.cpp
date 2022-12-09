#include <iostream>
using namespace std;


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int temp_Arr[sizeof(arr) / sizeof(arr[0])];
    int k = 0;

    for (int i = sizeof(arr) / sizeof(arr[0]); i > 0; i--) {
        temp_Arr[k] = arr[i - 1];
        k++;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << temp_Arr[i] << " ,";
    }

    return 0;
}
