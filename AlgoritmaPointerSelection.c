
/*	SORU;
 0 ile 100 aras�nda rasgele de�erlerden olu�turaca��n�z 20 elemanl� bir dizi i�erisindeki elemanlar�
  pointer i�lemlerini kullanarak selection sort algoritmas� ile b�y�kten k����e do�ru s�ralay�n�z.
*/
#include<stdio.h>
#include <time.h>
#include<stdlib.h>

void selectionSort(int *pointer,int n)
{
    int i,j,gecici;
	for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
        {
        	//*(pointer+i) daki eleman *(pointer+j) daki elemandan b�y�kse yerlerini de�i�tiriyoruz
        	//En k����� en ba�a getiriyoruz
            if(*(pointer+i)>*(pointer+j))
            {
                gecici=*(pointer+j);
                *(pointer+j)=*(pointer+i);
                *(pointer+i)=gecici;
            }
        }
}
 
main()
{
    int *pointer,eleman_sayisi,i;
    eleman_sayisi=20;
    srand(time(NULL)); 
    
	//Pointer i�in Bellekten Yer Ay�r�yoruz
    pointer=(int *)malloc(eleman_sayisi*sizeof(int));
    
    //Rastgele Say�lar� Olu�turduk
    for(i=0;i<eleman_sayisi;i++)
        *(pointer+i)=rand()%100;
	
	//selectionSort Fonksiyonuna Yolluyoruz
    selectionSort(pointer,eleman_sayisi);
    
    //S�ralanm�� Diziyi Yazd�r�yoruz
    printf("Selection Sort \n");
    for(i=0;i<eleman_sayisi;i++)
        printf("%d\n",*(pointer+i));
        
        
}
