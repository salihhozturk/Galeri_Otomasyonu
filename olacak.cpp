#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <unistd.h>

struct satilmayan_araclar{
 char Marka[15];
 char Model[15];
 char renk[10];
 int yil;
 int km;
 int fiyat;
 int satis;
 int kar;
 int gun,ay,yil1;
  } ;

struct sil_araclar{
 char Marka[15];
 char Model[15];
 char renk[10];
 char yil[10];
 char km[10];
 char fiyat[10];
 char satis[10];
 char kar[10];
 int gun,ay,yil1;
  } ;

int menu1();
int menupatron();
int menuper();
int sifreler();
void anamenu();
void patrongit();
void pergit();
void listele();
void listele2();
void kar_zarar();
void arac_ekle();
void bul_degistir();
void patrongeri();
void pergeri();
void arac_bul();
void marka_arama();
void renk_arama();
void model_arama();
void tarih_ay();
void tarih_yil();
void kar();
void marka_aramaP();
void renk_aramaP();
void model_aramaP();
void arac_bulP();
void kayit_sil();
void satis();
int tarihkont(int,int,int);
void araba();

				///////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){	

	anamenu();
	return 0;
				
}
				//////////////////////////////////////////////////////////////////////////////////////////////////////////
void anamenu(){
	int secim1,sifre;
	system("color 1E");
	system("cls");
	secim1=menu1();
	sifre=sifreler();
		if(secim1 == 1){
			patrongit();
		}
		if(secim1 == 2){
			pergit();
		}
		if(secim1 == 3){
			araba();
				exit(0); 
		}
		
		if(secim1!=1 && secim1!=2 && secim1!=3)
		{
		while(secim1!=1 || secim1!=2 || secim1!=3){ 
    		printf("\tLutfen gecerli bir secim yapiniz:");
			scanf("%d",&secim1);
        	if (secim1==1 || secim1==2 || secim1==3) anamenu();	}
    	}	//exit(0);
		}

void patrongit(){
	int secimpatron;
	system("color 70");
	secimpatron=menupatron();
	
	if(secimpatron==1){
		system("cls");
		printf("MARKA \tMODEL\tRENK\tYIL\tKM\tS.FIYAT  A.TARIHI \n");
		listele2();
		
	}
	if(secimpatron==2){
		system("cls");
		printf("MARKA\tMODEL\tRENK\tYIL\tKM    A.FIYATI S.FIYATI KAZANC S.TARIHI\n");
	    kar_zarar();
	}
	if(secimpatron==3){
		system("cls");
		int a;
	printf("\n\t\t*******************************************\n");
	printf("\t\t*** Ne tur bir arama yapmak istersiniz ?***\n");
	printf("\t\t***       1-) Marka ile arama           ***\n");
	printf("\t\t***       2-) Model ile arama           ***\n");
	printf("\t\t***       3-) Renk ile arama            ***\n");
	printf("\t\t***       4-) Ozel/Dar arama            ***\n");
	printf("\t\t***	   RAPORLAMA ARAMA	        ***\n");
	printf("\t\t***       5-) Ay/Yil arama              ***\n");
	printf("\t\t***       6-) Yil arama                 ***\n");
	printf("\t\t***       7-) Markaya Gore Kazanc arama ***\n");
	printf("\t\t***                                     ***\n");
	printf("\t\t*******************************************\n");
	printf("\t\t~~~~     Lutfen Secim Yapiniz  ~~~~ :  ");
			
		scanf("%d", &a);
		if(a==1){
			marka_aramaP();
			system("pause");
		}
		if(a==2) {
			model_aramaP();
			system("pause");
		}
		if(a==3){
			renk_aramaP();
	    	system("pause");
		}
		if(a==4){
			arac_bulP();
	    	system("pause");
		}
		if(a==5){
			tarih_ay();
			system("pause");
		}
		if(a==6){
			tarih_yil();
	    	system("pause");
		}
		if(a==7){
			kar();
	    	system("pause");
		}
	}
	if(secimpatron==4){
				
		anamenu();	
		//patrongeri();	
	}
}
void pergit(){
	int secimper;
	system("color F1");
	secimper=menuper();
	
	if(secimper==1){
		arac_ekle();	
	}
	if(secimper==2){
		kayit_sil();		
	}
	if(secimper==3){
		system("cls");
		printf("MARKA \t MODEL\t RENK \t YIL\t KM \t S.FIYAT \t\n");
		listele();
	}
	if(secimper==4){
		satis();	
	}
	if(secimper==5){		
		bul_degistir();
	}
	if(secimper==6){
		system("cls");
		int a;
		printf("\nNe tur bir arama yapmak istersiniz ?\n");
		printf("1.Marka ile arama\n");	
		printf("2.Model ile arama\n");	
		printf("3.Renk ile arama\n");	
		printf("4.Ozel/Dar arama\n");	
		scanf("%d", &a);
		if(a==1){
			marka_arama();
			system("pause");
		}
		if(a==2) {
			model_arama();
			system("pause");
		}
		if(a==3){
			renk_arama();
	    	system("pause");
		}
		if(a==4){
			arac_bul();
			system("pause");
		}
	}
				
if(secimper==7){
	
	anamenu();		
	//pergeri();					
	}
}
void araba(){
	system("cls");
	int i;
	printf("\n----GULE GULE---------------------------------------------------------\n");
	printf("\n-------___------------------------------------------------------------\n");
	printf("-----_/   \\___-      -----      -----      -----      -----      -----\n");
	printf("----|_________|-------------------------------------------------------\n");
	printf("----  O   --O--      -----      -----      -----      -----      -----\n");
	for (i=0;i<70;i++)printf("-");
	sleep(1);
	system("cls");
	printf("\n--------------------------GULE GULE------------------------------------\n");
	printf("\n-----------------------------___--------------------------------------\n");
	printf("----      -----      ------_/   \\___-      -----      -----      -----\n");
	printf("--------------------------|_________|---------------------------------\n");
	printf("----      -----      -----  O   --O--      -----      -----     ----- \n");
	for (i=0;i<70;i++)printf("-");
	sleep(1);
	system("cls");
	printf("\n------------------------------------------------GULE GULE-------------\n");
	printf("\n---------------------------------------------------___----------------\n");
	printf("----      -----      -----      -----      ----- _/   \\___-      -----\n");
	printf("------------------------------------------------|_________|-----------\n");
	printf("----      -----      -----      -----      -----  O   --O--      -----\n");
	for (i=0;i<70;i++)printf("-");
	
}
	void patrongeri ()
	{
	char tusdevam;
	//printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	tusdevam=getch();
	if(tusdevam=='m' || tusdevam=='M'){
		system("cls");
		patrongit();
	}
	if(tusdevam!='m' || tusdevam!='M') exit(0);
}

