#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int rozmiar=3;
    int tab[rozmiar];
    srand(time(NULL));
    int k=0;
    bool flaga;

    for(int i=0; i<rozmiar; i++)
    {
        do
        {


        k=rand();
        int temp=(k %(6));
        flaga=false;

        
        //int z=tab[i];
        for(int j=0; j<rozmiar; ++j)
            {
                if(tab[j]==temp)
                {
                    flaga=true;
                    break;
                }
                 
            }
            tab[i]=temp;
        
        }
        while(flaga);
       


        cout<<tab[i]<<" ";
    }


    return 0;
}
