

//***************************************************************
//MATRiS DETERMİNANT BULMA FONKSiYONU
void matrisDet()
{
	int satir,sutun,det=0;
	int matris[satir][sutun];

	printf("Matris satir sayisi girin: ");
	scanf("%d",&satir);

	printf("Matris sutun sayisi girin: ");
	scanf("%d",&sutun);

	if(satir!=sutun)
{
		printf("Kare matris olmadigindan dolayi determinant islemi yapilamaz!");
}
//----------------------------------------------------------------------------------->
	else
{
	//Matris boyutu 1x1 ise bu koþul saglanir.
		if(satir==1 && sutun==1)
{
			printf("\n");
			printf("Girdiginiz matrisinizin boyutu [1]x[1]dir.");
			printf("\n");

	//Kullanicidan matris degerleri aliniyor.
	for(int i=0;i<satir;i++)
	{
		for(int j=0;j<sutun;j++)
		{
			printf("\n");
			printf("[%d][%d]---> ",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}
	}
	printf("\n");
	printf("Determinant degeriniz: ");
	printf("\n");

	//Çikan determinant sonucu yazdiriliyor.
	printf("%d",matris[0][0]);
}

//----------------------------------------------------------------------------->

//	Matris boyutu 2x2 ise bu kosul saglanir.
		if(satir==2 && sutun==2)
{
    int matris[satir][sutun];

	printf("Girdiginiz matrisinizin boyutu [2]x[2]dir.");
    printf("\n");

    //Kullanicidan matris degerleri aliniyor.
    for(int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
			printf("\n");
			printf("[%d][%d]---> ",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}
	}

	printf("\n");
    printf("Girilen matris degerleri: ");
    printf("\n");
    printf("\n");

    //Alinan matris degerleri konsolda yazdiriliyor.
	for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }

	//Determinant islemini yaptiriyoruz.(2x2 boyutlu matrisler için detA = a.d-b.c)
    det = matris[0][0]*matris[1][1] - matris[1][0]*matris[0][1];
    //Sonucu yazdiriyoruz.
    printf("\n");
	printf("2x2 matrisin determinant sonucu: %d - %d =  %d", matris[0][0]*matris[1][1], matris[1][0]*matris[0][1], det);
}

//--------------------------------------------------------------------------------------------------------------------------------->

	//Matris boyutu 3x3 ise bu koþul saglanir.
		if(satir==3 && sutun==3)
{
		int matris[satir][sutun];

		printf("\n");
		printf("Girdiginiz matrisinizin boyutu [3]x[3]dir.");
		printf("\n");

	    //Kullanicidan matris degerleri aliniyor.
	for(int a=0;a<satir;a++)
	{
		for(int b=0;b<sutun;b++)
		{
			printf("\n");
			printf("[%d][%d]---> ",a+1,b+1);
			scanf("%d",&matris[a][b]);
		}
	}

	printf("\n");
	printf("Girilen matris degerleri: ");
	printf("\n");
	printf("\n");

		//Girilen matris deðerleri konsolda yazdiriliyor.
	for(int c=0;c<3;c++)
	{
		for(int d=0;d<3;d++)
		{
			printf("%d ",matris[c][d]);
		}
		printf("\n");
	}
		//3x3 matris için sarrus methodunun formülünü yaziyoruz.
		for(int i=0;i<3;i++)
		 det = det + (matris[0][i]*(matris[1][(i+1)%3]*matris[2][(i+2)%3] - matris[1][(i+2)%3]*matris[2][(i+1)%3]));

		 printf("\n");
		 printf("Sarrus methoduna gore alinan cevap: %d",det);
}

}
}

