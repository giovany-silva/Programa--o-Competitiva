#include <bits/stdc++.h>

using namespace std;

#define MAXN 112345

long long seg[4*MAXN];
int v[MAXN];

/**
 * Na função build é onde é realizada a construção da segment tree
 * Os parametros são no - sendo o no na seg tree que eu estou
 * l, r - sendo [l, r] o intervalo do vetor v
*/

void build(int no, int l, int r) {
    if(l == r) {
        seg[no] = v[l];
        return;
    }
    int mid = (l+r)/2;
    build(no*2,l, mid);
    build(no*2 + 1,mid+1, r);
    seg[no] = seg[no*2] + seg[no*2+1];
}

/**
 * Na função update é onde é realizado o update de um valor da seg tree
 * Os parametros são no - sendo o no na seg tree que eu estou,
 * l, r - sendo [l, r] o intervalo do vetor v,
 * p - a posição onde eu quero modificar o vetor
 * x - o valor que eu desejo colocar na posição p
*/

void update(int no, int l, int r, int p, int x) {
    if(l > p || r < p)
        return;
    if(l == r && l == p) {
        seg[no] = x;
        return;
    }
    int mid = (l+r)/2;
    update(no*2, l, mid, p, x);
    update(no*2 +1, mid+1, r, p, x);
    seg[no] = seg[no*2] + seg[no*2+1];
}

/**
 * Na função querry é onde é realizado a consulta de um intervalo na seg tree
 * Os parametros são no - sendo o no na seg tree que eu estou,
 * l, r - sendo [l, r] o intervalo do vetor v,
 * i, j - sendo [i, j] o intervalo em que eu queria saber o valor da seg tree
*/

long long query(int no, int l, int r, int i, int j) {
    if(l > j || r < i) {
        return 0;
    }
    if(l >= i && r <= j) {
        return seg[no];
    }
    int mid = (l+r)/2;
    long long res1 = query(no*2, l, mid, i, j);
    long long res2 = query(no*2+1, mid+1, r, i, j);
    return res1+res2;
}

int main() {

}