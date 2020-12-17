/*
Question "The Saddle Number"
if a number in an array is the smallest
number in its row,and the largest number
in its column,we call it the "saddle"
number.The "Saddle" number in the given
array is required.
Inserted data ensures there are no same
number in every rows or columns.

oxniu   Dec 17 2020
*/
#include<iostream>
#include<vector>
#define INF 2147483647
using namespace std;

int base[5][5]={0};

int main(){
  /* Place Reserved for freopen() */
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cin>>base[i][j];
    }
  }

  int array_jmax[5]={0};
  for(int i=0;i<5;i++){
    int tmp_max=-INF,tmp_jpos;
    for(int j=0;j<5;j++){
      if(base[i][j]>tmp_max){
        tmp_max=base[i][j];
        tmp_jpos=j;
      }
    }
    array_jmax[i]=tmp_jpos;
  }

  int array_imin[5]={0};
  for(int j=0;j<5;j++){
    int tmp_min=INF,tmp_ipos;
    for(int i=0;i<5;i++){
      if(base[i][j]<tmp_min){
        tmp_min=base[i][j];
        tmp_ipos=i;
      }
    }
    array_imin[j]=tmp_ipos;
  }

  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      if(array_jmax[i]==j&&array_imin[j]==i){
        cout<<i+1<<" "<<j+1<<" "<<base[i][j];
        return 0;
      }
    }
  }

  return 2;//2:invalid data
}