//***************************************************************
//MATRiS ÇARPIMI FONKSiYONU
void matrisCarp()
{
	int satir1,sutun1,satir2,sutun2,toplam=0;

	printf("Matris 1 satir sayisi girin: ");
	scanf("%d",&satir1);

	printf("Matris 2 satir sayisi girin: ");
	scanf("%d",&satir2);

	printf("Matris 1 sutun sayisi girin: ");
	scanf("%d",&sutun1);

	printf("Matris 2 sutun sayisi girin: ");
	scanf("%d",&sutun2);

//------------------------------------------------------->

	if(sutun1!=satir2)
	{
		printf("\n");
		printf("Carpma islemi yapilamaz!");
		//Çarpma islemi yapilabilmesi için 1.matrisin sütun sayisi ile 2.matrisin satir sayisi ayni olmali.
	}
	else
	{
	printf("\n");
	printf("Girdiginiz matrislerin boyutlari: Matris1:[%d]x[%d] | Matris2:[%d]x[%d]",satir1,sutun1,satir2,sutun2);
	printf("\n");
	printf("Yeni olusacak matrisin boyutu: [%d]x[%d]",satir1,sutun2);

	int matris1[satir1][sutun1];
	int matris2[satir2][sutun2];
	int carpim[satir1][sutun2];

	//Matris 1 islemleri:
	for(int i=0;i<satir1;i++)
	{
		for(int j=0;j<sutun1;j++)
		{
			printf("\n");
			printf("[%d][%d]---> ",i+1,j+1);
			scanf("%d",&matris1[i][j]);
		}
	}
	printf("\n");
	printf("Matris 1 degerleriniz: ");
	printf("\n");
	for(int k=0;k<satir1;k++)
	{
		for(int l=0;l<sutun1;l++)
		{
			printf("%d ",matris1[k][l]);
		}
		printf("\n");
	}
//----------------------------------------------------->

	//Matris 2 islemleri:
	for(int a=0;a<satir2;a++)
	{
		for(int b=0;b<sutun2;b++)
		{
			printf("\n");
			printf("[%d][%d]---> ",a+1,b+1);
			scanf("%d",&matris2[a][b]);
		}
	}
	printf("\n");
	printf("Matris 2 degerleriniz: ");
	printf("\n");
	for(int c=0;c<satir2;c++)
	{
		for(int d=0;d<sutun2;d++)
		{
			printf("%d ",matris2[c][d]);
		}
		printf("\n");
	}
//------------------------------------------------------->

	//Çarpma islemini yaptiriyoruz.
	for(int t=0;t<satir1;t++)
	{
		for(int r=0;r<sutun2;r++)
		{
			for(int s=0;s<satir2;s++)
			{
				toplam=toplam+matris1[t][s]*matris2[s][r];
			}
			//Toplam degiskenimizi çarpimdan olusan matrisimize swapliyoruz.
			carpim[t][r]=toplam;
			toplam=0;
		}
	}

//--------------------------------------------------------->

	printf("\n");
	printf("Cikan Sonuc Matrisi: ");
	printf("\n");
	for(int p=0;p<satir1;p++)
	{
		for(int e=0;e<sutun2;e++)
		{
			printf("%d ",carpim[p][e]);
		}
		printf("\n");
	}
	}

}

