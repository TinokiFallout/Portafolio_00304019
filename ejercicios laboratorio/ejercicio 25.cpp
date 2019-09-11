#include<iostream>
#include<math.h>

using namespace std;

typedef struct Ncomplejo
{
    int real; 
    int imaginaria;

    Ncomplejo(){}
    Ncomplejo(int r, int i)
    {
        real = r;
        imaginaria = i;
    }
} Ncomplejo;

float valorAbsoluto(Ncomplejo z)
{
    return sqrt(pow(z.real, 2) + pow(z.imaginaria, 2));
}

int main(void)
{
    Ncomplejo z(9, 4);
    cout<<"Valor absoluto: "<<valorAbsoluto(z)<<endl;
    return 0;
}
