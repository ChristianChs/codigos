void InsercionDir(int A[], int n){
    int aux,k;
    for (int i = 1; i < n; i++)
    {
        aux = A[i];
        k = i-1;
        while (k>=0 && aux<A[k])
        {
            A[k+1]= A[k];
            k=k-1;
        }
        A[k+1]=aux;
        
    }
    
}

void InterDirectoDer(int A[], int n)
{
    int aux;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if(A[j]>A[j+1]){
                aux = A[j];
                A[j]= A[j+1];
                A[j+1]=aux;
            }
        }
        
    }
    
    
}

void  shellsort(int A[],int n){
    int k = n+1;
    while (k>1)
    {
        k = k/2;
        int cen=1;
        while (cen==1)
        {
            cen=0;
            int i=0;
            while (i+k<=n)
            {
                if(A[i+k]<A[i]){
                    int aux = A[i];
                    A[i]=A[i+k];
                    A[i+k]=aux;
                    cen=1;
                }
                i=i+1;
            }
            
        }
        
    }
    
}

void selecciondir(){
    int menor, k;
    for ( int i = 0; i < n-1; i++){
        menor = x[i];
        k = i;
        for ( int j = i + 1; j < n; j++){
            if ( x[j] < menor){
                menor = x[j];
                k = j;
            }
        }
        x[k] = x[i];
        x[i] = menor;
    }    
}

----busqueda
void b_binaria(int x[], int n, int dato){
    int izq = 0, der = n-1;
    bool cen = false;
    while( izq <= der && cen == false ){
        int m = ( izq + der ) / 2;
        if( dato == x[m] ) cen = true;
        else
            if( dato > x[m] ) izq = m + 1;
            else der = m - 1;
    }
    if( cen ) cout << "DATO ENCONTRADO" << endl;
    else cout << "DATO NO ENCONTRADO" << endl;
}

void b_secuencial_d(int x[], int n, int dato){
    int i = 0;
    bool cen = false;
    while(cen == false && i < n){
        if( x[i] == dato ) cen = true;
        else i++;
    }
    if( cen )cout << "DATO ENCONTRADO" << endl;
    else cout << "DATO NO ENCONTRADO" << endl;
}

void b_secuencial_o(int x[], int n, int dato){
    int i = 0;
    bool cen = false;
    while(i < n && cen == false && dato >= x[i]){
        if( dato == x[i] )  cen == true;
        else i++;
    }
    if( cen ) cout << "DATO ENCONTRADO" << endl;
    else cout << "DATO NO ENCONTRADO" << endl;
}