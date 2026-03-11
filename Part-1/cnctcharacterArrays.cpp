#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<char, 5> arr;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    const char *ch = "hello";
    string strarray(arr.begin(), arr.end());
    string strptr(ch);
    strptr += strarray;
    cout << strptr << endl;
}