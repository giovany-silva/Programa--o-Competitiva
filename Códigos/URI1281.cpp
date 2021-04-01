#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i = 0, p;
    cin >> n;

    string fruit;


    while (i < n)
    {
        int j,qtd;
        map<string, double> mapa;
        double value, sum = 0;
        map<string, double>::iterator it;
        cin >> p;
        for (j = 0; j < p; j++)
        {
            cin >> fruit >> value;
            mapa.insert(make_pair(fruit, value));
        }
        cin >> p;
        for (j = 0; j < p; j++)
        {
            cin >> fruit >> qtd;

            it = mapa.find(fruit);
            sum += qtd * it->second;
        }

        printf("R$ %.2lf\n",sum);
        i++;
    }

    return 0;
}
