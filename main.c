// Quantity of positive, negative and null numbers

#include <stdio.h>

int main()
{
    // Variable declaration
    int i, // Control variable
        qtd, // Quantity variable
        aux, // Auxiliary variable
        zer, // Zero variable
        pos, // Positive variable
        neg; // Negative variable

    // Data input
    printf("Hello user! How many numbers would you like to input?\n");
    scanf("%d", &qtd);
    
    // Processing
    zer = 0;
    pos = 0;
    neg = 0;
    
    for (i = 1; i <= qtd; i++)
    {
        printf("Type number %d: ", i);
        scanf("%d", &aux);

        if (aux > 0)
        {
            pos++;
        }
        else if (aux < 0)
        {
            neg++;
        }
        else if (aux == 0)
        {
            zer++;
        }
    }

    // Data output
    printf("---------------------------------\n");
    printf("RESULTS\n");
    printf("Positive numbers  :  %d\n", pos);
    printf("Negative numbers  :  %d\n", neg);
    printf("Null numbers      :  %d\n", zer);
    printf("---------------------------------\n");
}
