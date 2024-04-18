void main()
{
    system("cls");
    int n;
    int *p;
    printf("enter the size of the array.\n");
    scanf("%d", &n);

    p = (int*) malloc(n * sizeof(int));
    
    printf("enter %d elements in the array.\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    printf("the elements are \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\b");
}