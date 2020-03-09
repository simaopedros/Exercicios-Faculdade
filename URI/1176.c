#include <stdio.h>

int main(){
    long long int nFibo, nFiboA, nFiboB,  arrayFibo[60];
    int  nTeste, teste, testAtual, testeFibo, test2, arrayFiboEntrada[60];
    nFiboA = 0;
    nFibo = 0;
    nFiboB = 1;
    scanf("%d", &nTeste);

    for(teste = 0; teste < nTeste; teste++){
        scanf("%d", &testAtual);
        arrayFiboEntrada[teste] = testAtual;
        for(testeFibo = 1; testeFibo < testAtual; testeFibo++){            
                nFibo = nFiboA + nFiboB;
                nFiboA = nFiboB;
                nFiboB = nFibo;            
            }
        arrayFibo[teste] = arrayFiboEntrada[teste] == 1?nFiboB:nFibo;
        printf("Fib(%d) = %lld\n",arrayFiboEntrada[teste], arrayFibo[teste]);
        nFiboA = 0;
        nFiboB = 1;
        nFibo = 0;

        
    } 

}