#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *arr = new int[6]{10, 20};
    arr[5] = -1;
    int itr1 = 0, itr2 = 0;
    auto start =chrono::high_resolution_clock::now();
    while (*(arr + itr2) != -1)
    {
        cout << "Value at index: " << itr2 << " : " << *(arr + itr2) << endl;
        ++itr2;
        this_thread::sleep_for(std::chrono::milliseconds(750));
    }
    auto end = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(end-start);
    cout<<"Time took: "<<duration.count()<<endl;
    delete[] arr;
}