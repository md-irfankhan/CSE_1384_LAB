#include <stdio.h>
void input(int arr[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("Enter value for index %d:", i);
        scanf("%d", &arr[i]);
    }
}
void display(int arr[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}
void add(int arr1[], int arr2[], int arr3[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
}
void sub(int arr1[], int arr2[], int arr3[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        arr3[i] = arr1[i] - arr2[i];
    }
}
void mult(int arr1[], int arr2[], int arr3[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        arr3[i] = arr1[i] * arr2[i];
    }
}
int main()
{
    int len1, len2;
    printf("Enter length of Array1:");
    scanf("%d", &len1);
    printf("Enter length of Array2:");
    scanf("%d", &len2);
    if (len1 == len2)
    {
        int arr1[len1], arr2[len2], arrAdd[len1], arrMult[len1], arrSub[len1];
        printf("Enter Number for Array 1\n");
        input(arr1, len1);
        printf("Enter Number for Array 2\n");
        input(arr2, len2);
        add(arr1,arr2,arrAdd,len1);
        sub(arr1,arr2,arrSub,len1);
        mult(arr1,arr2,arrMult,len1);
        printf("Array 1:");
        display(arr1,len1);
        printf("\nArray 1:");
        display(arr2,len1);
        printf("\nAdded Array:");
        display(arrAdd,len1);
        printf("\nSubstrated Array:");
        display(arrSub,len1);
        printf("\nMultiplied Array:");
        display(arrMult,len1);

    }
    else{
        printf("Length should be same of Array1 and Array2 both.");
    }
}