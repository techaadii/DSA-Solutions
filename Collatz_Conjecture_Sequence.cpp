// This code takes us to the fact that you can write a C code in a cpp file by using  the key word extern

// In Collatz Conjecture Sequence we are given a number and until unless the number becomes 1 we do the following operation if the resulting number is even we do the half of it and if it is odd we multiply it by 3 and add 1.
extern "C"{
    #include<stdio.h>
    int main(){
        int t;
        scanf("%d",&t);
        int arr[t];
        int step=0;
        for(int i=0;i<t;i++){
            scanf("%d",&arr[i]);
        }
        
        for(int i=0;i<t;i++){
            while(arr[i]!=1){
                if(arr[i]%2==0){
                    arr[i]=arr[i]/2.0;
                }
                else{
                    arr[i]=arr[i]*3+1;
                }
                step++;
                    
                
            }
            
        }
        printf("22021 Aditya Sinha %d",step);
        return 0;
    }
    
}