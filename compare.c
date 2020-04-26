#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char b[100];
    int ans = 0;
    printf("Enter the first string: ");
    gets(a);
    printf("Enter the second string: ");
    gets(b);
    int l1 = strlen(a);
    int l2 = strlen(b);
    if(l1!=l2){
        printf("The string are not equal");
        return 0;
    }else{
        for(int i=0; i<a[i]; i++){
            if(a[i]==b[i]){
                ans++;
            }else{
                ans = 0;
                break;
            }
        }
    }
    if(ans==0){
        printf("The string is not equal");
    }else{
        printf("The string is equal");
    }
}