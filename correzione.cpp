#include <iostream>

using namespace std;

int main()
{
    int dim;
    cout<<"che dimensione vuoi?"<<endl;
    cin>>dim;

    int a[dim];
    int i;
    for(i=0;i<dim;i++)
    {
        cout<<"inserisci il valore"<<i<<": ";
        cin>>a[i];
    }

    int magg_1=0;

    for(i=0;i<dim;i++)                                              //ciclo 1 per trovare il maggiore di tutto l'array
    {
        if(a[i]>magg_1)
            magg_1=a[i];
    }

    int magg_2=0;

    for(i=0;i<dim;i++)
    {
        if(a[i]!=magg_1 && a[i]>magg_2)                             //ciclo 2 per trovare il secondo numero più grande dell'array
            magg_2=a[i];
    }

    int sum=0;

    sum=magg_1+magg_2;

    cout<<"la somma e': "<<sum<<endl;

    return 0;
}
