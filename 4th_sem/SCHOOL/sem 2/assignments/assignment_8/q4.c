void main()
{
    system("cls");

    char str[50]="hello world";

    char *ptr=str;

    while (*ptr!='\0')
    {
        printf("%c",*ptr) ;
        ptr++;
    }
      
    return 0;  
}