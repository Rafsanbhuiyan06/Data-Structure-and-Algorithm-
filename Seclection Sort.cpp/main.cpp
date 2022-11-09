#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[] = {10,20,3,4,50,60,7,100};
    int element = (sizeof(arr)/4)-1;

    for(int i = 0; i <= element; i++){
        for(int j = i+1; j <= element; j++){
            if(arr[i] < arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i = 0; i <= element; i++){
        cout<<" "<<arr[i];
    }
    return 0;
}
