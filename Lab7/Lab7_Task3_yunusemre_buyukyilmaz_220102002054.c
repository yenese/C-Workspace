#include <stdio.h>

int main()
{
    char str1[50];
    char str2[50];
    int length1 = 0, length2 = 0;
    int i = 0;
    int check = 0;
    
    printf("Enter the first string: ");
    gets(str1);
    
    printf("Enter the second string: ");
    gets(str2);
	

    while (str1[i] != '\0')
    {
        length1++;
        i++;
    }
    
    i = 0;
    
   
    while (str2[i] != '\0')
    {
        length2++;
        i++;
    }
	
    
    if (length1 == length2)
    {
        for (i = 0; i < length1; i++)
        {
            if (str1[i] != str2[i])
            {
                check = 1;
                break;
            }
        }
        
        if (check == 0)
        {
            printf("0\n");
            return 0;            
        }
    }
    
    
    if (length1 == length2 || length1 > length2)
    {
        printf("1\n");
        return 0;
        
    }
    else
    {
        printf("-1\n");
        return 0;
        
    }
    
    
    
}


