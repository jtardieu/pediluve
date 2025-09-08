#include <unistd.h>

void ft_putstr(char *str);

int main()
{ 
    char *phrase = "bonjourgASfA GAEGAE";
    ft_putstr(phrase);
}

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i]!='\0')
    {
    write(1,&str[i],1);
    i++; 
    }
}