void pergeri(){
	char tusdevam;
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	tusdevam=getch();
	if(tusdevam=='m' || tusdevam=='M'){
		system("cls");
		pergit();
	}
	if(tusdevam!='m' || tusdevam!='M') exit(0);
}

int sifreler(){
	int sifre,sifre1,sifre2,sifre3,sifre4,secim1;
	if(secim1 == 1){
		printf("\t\t\t\tKullanici:Patron\n");
		printf("\t\t\t\tSifrenizi giriniz:");
		while(secim1 == 1){ 
			sifre1=getch();
			printf("*");
			sifre2=getch();
			printf("*");
			sifre3=getch();
			printf("*");
			sifre4=getch();
			printf("*");
        	if (sifre1=='7' && sifre2=='8' && sifre3=='0'&& sifre4=='6'){
        		system("cls");
        		break;
			}
			else printf("\nHatali!!! Tekrar sifrenizi giriniz:");
    	}
    }
    if(secim1 == 2){
		printf("\t\t\t\tKullanici:Personel\n");
		printf("\t\t\t\tSifrenizi giriniz: ");
		while(secim1 == 2){ 
			scanf("%d",&sifre);
        	if (sifre == 1234){
        		system("cls");
        		break;
			}
			else printf("\nHatali!!! Tekrar sifrenizi giriniz:");
    	}
    }
	
	return sifre;
}


  int menu1()
{
	system("cls");
	int secim1;
	printf("Sisteme hangi statu ile erisimde bulunacaksiniz?\n\n");
	printf("1)Patron\n\n2)Personel\n\n3)Cikis\n");
	printf("\tSeciminiz : ");
	scanf("%d",&secim1);
	return secim1;
}
int menupatron(){
	int secimp;
	printf("\t\t\t\t  PATRON");
	printf("\n\t\t*******************************************\n");
	printf("\t\t***                                     ***\n");
	printf("\t\t***       1-) Arac listesi              ***\n");
	printf("\t\t***       2-) Raporlama                 ***\n");
	printf("\t\t***       3-) Arac Arama/Rapor          ***\n");
	printf("\t\t***       4-) Ana Menu                  ***\n");
	printf("\t\t*******************************************\n");
	printf("\t\t~~~~     Lutfen Secim Yapiniz  ~~~~ :  ");
	scanf("%d",&secimp);
	if (secimp!=1 && secimp!=2 && secimp!=3 && secimp!=4){
		while(secimp!=1 || secimp!=2 || secimp!=3 || secimp!=4){ 
    		printf("\t\tHatali!!!  Yeni bir secim yapiniz:\n");
			scanf("%d",&secimp);
        	if (secimp==1 || secimp==2 || secimp==3 || secimp==4) break;
    	}
    return secimp;
	}
}

int menuper()
{
	system("cls");
	int secim2;
	system("color E1");
	printf("\t\t\t\t  PERSONEL");
	printf("\n\t\t*******************************************\n");
	printf("\t\t***                                     ***\n");
	printf("\t\t***       1-) Arac Ekle                 ***\n");
	printf("\t\t***       2-) Arac Sil                  ***\n");
	printf("\t\t***       3-) Arac Bilgilerini Goster   ***\n");
	printf("\t\t***       4-) Arac Satis                ***\n");
	printf("\t\t***       5-) Arac Duzenle              ***\n");
	printf("\t\t***       6-) Arac Arama                ***\n");
	printf("\t\t***       7-) Ana Menu                  ***\n");
	printf("\t\t***                                     ***\n");
	printf("\t\t*******************************************\n");
	printf("\t\t~~~~     Lutfen Secim Yapiniz  ~~~~ :  ");	scanf("%d",&secim2);
	
		if (secim2!=1 && secim2!=2 && secim2!=3 && secim2!=4 && secim2!=5 && secim2!=6 && secim2!=7 ){
		while(secim2!=1 || secim2!=2 || secim2!=3 || secim2!=4 || secim2!=5 || secim2!=6 || secim2!=7){ 
    		printf("\t\tHatali!!!  Yeni bir secim yapiniz: ");
			scanf("%d",&secim2);
        	if (secim2==1 || secim2==2 || secim2==3 || secim2==4 || secim2==5 || secim2==6 || secim2==7)  break;
    	}
	
	scanf("%d",&secim2);
	return secim2;
}
}

void arac_ekle()
{
	char tusdevam;
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi devam ettirmek icin herhangi bir tusa basin\n");
	tusdevam=getch();	
	while(tusdevam=='m' || tusdevam=='M') pergit();

	struct satilmayan_araclar x[500];
	int i=0;
	FILE *galeri;

	galeri=fopen("araclar.txt","a");
 	if(galeri==NULL)
	 {
 	printf("Dosya Acilamadi"); 
 	}
	do{
		system("cls");
	printf("\nLUTFEN BUYUK HARF KULLANARAK GIRINIZ \n");

	printf("Aracin Markasini Giriniz:");
	scanf("%s",&x[i].Marka);
	fflush(stdin);
	printf("Aracin Modelini Giriniz:");
	scanf("%s",&x[i].Model);
	fflush(stdin);
	printf("Aracin Rengini Giriniz:");
	scanf("%s",&x[i].renk);
	fflush(stdin);
	printf("Aracin Yilini Giriniz:");
	scanf("%d",&x[i].yil);
	fflush(stdin);
	printf("Aracin Kilometresini Giriniz:");
	scanf("%d",&x[i].km);
	fflush(stdin);
	printf("Aracin Alis Fiyatini Giriniz:");
	scanf("%d",&x[i].fiyat);
	fflush(stdin);
	printf("Aracin Alim Tarihini Giriniz:");
	scanf("%d.%d.%d",&x[i].gun,&x[i].ay,&x[i].yil1);
	fflush(stdin);
	system("cls");
    printf("\n\n>>>ARAC EKLENMISTIR>>>");
fprintf(galeri,"%s\t%s\t%s\t%d\t%d\t%d\t%d.%d.%d\n" ,x[i].Marka,x[i].Model,x[i].renk,x[i].yil,x[i].km,x[i].fiyat,x[i].gun,x[i].ay,x[i].yil1);
}

	while(tusdevam=='m' || tusdevam=='M');
	printf("Lutfen programi sonlandirmak icin herhangi bir tusa basin");
	tusdevam=getch();	
	//if(tusdevam=='m' || tusdevam=='M') pergit();
	//else 
	fclose(galeri); 
	exit(0);
    
}

