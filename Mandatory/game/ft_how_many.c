#include "../includes/so_long.h"

int ft_how_many(char **list, char c)
{
    int index1;
    int index2;
    int count;

    index1 = 0;
    count = 0;
    while (list[index1])
    {
        index2 = 0;
        while (list[index1][index2])
        {
            if (list[index1][index2] == c)
                count++;
            index2++;
        }
        index1++;
    }
    return (count);
}