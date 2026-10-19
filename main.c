#include <stdio.h>

int main(){
    int digit_10, digit_1;
    start:
    printf("Enter a two digits number: ");
    scanf("%1d%1d", &digit_10, &digit_1);

    switch(digit_10){
    case 1: break;
    case 2: printf("Twenty-");break;
    case 3: printf("Thirty-");break;
    case 4: printf("Forty-");break;
    case 5: printf("Fifty-");break;
    case 6: printf("Sixty-");break;
    case 7: printf("Seventy-");break;
    case 8: printf("Eighty-");break;
    case 9: printf("Ninety-");break;
    default:printf("Error!\n");break;
    }

    if(digit_10 == 1){
        switch(digit_1){
        case 1: printf("Eleven");break;
        case 2: printf("Twelve");break;
        case 3: printf("Thirteen");break;
        case 4: printf("Fourteen");break;
        case 5: printf("Fifteen");break;
        case 6: printf("Sixteen");break;
        case 7: printf("Seventeen");break;
        case 8: printf("Eighteen");break;
        case 9: printf("Nineteen");break;
        }
    }else{
        switch(digit_1){
        case 1: printf("One");break;
        case 2: printf("Two");break;
        case 3: printf("Three");break;
        case 4: printf("Four");break;
        case 5: printf("Five");break;
        case 6: printf("Six");break;
        case 7: printf("Seven");break;
        case 8: printf("Eigh");break;
        case 9: printf("Nine");break;
        }
    }

    printf("\n");
    goto start;
    return 0;

}
