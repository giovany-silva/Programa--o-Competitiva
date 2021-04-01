#include <bits/stdc++.h>

using namespace std;

int main(){
  int x, valores[4]={0,0,0,0}, maior=0;
  string um, dois, tres, quatro, um2, dois2, tres2, quatro2;
  cin >> x;
  getchar();
  for(int i=0; i<x; i++){
    getline(cin, um);
    getline(cin, um);
    getline(cin, dois);
    getline(cin, tres);
    getline(cin, quatro);

    getline(cin, um2);
    getline(cin, um2);
    getline(cin, dois2);
    getline(cin, tres2);
    getline(cin, quatro2);

    if(um!=um2)
      valores[0]++;
    if(dois!=dois2)
      valores[1]++;
    if(tres!=tres2)
      valores[2]++;
    if(quatro!=quatro2)
      valores[3]++;
  }
  for(int i=1; i<4; i++){
    if(valores[i]>valores[maior])
    maior = i;
  }
  printf("%d", maior+1);
  if(valores[maior]==valores[1] && maior!=1)
  printf(" 2");
  if(valores[maior]==valores[2] && maior!=2)
  printf(" 3");
  if(valores[maior]==valores[3] && maior!=3)
  printf(" 4");
  printf("\n");
  return 0;
}