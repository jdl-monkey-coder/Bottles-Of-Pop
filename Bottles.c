//I had to do some editing, due to some differences between languages

#include <stdio.h>

int main()
{
    int i = 99;

    while(i)
    {
        printf("%d bottles of pop on the wall\n", i);
        printf("Take one down and pass it around\n");
        i--;
    }
    
                                        printf("No more bottles of pop on the wall\n\n");

    return(0);
}
