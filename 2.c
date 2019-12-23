#include <iostream>
using namespace std;

int main()
{
    int r;
    int j;
    int c;
    cin>>r>>c;
    int arr[r][c] ;
    int i;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
          cin>>arr[i][j] ;
        }
    }
    for(i=0;i<c;i++)
    {
        cout<<endl;
        for(j=0;j<r;j++)
        {
        cout<<arr[j][i]<<" ";
        }
        
    }
}
    
   
