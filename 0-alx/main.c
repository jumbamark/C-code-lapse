#include<stdio.h>
#include<string.h>

void invertArray(int arr[], int start, int end, int count);
int main(){
    int n = 1;
    int num;
    
/*To Count the number of digits*/
    while (n <= 100){
        int count = 0;
        num = n;
        while (num != 0)
        {
            num /= 10;
            count++;
        }

        if(count!=0){
            num = n;
            int numberArray[count];        
            int i = 0;
        
            while (num != 0){
                numberArray[i] = num % 10;
                num /= 10;
                i++;
            }

            // for (int i = 0; i < count; i++){
            //     printf("%d", numberArray[i]);
            // }

            invertArray(numberArray, 0, count-1, count);
        }
        ++n;
        }
    return 0;
}

void invertArray(int arr[], int start, int end, int count)
{   
    int new_arr[count];
    while (start <= end)
    {
        int temp = arr[start];
        new_arr[start] = arr[end];
        new_arr[end] = temp;
        start++;
        end--;
    }
    int i, val;
    for (i = 0; i < count; i++){
        printf("%d", new_arr[i]);
    }
    val = memcmp(arr, new_arr, count * sizeof(int));
    
    if (val == 0){
        printf(" Palindrome Found!!!\n");
    }
    else{
        printf(" Not a Palindrome!!!\n");
    }
}   