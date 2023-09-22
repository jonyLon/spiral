#include <iostream>
using namespace std;
const int row = 4, col = 4;
template <typename T>
void fillMatrixSpiraly(T arr[][col], int N)
{
    int top = 0, left = 0, button = N - 1, right = N - 1, count = 1;

    while (top <= button && left <= right) {

        for (int i = left; i <= right; i++)
        {
            arr[top][i] = count++;
        }
        top++;
        for (int i = top; i <= button; i++)
        {
            arr[i][right] = count++;
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            arr[button][i] = count++;
        }
        button--;
        for (int i = button; i >= top; i--)
        {
            arr[i][left] = count++;
        }
        left++;

    }
}
template <typename T>
void print(T arr[], int n, string text = "") {
    cout << text;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}



int main()
{

    int arr[row][col]{};
    fillMatrixSpiraly(arr, row);
    print(arr, row, "Print spira filled array:\n");

}

