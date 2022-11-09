// ********* SIMPLE PROBLEM ********** //
/*#include <iostream>

using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50,60,70,80};
    int left = 0, right = 8, srch = 10;

    while(left <= right)
    {
        int middle = (left + right) / 2;

        if(arr[middle] == srch){
           cout<<"Numbe is "<<middle+1<<endl;
           break;
        }
        else if(arr[middle] < srch){
            left = middle+1;
        }
        else{
           right = middle-1;
        }
    }
    return 0;
}*/

// ********* USING FUNCTION AND POINTER ********** //
#include <bits/stdc++.h>
using namespace std;

int BainarySearch(int *arr, int siz ,int srch)
{

    int left = 0, right = siz;
    while(left <= right){
        int middle = (left+right) / 2;
        if(arr[middle] == srch){
            return middle;
        break;
        }
        else if(arr[middle] < srch){
           left = middle+1;
        }
        else{
            right = middle - 1;
        }
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    int sizs = (sizeof(arr)/4)-1, sarch;
    cout<<"Enter the number you want to search ";
    cin>>sarch;
    int returnVlo = BainarySearch(arr,sizs,sarch);
    cout<<"The index is "<<returnVlo<<endl;
}
