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
char c;
 
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
  while(buffer[pont] != '\n'){
    while(buffer[pont] != '\n' && buffer[pont] != ' ') {
      // enquanto nao chegar ao fim da frase e
      // enquanto nao encontrar um espaco vai avancando a posicao
      push(buffer[pont]);
      pont++;
    }
    
    if(lop == 0)
    {
      lop = 1;
      while(tamanho < pont){
        c1 = pop();
        printf("%c", c1);
        tamanho = tamanho +  1;
      }
    }
    else
    {
      pont--;
      while(tamanho < pont){
        c1 = pop();
        printf("%c", c1);
        tamanho = tamanho +  1;
      }
    }
    if(buffer[pont] == ' ')
    {
      printf(" ");
    }
    pont++;
    
    if(buffer[pont] == '\n')
    {
      printf("\n");
    }
  }
  return 0;
}
