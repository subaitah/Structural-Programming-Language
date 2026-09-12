#include<stdio.h>

int series1(){
    int n, sum=0;
    printf("Enter n value: \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        arr[i] = i+1;
    }
    for(int i=0; i<n-1;i++){
        printf("%d + ", i+1);
        sum += arr[i];
    }
    printf("%d = ", n);
    sum += arr[n-1];
    printf("%d\n", sum);
}

int series2(){
    int n, sum=0;
    printf("Enter n value: \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        arr[i] = i+1;
    }
    for(int i=0; i<(n-1);i++){
        printf("%d*%d + ", (i+1),(i+1));
        sum += arr[i] * arr[i];
    }
    sum += arr[n-1] * arr[n-1];
    printf("%d*%d = %d\n", n,n,sum);
}

int series3(){
    int n, sum=0;
    printf("Enter n value: \n");
    scanf("%d",&n);
    int odd = ((n-1)/2)+1;
    int even = n/2;
    int j=0;
    float avg;
    if(n%2 !=0){
        int arr[odd];
        for(int i=1; i<=n; i++){
            if(i%2!=0){
                    arr[j] = i;
                    sum += arr[j];
                    j++;
            }
        }
        avg = (float)sum/j;
    }

    if(n%2 ==0){
        int arr[even];
        for(int i=1; i<=n; i++){
            if(i%2!=0){
                arr[j] = i;
                sum += arr[j];
                j++;
                
            }
        }
        avg= sum/j;
    }
    printf("Sum is %d\n", sum);
    printf("Avg is %.2f\n", avg);
}

int series4(){
    int n, sum=0;
    printf("Enter n value: \n");
    scanf("%d",&n);
    int odd = ((n-1)/2)+1;
    int even = n/2;
    int j=0;
    float avg;
    if(n%2 !=0){
        int arr[odd];
        for(int i=1; i<=n; i++){
            if(i%2==0){
                arr[j] = i;
                sum += arr[j];
                j++;   
            }
        }
        avg= (float)sum/j;
    }

    if(n%2==0){
        int arr[even];
        for(int i=1; i<=n; i++){
            if(i%2==0){
                arr[j] = i;
                sum += arr[j];
                j++;
            }
        }
        avg= (float)sum/j;
    }
    printf("Sum is %d\n", sum);
    printf("Avg is %.2f\n", avg);
}

int series5(){
    int n, sum=0;
    printf("Enter n value: \n");
    scanf("%d",&n);
    int fib[n];
    fib[0] =0;
    fib[1] =1;
    sum = fib[0] + fib[1];
    for(int i=2; i<n; i++){
        fib[i] = fib[i-1] + fib[i-2];
        sum += fib[i];
    }
    printf("Summation of fibonacci numbers upto %d numbers is %d\n", n, sum);
}

int series6(){
    int n;
    int sum1, sum2;
    sum1 = sum2 = 0;
    printf("Enter n value: \n");
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    int term =1;
    for(int i=0; i<n; i++){
        term += i;
        arr1[i] = term;
        sum1 += arr1[i];
        arr2[i] = term *term;
        sum2 += arr2[i];
    }
    printf("Summation is %d\n",sum1);
    printf("Squared summation is %d\n",sum2);
}
int main(){
    // series1();
    // series2();
    // series3();
    series4();
    // series5();
    // series6();
    return 0;
}

