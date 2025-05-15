#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>
#include<time.h>


   //jumlah kamar
	int singleBed = 5;
	int doubleBed = 5;

//variabel
typedef struct
{
    int no_antre;
    char nama[100];
    int jml_kamar;
    int hari;
    int tipe_kamar;
}hotel;
int x=0,no_antri,pilih;
hotel data[100],data2[100],temp;
	 
	 // deklarasi harga kamar
	 int hargaSingleBed = 500000;
	 int hargaDoubleBed = 900000;
	 
	 //variabel anti input huruf
	 char ch;
	 int c;
	 
	 
//gotoxy
void gotoxy(int x, int y){
HANDLE hConsoleOutput;
COORD dwCursorPosition;
dwCursorPosition.X = x;
dwCursorPosition.Y = y;
hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

//panah
void arrowhere (int realposition,int arrowposition){
    if(realposition == arrowposition){
        printf("-->");
    }else{
        printf("   ");
    }
}
//LOADING
void loadingscreen(){
    int row,col,r,c,q;
    system("color F0");
    gotoxy(40,5);
    printf("     Loading...\n");
    gotoxy(40,6);
    for(r=1;r<=20;r++){
    for(q=0;q<=100000000;q++);
    printf("%c",177);}
    gotoxy(38,10);
    printf("Press any key to continue . . .");
    getch();
}

//main
int main()
{
	system("cls");
    system("color F0");
	gotoxy(30,5);  printf("+=========================================================+");
    gotoxy(30,6);  printf("|                                                         |");
    gotoxy(30,7);  printf("|            SELAMAT DATANG DI HOTEL ARJUNA	        |");
    gotoxy(30,8);  printf("|                                                         |");
    gotoxy(30,9);  printf("+---------------------------------------------------------+");

	
       
    int position = 1;
    int keyPressed = 0;
    int maxoption = 3;

	

	
    while(keyPressed != 13){
    gotoxy(32,13);arrowhere(1,position); printf("\t Login");
    gotoxy(32,14);arrowhere(2,position); printf("\t Tentang Program Hotel Arjuna");
    gotoxy(32,15);arrowhere(3,position); printf("\t Keluar");
    keyPressed = getch();
        if(keyPressed == 80 && position !=3){
            position++;
        }else if(keyPressed == 72 && position !=1){
            position--;
        }else{
            position = position;
        }
        if(keyPressed == 13 && position == 1){
        menuawal();
    	}else if(keyPressed == 13 && position == 2){
        tentanghotel();
    	}else if(keyPressed == 13 && position == 3){
        keluarprogram();
    	}
	
	
	}
}
//adminlogin
int masukadmin(){
	masuk:
    if(login()==0)
    {
        gotoxy(40,13); printf("     Username/Password Salah!!!");
        getch();
        goto masuk;
    }
    menu();
}

//menu login
int menuawal(){
	int milih;
	system("cls");
	loadingscreen();
	system("cls");
    system("color F0");
    gotoxy(30,5);  printf("+=========================================================+");
    gotoxy(30,6);  printf("|                                                         |");
    gotoxy(30,7);  printf("|            SELAMAT DATANG DI HOTEL ARJUNA	        |");
    gotoxy(30,8);  printf("|                                                         |");
    gotoxy(30,9);  printf("+---------------------------------------------------------+");
    gotoxy(32,11); printf("\tMasuk Sebagai : \n");
    
        
    int position = 1;
    int keyPressed = 0;
    int maxoption = 3;

	

	
    while(keyPressed != 13){
    gotoxy(32,13);arrowhere(1,position); printf("\t Admin");
    gotoxy(32,14);arrowhere(2,position); printf("\t Tamu Hotel");
    gotoxy(32,15);arrowhere(3,position); printf("\t Kembali");
    keyPressed = getch();
        if(keyPressed == 80 && position !=3){
            position++;
        }else if(keyPressed == 72 && position !=1){
            position--;
        }else{
            position = position;
        }
        if(keyPressed == 13 && position == 1){
        masukadmin();
    	}else if(keyPressed == 13 && position == 2){
        tamuhotel();
    	}else if(keyPressed == 13 && position == 3){
        main();
    	}
	
	
	}
}

//tentang hotel
int tentanghotel(){
	int keyPressed = 0;
	system("cls");
	loadingscreen();
	system ("cls");
	system("color F0");
	gotoxy(30,5);  printf("+=========================================================+");
    gotoxy(30,6);  printf("|                                                         |");
    gotoxy(30,7);  printf("|        	         TENTANG PROGRAM	          	|");
    gotoxy(30,8);  printf("|                                                         |");
    gotoxy(30,9);  printf("+---------------------------------------------------------+");
    gotoxy(30,10); printf("|                                                         |");
    gotoxy(30,11); printf("|                                                         |");
	gotoxy(32,11); printf("\tProgram dibuat oleh :\n");
    gotoxy(30,12); printf("|                                                         |");
	gotoxy(32,12); printf("\tDaniel Satria Mahardhika - 672022019");
    gotoxy(30,13); printf("|                                                         |");
    gotoxy(32,13); printf("\tYohanes Yogi Bagas Asmoro - 672022046");
    gotoxy(30,14); printf("|                                                         |");
    gotoxy(30,15); printf("|                                                         |");
    gotoxy(30,16); printf("|                                                         |");
    gotoxy(30,17); printf("|                                                         |");
    gotoxy(30,18); printf("+=========================================================+");
    gotoxy(32,16); printf("\tVersi Program : 0.0.1"); 
    gotoxy(32,17); printf("\tTekan ENTER untuk kembali"); 
    keyPressed = getch();
    if(keyPressed == 13){
    	return main();
	}else
		tentanghotel();
    printf("\n");
    printf("\n");
    
}

//keluar program
int keluarprogram(){
	system("cls");
	loadingscreen();
	system ("cls");
	system("color F0");
	gotoxy(30,5);  printf("+=========================================================+");
    gotoxy(30,6);  printf("|                                                         |");
    gotoxy(30,7);  printf("|        TERIMA KASIH TELAH MENGGUNAKAN MENU KAMI	        |");
    gotoxy(30,8);  printf("|                                                         |");
    gotoxy(30,9);  printf("+---------------------------------------------------------+");
    gotoxy(30,10); printf("|                                                         |");
    gotoxy(30,11); printf("|                                                         |");
	gotoxy(32,11); printf("\tProgram dibuat oleh :\n");
    gotoxy(30,12); printf("|                                                         |");
	gotoxy(32,12); printf("\tDaniel Satria Mahardhika - 672022019");
    gotoxy(30,13); printf("|                                                         |");
    gotoxy(32,13); printf("\tYohanes Yogi Bagas Asmoro - 672022046");
    gotoxy(30,14); printf("|                                                         |");
    gotoxy(30,15); printf("|                                                         |");
    gotoxy(30,16); printf("|                                                         |");
    gotoxy(30,17); printf("|                                                         |");
    gotoxy(30,18); printf("+=========================================================+");
    gotoxy(32,17); printf("\tVersi Program : 0.0.1"); 
    printf("\n");
    printf("\n");
    exit(0);
    
}

//menu tamu hotel
int tamuhotel(){
	system("cls");
	loadingscreen();
	system("cls");
    system("color F0");
    int pilihan;
    gotoxy(30,5);  printf("+=========================================================+");
    gotoxy(30,6);  printf("|                                                         |");
    gotoxy(30,7);  printf("|            SELAMAT DATANG DI HOTEL ARJUNA	        |");
    gotoxy(30,8);  printf("|                                                         |");
    gotoxy(30,9);  printf("+---------------------------------------------------------+");
    
    int position = 1;
    int keyPressed = 0;
    int maxoption = 3;
    
    while(keyPressed != 13){
	gotoxy(32,11);arrowhere(1,position); printf("\t List daftar kamar\n");
	gotoxy(32,12);arrowhere(2,position); printf("\t Tentang");
	gotoxy(32,13);arrowhere(3,position); printf("\t Kembali");
	keyPressed = getch();
        if(keyPressed == 80 && position !=3){
            position++;
        }else if(keyPressed == 72 && position !=1){
            position--;
        }else{
            position = position;
        }
        if(keyPressed == 13 && position == 1){
        daftarkamar();
    	}else if(keyPressed == 13 && position == 2){
        int keyPressed = 0;
        tentanghoteltamu:
		system ("cls");
		system("color F0");
		gotoxy(30,5);  printf("+=========================================================+");
	    gotoxy(30,6);  printf("|                                                         |");
	    gotoxy(30,7);  printf("|        	         TENTANG PROGRAM	          	|");
	    gotoxy(30,8);  printf("|                                                         |");
	    gotoxy(30,9);  printf("+---------------------------------------------------------+");
	    gotoxy(30,10); printf("|                                                         |");
	    gotoxy(30,11); printf("|                                                         |");
		gotoxy(32,11); printf("\tProgram dibuat oleh :\n");
	    gotoxy(30,12); printf("|                                                         |");
		gotoxy(32,12); printf("\tDaniel Satria Mahardhika - 672022019");
	    gotoxy(30,13); printf("|                                                         |");
	    gotoxy(32,13); printf("\tYohanes Yogi Bagas Asmoro - 672022046");
	    gotoxy(30,14); printf("|                                                         |");
	    gotoxy(30,15); printf("|                                                         |");
	    gotoxy(30,16); printf("|                                                         |");
	    gotoxy(30,17); printf("|                                                         |");
	    gotoxy(30,18); printf("+=========================================================+");
	    gotoxy(32,16); printf("\tVersi Program : 0.0.1"); 
	    gotoxy(32,17); printf("\tTekan ENTER untuk kembali"); 
	    keyPressed = getch();
	    if(keyPressed == 13){
	    	tamuhotel();
		}else
			goto tentanghoteltamu;
	    printf("\n");
	    printf("\n");
    	}else if(keyPressed == 13 && position == 3){
        menuawal();
    	}
	
	
	}
	
}
//daftar kamar
int daftarkamar(){
	system("cls");
	loadingscreen();
	system ("cls");
	system("color F0");
	gotoxy(30,5);  printf("+=========================================================+");
    gotoxy(30,6);  printf("|                                                         |");
    gotoxy(30,7);  printf("|            SELAMAT DATANG DI HOTEL ARJUNA	        |");
    gotoxy(30,8);  printf("|                                                         |");
    gotoxy(30,9);  printf("+---------------------------------------------------------+");
    
        
    int position = 1;
    int keyPressed = 0;
    int maxoption = 3;

    while(keyPressed != 13){
    gotoxy(32,13);arrowhere(1,position); printf("\t Single Bed");
    gotoxy(32,14);arrowhere(2,position); printf("\t Double Bed");
    gotoxy(32,15);arrowhere(3,position); printf("\t Kembali");
    keyPressed = getch();
        if(keyPressed == 80 && position !=3){
            position++;
        }else if(keyPressed == 72 && position !=1){
            position--;
        }else{
            position = position;
        }
        if(keyPressed == 13 && position == 1){
        	if (singleBed > 0){
        	singlebed:	
        	system ("cls");
			system("color F0");
			gotoxy(30,5);  printf("+=========================================================+");
			gotoxy(30,6);  printf("|                                                         |");
			gotoxy(30,7);  printf("|            SELAMAT DATANG DI HOTEL ARJUNA	        |");
			gotoxy(30,8);  printf("|                                                         |");
			gotoxy(30,9);  printf("+---------------------------------------------------------+");
			gotoxy(32,13); printf("Kamar Single Bed tersedia %d kamar\n", singleBed);
			gotoxy(32,14); printf("Harga : Rp. 500.000 per malam");
			gotoxy(32,17); printf("\tTekan ENTER untuk kembali"); 
		    keyPressed = getch();
		    if(keyPressed == 13){
		    	daftarkamar();
			}else
				goto singlebed;
		    printf("\n");
		    printf("\n");
			  
			 }
			else(singleBed == 0); {
			singlebedHABIS:
			system ("cls");
			system("color F0");
			gotoxy(30,5);  printf("+=========================================================+");
			gotoxy(30,6);  printf("|                                                         |");
			gotoxy(30,7);  printf("|            SELAMAT DATANG DI HOTEL ARJUNA	        |");
			gotoxy(30,8);  printf("|                                                         |");
			gotoxy(30,9);  printf("+---------------------------------------------------------+");
			gotoxy(32,13);printf("	Kamar Single Bed tidak tersedia\n");
			gotoxy(32,17); printf("\tTekan ENTER untuk kembali"); 
		    keyPressed = getch();
		    if(keyPressed == 13){
		    	daftarkamar();
			}else
				goto singlebedHABIS;
		    printf("\n");
		    printf("\n");
			 }
    	}else if(keyPressed == 13 && position == 2){
        	if (doubleBed > 0){
        	doublebed:	
        	system ("cls");
			system("color F0");
			gotoxy(30,5);  printf("+=========================================================+");
			gotoxy(30,6);  printf("|                                                         |");
			gotoxy(30,7);  printf("|            SELAMAT DATANG DI HOTEL ARJUNA	        |");
			gotoxy(30,8);  printf("|                                                         |");
			gotoxy(30,9);  printf("+---------------------------------------------------------+");
			gotoxy(32,13); printf("Kamar Double Bed tersedia %d kamar\n", doubleBed);
			gotoxy(32,14); printf("Harga : Rp. 900.000 per malam");
			gotoxy(32,17); printf("\tTekan ENTER untuk kembali"); 
		    keyPressed = getch();
		    if(keyPressed == 13){
		    	daftarkamar();
			}else
				goto doublebed;
		    printf("\n");
		    printf("\n");
			  
			 }
			else(doubleBed == 0); {
			doublebedHABIS:
			system ("cls");
			system("color F0");
			gotoxy(30,5);  printf("+=========================================================+");
			gotoxy(30,6);  printf("|                                                         |");
			gotoxy(30,7);  printf("|            SELAMAT DATANG DI HOTEL ARJUNA	        |");
			gotoxy(30,8);  printf("|                                                         |");
			gotoxy(30,9);  printf("+---------------------------------------------------------+");
			gotoxy(32,13); printf("	Kamar Double Bed tidak tersedia\n");
			gotoxy(32,17); printf("\tTekan ENTER untuk kembali"); 
		    keyPressed = getch();
		    if(keyPressed == 13){
		    	daftarkamar();
			}else
				goto doublebedHABIS;
		    printf("\n");
		    printf("\n");
			 }
    	}else if(keyPressed == 13 && position == 3){
        tamuhotel();
    	}
	
	
	}
	
}
//menu admin
int menu()
{
    menu:
    system("cls");
	loadingscreen();
    system("cls");
    system("color F0");
    int pilihan;
    int position = 1;
    int keyPressed = 0;
    int maxoption = 7;
    while(keyPressed != 13){
    gotoxy(30,5);  printf("+=========================================================+");
    gotoxy(30,6);  printf("|                                                         |");
    gotoxy(30,7);  printf("|            SELAMAT DATANG DI HOTEL ARJUNA               |");
    gotoxy(30,8);  printf("|                                                         |");
    gotoxy(30,9);  printf("+---------------------------------------------------------+");
    gotoxy(32,11); printf("Kamar Single Bed tersedia %d kamar (Tipe 1)\n", singleBed);
	gotoxy(32,12); printf("Harga : Rp. 500.000 per malam");
	gotoxy(32,14); printf("Kamar Double Bed tersedia %d kamar (Tipe 2)\n", doubleBed);
	gotoxy(32,15); printf("Harga : Rp. 900.000 per malam");
	gotoxy(32,17);arrowhere(1,position); printf("\t Buat Data Tamu Hotel");
	gotoxy(32,18);arrowhere(2,position); printf("\t Lihat Daftar Tamu Hotel");
	gotoxy(32,19);arrowhere(3,position); printf("\t Struk untuk Tamu Hotel");
	gotoxy(32,20);arrowhere(4,position); printf("\t Hapus Data Tamu Hotel");
	gotoxy(32,21);arrowhere(5,position); printf("\t Pesan dan Kesan");
	gotoxy(32,22);arrowhere(6,position); printf("\t Kembali ke menu Login");
	gotoxy(32,23);arrowhere(7,position); printf("\t Keluar Dari Program");
	keyPressed = getch();
        if(keyPressed == 80 && position !=7){
            position++;
        }else if(keyPressed == 72 && position !=1){
            position--;
        }else{
            position = position;
        }
        if(keyPressed == 13 && position == 1){
        	create();
        }else if(keyPressed == 13 && position == 2){
        	read();
    	}else if(keyPressed == 13 && position == 3){
        	struk();
    	}else if(keyPressed == 13 && position == 4){
        	del();
    	}else if(keyPressed == 13 && position == 5){
        	pesankesan();
    	}else if(keyPressed == 13 && position == 6){
        	menuawal();
        }else if(keyPressed == 13 && position == 7){
        	keluarprogram();
		}
	}
}

//readPASS
void readPass(char *temp)
{
    int key = 0, index = 0;

    do {
        key = getch(); /* Simpan karakter yang ditekan ke dalam variabel key */

        switch (key) {

                /* 0 adalah kode awal untuk tombol fungsi (function key), seperti F1, F2, ..., F12
                 * Misalkan jika tombol F1 ditekan, maka fungsi getch akan mengembalikan
                 * nilai 0 dan menyimpan sebuah kode yang menandakan tombol F1 ditekan ke buffer.
                 */
            case 0:

                /* 224 adalah kode awal untuk tombol panah, home, page up, page down, end dan lain-lain.
                 * Misalkan jika tombol panah ditekan, fungsi getch akan
                 * mengembalikan nilai 224 dan menyimpan sebuah kode
                 * yang menandakan tombol yang ditekan ke buffer.
                 */
            case 224:

                /* Fungsi getch di sini digunakan untuk membersihkan buffer */
                getch();

                break;

                /* Jika tombol back space ditekan, maka mundurkan cursor satu langkah */
            case '\b':
                if (index > 0) {
                    index = index - 1; /* Kurangi index temp sebesar 1 */
                    temp[index] = 0; /* set temp[index] menjadi kosong (NUL) */

                    printf("\b \b"); /* Mundurkan cursor satu langkah */
                }

                break;
            default:

                /* Hanya karakter printable yang dapat ditekan, seperti huruf, angka dan karakter spesial */
                if (key > 31 && key < 127) {
                    temp[index] = key; /* Simpan karakter ke dalam temp[index] */
                    index = index + 1; /* Naikkan nilai index sebesar 1 */

                    printf("*");
                }
        }

        /* 13 adalah kode ASCII untuk karakter enter.
         * Perulangan akan terus dilakukan sampai tombol enter ditekan.
         */
    } while (key != 13);

    /* Menambahkan NUL di akhir temp yang menandakan akhir dari sebuah string */
    temp[index] = '\0';
}

//input login
int login()
{
    char usrnm[6], pass[10];
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
    system("cls");
	loadingscreen();
    system("cls");
    system("color F0");
    gotoxy(40,3);  printf("+======================================+");
    gotoxy(40,5);  printf("     SELAMAT DATANG DI HOTEL ARJUNA     ");
    gotoxy(40,7);  printf("+--------------------------------------+");
    gotoxy(40,9);  printf("Masukkan Username (Admin)\t: ");
    gotoxy(40,10);  printf("Masukkan Password\t\t: ");
    gotoxy(40,12); printf("+======================================+");
    



    gotoxy(74,9); scanf("%s",&usrnm);
    gotoxy(74,10); readPass(pass);
    if(strcmp(usrnm,"admin")==0 && strcmp(pass,"admin")==0) return 1;
    else return 0;
}

//menu buat data tamu hotel
int create(){
	system("cls");
	loadingscreen();
	buatdata:
	system("cls");
    system("color F0");
    int arr;

    gotoxy(30,5);  printf("+=====================================================+");
    gotoxy(30,6);  printf("|                                                     |");
    gotoxy(30,7);  printf("|                    MENU BUAT DATA                   |");
    gotoxy(30,8);  printf("|                                                     |");
    gotoxy(30,9);  printf("|                                                     |");
    gotoxy(30,10); printf("|                                                     |");
    gotoxy(30,11); printf("+-----------------------------------------------------+");
    gotoxy(31,9);  printf("        Masukkan Jumlah Data yang akan diinput : ");
    while (scanf("%d",&arr) != 1) {
				    while (!isspace(c = getchar()));
				    ungetc(c, stdin);
				    system("cls");
				    goto buatdata;
				}
    for(int i=0;i<arr;i++)
    {
        gotoxy(30,20+(7*i)); printf("+-----------------------------------------------------+");
        gotoxy(30,13+(7*i)); printf("         Data Tamu-Hotel ke-%d                               ",i+1);
        gotoxy(30,14+(7*i)); printf("         Masukkan No-Tamu\t\t\t: "); 
        while (scanf("%d",&data[i+x].no_antre) != 1) {
				    while (!isspace(c = getchar()));
				    ungetc(c, stdin);
				    system("cls");
				    goto buatdata;
				}
        gotoxy(30,15+(7*i)); printf("         Masukkan Nama\t\t\t: ");  scanf(" %[^\n]s",&data[i+x].nama);
        for ( int a = 0; data[i+x].nama[a]; a++)
    {
        if(data[i+x].nama[a]>96)
        data[i+x].nama[a]-=32;
            else{
            continue;
            }
    }
        gotoxy(30,16+(7*i)); printf("         Masukkan Jumlah Kamar\t\t: "); 
        while (scanf(" %d",&data[i+x].jml_kamar) != 1) {
				    while (!isspace(c = getchar()));
				    ungetc(c, stdin);
				    system("cls");
				    goto buatdata;
				}
        gotoxy(30,17+(7*i)); printf("         Masukkan Jumlah Hari\t\t: "); 
        while (scanf("%d",&data[i+x].hari) != 1) {
				    while (!isspace(c = getchar()));
				    ungetc(c, stdin);
				    system("cls");
				    goto buatdata;
				}
        gotoxy(30,18+(7*i)); printf("         Masukkan Tipe Kamar (Tipe 1/2)\t: "); scanf("%d",&data[i+x].tipe_kamar);
        if(data[i+x].tipe_kamar==1){
        if (singleBed==0){
        	system("cls");
        	gotoxy(32,13); printf("	Kamar Single Bed tidak tersedia\n");
			gotoxy(32,17); printf("\tTekan keyboard untuk kembali"); 
		    getch();
		    menu();
		}
		}if(data[i+x].tipe_kamar==2){
		if(doubleBed==0){
			system("cls");
			gotoxy(32,13); printf("	Kamar Double Bed tidak tersedia\n");
			gotoxy(32,17); printf("\tTekan keyboard untuk kembali"); 
		    getch();
		    menu();
		}
		}
		if(data[i+x].tipe_kamar==1){
		if (data[i+x].jml_kamar>singleBed){
			system("cls");
			gotoxy(32,17); printf("\tJumlah input melebihi kamar tersedia!"); 
		    getch();
		    menu();
			}
		}
		if(data[i+x].tipe_kamar==2){
		if (data[i+x].jml_kamar>doubleBed){
			system("cls");
			gotoxy(32,17); printf("\tJumlah input melebihi kamar tersedia!"); 
		    getch();
		    menu();
		    }
		}
		
        if (data[i+x].tipe_kamar==1){
        	singleBed -= data[i+x].jml_kamar;
		}else if (data[i+x].tipe_kamar==2){
        	doubleBed -= data[i+x].jml_kamar;
		}else{
			system("cls");
			gotoxy(32,17); printf("\tTipe Kamar tidak tersedia!"); 
		    getch();
		    menu();
		}
    }
    gotoxy(30,20+(7*(arr-1))); printf("+=====================================================+");
    gotoxy(30,21+(7*(arr-1))); printf("Press any key to continue . . .");
    x=x+arr;
    getch();
    menu();
}

//struk
int struk(){
	system("cls");
	loadingscreen();
	cetakdatastruk:
	system("cls");
    char yn[1];
    int totalbiaya;
    time_t t;
	time(&t);
    gotoxy(10,5);   printf("+===================================================================================================+");
    gotoxy(10,6);   printf("|                                                                                                   |");
    gotoxy(10,7);   printf("|                                    CETAK STRUK DATA                                               |");
    gotoxy(10,8);   printf("|                                                                                                   |");
    gotoxy(10,9);   printf("+---------------------------------------------------------------------------------------------------+");
    gotoxy(10,10);  printf("|No-Tamu        Nama                            Jumlah Kamar             Hari            Tipe Kamar |");
    gotoxy(10,11);  printf("+---------------------------------------------------------------------------------------------------+");
    gotoxy(10,12);  printf("|                                                                                                   |");
    for(int i=0;i<x;i++)
    {

        gotoxy(10,13+i); printf("|                                                                                                   |");
        gotoxy(12,13+i); printf("%d",data[i].no_antre);
        gotoxy(26,13+i); printf("%s",data[i].nama);
        gotoxy(62,13+i); printf("%d",data[i].jml_kamar);
        gotoxy(83,13+i); printf("%d",data[i].hari);
        gotoxy(103,13+i); printf("%d",data[i].tipe_kamar);

    }
    gotoxy(10,13+x);printf("|                                                                                                   |");
    if(x==0)
    {
        gotoxy(10,12);  printf("|                                                                                                   |");
        gotoxy(10,13);  printf("|                                                                                                   |");;gotoxy(50,13);printf(" Data Tidak ada!!!");
        gotoxy(10,14);  printf("|                                                                                                   |");
        gotoxy(10,15);  printf("+---------------------------------------------------------------------------------------------------+");
    }
    else
    {

        gotoxy(10,15+x);printf("Silahkan isi Nomor Kamar Tamu Data yang ingin di cetak struk : ");
        while (scanf("%d",&no_antri) != 1) {
				    while (!isspace(c = getchar()));
				    ungetc(c, stdin);
				    system("cls");
				    goto cetakdatastruk;
				}
        for(int i=0;i<x;i++)
        {
            if(data[i].no_antre==no_antri)
            {
                gotoxy(10,14+x);printf("Lanjutkan mencetak %s? [y/n] ---> ", data[i].nama);scanf("%s",&yn);
                if(strcmp(yn,"y")== 0 ||strcmp(yn,"Y")== 0)
                {
                	
                for (int j=1;j<=1;j++){
				
				system("cls");
				loadingscreen();
				system("cls");
				gotoxy(10,5);   printf("+===================================================================================================+");
    			gotoxy(10,6);   printf("|                                                                                                   |");
    			gotoxy(10,7);   printf("|                                            CETAK STRUK                                            |");
    			gotoxy(10,8);   printf("|                                                                                                   |");
   				gotoxy(10,9);   printf("+---------------------------------------------------------------------------------------------------+");
				
          		gotoxy(12,11);printf("No-Tamu : %d",data[i].no_antre);
       			gotoxy(12,12);printf("Nama Tamu : %s",data[i].nama);
       			gotoxy(12,13);printf("Jumlah Kamar : %d",data[i].jml_kamar);
     			gotoxy(12,14);printf("Jumlah Hari : %d",data[i].hari);
        		gotoxy(12,15);printf("Tipe Kamar :  %d",data[i].tipe_kamar);
        		if (data[i].tipe_kamar==1){
        			totalbiaya=(data[i].hari*hargaSingleBed)*data[i].jml_kamar;
				}else if (data[i].tipe_kamar==2){
					totalbiaya=(data[i].hari*hargaDoubleBed)*data[i].jml_kamar;
				}
        		gotoxy(12,16);printf("Total Biaya : Rp. %d\n", totalbiaya);
        		gotoxy(12,29);printf("Current date and time : %s\n",ctime(&t));
        		}
                gotoxy(12,18);printf("Struk %s telah dicetak!\n",data[i].nama);
                }else if(strcmp(yn,"n")==0 || strcmp(yn,"N")==0)break;
                else 
                 goto cetakdatastruk;
                gotoxy(10,30+x);printf("+---------------------------------------------------------------------------------------------------+");
                
            }

        }

    }

    gotoxy(10,31+x); printf("Press Any Key to Continue . . .");
    getch();
    menu();
}

//menu hapus data
int del(){
	system("cls");
	loadingscreen();
	hapusdatatamu:
	system("cls");
    char yn[1];


    gotoxy(10,5);   printf("+===================================================================================================+");
    gotoxy(10,6);   printf("|                                                                                                   |");
    gotoxy(10,7);   printf("|                                          HAPUS DATA                                               |");
    gotoxy(10,8);   printf("|                                                                                                   |");
    gotoxy(10,9);   printf("+---------------------------------------------------------------------------------------------------+");
    gotoxy(10,10);  printf("|No-Tamu        Nama                            Jumlah Kamar             Hari            Tipe Kamar |");
    gotoxy(10,11);  printf("+---------------------------------------------------------------------------------------------------+");
    gotoxy(10,12);  printf("|                                                                                                   |");
    for(int i=0;i<x;i++)
    {

        gotoxy(10,13+i); printf("|                                                                                                   |");
        gotoxy(12,13+i); printf("%d",data[i].no_antre);
        gotoxy(26,13+i); printf("%s",data[i].nama);
        gotoxy(62,13+i); printf("%d",data[i].jml_kamar);
        gotoxy(83,13+i); printf("%d",data[i].hari);
        gotoxy(103,13+i); printf("%d",data[i].tipe_kamar);

    }
    gotoxy(10,13+x);printf("|                                                                                                   |");
    if(x==0)
    {
        gotoxy(10,12);  printf("|                                                                                                   |");
        gotoxy(10,13);  printf("|                                                                                                   |");;gotoxy(50,13);printf(" Data Tidak ada!!!");
        gotoxy(10,14);  printf("|                                                                                                   |");
        gotoxy(10,15);  printf("+---------------------------------------------------------------------------------------------------+");
    }
    else
    {

        gotoxy(10,15+x);printf("Silahkan isi Nomor Tamu Hotel yang ingin di Hapus : ");
        while (scanf("%d",&no_antri) != 1) {
				    while (!isspace(c = getchar()));
				    ungetc(c, stdin);
				    system("cls");
				    goto hapusdatatamu;
				}
        for(int i=0;i<x;i++)
        {
            if(data[i].no_antre==no_antri)
            {
                gotoxy(10,14+x);printf("Lanjutkan menghapus %s? [y/n] ---> ", data[i].nama);scanf("%s",&yn);
                if(strcmp(yn,"y")== 0 ||strcmp(yn,"Y")== 0)
                {
                    x=x-1;
                    if (data[i].tipe_kamar==1){
                    singleBed += data[i].jml_kamar;
                	}else if(data[i].tipe_kamar){
                    doubleBed += data[i].jml_kamar;
                	}
                    char tp[20];
                    strcpy(tp,data[i].nama);
                    for(int j=i;j<=x;j++)
                    {
                        data[j]=data[j+1];
                    }
                    
                    gotoxy(10,17+x);printf("Data %s telah dihapus!",tp);
                }else if(strcmp(yn,"n")==0 || strcmp(yn,"N")==0)break;
                else
                goto hapusdatatamu;
                gotoxy(10,19+x);printf("+---------------------------------------------------------------------------------------------------+");
            }

        }

    }

    gotoxy(10,20+x); printf("Press Any Key to Continue. . .");
    getch();
    menu();
}

//daftar tamu hotel
int read(){
	system("cls");
	loadingscreen();
	system("cls");

    gotoxy(10,5);   printf("+===================================================================================================+");
    gotoxy(10,6);   printf("|                                                                                                   |");
    gotoxy(10,7);   printf("|                                       DATA TAMU HOTEL                                             |");
    gotoxy(10,8);   printf("|                                                                                                   |");
    gotoxy(10,9);   printf("+---------------------------------------------------------------------------------------------------+");
    gotoxy(10,10);  printf("|No-Tamu        Nama                            Jumlah Kamar             Hari            Tipe Kamar |");
    gotoxy(10,11);  printf("+---------------------------------------------------------------------------------------------------+");
    gotoxy(10,12);  printf("|                                                                                                   |");
    for(int i=0;i<x;i++)
    {

        gotoxy(10,13+i); printf("|                                                                                                   |");
        gotoxy(12,13+i); printf("%d",data[i].no_antre);
        gotoxy(26,13+i); printf("%s",data[i].nama);
        gotoxy(62,13+i); printf("%d",data[i].jml_kamar);
        gotoxy(83,13+i); printf("%d",data[i].hari);
        gotoxy(103,13+i); printf("%d",data[i].tipe_kamar);

    }
    gotoxy(10,13+x);printf("|                                                                                                   |");
    gotoxy(10,14+x);printf("+===================================================================================================+");
    gotoxy(10,15+x);printf("Press Any Key to Continue. . .");
    getch();
    menu();
}

//pesankesan
int pesankesan(){
	system("cls");
	loadingscreen();
	system("cls");
	gotoxy(10,5);   printf("+===================================================================================================+");
    gotoxy(10,6);   printf("|                                                                                                   |");
    gotoxy(10,7);   printf("|                                       PESAN DAN KESAN                                             |");
    gotoxy(10,8);   printf("|                                                                                                   |");
    gotoxy(10,9);   printf("+---------------------------------------------------------------------------------------------------+");
    gotoxy(14,11);  printf("Terimakasih para kakak-kakak asdos telah membimbing kami selama ini");
    gotoxy(14,12);  printf("Semoga dari ilmu yang telah diberi dan kami pelajari bisa bermanfaat");
    gotoxy(14,13);  printf("di suatu hari yang akan datang.");
    gotoxy(14,14);  printf("Semangat juga buat para kakak-kakak asdos dalam menempuh kuliahnya");
    gotoxy(14,15);  printf("Semoga diberi kelancaran selalu dan cepat lulus.");
    gotoxy(14,17);  printf("Demikian ini Tugas Rancang yang telah kami buat dengan sepenuh hati, Terima kasih. . .");
    gotoxy(14,19);  printf("Daniel Satria Mahardhika - 672022019");
    gotoxy(14,20);  printf("Yohanes Yogi Bagas Asmoro - 672022046");
    gotoxy(10,23);  printf("+---------------------------------------------------------------------------------------------------+");
    
    
	getch();
	menu();
}
