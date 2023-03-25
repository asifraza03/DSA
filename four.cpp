#include <iostream>
using namespace std;


int mountainArr(int arr[],int size)
{
    int s=0;
    int e=size-1;
    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(arr[mid] < arr[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s + (e-s)/2;

    }
    return s;
}
int main()
{
    int even[12] = {2,3,4,5,1,0};
    int ans = mountainArr(even,12);


    cout<<"the location of mountain elem. is "<<ans;




    return 0;
}