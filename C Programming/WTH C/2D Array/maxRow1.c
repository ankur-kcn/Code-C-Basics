// array having 0-1's only, find the row with the maximum number of 1's

#include<stdio.h>
int main(){
    int maxCount=0;
    int Idx=-1;
    int arr[3][4]={{1,0,0,1},{0,0,0,1},{1,1,1,1}};
    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<4;j++){
            if(arr[i][j] == 1){
                count++;
            }
        }
        if(maxCount<count){
            maxCount=count;
            Idx =i;
    }
    }
    printf("Count Number : %d \n",maxCount);
    printf("Row Number : %d \n",Idx);
    return 0;
}