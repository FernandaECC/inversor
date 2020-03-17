/* Data de submissao: 16/03/2020
 * Nome: Fernanda Esteves Coelho Chaves
 * RA: 215835
 */

#include <stdio.h>
 
char pilha[100];
int n_pilha=0;

const int tam_buffer=100;
char buffer[100];


int pont = 0;
int play = 1;
char c;
char letra;
 
void push(char c) {
/* Insere caractere c na pilha */
  if (n_pilha < tam_buffer) {
    pilha[n_pilha]= c;
    n_pilha++;
  }
}
 
char pop() {
  char c1;
/* Remove caractere do topo da pilha */
  if (n_pilha >= 0) {
    n_pilha--;
    c1 = pilha[n_pilha];
  }
  return c1;
}
 
 
 
int main() {
  char c1;
  int lop = 0;
  fgets(buffer, tam_buffer, stdin);
  //printf("%s", buffer);



  while(play){
    while(buffer[pont] != '\n' && buffer[pont] != ' ') {//se for uma letra
      // enquanto nao chegar ao fim da frase e
      // enquanto nao encontrar um espaco vai avancando a posicao
      push(buffer[pont]);
      pont++;
     
    }

    //se a pilha não esta vazia
    //encontrou um espaco
      if(buffer[pont] == ' '){
        int r = n_pilha;
        for (int i=0; i<r; i++) {
          letra = pop();
          printf("%c", letra);
        }
        printf(" ");
    }
    
    //chegou ao final da frase\palavra
    if(buffer[pont] == '\n'){
      int r = n_pilha;
      play = 0;
      for (int i=0; i<r; i++) {
        letra = pop();
        printf("%c", letra);
      }
      printf("%c", '\n');
      
    }
    pont++;
    
  }
  return 0;
}
