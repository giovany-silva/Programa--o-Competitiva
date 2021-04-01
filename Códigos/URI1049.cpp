#include <stdio.h>

int main()
{int i;
    char s[15];

    scanf("%s",s);
    switch(s[0])
    {
        case 'v':
        {
            scanf("%s",s);
            switch(s[0])
    {
        case 'a':
        {
            scanf("%s",s);
            switch(s[0])
    {
        case 'c':
        {
            printf("aguia\n");
        break;}
        case 'o':
        {
            printf("pomba\n");
        break;}
    break;}
        break;}
        case 'm':
        {
            scanf("%s",s);
            switch(s[0])
    {
        case 'o':
        {
            printf("homem\n");
        break;}
        case 'h':
        {
            printf("vaca\n");
        break;}
    }
        break;}
    break;}
        break;}
        case 'i':
        {
            scanf("%s",s);
            switch(s[0])
    {
        case 'i':
        {
            scanf("%s",s);
            switch(s[2])
    {
        case 'm':
        {
            printf("pulga\n");
        break;}
        case 'r':
        {
         printf("lagarta\n");
        break;}
    break;}
        break;}
        case 'a':
        {
            scanf("%s",s);
            switch(s[0])
    {
        case 'h':
        {
                printf("sanguessuga\n");
            break;}
            case 'o':
            {
                printf("minhoca\n");
            break;
                
            }
        break;
            
        }
        break;
            
        }
    break;
        
    }
       break; }
    
}    
return 0;
    
}