void listele(){
	struct satilmayan_araclar yedekx[50];
	char tusdevam;
	FILE *galeri;
	int s=0;
	int sayac=-1;
	galeri=fopen("araclar.txt","r");

	while(!feof(galeri)){
	
		fscanf(galeri,"%s %s %s %d %d %d %d.%d.%d",&yedekx[s].Marka,&yedekx[s].Model,&yedekx[s].renk,&yedekx[s].yil,&yedekx[s].km,&yedekx[s].fiyat,&yedekx[s].gun,&yedekx[s].ay,&yedekx[s].yil1  );
       
     	s++;
		sayac++;
		}		 
		for(int i=0;i<(s-1);i++)
		printf("%s\t%s\t%s\t%d\t%d\t%d TL \n",yedekx[i].Marka,yedekx[i].Model,yedekx[i].renk,yedekx[i].yil,yedekx[i].km,yedekx[i].fiyat );
		printf("\n\t\t\t%d  arac vardir\n ",sayac);
	
		printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	
	tusdevam=getch();	

	while(tusdevam=='m' || tusdevam=='M') pergit();

        fclose(galeri);

}
void listele2(){
	struct satilmayan_araclar yedekx[50];
	char tusdevam;
	FILE *galeri;
	int s=0;
	int sayac=-1;
	galeri=fopen("araclar.txt","r");
	while(!feof(galeri)){
	
		fscanf(galeri,"%s %s %s %d %d %d %d.%d.%d",&yedekx[s].Marka,&yedekx[s].Model,&yedekx[s].renk,&yedekx[s].yil,&yedekx[s].km,&yedekx[s].fiyat,&yedekx[s].gun,&yedekx[s].ay,&yedekx[s].yil1 );
       
     	s++;
		sayac++;
		}
		 
		for(int i=0;i<(s-1);i++)
		printf("%s\t%s\t%s\t%d\t%d\t%d\t%d.%d.%d\n",yedekx[i].Marka,yedekx[i].Model,yedekx[i].renk,yedekx[i].yil,yedekx[i].km,yedekx[i].fiyat,yedekx[i].gun,yedekx[i].ay,yedekx[i].yil1 );
	printf("\n\t\t\t%d  arac vardir\n ",sayac);
	
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	
	tusdevam=getch();	

	while(tusdevam=='m' || tusdevam=='M') patrongeri();

        fclose(galeri);

}
void kar_zarar(){
	struct satilmayan_araclar yedekk[50];
	char tusdevam;
	FILE *galeri;
	int s=0;
	int sayac=0;
	int m=0;
	galeri=fopen("satis.txt","r");
    while(!feof(galeri)){
	
		fscanf(galeri,"%s %s %s %d %d %d %d %d %d.%d.%d",&yedekk[s].Marka,&yedekk[s].Model,&yedekk[s].renk,&yedekk[s].yil,&yedekk[s].km,&yedekk[s].fiyat,&yedekk[s].satis,&yedekk[s].kar,&yedekk[s].gun,&yedekk[s].ay,&yedekk[s].yil1 );
       
     	s++;
		sayac++;
		}
		 
		for(int i=0;i<(s-1);i++){
		
	printf("%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d.%d.%d\n",yedekk[i].Marka,yedekk[i].Model,yedekk[i].renk,yedekk[i].yil,yedekk[i].km,yedekk[i].fiyat,yedekk[i].satis,yedekk[i].kar,yedekk[i].gun,yedekk[i].ay,yedekk[i].yil1 );
	m+=yedekk[i].kar;
}
printf("\t\t\t%d TL Toplam Kazanc Vardir\n\n",m);
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	tusdevam=getch();	
	while(tusdevam=='m' || tusdevam=='M') patrongeri();
     fclose(galeri);
}

void kar(){
	system("color 0B");
	struct satilmayan_araclar yedekk[500];
	char aranan[50];
	system("cls");
	printf("LUTFEN BUYUK HARF ILE YAZINIZ \n");
	printf("\nAradiginiz Aracin Markasini giriniz:");
	scanf("%s",&aranan);
	char tusdevam;
	FILE *galeri;
	int s=0;
	int x=1;
	int m=0;
	galeri=fopen("satis.txt","r");
    while(!feof(galeri)){
	
		fscanf(galeri,"%s %s %s %d %d %d %d %d %d.%d.%d",&yedekk[s].Marka,&yedekk[s].Model,&yedekk[s].renk,&yedekk[s].yil,&yedekk[s].km,&yedekk[s].fiyat,&yedekk[s].satis,&yedekk[s].kar,&yedekk[s].gun,&yedekk[s].ay,&yedekk[s].yil1 );
       
     	s++;
		}
		 printf("\nMARKA\tMODEL\tRENK\tYIL\tKM\tKAZANC\tS.TARIHI\n");
		 printf("-------------------------------------------------------\n");
		for(int i=0;i<(s-1);i++){
		if(strcmp(aranan,yedekk[i].Marka)==0){
	printf("%s\t%s\t%s\t%d\t%d\t%d\t%d.%d.%d\n",yedekk[i].Marka,yedekk[i].Model,yedekk[i].renk,yedekk[i].yil,yedekk[i].km,yedekk[i].kar,yedekk[i].gun,yedekk[i].ay,yedekk[i].yil1 );
m+=yedekk[i].kar;
x--;
}
x++; if(s==x) printf("%s Marka satilan arac bulunmamaktadir.  \n\n\n",aranan);
}
	printf("\n\t%s Marka Aracinizdan %d TL Kar Elde Edilmistir \n\n",aranan,m);
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	tusdevam=getch();	
	while(tusdevam=='m' || tusdevam=='M') patrongeri();
     fclose(galeri);
}

