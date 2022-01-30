#include<stdio.h>
int main()
{
	int bakiye,tutar,limit,islem,sifre;
	bakiye=2000;
	limit=500;
	sifre=1234;
	
	printf("Hosgeldiniz..\nSifrenizi giriniz:\n");
	scanf("%d",&sifre);
	
	if(sifre!=1234)
	{
		printf("Sifreyi yanlis girdiniz.");
	}
	
	else
	{
		printf("Bakiyeniz=2000'dir.\n****ISLEMLER****\n1.Para cekme\n2.Para yatirma\n3.Bakiye sorgulama\n4.Kart iade\n\n");
		printf("Yapmak istediginiz islemi seciniz:");
		scanf("%d",&islem);
		
		switch(islem)
		{
			case 1:  //para cekme
			printf("Cekmek istediginiz tutari giriniz:");
			scanf("%d",&tutar);
			
			if(tutar>bakiye)
			printf("Yetersiz Bakiye!");
			
			if(tutar>limit)
			printf("Para cekme ust limitini asamazsiniz!\nUst limit=500\n");
			
			else
			bakiye=bakiye-tutar;
			printf("Yeni bakiyeniz:%d",bakiye);
			break;
			
			case 2:  //para yatırma
			printf("Yatirmak istediginiz tutari giriniz:");
			scanf("%d",&tutar);
			
			bakiye=bakiye+tutar;
			printf("Yeni bakiyeniz:%d",bakiye);
			break;
			
			case 3:  //bakiye sorgulama
			printf("Guncel bakiyeniz:%d",bakiye);
			break;
			
			case 4:  //kart iade
			printf("Kartinizi aliniz..");
			break;
		}
	}
	return 0;
}

