#include <stdio.h>

#define GALEON 17   // 1 galeon = 17 SICKLE
#define SICKLE 29   // 1 SICKLE = 29 knats

int money2knats(int g, int s, int k)
{
    return ((g*GALEON) + s) * SICKLE + k;
}

void knats2money(int t, int *pg, int *ps, int *pk) // pointer to
{
    int g, s, k;

    k = t % SICKLE;
    s = t / SICKLE;
    g = s / GALEON;
    s = s % GALEON;

    *pk = k;
    *ps = s;
    *pg = g;
}

int main()
{
    int g1, s1, k1, t1;
    int g2, s2, k2, t2;
    int g, s, k, t;

    scanf("%d%d%d", &g1, &s1, &k1);
    scanf("%d%d%d", &g2, &s2, &k2);

    t1 = money2knats(g1, s1, k1);
    t2 = money2knats(g2, s2, k2);

    t = t1 + t2;

    knats2money(t, &g, &s, &k);

    printf("%d %d %d\n", g, s, k);

    return 0;
}