void tarih_ay(){
	system("color 0B");
	struct satilmayan_araclar yedekk[50];
	int ay,yil;
	system("cls");
	printf("Aradiginiz satis tarihini ay.yil giriniz:");
	scanf("%d.%d",&ay,&yil);
	char tusdevam;
	FILE *galeri;
	int s=0;
	int x=1;
	int m=0;
	galeri=fopen("satis.txt","r");
    while(!feof(galeri)){
	
		fscanf(galeri,"%s %s %s %d %d %d %d %d %d.%d.%d",&yedekk[s].Marka,&yedekk[s].Model,&yedekk[s].renk,&yedekk[s].yil,&yedekk[s].km,&yedekk[s].fiyat,&yedekk[s].satis,&yedekk[s].kar,&yedekk[s].gun,&yedekk[s].ay,&yedekk[s].yil1 );
       
     	s++;
	
		}
		 printf("MARKA\tMODEL\tRENK\tYIL\tKM\tALIS\tSATIS\tKAZANC\tS.TARIH\n");
		 printf("----------------------------------------------------------------------------\n");
		for(int i=0;i<(s-1);i++){
			if(ay==yedekk[i].ay && yil==yedekk[i].yil1){
	printf("%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d.%d.%d\n",yedekk[i].Marka,yedekk[i].Model,yedekk[i].renk,yedekk[i].yil,yedekk[i].km,yedekk[i].fiyat,yedekk[i].satis,yedekk[i].kar,yedekk[i].gun,yedekk[i].ay,yedekk[i].yil1 );
m+=yedekk[i].kar;
x--;	
}
x++;	
if(s==x) printf("%d in %d.ayinda  satilan arac bulunmamaktadir.  \n\n\n",yil,ay);
}
	printf("\n\t%d in %d.ayinda  %d TL kazanc elde edilmistir.  \n\n\n",yil,ay,m);
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	tusdevam=getch();	
	while(tusdevam=='m' || tusdevam=='M') patrongeri();
     fclose(galeri);
}
void tarih_yil(){
	system("color 0B");
	struct satilmayan_araclar yedekk[50];
	int yil;
	system("cls");
	printf("Aradiginiz satis yilini giriniz:");
	scanf("%d",&yil);
	char tusdevam;
	FILE *galeri;
	int s=0;
	int x=1;
	int m=0;
	galeri=fopen("satis.txt","r");
    while(!feof(galeri)){
	
		fscanf(galeri,"%s %s %s %d %d %d %d %d %d.%d.%d",&yedekk[s].Marka,&yedekk[s].Model,&yedekk[s].renk,&yedekk[s].yil,&yedekk[s].km,&yedekk[s].fiyat,&yedekk[s].satis,&yedekk[s].kar,&yedekk[s].gun,&yedekk[s].ay,&yedekk[s].yil1 );
       
     	s++;
		}
		 printf("MARKA\tMODEL\tRENK\tYIL\tKM\tALIS\tSATIS\tKAZANC\tS.TARIH\n");
		 printf("----------------------------------------------------------------------------\n");
		 
		for(int i=0;i<(s-1);i++){
			if(yil==yedekk[i].yil1){
				printf("%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d.%d.%d\n",yedekk[i].Marka,yedekk[i].Model,yedekk[i].renk,yedekk[i].yil,yedekk[i].km,yedekk[i].fiyat,yedekk[i].satis,yedekk[i].kar,yedekk[i].gun,yedekk[i].ay,yedekk[i].yil1 );
m+=yedekk[i].kar;
x--;
}
x++;
if(s==x) printf("%d Yilinda satilan arac bulunmamaktadir.  \n\n\n",yil);
}
	printf("\n\t%d Yilinda  %d TL kazanc elde edilmistir.  \n\n\n",yil,m);
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	tusdevam=getch();	
	while(tusdevam=='m' || tusdevam=='M') patrongeri();
     fclose(galeri);
}

void marka_arama(){
	system("color 0B");
	char tusdevam;
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi devam ettirmek icin herhangi bir tusa basin\n");
	tusdevam=getch();	
	while(tusdevam=='m' || tusdevam=='M') pergit();

	char aranan[15];
	int bulundumu=0;
	struct satilmayan_araclar yedeks[500];
	system("cls");
	printf("LUTFEN BUYUK HARF ILE YAZINIZ \n");
		
	printf("Aradiginiz Aracin Markasini giriniz:");
	scanf("%s",&aranan);
	FILE *arama;
	arama=fopen("araclar.txt","r");
	int c=0,i;
	while(!feof(arama)){
 	fscanf(arama,"%s %s %s %d %d %d %d.%d.%d",&yedeks[c].Marka,&yedeks[c].Model,&yedeks[c].renk,&yedeks[c].yil,&yedeks[c].km,&yedeks[c].fiyat,&yedeks[c].gun,&yedeks[c].ay,&yedeks[c].yil1 );
		c++;
	}
	
	 printf("MARKA\tMODEL\tRENK\tYIL\tKM\tSATIS\n");
	 printf("-----------------------------------------------------\n");
	for(i=0;i<(c-1);i++){
		if(strcmp(aranan,yedeks[i].Marka)==0){
		bulundumu=1;
		
		printf("%s\t%s\t%s\t%d\t%d\t%d\n",yedeks[i].Marka,yedeks[i].Model,yedeks[i].renk,yedeks[i].yil,yedeks[i].km,yedeks[i].fiyat );

	}
	}
	if(bulundumu==0){
		printf("%s Marka Bir Arac Bulunmamaktadir\n",aranan);
	}
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	tusdevam=getch();	
	if(tusdevam=='m' || tusdevam=='M') pergit();
	else 
	fclose(arama);
	exit(0);
}

void model_arama(){
	system("color 0B");
	char tusdevam;
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi devam ettirmek icin herhangi bir tusa basin\n");
	tusdevam=getch();	
	while(tusdevam=='m' || tusdevam=='M') pergit();

	char aranan[15];
	int bulundumu=0;
	struct satilmayan_araclar yedeks[500];
	system("cls");
	printf("LUTFEN BUYUK HARF ILE YAZINIZ \n");
	printf("Aradiginiz Aracin Modelini giriniz:");
	scanf("%s",&aranan);
	FILE *arama;
	arama=fopen("araclar.txt","r");
	int c=0,i;
	while(!feof(arama)){
 	fscanf(arama,"%s %s %s %d %d %d %d.%d.%d",&yedeks[c].Marka,&yedeks[c].Model,&yedeks[c].renk,&yedeks[c].yil,&yedeks[c].km,&yedeks[c].fiyat,&yedeks[c].gun,&yedeks[c].ay,&yedeks[c].yil1 );
		c++;
	}
	 printf("MARKA\tMODEL\tRENK\tYIL\tKM\tSATIS\n");
	 printf("-----------------------------------------------------\n");
	for(i=0;i<(c-1);i++){
		if(strcmp(aranan,yedeks[i].Model)==0){
		bulundumu=1;
		printf("%s\t%s\t%s\t%d\t%d\t%d\n",yedeks[i].Marka,yedeks[i].Model,yedeks[i].renk,yedeks[i].yil,yedeks[i].km,yedeks[i].fiyat);
		}
	}
	if(bulundumu==0){
		printf("%s Model Bir Arac Bulunmamaktadir\n",aranan);
	}
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	tusdevam=getch();	
	if(tusdevam=='m' || tusdevam=='M') pergit();
	else 
	fclose(arama);
	exit(0);
}

