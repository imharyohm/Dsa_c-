//patter with extra variable
/*1
  23
  345
  4567*/
  #include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int i=1;
     while(i<=n){
        int j=1;
        int value=i;
        while(j<=i){
        cout<<value;
        value++;
        j++;
      }
      cout<<"\n";
      i++;
     }
}