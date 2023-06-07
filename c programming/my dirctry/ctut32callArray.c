# include <stdio.h>

int func1(int array[]){
    for (int i = 0; i < 4; i++)
    {
        printf("The value of the %d element is %d\n",i,array[i]);
    }
    array[0] = 385;

    return 0;
    
}
void func2(int *ptr){
    for (int i = 0; i < 4; i++)
    {
        printf("The value of the %d element is %p\n",i, *ptr);
    }

}

int main(){

    int arr[] ={23,45,67,85};
    printf("The value of 1 st element of array is %d\n",arr[0]);
    func1(arr);
    printf("The value of 1 st element of array is %d\n",arr[0]);
    func2(arr);

    return 0;
}