//***************************************************************
//MATRiS TOPLAMI FONKSÝYONU
void matrisTopla()
{
	int satir1,sutun1,satir2,sutun2;

	printf("Matris 1 satir sayisi girin: ");
	scanf("%d",&satir1);

	printf("Matris 2 satir sayisi girin: ");
	scanf("%d",&satir2);

	printf("Matris 1 sutun sayisi girin: ");
	scanf("%d",&sutun1);

	printf("Matris 2 sutun sayisi girin: ");
	scanf("%d",&sutun2);

//------------------------------------------------------->

	if(satir1==satir2 && sutun1==sutun2)
{
	printf("\n");
	printf("Girdiginiz matris boyutu: [%d]x[%d]",satir1,sutun1);

	int matris1[satir1][sutun1];
	int matris2[satir2][sutun2];
	int toplam[satir1][sutun2];

	//Matris 1 islemleri:
	for(int i=0;i<satir1;i++)
	{
		for(int j=0;j<sutun1;j++)
		{
			printf("\n");
			printf("[%d][%d]---> ",i+1,j+1);
			scanf("%d",&matris1[i][j]);
		}
	}
	printf("\n");
	printf("Matris 1 degerleriniz: ");
	printf("\n");
	for(int k=0;k<satir1;k++)
	{
		for(int l=0;l<sutun1;l++)
		{

			printf("%d ",matris1[k][l]);
		}
		printf("\n");
	}

//-------------------------------------------------------->

	//Matris 2 iþlemleri:
	for(int a=0;a<satir2;a++)
	{
		for(int b=0;b<sutun2;b++)
		{
			printf("\n");
			printf("[%d][%d]---> ",a+1,b+1);
			scanf("%d",&matris2[a][b]);
		}
	}
	printf("\n");
	printf("Matris 2 degerleriniz: ");
	printf("\n");
	for(int c=0;c<satir1;c++)
	{
		for(int d=0;d<sutun2;d++)
		{

			printf("%d ",matris2[c][d]);
		}
		printf("\n");
	}

//-------------------------------------------------------->

	//Toplama islemini yaptiriyoruz:
	printf("Matris1 ve Matris 2 degerlerinin toplami: ");
	printf("\n");
	for(int d=0;d<satir1;d++)
	{
		for(int e=0;e<sutun1;e++)
		{
			toplam[d][e]=matris1[d][e]+matris2[d][e];
			printf("%d ",toplam[d][e]);
		}
		printf("\n");
	}
}
else
{
	printf("\n");
	printf("Girdiginiz satir ve sutun boyutlari ayni olmadigindan toplama islemi yapilamaz!");
}
}

//***************************************************************
//MATRiS TERSiNi ALMA FONKSiYONU

void matrisTers()
{
	int satir,sutun,det=0;
	int matris[satir][sutun];
	int esl[satir][sutun];
	int ters[satir][sutun];

	printf("Matris satir sayisi girin: ");
	scanf("%d",&satir);

	printf("Matris sutun sayisi girin: ");
	scanf("%d",&sutun);

	if(satir!=sutun)
{
		printf("Kare matris olmadýgýndan dolayi determinant islemi yapilamaz!");
}
	else
{


//------------------------------------------------------------------>

	//1x1 matrisler için ters alma
	if(satir==1 && sutun==1)
{
	printf("\n");
	printf("Girdiginiz matrisinizin boyutu [1]x[1]dir.");
	printf("\n");

	//Kullanicidan matris degerleri aliniyor.
	for(int i=0;i<satir;i++)
	{
		for(int j=0;j<sutun;j++)
		{
			printf("\n");
			printf("[%d][%d]---> ",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}
	}
	printf("\n");
	printf("Matrisinizin tersi : ");
	printf("\n");

	//Çikan matris tersi sonucu yazdiriliyor.
	printf("%d",matris[0][0]);

}

//-----------------------------------------------------------------

	//2x2 matrisler için ters alma
	if(satir==2 && sutun==2)
{
	int matris[2][2];
	int esl[2][2];
	int ters[2][2];

	printf("Girdiginiz matrisinizin boyutu [2]x[2]dir.");
    printf("\n");
      //Kullanicidan matris degerleri aliniyor.
    for(int i=0;i<2;i++)
    {
    	for(int j=0;j<2;j++)
    	{
			printf("\n");
			printf("[%d][%d]---> ",i+1,j+1);
			scanf("%d",&matris[i][j]);
		}
	}

	printf("\n");
    printf("Girilen matris degerleri: ");
    printf("\n");
    printf("\n");

    //Alinan matris degerleri konsolda yazdiriliyor.
	for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }

	det=(matris[0][0]*matris[1][1])-(matris[0][1]*matris[1][0]);


	//Matrisin eslenigini swapliyoruz.
	esl[0][0]=matris[1][1];
	esl[1][1]=matris[0][0];
	esl[0][1]=matris[0][1];
	esl[1][0]=matris[1][0];

	printf("Matrisimizin tersi: ");
	printf("\n");

	for(int a=0;a<2;a++)
	{
		for(int b=0;b<2;b++)
		{
			ters[a][b]=(esl[a][b])/(float)det;
			printf("%f ",ters[a][b]);
		}
		printf("\n");
	}
}
}
}

