#include<iostream>
using namespace std;
void colSum(int arr[][3], int row, int col){
    cout<<"Row wise sum is--> ";
    for(int i=0; i<col; i++){
        int sum = 0;
        for(int j=0; j<row; j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
}
int main()
{
  int arr[3][3];
    int i,j;
    cout<<"Enter the elements of the array:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"printing the array:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    colSum(arr,3,3);

}   