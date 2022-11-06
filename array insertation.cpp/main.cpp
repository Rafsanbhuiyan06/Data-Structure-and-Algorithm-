/// Integer type ///
/*#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n, i, j, item, position;

   cout<<"How many number you want to insert : ";
   cin>>n;
   int arr[n];
   cout<<"Enter "<<n<<" integer number :"<<endl;

   for(i = 0; i < n; i++){
    cin>>arr[i];
   }

   cout<<"Enter the position you want to insart : ";
   cin>>position;

   for(j = n; j >= position; j--){
     arr[j+1] = arr[j];
   }
   cout<<"Entr The number you want insart : ";
   cin>>item;

   arr[position] = item;
   n++;

   for(i = 0; i < n; i++){
    cout<<" "<<arr[i];
   }


    return 0;
}*/
/// String insersation ///

/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i, j = 0, position;
    cout<<"How many name you want to input : ";
    cin>>n;
    char arr[n][10];
    char item[10];

    for(i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"Enter The position you want to insert ";
    cin>>position;

    for(i = n; i >= position; i--){
       strcpy(arr[i+1],arr[i]);
    }
    cout<<"Enter the name you want to insart : ";
    cin>>item;

    strcpy(arr[position], item);
    n++;

    for(i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }
}*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, n , item;
    cout<<"How many number you want to insatr : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" Integer number ";

    for(i = 0; i< n; i++){
        cin>>arr[i];
    }
    cout<<"Enter The number of index you want to Delet : ";
    cin>>item;

    //arr[item] = '\0';

    for(int j = item; j < n; j++){
        arr[j] = arr[j+1];
    }

    for(i = 0; i < n-1; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
