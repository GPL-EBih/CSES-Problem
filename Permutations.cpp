#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <iomanip>
////////////////////////////////////////////////////////
using namespace std;
////////////////////////////////////////////////////////
void swapValue(double a, double b)
{
    double temp = a;
    a = b;
    b = temp;
}
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swapValue(arr[i], arr[j]);
        }
    }
    swapValue(arr[i + 1], arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int recursiveBinarySearch(int arr[], int l, int r, int key)
{
    if (l > r)
        return -1;
    else
    {
        int mid = (l + r) / 2;
        if (arr[mid] == key)
            return mid;
        if (key > arr[mid])
            recursiveBinarySearch(arr, mid + 1, r, key);
        else
            recursiveBinarySearch(arr, l, mid - 1, key);
    }
}
////////////////////////////////////////////////////////
int main()
{
    int n;
    cin >> n;
    if(n == 1)
    cout<<"1";
    if (n <= 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }
    vector<int> a;
    if (n == 4)
        cout << "3 1 4 2";
    else
    {
        
        for(int i = 1; i <= n ; i+=2)
            cout<<i<<" ";
        for(int i = 2; i <= n ;i+=2)
            cout<<i<<" ";

    }
}