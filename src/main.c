/* Data de submissao: 16/03/2020
 * Nome: Fernanda Esteves Coelho Chaves
 * RA: 215835
 */

#include <stdio.h>

char pilha[80];
int n_pilha=0;
const int tam_buffer=100;
char buffer[100];
int pont = 0;
int tamanho = 0; //tamanho da string
char c;

void push(char c) {
/* Insere caractere c na pilha */
  if (n_pilha < tam_buffer) {
    c = buffer[n_pilha];
    pilha[n_pilha]= c;
    n_pilha++;
  }
}

char pop() {
/* Remove caractere do topo da pilha */
  if (n_pilha> 0) {
    n_pilha--;
    c = pilha[n_pilha];
  }
  return c;
}



int main() {
  fgets(buffer, tam_buffer, stdin);
  //printf("%s", buffer);
  
  while(buffer[pont] != '\n') {
  push(c);
  pont++;
  }

  tamanho = n_pilha;

  for (int i=0; i<(tamanho); i++) {
    c = pop();
    printf("%c", c);
  }
 printf("%c", '\n');
 
 
  return 0;

}
