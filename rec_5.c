//recursion
//Wap to find sum of all number between 1-25 and their average.
#include<stdio.h>
int fun(int n)
{
    static int sum = 0; 
    if (n > 0) {
        sum += n;
        fun(n - 1);
    }
    return sum;
}
void main()
{
    int t = fun(25);
    printf("sum = %d \n",t);
    int avg = t/25;
    printf("average = %d ",avg);
    
}
/*#include <stdio.h>

int fun(int n) {
    static int sum = 0; // Static variable retains value across recursive calls
    if (n > 0) {
        sum += n;
        fun(n - 1);
    }
    return sum;
}

int main() {
    int total = fun(25);
    float average = total / 25.0;

    printf("Sum of numbers from 1 to 25 is: %d\n", total);
    printf("Average is: %.2f\n", average);

    return 0;
}*/
