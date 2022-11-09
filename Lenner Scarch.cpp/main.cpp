// ******** SIMPLE PROGRAM *********** //
/*#include <iostream>

using namespace std;

int main()
{
    int arr[]={10,20,30,40,50};
    int i, target;
    cin>>target;
    for(i = 0; i< 5; i++)
    {
        if(arr[i] == target)
            cout<<"The position is "<<i+1;
    }
    return 0;
}*/

// ******* USING A FUNCTION ********** //

/*#include <iostream>
using namespace std;

int  LennenSearch(int arr[], int target, int sizs)
{
    for(int i = 0; i < sizs; i++)
    {
        if(arr[i] == target){
            return i;
        }
    }
}

int main()
{
    int a[]= {10,20,30,40,50}, s = sizeof(a)/4;
    int targat = 30;
    int value = LennenSearch(a,targat,s);
    cout<<"The position of target  is "<<value+1<<endl;
}*/

// *********** USING POINTER AND FUNCTION *********** //

#include <bits/stdc++.h>
using namespace std;

int lennerSearch(int *arr, int siz)
{
     int target;
     cout<<"Enter The Number You Wnant Search ";
     cin>>target;

    for(int i = 0; i< siz; i++)
    {
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[5] = {10,20,30,40,50};
     int save = lennerSearch(a,5);
     if(save == -1){
        cout<<"The number is not found "<<endl;
     }
     else{
        cout<<"The number position is "<<save<<endl;
     }
}
