#include<stdio.h>
int main()
{

int lower_counter = 1;
int upper_counter = 20;
while (lower_counter < 15 && upper_counter > 8)
    {if (lower_counter % 2 == 0)
        lower_counter += 2;
        upper_counter -= 4;
    lower_counter += 1;
}
}
