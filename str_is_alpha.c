int    ft_str_is_alpha(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str [i] <= 'Z')
            || (str [i] >= 'a' && str [i] <= 'z'))
            i++;
        else
            return (0);
    }
    return (1);
}

int main(void)
{
    char a[] = "heloooA";
    printf("%d", ft_str_is_alpha(a));
}