void renk_arama(){
	system("color 0B");
	char tusdevam;
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi devam ettirmek icin herhangi bir tusa basin\n");
	tusdevam=getch();	
	while(tusdevam=='m' || tusdevam=='M') pergit();

	char aranan[15];
	int bulundumu=0;
	struct satilmayan_araclar yedeks[500];
	system("cls");
	printf("LUTFEN BUYUK HARF ILE YAZINIZ \n");
	printf("Aradiginiz Aracin Rengini giriniz:");
	scanf("%s",&aranan);
	FILE *arama;
	arama=fopen("araclar.txt","r");
	int c=0,i;
	while(!feof(arama)){
 	fscanf(arama,"%s %s %s %d %d %d %d.%d.%d",&yedeks[c].Marka,&yedeks[c].Model,&yedeks[c].renk,&yedeks[c].yil,&yedeks[c].km,&yedeks[c].fiyat,&yedeks[c].gun,&yedeks[c].ay,&yedeks[c].yil1 );
		c++;
	}
	 printf("MARKA\tMODEL\tRENK\tYIL\tKM\tSATIS\n");
	 printf("-----------------------------------------------------\n");
	for(i=0;i<(c-1);i++){
		if(strcmp(aranan,yedeks[i].renk)==0){
		bulundumu=1;
		printf("%s\t%s\t%s\t%d\t%d\t%d\n",yedeks[i].Marka,yedeks[i].Model,yedeks[i].renk,yedeks[i].yil,yedeks[i].km,yedeks[i].fiyat );
		}
	}
	if(bulundumu==0){
		printf("%s Renk Bir Arac Bulunmamaktadir\n",aranan);
	}
		printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	tusdevam=getch();	
	if(tusdevam=='m' || tusdevam=='M') pergit();
	else 
	fclose(arama);
	exit(0);
}


void arac_bul(){
	system("color 0B");
	char tusdevam;
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi devam ettirmek icin herhangi bir tusa basin\n");
	tusdevam=getch();	
	while(tusdevam=='m' || tusdevam=='M') pergit();

	struct satilmayan_araclar yedekx[50];
	int bulundumu=0;    
	char kelime[15];
	char kelmodel[150];
	char kelrenk[150];
	system("cls");
	printf("LUTFEN BUYUK HARF ILE YAZINIZ \n");

	printf("Aranacak Aracin Markasini girin: ");
	scanf("%s",&kelime);
	printf("\nAranacak Aracin Modelini Giriniz: ");
	scanf("%s",&kelmodel);
	printf("\nAranacak Aracin Rengini Giriniz: ");
	scanf("%s",&kelrenk);

	FILE *dosya;
	dosya=fopen("araclar.txt","r");
	int c=0,i3;
	while(!feof(dosya)){

fscanf(dosya,"%s %s %s %d %d %d %d.%d.%d",&yedekx[c].Marka,&yedekx[c].Model,&yedekx[c].renk,&yedekx[c].yil,&yedekx[c].km,&yedekx[c].fiyat,&yedekx[c].gun,&yedekx[c].ay,&yedekx[c].yil1 );
     
	c++;
  }
  	system("cls");
  	 printf("MARKA\tMODEL\tRENK\tYIL\tKM\tSATIS\n");
	 printf("-----------------------------------------------------\n");
	for(i3=0;i3<(c-1);i3++)
	{
if(strcmp(kelime,yedekx[i3].Marka)==0 && strcmp(kelmodel,yedekx[i3].Model)==0 && strcmp(kelrenk,yedekx[i3].renk)==0)
 {
        	bulundumu=1;
printf("%s\t%s\t%s\t%d\t%d\t%d\n",yedekx[i3].Marka,yedekx[i3].Model,yedekx[i3].renk,yedekx[i3].yil,yedekx[i3].km,yedekx[i3].fiyat);
 
}
}
	if(bulundumu==0){
		printf("%s %s %s Boyle Bir Arac Bulunmamaktadir\n\n",kelime,kelmodel,kelrenk);
	}

	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	tusdevam=getch();	
	if(tusdevam=='m' || tusdevam=='M') pergit();
	else 
	fclose(dosya); 
	exit(0);
}

void marka_aramaP(){
	system("color 0B");
	char tusdevam;
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi devam ettirmek icin herhangi bir tusa basin\n");
	tusdevam=getch();	
	while(tusdevam=='m' || tusdevam=='M') patrongit();

	char aranan[15];
	int bulundumu=0;
	struct satilmayan_araclar yedeks[500];
	system("cls");
	printf("LUTFEN BUYUK HARF ILE YAZINIZ \n");
		
	printf("Aradiginiz Aracin Markasini giriniz:");
	scanf("%s",&aranan);
	FILE *arama;
	arama=fopen("araclar.txt","r");
	int c=0,i;
	while(!feof(arama)){
 	fscanf(arama,"%s %s %s %d %d %d %d.%d.%d",&yedeks[c].Marka,&yedeks[c].Model,&yedeks[c].renk,&yedeks[c].yil,&yedeks[c].km,&yedeks[c].fiyat,&yedeks[c].gun,&yedeks[c].ay,&yedeks[c].yil1 );
		c++;
	}
	system("cls");
	printf("MARKA\tMODEL\tRENK\tYIL\tKM\tA.FIYATI   A.TARIH\n");
	 printf("-----------------------------------------------------------------------\n");
	for(i=0;i<(c-1);i++){
		if(strcmp(aranan,yedeks[i].Marka)==0){
		bulundumu=1;
		printf("%s\t%s\t%s\t%d\t%d\t%d\t %d.%d.%d\n",yedeks[i].Marka,yedeks[i].Model,yedeks[i].renk,yedeks[i].yil,yedeks[i].km,yedeks[i].fiyat,yedeks[i].gun,yedeks[i].ay,yedeks[i].yil1 );

		}
	}
	if(bulundumu==0){
		printf("%s Marka Bir Arac Bulunmamaktadir\n",aranan);
	}
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	tusdevam=getch();	
	if(tusdevam=='m' || tusdevam=='M') patrongit();
	else 
	fclose(arama);
	exit(0);
}

