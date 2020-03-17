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
int tamanho = 0; 
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
  char c;
/* Remove caractere do topo da pilha */
  if (n_pilha >= 0) {
    n_pilha--;
    c = pilha[n_pilha];
  }
  return c;
}
 
 
 
int main() {
  fgets(buffer, tam_buffer, stdin);
  //printf("%s", buffer);



  while(play){

    while(buffer[pont] != '\n' && buffer[pont] != ' ') {//se for uma letra
      // enquanto nao chegar ao fim da frase e
      // enquanto nao encontrar um espaco vai avancando a posicao
      push(c);
      pont++;
      
    }

    //se a pilha não esta vazia
    
    if(n_pilha> 0){

    
        //encontrou um espaco
        if(buffer[pont] == ' '){
          printf("%c", ' ');
          while(tamanho < pont ) {
            c = pop();
            printf("%c", c);
            tamanho++;
          }
        }
      
      //chegou ao final da frase\palavra
      if(buffer[pont] == '\n'){
        play = 0;
        while(tamanho < pont ) {
            c = pop();
            printf("%c", c);
            tamanho++;
          }
        }
        printf("%c", '\n'); 
      }
      pont++;
    }  
      
    return 0;
  }
  
