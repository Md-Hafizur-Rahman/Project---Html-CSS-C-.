#include<stdio.h>
#include<string.h>
int main(){
    int n,x,y,z;
    char b;
    printf("\n                      My calculator Project:\n");
    do{
    printf("\n Print 1 for Sum:  ->");
    printf("\n Print 2 for sub:  ->");
    printf("\n Print 3 for mul:  ->");
    printf("\n Print 4 for div:  ->");
    printf("\n Print 5 for mod:  ->\n");
    printf("\n\n please inter one option for calculation :  ");
    scanf("%d",&n);
    printf("\n print 1st number :  ");
    scanf("%d",&x);
    printf(" print 2nd number :  ");
    scanf("%d",&y);
    switch(n){
        case 1:
            z=x+y;
            printf(" The sum number is : %d\n",z);
            break;
        case 2:
            z=x-y;
             printf("\n The sub number is : %d\n",z);
              break;
        case 3:
            z=x*y;
             printf("\n The mul number is : %d\n",z);
              break;
        case 4:
            z=x/y;
             printf("\n The div number is: %d\n",z);
              break;
        case 5:
            z=x%y;
             printf("\n The  number mod is: %d\n",z);
             break;
        default:printf("\n Wrong input");
         break;
        }
        printf("\ndo you want to continue? (y/n)\n");
        b=getche();
    }while(b=='y');
    // waiting for press for enter:
    getch();
    return 0;
}
