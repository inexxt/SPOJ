#include<iostream>
#include<vector>
#include<set>

using namespace std;

const int infty = 1000000000; // uwaga na limit
int n,m;
vector< pair<int,int> > adj[100000];

vector<int> waga;

struct cmp
{
    // czy a jest mniejsze od b
    bool operator() (const int &a, const int &b)
    {
        if (waga[a] < waga[b]) return true;
        if (waga[a] > waga[b]) return false;
        return a<b;
    }
};


set<int, cmp> kopiec; // ;-)


void dijkstra(int s)
{
    int v, u, c;
    waga.clear(); // kasuje wektor
    waga.resize(n, infty); //

    waga[s] = 0;
    kopiec.clear();
    for (int i=0; i<n; i++) kopiec.insert(i);

    while( !kopiec.empty() )
    {
        u = *(kopiec.begin());
        kopiec.erase(kopiec.begin());

        for (int i=0; i<adj[u].size(); i++)
        {
            v = adj[u][i].first;
            c = adj[u][i].second;
            if (waga[u]+c < waga[v])
            {
                // uaktualniamy wag� wierzcho�ka v
                kopiec.erase(kopiec.find(v));
                waga[v] = waga[u]+c;
                kopiec.insert(v);
            }
        }
    }


}

int main(void)
{
    int a,b,c, s,t;

    cin >> n >> m;
    for (int i=0; i<m; i++)
    {
        cin >> a >> b >> c; // c = koszt kraw�dzi od a do b
        adj[a].push_back( pair<int,int>(b,c) );
    }

    cin >> s >> t; // s - �r�d�o, t - wierzcho�ek, do kt�rego najkr�tszej odleg�o�ci szukamy

    dijkstra(s); // alg. Dijkstry wype�ni ca�� tablic� waga[..] najkr�tszymi odleg�o�ciami
    cout << waga[t];
    return 0;
}
