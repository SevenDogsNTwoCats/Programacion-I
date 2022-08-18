
//calcular el producto de la diagonal
    for (i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
    if (i=j)
    {
                pd= pd*A[i][j];
    }
    
        }
        }
//calcular la suma cuando i<j
    for (i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {