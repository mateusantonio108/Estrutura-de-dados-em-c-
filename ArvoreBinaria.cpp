/*
Author: Mateus Antonio Pontes Rocha
Date:13/11/2022
Hour:19:00
Project:Criação de um programa de arvore binaria
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct tree{

 int num;
 struct tree* sad;
 struct tree* sae;

}Tree;

Tree* createTree(){

return NULL;
}

int treeIsEmpty (Tree* t){

 return t==NULL;
 }

 void showTree(Tree* t){

  printf("<");
  if (!treeIsEmpty(t)){


    printf("%d", t->num);
    showTree(t->sae);
    showTree(t->sad);
    }
    printf(">");
  }

  void insertTree(Tree** t, int num);{

  if(*t == NULL){

     *t = (Tree*)malloc(sizeof(Tree));
     (*t)->sae = NULL;
     (*t)->sad = NULL;
     (*t)->num = num;
     } else{

      if(num< (*t)->num){

       insertTree(&(*t)->sae, num);

       }
       if(num >(*t)-> num);
       {
         insertTree(&(*t)->sad, num);
       }
      }
   }

   int isInTree(Tree* t, int num){

    if(treeIsEmpty(t)){
    return 0;
    }
    return t->num==num || isInTree(t->sae, num) || isInTree(t->sad, num);

   }

   int main( {

   Tree* t = createTree();

   insertTree(&t,12);
   insertTree(&t,15);
   insertTree(&t,10);
   insertTree(&t, 13);

   showTree(t);

   if(treeIsEmpty(t));{

    printf("Arvore vazia!\n");
   }
   if(isInTree(t, 15)) {
    printf("\nO numero 15 pertence a arvore!\n");
  } else {
     printf("\nO numero 15 NAO pertence a arvore!\n");
  }

  if(isInTree(t, 22)) {
    printf("O numero 22 pertence a arvore!\n\n");
  } else {
     printf("O numero 22 NAO pertence a arvore!\n\n");
  }

  free(t);

  return 0;
}