void model_aramaP(){
	system("color 0B");
	char tusdevam;
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi devam ettirmek icin herhangi bir tusa basin\n");
	tusdevam=getch();	
	while(tusdevam=='m' || tusdevam=='M') patrongit();

	char aranan[15];
	int bulundumu=0;
	struct satilmayan_araclar yedeks[500];
	system("cls");
	printf("LUTFEN BUYUK HARF ILE YAZINIZ \n");
	printf("Aradiginiz Aracin Modelini giriniz:");
	scanf("%s",&aranan);
	FILE *arama;
	arama=fopen("araclar.txt","r");
	int c=0,i;
	while(!feof(arama)){
 	fscanf(arama,"%s %s %s %d %d %d %d.%d.%d",&yedeks[c].Marka,&yedeks[c].Model,&yedeks[c].renk,&yedeks[c].yil,&yedeks[c].km,&yedeks[c].fiyat,&yedeks[c].gun,&yedeks[c].ay,&yedeks[c].yil1 );
		c++;
	}
	system("cls");
	printf("MARKA\tMODEL\tRENK\tYIL\tKM\tA.FIYATI   A.TARIH\n");
	printf("-----------------------------------------------------------------------\n");
	for(i=0;i<(c-1);i++){
		if(strcmp(aranan,yedeks[i].Model)==0){
		bulundumu=1;
		printf("%s\t%s\t%s\t%d\t%d\t%d\t %d.%d.%d\n",yedeks[i].Marka,yedeks[i].Model,yedeks[i].renk,yedeks[i].yil,yedeks[i].km,yedeks[i].fiyat,yedeks[i].gun,yedeks[i].ay,yedeks[i].yil1 );
		}
	}
	if(bulundumu==0){
		printf("%s Model Bir Arac Bulunmamaktadir\n",aranan);
	}
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	tusdevam=getch();	
	if(tusdevam=='m' || tusdevam=='M') patrongit();
	else 
	fclose(arama);
	exit(0);

}

void renk_aramaP(){
	system("color 0B");
	char tusdevam;
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi devam ettirmek icin herhangi bir tusa basin\n");
	tusdevam=getch();	
	while(tusdevam=='m' || tusdevam=='M') patrongit();

	char aranan[15];
	int bulundumu=0;
	struct satilmayan_araclar yedeks[500];
	system("cls");
	printf("LUTFEN BUYUK HARF ILE YAZINIZ \n");
	printf("Aradiginiz Aracin Markasini giriniz:");
	scanf("%s",&aranan);
	FILE *arama;
	arama=fopen("araclar.txt","r");
	int c=0,i;
	while(!feof(arama)){
 	fscanf(arama,"%s %s %s %d %d %d %d.%d.%d",&yedeks[c].Marka,&yedeks[c].Model,&yedeks[c].renk,&yedeks[c].yil,&yedeks[c].km,&yedeks[c].fiyat,&yedeks[c].gun,&yedeks[c].ay,&yedeks[c].yil1 );
		c++;
	}
	system("cls");
	printf("MARKA\tMODEL\tRENK\tYIL\tKM\tA.FIYATI   A.TARIH\n");
	printf("-----------------------------------------------------------------------\n");
	for(i=0;i<(c-1);i++){
		if(strcmp(aranan,yedeks[i].renk)==0){
		bulundumu=1;
		printf("%s\t%s\t%s\t%d\t%d\t%d\t %d.%d.%d\n",yedeks[i].Marka,yedeks[i].Model,yedeks[i].renk,yedeks[i].yil,yedeks[i].km,yedeks[i].fiyat,yedeks[i].gun,yedeks[i].ay,yedeks[i].yil1 );
		}
	}
	if(bulundumu==0){
		printf("%s Renk Bir Arac Bulunmamaktadir\n",aranan);
	}
		printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	tusdevam=getch();	
	if(tusdevam=='m' || tusdevam=='M') patrongit();
	else 
	fclose(arama);
	exit(0);
}


void arac_bulP(){
	system("color 0B");
	char tusdevam;
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi devam ettirmek icin herhangi bir tusa basin\n");
	tusdevam=getch();	
	while(tusdevam=='m' || tusdevam=='M') patrongit();

	struct satilmayan_araclar yedekx[50];
	char kelime[15];
	char kelmodel[150];
	char kelrenk[150];
	int bulundumu=0;
	system("cls");
	printf("LUTFEN BUYUK HARF ILE YAZINIZ \n");

	printf("Aranacak Aracin Markasini girin: \n");
	scanf("%s",&kelime);
	printf("Aranacak Aracin Modelini Giriniz: \n");
	scanf("%s",&kelmodel);
	printf("Aranacak Aracin Rengini Giriniz: ");
	scanf("%s",&kelrenk);
	
	FILE *dosya;
	dosya=fopen("araclar.txt","r");
	int c=0,i3;
	while(!feof(dosya)){

fscanf(dosya,"%s %s %s %d %d %d %d.%d.%d",&yedekx[c].Marka,&yedekx[c].Model,&yedekx[c].renk,&yedekx[c].yil,&yedekx[c].km,&yedekx[c].fiyat,&yedekx[c].gun,&yedekx[c].ay,&yedekx[c].yil1 );
     
	c++;
  }
  	system("cls");
	printf("MARKA\tMODEL\tRENK\tYIL\tKM\tA.FIYATI   A.TARIH\n");
	printf("-----------------------------------------------------------------------\n");
	for(i3=0;i3<(c-1);i3++)
	{

	if(strcmp(kelime,yedekx[i3].Marka)==0 && strcmp(kelmodel,yedekx[i3].Model)==0 && strcmp(kelrenk,yedekx[i3].renk)==0)
	{
		bulundumu=1;        	
printf("%s\t%s\t%s\t%d\t%d\t%d\t %d.%d.%d\n",yedekx[i3].Marka,yedekx[i3].Model,yedekx[i3].renk,yedekx[i3].yil,yedekx[i3].km,yedekx[i3].fiyat,yedekx[i3].gun,yedekx[i3].ay,yedekx[i3].yil1 );
 
}
	
}
if(bulundumu==0){
		printf("%s %s %s Boyle Bir Arac Bulunmamaktadir\n\n",kelime,kelmodel,kelrenk);
	}
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programi sonlandirmak icin herhangi bir tusa basin");
	tusdevam=getch();	
	if(tusdevam=='m' || tusdevam=='M') patrongit();
	else 
	fclose(dosya); 
	exit(0);
}


