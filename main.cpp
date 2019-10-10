
#include <iostream>

using namespace std;

void whoisthis(char*, int);

int main()
{
    char me[] = " love era star";
    int size = strlen(me);
    whoisthis(me, size);
    cout << me << endl;
    return 0;
}




void whoisthis(char *s, int n)
{
    char *f = (s+0);
    char *l = (s+n-1);

    while(f < l)
    {
        char X = *f;
        *f++ = *l;
        *l-- = X;
      
    }
}
