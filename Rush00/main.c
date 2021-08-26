#include <unistd.h>
#include <stdio.h>

/* fonction pour imprimer texte */
void    ft_putchar (char c)
{
    write (1, &c, 1);
}

/* fonction rush (dessiner des rectangles */
void    ligne(int x)
{
    int i;
    
    i = 0;
    
    while(i < x)
    {
        if(i == 0)
            ft_putchar('A');
        else if(i == x - 1)
            ft_putchar('C');
        else
            ft_putchar('B');
        i++;
    }
    ft_putchar('\n');
}

void    colonne(int x, int y)
{
    int i;
    int k;
    
    k = 0;
    while(k < y - 2)
    {
        i = 0;
        ft_putchar('B');
    
        while(i < x - 2)
        {
            ft_putchar(' ');
            i++;
        }
        ft_putchar('B');
        ft_putchar('\n');
        k++;
    }
}
void rush(int x, int y)
{
    ligne(x);
    colonne(x, y);
    ligne(x);
}

int main(void)
{
    rush(5, 1);
}

    
    
    

    
    
    
    
    
    /*
    int x;
    int y;
    
    x = 'A';
    y = 'B';
    while   (x 'A')
*/

/* main */