void bul_degistir()
{
	char tusdevam;
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programa devam etmek icin herhangi bir tusa basin");
	tusdevam=getch();	
	while(tusdevam=='m' || tusdevam=='M') pergit();

	struct satilmayan_araclar yedekx[50];
    char kelime[150];
    char kelmodel[150];
    char kelrenk[150];
    system("cls");
    printf("\nLUTFEN BUYUK HARF KULLANARAK GIRINIZ \n");

	printf("\nDegisecek Aracin Markasini Giriniz: ");
	scanf("%s",&kelime);
	printf("\nDegisecek Aracin Modelini Giriniz: ");
	scanf("%s",&kelmodel);
	printf("\nDegisecek Aracin Rengini Giriniz: ");
	scanf("%s",&kelrenk);
	
	FILE *dosya;
	dosya=fopen("araclar.txt","r");
	int b=0,i2;

	while(!feof(dosya))
	{
    fscanf(dosya,"%s %s %s %d %d %d %d.%d.%d",&yedekx[b].Marka,&yedekx[b].Model,&yedekx[b].renk,&yedekx[b].yil,&yedekx[b].km,&yedekx[b].fiyat,&yedekx[b].gun,&yedekx[b].ay,&yedekx[b].yil1 );
       
	b++;     
}
	for(i2=0;i2<(b-1);i2++)
	
	{

if(strcmp(kelime,yedekx[i2].Marka)==0 && strcmp(kelmodel,yedekx[i2].Model)==0 && strcmp(kelrenk,yedekx[i2].renk)==0)
{
	system("cls");
printf("\nLUTFEN BUYUK HARF KULLANARAK GIRINIZ \n");

printf("Aracin Markasini Giriniz: ");
scanf("%s",&yedekx[i2].Marka);
fflush(stdin);
printf("Aracin Modelini Giriniz: ");
scanf("%s",&yedekx[i2].Model);
fflush(stdin);
printf("Aracin Rengini Giriniz: ");
scanf("%s",&yedekx[i2].renk);
fflush(stdin);
printf("Aracin Yilini Giriniz: ");
scanf("%d",&yedekx[i2].yil);
fflush(stdin);
printf("Aracin Kilometresini Giriniz: ");
scanf("%d",&yedekx[i2].km);
fflush(stdin);
printf("Aracin Alis Fiyatini Giriniz: ");
scanf("%d",&yedekx[i2].fiyat);
fflush(stdin);
printf("Aracin Alim Tarihini Giriniz: ");
scanf("%d.%d.%d",&yedekx[i2].gun,&yedekx[i2].ay,&yedekx[i2].yil1);
fflush(stdin);

system("cls");
printf("MARKA\tMODEL\tRENK\tYIL\tKM\tA.FIYAT\tA.TARIHI\n");
printf("----------------------------------------------------\n");
	
printf("%s\t%s\t%s\t%d\t%d\t%d\t%d.%d.%d\n\n",yedekx[i2].Marka,yedekx[i2].Model,yedekx[i2].renk,yedekx[i2].yil,yedekx[i2].km,yedekx[i2].fiyat,yedekx[i2].gun,yedekx[i2].ay,yedekx[i2].yil1 );

FILE *dosya2;
dosya2=fopen("araclar.txt","w");
int i4;
for(i4=0;i4<(b-1);i4++){

fprintf(dosya2,"%s\t%s\t%s\t%d\t%d\t%d\t%d.%d.%d\n" ,yedekx[i4].Marka,yedekx[i4].Model,yedekx[i4].renk,yedekx[i4].yil,yedekx[i4].km,yedekx[i4].fiyat,yedekx[i4].gun,yedekx[i4].ay,yedekx[i4].yil1);

}
printf("Lutfen programi sonlandirmak icin herhangi bir tusa basin");
tusdevam=getch();	
//if(tusdevam=='m' || tusdevam=='M') pergit();
//else 
fclose(dosya2); 
exit(0);

}


}
}
void satis(){
	char tusdevam;
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programa devam etmek icin herhangi bir tusa basin");
	
	tusdevam=getch();	

	while(tusdevam=='m' || tusdevam=='M') pergit();
    char kelime[150];
    char kelmodel[150];
    char kelrenk[150];
    struct satilmayan_araclar yedeka[50];
    system("cls");
    printf("\nLUTFEN BUYUK HARF KULLANARAK GIRINIZ ");

	printf("\nSatilacak aracin markasini giriniz:");
	scanf("%s",&kelime);
	printf("Satilacak aracin modelini giriniz:");
	scanf("%s",&kelmodel);
	printf("Satilacak aracin rengini giriniz:");
	scanf("%s",&kelrenk);

	FILE *galeri;
	galeri=fopen("araclar.txt","r");
	int a=0,i;
	while(!feof(galeri)){
    	fscanf(galeri,"%s%s%s%d%d%d%d.%d.%d",&yedeka[a].Marka,&yedeka[a].Model,&yedeka[a].renk,&yedeka[a].yil,&yedeka[a].km,&yedeka[a].fiyat,&yedeka[a].gun,&yedeka[a].ay,&yedeka[a].yil1);
		a++;    
	}
	for(i=0;i<(a-1);i++){
 		if(strcmp(kelime,yedeka[i].Marka)==0 && strcmp(kelmodel,yedeka[i].Model)==0 && strcmp(kelrenk,yedeka[i].renk)==0)
		 {
            printf("Satildigi tarih:");
            scanf("%d.%d.%d",&yedeka[i].gun,&yedeka[i].ay,&yedeka[i].yil1);
			tarihkont(yedeka[i].gun,yedeka[i].ay,yedeka[i].yil1);
            fflush(stdin);
		}
	}
	fclose(galeri);
	FILE *dosyae;
	galeri=fopen("araclar.txt","w");
	int i2;
	for(i2=0;i2<=(a-2);i2++){
		if(strcmp(kelime,yedeka[i2].Marka)!=0 || strcmp(kelmodel,yedeka[i2].Model)!=0 || strcmp(kelrenk,yedeka[i2].renk)!=0){
			fprintf(galeri,"%s\t%s\t%s\t%d\t%d\t%d\t%d.%d.%d\n",yedeka[i2].Marka,yedeka[i2].Model,yedeka[i2].renk,yedeka[i2].yil,yedeka[i2].km,yedeka[i2].fiyat,yedeka[i2].gun,yedeka[i2].ay,yedeka[i2].yil1);
		}
	}
	
		dosyae=fopen("satis.txt","a");
	for(i2=0;i2<(a-1);i2++){
		if(strcmp(kelime,yedeka[i2].Marka)==0 && strcmp(kelmodel,yedeka[i2].Model)==0)
		{
				yedeka[i2].satis=yedeka[i2].fiyat*1.30;
				yedeka[i2].kar=(yedeka[i2].satis)-(yedeka[i2].fiyat);
fprintf(dosyae,"%s\t%s\t%s\t%d\t%d\t%d\t%d\t%d\t%d.%d.%d\n",yedeka[i2].Marka,yedeka[i2].Model,yedeka[i2].renk,yedeka[i2].yil,yedeka[i2].km,yedeka[i2].fiyat,yedeka[i2].satis,yedeka[i2].kar,yedeka[i2].gun,yedeka[i2].ay,yedeka[i2].yil1);
			}
	}
printf("\n\n>>>ARAC SATILMISTIR>>>");
printf("\n\nLutfen programi sonlandirmak icin herhangi bir tusa basin");
tusdevam=getch();	
//if(tusdevam=='m' || tusdevam=='M') pergit();
//else 
fclose(galeri);
fclose(dosyae);
exit(0);

}

