#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIFRE 1234


struct kullanici
{
	char adi[10];
	int  sifre;
};

struct yolcu{
	char ad[10];
	char soyad[10];
	char otobus;
	int  no;
};
struct otobus{
	char ad;
	int no;
	int doluluk;
};

int main() {

	struct kullanici yonetici;
	printf("Kullanici:");
	scanf("%s",&yonetici.adi);
	printf("Sifre:");
    scanf("%d",&yonetici.sifre);
    if((strcmp(yonetici.adi,"Eray")!=0) || (yonetici.sifre!=SIFRE))
    {
    	printf("Girilen bilgiler yanlis,tekrar giriS yapiniz\n");
    	while(1)
    	{
    		printf("\nKullanici:");
    		scanf("%s",&yonetici.adi);
    		printf("Sifre :");
    		scanf("%d",&yonetici.sifre);
    		if((strcmp(yonetici.adi, "Eray")) == 0 && (yonetici.sifre == SIFRE))
    		{
    		   printf("----------------Otobus Rezervasyon Sistemine Hos Geldiniz-------------");
    		   printf("1-Bilet satin almak için 1'e basiniz.");
    		   printf("2-Bilet iptal etmek için 2'ye basiniz.");
    		   printf("3-Otobus ve koltuk durumunu kontrol etmek için 3'e basiniz.");
    		   printf("4-Cýkýs");
               struct yolcu musteri;
               FLIE *ptr;
    		   switch(numara)
    		   {
                   case 1:
                       printf("Bilet satin almak için bilgilerinizi giriniz:");
                       printf("Ad:");
                       scanf("%s"&musteri.ad);
                       printf("Soyad:");
                       scanf("%s",&musteri.soyad);
                       printf("Otobus No:");
                       scanf("%s",&musteri.otobus);
                       printf("Koltuk No:");
                       scanf("%d",&musteri.no);

                    if(otobus.no==a)
                    {
                        fptr=fopen("A_firmasi.txt","a");
                        if(fptr==NULL)
                        {
                            printf("dosya açilamadi");
                        }
                        else
                            fprintf(fptr,"Ad:%s,Soyad:%s,Otobus No:%s,Koltuk No:%d",)
                    }


    		   }
			   break;
			}
    		else
    		printf("girilen bilgiler yanlis,tekrar giris yapiniz:",&musteri.ad,musteri.soyad,musteri.otobus,musteri.no);


		}

	}
    else
	{
	     printf("----------------Otobus Rezervasyon Sistemine Hos Geldiniz-------------");
         printf("1-Bilet satin almak için 1'e basiniz.");
         printf("2-Bilet iptal etmek için 2'ye basiniz.");
    	 printf("3-Otobus ve koltuk durumunu kontrol etmek için 3'e basiniz.");
         printf("4-Cýkýs");
	}


	return 0;
}
