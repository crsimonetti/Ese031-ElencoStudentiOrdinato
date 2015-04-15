#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define NumeroStudenti 2
#define MAX_STRLEN 30

// Definisci il tipo di dato struct s_studente
struct s_studente {
	char nome[MAX_STRLEN+1];
	char cognome[MAX_STRLEN+1];
        int eta;
	char classe[MAX_STRLEN+1];
}studenti[NumeroStudenti];

// Definisci studente come struct s_studente
struct s_studente studente;

// Dichiara il prototipo della funzione di ordinamento
void ordinamento( studente V[], int NumStudenti);


int main(int argc, char** argv) {
    // Dichiara le variabili locali
    int i;
    
    // Codice per l'inserimento, da parte dell'utente, dei dati
    for (i=0;i<NumeroStudenti;i++) {
		
	printf("Inserisci il nome del %d studente: \n", i+1);
	    scanf("%s", studenti[i].nome);
		
        printf("Inserisci il cognome del %d studente: \n",i+1);
		scanf("%s", studenti[i].cognome);
		
        printf("Inserisci l eta' del %d studente: \n",i+1);
		scanf("%d", &studenti[i].eta);
		
        printf("Inserisci la classe del %d studente: \n",i+1);
		scanf("%s", studenti[i].classe);
	}
    
    // Ordina l'elenco (con funzione)
    ordinamento(studenti,NumeroStudenti);
    
    // Codice per la stampa dei dati (uno studente per riga)
    for (i=0;i<NumeroStudenti;i++) {
		printf("%s; %s; %d; %s\n", studenti[i].nome, studenti[i].cognome, studenti[i].eta, studenti[i].classe);
	}
    
    return (EXIT_SUCCESS);
}

// Definisci la funzione di ordinamento
void ordinamento( studente V[], int NumStudenti){
    studente temp;
    int i,j;
    for(i=0;i<NumStudenti-1;i++){
        for(j=0;j<NumStudenti-1-i;j++){
            if(strcmp(V[j].cognome,V[j+1].cognome)<0){
                temp=V[j];
                V[j]=V[j-1];
                V[j-1]=temp;
                }
            }
    }
}