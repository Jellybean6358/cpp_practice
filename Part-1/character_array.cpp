#include <iostream>
#include <cstring>
#include <unordered_map>
#include <array>
#include <algorithm>
using namespace std;

void countch(char arr1[], int size)
{
    unordered_map<char, int> ans;
    for (int i = 0; i < size; i++)
    {
        ans[arr1[i]]++;
    }
    for (auto &i : ans)
    {
        cout << i.first << ":" << i.second << endl;
    }
}
int main()
{
    
    int size;
    cout<<"Enter size: ";
    cin >> size;
    char *arr = new char[size];
    cout<<"Enter elements of character array:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    countch(arr, size);
    cout << strlen(arr);
    delete[] arr;
}