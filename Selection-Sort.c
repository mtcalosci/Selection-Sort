#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(){
int v[N];
int i,x;
int pos_min,aiuto;

for(i = 0; i < N; i++) {      //Inserimento valori nel vettore.
      printf("Inserisci l'elemento %d: \n", i);
      scanf("%d", &v[i]);
      }
    
for(x = 0; x < (N - 1); x++) {        //Ciclo esterno.
pos_min = x;
      for(i = x + 1; i < N; i++) {          //Ciclo interno che mi permette di trovare la posizione del valore minimo.
            if(v[pos_min]>v[i]) {
            pos_min = i;
            }
      }
                    if(x != pos_min) {                   //Se il minimo si trova nella posizione indicata da "x", allora non sarà necessario effettuare lo scambio.
                    aiuto = v[pos_min];
                    v[pos_min] = v[x];
                    v[x] = aiuto;
                    }
}

for(i = 0; i < N; i++) {      //Stampa dell'array ordinato.
       printf("Elemento %d dell'array ordinato: %d\n", i, v[i]);
       }


return (EXIT_SUCCESS);  
}
