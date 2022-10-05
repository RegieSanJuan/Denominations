#include <stdio.h>

int main()
{
    int Cash_on_hand;
    printf("\nEnter the ammount: ");
    scanf("%d", &Cash_on_hand);

    printf("\n1000 - %d ", Cash_on_hand/1000);
    Cash_on_hand = Cash_on_hand % 1000;

    printf("\n500 - %d", Cash_on_hand/500);
    Cash_on_hand = Cash_on_hand % 500;

    printf("\n100 - %d", Cash_on_hand / 100);
    Cash_on_hand = Cash_on_hand % 100;

    printf("\n50 - %d", Cash_on_hand / 50);
    Cash_on_hand = Cash_on_hand %50;

    printf("\n20 - %d", Cash_on_hand /20);
    Cash_on_hand = Cash_on_hand % 20;

    printf("\n10 - %d", Cash_on_hand / 10);
    Cash_on_hand = Cash_on_hand % 10;

    printf("\n5 -%d", Cash_on_hand / 5 );
    Cash_on_hand = Cash_on_hand %5;

    printf("\n1 -%d", Cash_on_hand / 1);
    Cash_on_hand = Cash_on_hand %1;










    return 0;
}