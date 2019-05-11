
/*	SORU;
 0 ile 100 arasýnda rasgele deðerlerden oluþturacaðýnýz 20 elemanlý bir dizi içerisindeki elemanlarý
  pointer iþlemlerini kullanarak selection sort algoritmasý ile büyükten küçüðe doðru sýralayýnýz.
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
        	//*(pointer+i) daki eleman *(pointer+j) daki elemandan büyükse yerlerini deðiþtiriyoruz
        	//En küçüðü en baþa getiriyoruz
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
    
	//Pointer için Bellekten Yer Ayýrýyoruz
    pointer=(int *)malloc(eleman_sayisi*sizeof(int));
    
    //Rastgele Sayýlarý Oluþturduk
    for(i=0;i<eleman_sayisi;i++)
        *(pointer+i)=rand()%100;
	
	//selectionSort Fonksiyonuna Yolluyoruz
    selectionSort(pointer,eleman_sayisi);
    
    //Sýralanmýþ Diziyi Yazdýrýyoruz
    printf("Selection Sort \n");
    for(i=0;i<eleman_sayisi;i++)
        printf("%d\n",*(pointer+i));
        
        
}
