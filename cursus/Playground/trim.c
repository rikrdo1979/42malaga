#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *str;
    char    *str2;
    size_t    i;
    size_t    j;
    size_t    k;
    size_t    found;
    size_t    slen;
    size_t    setlen;

    if (s1 == NULL)
        return (NULL);
    if (s1 == "")
      return(strdup(""));
    i = 0;
    j = 0;
    k = 0;
    found = 0;
    slen = (size_t)strlen(s1);
    setlen = (size_t)strlen(set);
    str = malloc(slen - setlen + 1);    
    while (i < slen)
    {
        while (j < setlen)
        {
            if (s1[i] != set[j])
                found++;
            j++;
        }
        if (found == setlen)
        {
            str[k] = s1[i];
            k++;
        }
        found = 0;
        j = 0;
        i++;
    }
    str[k] = '\0';
    str2 = malloc(k + 1);
    while (j < k)
    {
      str2[j] = str[j];
      j++;
    }
    free(str);
    str2[j] = '\0';
    return (str2);
}

int main()
{
	printf("%s\n", ft_strtrim("hooooola", "oa"));
	printf("%s\n", ft_strtrim("", "oa"));
	printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoyz", "xyz"));
	printf("%s\n", ft_strtrim("   xxxtripouille", " x"));
	printf("%s\n", ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " "));
	printf("%s\n", ft_strtrim("lorem ipsum dolor sit amet", "te"));
    
    return(0);
}
