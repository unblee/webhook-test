#include <stdio.h>

int a(void) {
    int i=0,g=0;
    while(i++<10000)
    {
        g+=i;
    }
    return g;
}
int b(void) {
    int i=0,g=0;
    while(i++<40000)
    {
        g+=i;
    }
    return g;
}

int main()
{
    int iterations = 10000;
    while(iterations--)
    {
        a();
        b();

        int i=0,g=0;
        while(i++<3000)
        {
            g+=i;
        }
    }

    return 0;
}