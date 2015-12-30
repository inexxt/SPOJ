#include <cstdio>
#include <vector>

using namespace std;

int tab[500*1000][2];
vector <int> tab2[500*1000];

int tab2p[500*1000];
bool odw[500*1000];
bool cykl[500*1000];

int P[500*1000][19];
int T[500*1000];
int L[500*1000];

int num, v, n, k, m, licz;

void cus(int v)
{
    int v1;
    v1=v;
    do
    {
        tab[v][1]=num;
        v=tab[v][0];
        tab[v][2]=1;
    }
    while(v!=v1);
    v=v1;
};

int dfs(int u)   // DFS - przegl¹danie grafu w g³¹b
{
    odw[u]=1;     //odwiedzamy
    cykl[u]=1;
    v=tab[u][0];
    if(odw[v]==0) tab[u][2]=dfs(v); // rekurencja
    else
    {
        if (cykl[v]==1) // ZNALEZLISMY CYKL
        {
            tab[v][2]=1;
            cus[v];
        }
        return tab[v][1];
    }
};


void load(void)  //Funkcja wczytuj¹ca GRAF SKIEROWANY
{
    int a,b;  //roboczo konce krawedzi
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a);
        tab[i][0]=a;
        tab2[a].push_back(i);
        T[i]=a;
    }
};

void process3( int N, int T[500*1000], int P[500*1000][19])
{
    int i, j;

    //we initialize every element in P with -1
    for (i = 0; i < N; i++)
    for (j = 0; 1 << j < N; j++)
        P[i][j] = -1;

    //the first ancestor of every node i is T[i]
    for (i = 0; i < N; i++)
            P[i][0] = T[i];

    //bottom up dynamic programing
    for (j = 1; 1 << j < N; j++)
        for (i = 0; i < N; i++)
            if (P[i][j - 1] != -1)
                P[i][j] = P[P[i][j - 1]][j - 1];
};

int query(int N, int P[500*1000][19], int T[500*1000], int L[500*1000], int p, int q)
{
      int tmp, log, i;

  //if p is situated on a higher level than q then we swap them
      if (L[p] < L[q])
          tmp = p, p = q, q = tmp;

  //we compute the value of [log(L[p)]
      for (log = 1; 1 << log <= L[p]; log++);
      log--;

  //we find the ancestor of node p situated on the same level
  //with q using the values in P
      for (i = log; i >= 0; i--)
          if (L[p] - (1 << i) >= L[q])
              p = P[p][i];

      if (p == q)
          return p;

  //we compute LCA(p, q) using the values in P
      for (i = log; i >= 0; i--)
          if (P[p][i] != -1 && P[p][i] != P[q][i])
              p = P[p][i], q = P[q][i];

      return T[p];
}

void bfs(a)
{
    queue s;
    s.push(a);
    while (s.empty() == false)
    {
        top = s.front();
        s.pop();
        mark top as visited;
    }
};

int main(void)
{
    load();

    while (licz!=n)
    {
        while (odw[i]) i++;
        dfs(i);
        num++;
    }


    return 0;
}