int tarihkont(int gun,int ay,int yil1){
	//struct satilmayan_araclar yedekx[50],silinecek[50];
//	struct satilmayan_araclar yedek[50];

	if (31 < gun || gun < 1){
  		printf("Yok artik..! Yapma Boyle Seyler\n");	
 		scanf("%d.%d.%d",&gun,&ay,&yil1);
 	}

	if (12 < ay || ay < 1){
  		printf("Yok artik..! Yapma Boyle Seyler\n");	
 	scanf("%d.%d.%d",&gun,&ay,&yil1);
	 }
 	if(ay==2 && gun>=30) 
	 {	
  		printf(" Malesef Boyle Bi Tarih Icat Edilmedi :)\n");	
 	scanf("%d.%d.%d",&gun,&ay,&yil1);
	 }
 	if(ay==4  && gun>=31) {
  		printf(" Malesef Boyle Bi Tarih Icat Edilmedi :)\n");	
 	scanf("%d.%d.%d",&gun,&ay,&yil1);
	 }
 	if(ay==6  && gun>=31) {
  		printf(" Malesef Boyle Bi Tarih Icat Edilmedi :)\n");	
 	scanf("%d.%d.%d",&gun,&ay,&yil1);
	 }
 	if(ay==9  && gun>=31) {
  		printf(" Malesef Boyle Bi Tarih Icat Edilmedi :)\n");	
 	scanf("%d.%d.%d",&gun,&ay,&yil1);
	 }
 	if(ay==11  && gun>=31) {
  		printf(" Malesef Boyle Bi Tarih Icat Edilmedi :)\n");	
 	scanf("%d.%d.%d",&gun,&ay,&yil1);
	 }
	
	if (9999 < yil1 || yil1 < 1){
  		printf("Yok artik..! Yapma Boyle Seyler\n");	
 	scanf("%d.%d.%d",&gun,&ay,&yil1);
	 }
 	if(yil1 % 4 != 0 && gun>=29 && ay==2){
 		printf(" Malesef Boyle Bi Tarih Icat Edilmedi :)\n");	
 	scanf("%d.%d.%d",&gun,&ay,&yil1);
	 }
	return gun,ay,yil1;
}

void kayit_sil()
{
		char tusdevam;
	printf("Bir onceki menuye donmek icin 'M/m'ye basin veya programa devam etmek icin herhangi bir tusa basin");
	tusdevam=getch();	
	while(tusdevam=='m' || tusdevam=='M') pergit();
	
struct sil_araclar yedekx[500],sil[500];
char kelime[20];
char kelime2[20];
char kelime3[20];
system("cls");

printf("\nLUTFEN BUYUK HARF KULLANARAK GIRINIZ \n");

printf("\nSilinecek Aracin Markasini giriniz : " );
scanf("%s",&kelime);
printf("Silinecek Aracin Modelini giriniz : " );
scanf("%s",&kelime2);
printf("Silinecek Aracin Rengini giriniz : " );
scanf("%s",&kelime3);


FILE *dosya3;
dosya3=fopen("araclar.txt","r");
int k=0,s=0,kacinci;
while(!feof(dosya3))
{
fscanf(dosya3,"%s %s %s %s %s %s %d.%d.%d",&yedekx[k].Marka,&yedekx[k].Model,&yedekx[k].renk,&yedekx[k].yil,&yedekx[k].km,&yedekx[k].fiyat,&yedekx[k].gun,&yedekx[k].ay,&yedekx[k].yil1 );
k++;     
}

for(s=0;s<(k-1);s++)
{
 if(strcmp(kelime,yedekx[s].Marka)==0 && strcmp(kelime2,yedekx[s].Model)==0 && strcmp(kelime3,yedekx[s].renk)==0)
        {            kacinci=s;
                   }        
}
for(s=0;s<(kacinci);s++){
    strcpy(sil[s].Marka,yedekx[s].Marka);
    strcpy(sil[s].Model,yedekx[s].Model);
    strcpy(sil[s].renk,yedekx[s].renk);
    strcpy(sil[s].yil,yedekx[s].yil);
    strcpy(sil[s].fiyat,yedekx[s].fiyat);
    strcpy(sil[s].km,yedekx[s].km);
	//sil[s].yil=yedekx[s].yil;
    //sil[s].km=yedekx[s].km;
	//sil[s].fiyat=yedekx[s].fiyat;
    sil[s].gun=yedekx[s].gun;
    sil[s].ay=yedekx[s].ay;
	sil[s].yil1=yedekx[s].yil1;
	
}

  for(s=(kacinci+1);s<=(k-1);s++){
    strcpy(sil[s-1].Marka,yedekx[s].Marka);
    strcpy(sil[s-1].Model,yedekx[s].Model);
    strcpy(sil[s-1].renk,yedekx[s].renk);
    strcpy(sil[s-1].yil,yedekx[s].yil);
    strcpy(sil[s-1].fiyat,yedekx[s].fiyat);
    strcpy(sil[s-1].km,yedekx[s].km);
    
	//sil[s-1].yil=yedekx[s].yil;
    //sil[s-1].km=yedekx[s].km;
    //sil[s-1].fiyat=yedekx[s].fiyat;
    sil[s-1].gun=yedekx[s].gun;
    sil[s-1].ay=yedekx[s].ay;
	sil[s-1].yil1=yedekx[s].yil1;
}

fclose(dosya3);
FILE *dosya4;
dosya4=fopen("araclar.txt","w");
int i6;
for(i6=0;i6<=(k-1);i6++){
	
fprintf(dosya4,"%s\t%s\t%s\t%s\t%s\t%s\t%d.%d.%d\n" ,sil[i6].Marka,sil[i6].Model,sil[i6].renk,sil[i6].yil,sil[i6].km,sil[i6].fiyat,sil[i6].gun,sil[i6].ay,sil[i6].yil1);

}
printf("Lutfen programi sonlandirmak icin herhangi bir tusa basin");
tusdevam=getch();	
//if(tusdevam=='m' || tusdevam=='M') pergit();
//else 
fclose(dosya4);
exit(0);

}

