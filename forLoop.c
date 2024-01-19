#include <stdio.h>

int main(){
    int nums[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
    int length = sizeof(nums)/sizeof(nums[0]);

    printf("%d\n",length);

    for(int i = 0; i < length; i++){
            printf("%d\n", nums[i]);
    }
    return 0;

}