#include <stdio.h>
#include <stdlib.h>




void tampilan_awal( )
{
    char pembuat [2][50]={"[1] Nama : Kesya Tita Vanbora","[2] Nim  : 202302011003\t"}; //array pembuat
    system("color F0");
    printf("\n\t\t\t\t+==================================================+\n");
    printf("\t\t\t\t|                  Selamat Datang                  |\n");
    printf("\t\t\t\t|         PROGRAM PEMESANAN SNACK AND DRINK        |\n");
    printf("\t\t\t\t+==================================================+\n");
    printf("\t\t\t\t|                    DIBUAT OLEH :                 |\n");
    printf("\t\t\t\t|                                                  |\n");
    for (int i=0; i<2; i++){
        printf("\t\t\t\t|\t%s\t\t   |\n", pembuat[i]);
    }
    printf("\t\t\t\t+==================================================+\n");
    printf("\t\t\t\t press any key to continue.....\n");

    getch ( );
    system("cls");
}

void menu_coffe( )
{
    int pilih, jumlah, size=0, snack=0, pilih1, jmlh, harga, total, total_bayar, bayar, pilih2, pajak,
    besar_pajak, pilih3,ulang, ulang1, ulang2, ulang3, ulang4, pembayaran, kembali, pilih_ulang, pilih_ulang1,
    pilih_ulang2, pilih_ulang3, pilih_ulang4, pilih_uk, pilih_uk1, pilih_uk2, pilih_uk3, pilih_uk4;
    char nama[50];

    start:
    {


    printf("\t\t\t\t=========Selamat Datang Di Kesya's Coffee========\n\n");

    printf("\t\t\t\t\t+-------------------------------+\n");
    printf("\t\t\t\t\t|             -MENU-            |\n");
    printf("\t\t\t\t\t+-------------------------------+\n");
    printf("\t\t\t\t\t| 1. Espresso       (Rp.35000)\t|\n");
    printf("\t\t\t\t\t| 2. Cappuccino     (Rp.30000)\t|\n");
    printf("\t\t\t\t\t| 3. Vanilla Latte  (Rp.25000)\t|\n");
    printf("\t\t\t\t\t| 4. Macchiato      (Rp.35000)\t|\n");
    printf("\t\t\t\t\t| 5. Americano      (Rp.28000)\t|\n");
    printf("\t\t\t\t\t+-------------------------------+\n\n");

    printf("\n\t\t\t\t\tNama Pelanggan\t: ");
    scanf (" %[^\n]%*c",&nama);

    printf("\t\t\t\t\tPilih Menu\t: ");
    scanf ("%d", &pilih);

    switch(pilih)
    {

        case (1): printf("\n\t\t\t\t\tMenu Yang Anda Pilih : Espresso\n");
                  printf("\t\t\t\t\tjumlah Pesanan : ");
                  scanf ("%d", &jumlah);

                  pilih_uk:
                  {
                  printf("\n\t\t\t\t\t+-----------------------+\n");
                  printf("\t\t\t\t\t|      Ukuran Gelas     |\n");
                  printf("\t\t\t\t\t+-----------------------+\n");
                  printf("\t\t\t\t\t| 1. Small  (Rp.0)\t|\n");
                  printf("\t\t\t\t\t| 2. Medium (Rp.4000)\t|\n");
                  printf("\t\t\t\t\t| 3. Large  (Rp.8000)\t|\n");
                  printf("\t\t\t\t\t+-----------------------+\n");
                  printf("\t\t\t\t\tSilahkan Pilih Ukuran : ");
                  scanf (" %d", &size);

                      if (size == 1){
                        size =0*jumlah;
                      }
                      else if (size == 2){
                        size =4000*jumlah;
                      }
                      else if (size == 3){
                        size =8000*jumlah;
                      }
                      else{
                        printf("\t\t\t\t\tMaaf Masukan Pilihan dengan Benar....\n");
                        goto pilih_uk;
                      }
                  }
                  system("cls");
                  printf("\n\t\t\t\t\t+---------------+\n");
                  printf("\t\t\t\t\t| 1. YA\t\t|\n");
                  printf("\t\t\t\t\t| 2. TIDAK\t|\n");
                  printf("\t\t\t\t\t+---------------+\n");

                  printf("\t\t\t\t\tApakah Ingin Beli Snack (YA/TIDAK) : ");
                  scanf ("%d", &pilih1);

                  if (pilih1 == 1){

                    ulang :
                    {
                    printf("\n\t\t\t\t\t+===============================+\n");
                    printf("\t\t\t\t\t|SNACK\t\t\t\t|\n");
                    printf("\t\t\t\t\t+-------------------------------+\n");
                    printf("\t\t\t\t\t| 1. Garlic Bread  (Rp. 30000)\t|\n");
                    printf("\t\t\t\t\t| 2. Pancake       (Rp. 20000)\t|\n");
                    printf("\t\t\t\t\t| 3. Croissant     (Rp. 25000)\t|\n");
                    printf("\t\t\t\t\t| 4. Sandwich      (Rp. 20000)\t|\n");
                    printf("\t\t\t\t\t| 5. Cream Puff    (Rp. 25000)\t|\n");
                    printf("\t\t\t\t\t+===============================+\n");
                    printf("\t\t\t\t\tPilih : ");
                    scanf ("%d", &pilih1);
                    printf("\t\t\t\t\tJumlah Pesanan : ");
                    scanf ("%d", &jmlh);

                    if (pilih1 == 1){
                        snack = 30000*jmlh;
                    }
                    else if (pilih1 == 2){
                        snack = 20000*jmlh;
                    }
                    else if (pilih1 == 3){
                        snack = 25000*jmlh;
                    }
                    else if (pilih1 == 4){
                        snack = 20000*jmlh;
                    }
                    else if (pilih1 == 5){
                        snack = 25000*jmlh;
                    }
                    else{
                        printf("\t\t\t\t\tMaaf Masukan Pilihan dengan Benar...\n\n");
                        goto ulang;
                        }
                    }
                }

                harga = 35000;
                total = harga*jumlah+size+snack;

                pilih_ulang:
                {
                printf("\n\t\t\t\t\t=========================\n");
                printf("\t\t\t\t\t|   Metode Pembayaran   |\n");
                printf("\t\t\t\t\t=========================\n");
                printf("\t\t\t\t\t| 1. Debit\t\t|\n");
                printf("\t\t\t\t\t| 2. Cash\t\t|\n");
                printf("\t\t\t\t\t| 3. Qris\t\t|\n");
                printf("\t\t\t\t\t=========================\n");

                printf("\t\t\t\t\tPilih Metode Pembayaran : ");
                scanf ("%d", &pilih2);
                system("cls");

                if (pilih2 == 1){

                    pajak = 10;
                    besar_pajak = 0.1 * total;
                    total_bayar = total + besar_pajak;

                printf("\n\t\t\t\t===================SLIP PEMBAYARAN================\n");
                printf("\t\t\t\tNama Pelanggan\t: %s\n", nama);
                printf("\t\t\t\tJenis Pembayaran: Debit\n");
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tHarga Total Pesanan\t\t: Rp. %d\n", total);
                printf("\t\t\t\tPajak Pertambahan Nilai\t\t: %d%%\n", pajak);
                printf("\t\t\t\tBesaran Nilai Pajak\t\t: Rp. %d\n", besar_pajak);
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tTotal Pembayaran Adalah\t\t: Rp %d\n", total_bayar);
                printf("\t\t\t\t==================================================\n");

                }
                else if (pilih2 == 2){

                    pajak = 10;
                    besar_pajak = 0.1 * total;
                    total_bayar = total + besar_pajak;

                printf("\n\t\t\t\t===================SLIP PEMBAYARAN================\n");
                printf("\t\t\t\tNama Pelanggan\t: %s\n", nama);
                printf("\t\t\t\tJenis Pembayaran: Cash\n");
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tHarga Total Pesanan\t\t: Rp. %d\n", total);
                printf("\t\t\t\tPajak Pertambahan Nilai\t\t: %d%%\n", pajak);
                printf("\t\t\t\tBesaran Nilai Pajak\t\t: Rp. %d\n", besar_pajak);
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tTotal Pembayaran Adalah\t\t: Rp %d\n", total_bayar);
                printf("\t\t\t\t==================================================\n");

                }
                else if (pilih2 == 3){

                    pajak = 10;
                    besar_pajak = 0.1 * total;
                    total_bayar = total + besar_pajak;

                printf("\n\t\t\t\t==================SLIP PEMBAYARAN=================\n");
                printf("\t\t\t\tNama Pelanggan\t: %s\n", nama);
                printf("\t\t\t\tJenis Pembayaran: Qris\n");
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tHarga Total Pesanan\t\t: Rp. %d\n", total);
                printf("\t\t\t\tPajak Pertambahan Nilai\t\t: %d%%\n", pajak);
                printf("\t\t\t\tBesaran Nilai Pajak\t\t: Rp. %d\n", besar_pajak);
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tTotal Pembayaran Adalah\t\t: Rp %d\n", total_bayar);
                printf("\t\t\t\t==================================================\n");

                }
                else {
                    printf("\n\t\t\t\t\tMaaf Masukan Pilihan dengan Benar....");
                    goto pilih_ulang;
                }
            }
            break;


        case (2): printf("\n\t\t\t\t\tMenu Yang Anda Pilih : Cappucino\n");
                  printf("\t\t\t\t\tjumlah Pesanan : ");
                  scanf ("%d", &jumlah);

                  pilih_uk1:
                  {
                  printf("\n\t\t\t\t\t+-----------------------+\n");
                  printf("\t\t\t\t\t|      Ukuran Gelas     |\n");
                  printf("\t\t\t\t\t+-----------------------+\n");
                  printf("\t\t\t\t\t| 1. Small  (Rp.0)\t|\n");
                  printf("\t\t\t\t\t| 2. Medium (Rp.4000)\t|\n");
                  printf("\t\t\t\t\t| 3. Large  (Rp.8000)\t|\n");
                  printf("\t\t\t\t\t+-----------------------+\n");
                  printf("\t\t\t\t\tSilahkan Pilih Ukuran : ");
                  scanf ("%d", &size);

                      if (size == 1){
                        size =0;
                      }
                      else if (size == 2){
                        size =4000*jumlah;
                      }
                      else if (size == 3){
                        size =8000*jumlah;
                      }
                      else{
                        printf("\t\t\t\t\tMaaf Masukan Pilihan dengan Benar....\n");
                        goto pilih_uk1;
                      }
                  }
                  system("cls");
                  printf("\n\t\t\t\t\t+---------------+\n");
                  printf("\t\t\t\t\t| 1. YA\t\t|\n");
                  printf("\t\t\t\t\t| 2. TIDAK\t|\n");
                  printf("\t\t\t\t\t+---------------+\n");

                  printf("\t\t\t\t\tApakah Ingin Beli Snack (YA/TIDAK) : ");
                  scanf ("%d", &pilih1);

                  if (pilih1 == 1){

                    ulang1 :
                    {
                    printf("\n\t\t\t\t\t+===============================+\n");
                    printf("\t\t\t\t\t|SNACK\t\t\t\t|\n");
                    printf("\t\t\t\t\t+-------------------------------+\n");
                    printf("\t\t\t\t\t| 1. Garlic Bread  (Rp. 30000)\t|\n");
                    printf("\t\t\t\t\t| 2. Pancake       (Rp. 20000)\t|\n");
                    printf("\t\t\t\t\t| 3. Croissant     (Rp. 25000)\t|\n");
                    printf("\t\t\t\t\t| 4. Sandwich      (Rp. 20000)\t|\n");
                    printf("\t\t\t\t\t| 5. Cream Puff    (Rp. 25000)\t|\n");
                    printf("\t\t\t\t\t+===============================+\n");
                    printf("\t\t\t\t\tPilih : ");
                    scanf ("%d", &pilih1);
                    printf("\t\t\t\t\tJumlah Pesanan : ");
                    scanf ("%d", &jmlh);

                    if (pilih1 == 1){
                        snack = 30000*jmlh;
                    }
                    else if (pilih1 == 2){
                        snack = 20000*jmlh;
                    }
                    else if (pilih1 == 3){
                        snack = 25000*jmlh;
                    }
                    else if (pilih1 == 4){
                        snack = 20000*jmlh;
                    }
                    else if (pilih1 == 5){
                        snack = 25000*jmlh;
                    }
                    else{
                        printf("\t\t\t\t\tMaaf Masukan Pilihan dengan Benar....\n\n");
                        goto ulang1;

                        }
                    }
                }

                harga = 30000;
                total = harga*jumlah+size+snack;

                pilih_ulang1:
                {
                printf("\n\t\t\t\t\t=========================\n");
                printf("\t\t\t\t\t|   Metode Pembayaran   |\n");
                printf("\t\t\t\t\t=========================\n");
                printf("\t\t\t\t\t| 1. Debit\t\t|\n");
                printf("\t\t\t\t\t| 2. Cash\t\t|\n");
                printf("\t\t\t\t\t| 3. Qris\t\t|\n");
                printf("\t\t\t\t\t=========================\n");

                printf("\t\t\t\t\tPilih Metode Pembayaran : ");
                scanf ("%d", &pilih2);
                system("cls");

                if (pilih2 == 1){

                    pajak = 10;
                    besar_pajak = 0.1 * total;
                    total_bayar = total + besar_pajak;

                printf("\n\t\t\t\t===================SLIP PEMBAYARAN================\n");
                printf("\t\t\t\tNama Pelanggan\t: %s\n", nama);
                printf("\t\t\t\tJenis Pembayaran: Debit\n");
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tHarga Total Pesanan\t\t: Rp. %d\n", total);
                printf("\t\t\t\tPajak Pertambahan Nilai\t\t: %d%%\n", pajak);
                printf("\t\t\t\tBesaran Nilai Pajak\t\t: Rp. %d\n", besar_pajak);
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tTotal Pembayaran Adalah\t\t: Rp %d\n", total_bayar);
                printf("\t\t\t\t==================================================\n");

                }
                else if (pilih2 == 2){

                    pajak = 10;
                    besar_pajak = 0.1 * total;
                    total_bayar = total + besar_pajak;

                printf("\n\t\t\t\t===================SLIP PEMBAYARAN================\n");
                printf("\t\t\t\tNama Pelanggan\t: %s\n", nama);
                printf("\t\t\t\tJenis Pembayaran: Cash\n");
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tHarga Total Pesanan\t\t: Rp. %d\n", total);
                printf("\t\t\t\tPajak Pertambahan Nilai\t\t: %d%%\n", pajak);
                printf("\t\t\t\tBesaran Nilai Pajak\t\t: Rp. %d\n", besar_pajak);
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tTotal Pembayaran Adalah\t\t: Rp %d\n", total_bayar);
                printf("\t\t\t\t==================================================\n");

                }
                else if (pilih2 == 3){

                    pajak = 10;
                    besar_pajak = 0.1 * total;
                    total_bayar = total + besar_pajak;

                printf("\n\t\t\t\t==================SLIP PEMBAYARAN=================\n");
                printf("\t\t\t\tNama Pelanggan\t: %s\n", nama);
                printf("\t\t\t\tJenis Pembayaran: Qris\n");
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tHarga Total Pesanan\t\t: Rp. %d\n", total);
                printf("\t\t\t\tPajak Pertambahan Nilai\t\t: %d%%\n", pajak);
                printf("\t\t\t\tBesaran Nilai Pajak\t\t: Rp. %d\n", besar_pajak);
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tTotal Pembayaran Adalah\t\t: Rp %d\n", total_bayar);
                printf("\t\t\t\t==================================================\n");

                }
                else {
                    printf("\n\t\t\t\t\tMaaf Masukan Pilihan dengan Benar....");
                    goto pilih_ulang1;
                }
            }
            break;


        case (3): printf("\n\t\t\t\t\tMenu Yang Anda Pilih : Vanilla Latte\n");
                  printf("\t\t\t\t\tjumlah Pesanan : ");
                  scanf ("%d", &jumlah);

                  pilih_uk2:
                  {
                  printf("\n\t\t\t\t\t+-----------------------+\n");
                  printf("\t\t\t\t\t|      Ukuran Gelas     |\n");
                  printf("\t\t\t\t\t+-----------------------+\n");
                  printf("\t\t\t\t\t| 1. Small  (Rp.0)\t|\n");
                  printf("\t\t\t\t\t| 2. Medium (Rp.4000)\t|\n");
                  printf("\t\t\t\t\t| 3. Large  (Rp.8000)\t|\n");
                  printf("\t\t\t\t\t+-----------------------+\n");
                  printf("\t\t\t\t\tSilahkan Pilih Ukuran : ");
                  scanf ("%d", &size);

                      if (size == 1){
                        size =0;
                      }
                      else if (size == 2){
                        size =4000*jumlah;
                      }
                      else if (size == 3){
                        size =8000*jumlah;
                      }
                      else{
                        printf("\t\t\t\t\tMaaf Masukan Pilihan dengan Benar....\n");
                        goto pilih_uk;
                      }
                  }
                  system("cls");
                  printf("\n\t\t\t\t\t+---------------+\n");
                  printf("\t\t\t\t\t| 1. YA\t\t|\n");
                  printf("\t\t\t\t\t| 2. TIDAK\t|\n");
                  printf("\t\t\t\t\t+---------------+\n");

                  printf("\t\t\t\t\tApakah Ingin Beli Snack (YA/TIDAK) : ");
                  scanf ("%d", &pilih1);

                  if (pilih1 == 1){

                    ulang2 :
                    {
                    printf("\n\t\t\t\t\t+===============================+\n");
                    printf("\t\t\t\t\t|SNACK\t\t\t\t|\n");
                    printf("\t\t\t\t\t+-------------------------------+\n");
                    printf("\t\t\t\t\t| 1. Garlic Bread  (Rp. 30000)\t|\n");
                    printf("\t\t\t\t\t| 2. Pancake       (Rp. 20000)\t|\n");
                    printf("\t\t\t\t\t| 3. Croissant     (Rp. 25000)\t|\n");
                    printf("\t\t\t\t\t| 4. Sandwich      (Rp. 20000)\t|\n");
                    printf("\t\t\t\t\t| 5. Cream Puff    (Rp. 25000)\t|\n");
                    printf("\t\t\t\t\t+===============================+\n");
                    printf("\t\t\t\t\tPilih : ");
                    scanf ("%d", &pilih1);
                    printf("\t\t\t\t\tJumlah Pesanan : ");
                    scanf ("%d", &jmlh);

                    if (pilih1 == 1){
                        snack = 30000*jmlh;
                    }
                    else if (pilih1 == 2){
                        snack = 20000*jmlh;
                    }
                    else if (pilih1 == 3){
                        snack = 25000*jmlh;
                    }
                    else if (pilih1 == 4){
                        snack = 20000*jmlh;
                    }
                    else if (pilih1 == 5){
                        snack = 25000*jmlh;
                    }
                    else{
                        printf("\t\t\t\t\tMaaf Masukan Pilihan dengan benar....\n\n");
                        goto ulang2;

                        }
                    }
                }

                harga = 25000;
                total = harga*jumlah+size+snack;

                pilih_ulang2:
                {
                printf("\n\t\t\t\t\t=========================\n");
                printf("\t\t\t\t\t|   Metode Pembayaran   |\n");
                printf("\t\t\t\t\t=========================\n");
                printf(
                       "\t\t\t\t\t| 1. Debit\t\t|\n");
                printf("\t\t\t\t\t| 2. Cash\t\t|\n");
                printf("\t\t\t\t\t| 3. Qris\t\t|\n");
                printf("\t\t\t\t\t=========================\n");

                printf("\t\t\t\t\tPilih Metode Pembayaran : ");
                scanf ("%d", &pilih2);
                system("cls");

                if (pilih2 == 1){

                    pajak = 10;
                    besar_pajak = 0.1 * total;
                    total_bayar = total + besar_pajak;

                printf("\n\t\t\t\t===================SLIP PEMBAYARAN================\n");
                printf("\t\t\t\tNama Pelanggan\t: %s\n", nama);
                printf("\t\t\t\tJenis Pembayaran: Debit\n");
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tHarga Total Pesanan\t\t: Rp. %d\n", total);
                printf("\t\t\t\tPajak Pertambahan Nilai\t\t: %d%%\n", pajak);
                printf("\t\t\t\tBesaran Nilai Pajak\t\t: Rp. %d\n", besar_pajak);
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tTotal Pembayaran Adalah\t\t: Rp %d\n", total_bayar);
                printf("\t\t\t\t==================================================\n");

                }
                else if (pilih2 == 2){

                    pajak = 10;
                    besar_pajak = 0.1 * total;
                    total_bayar = total + besar_pajak;

                printf("\n\t\t\t\t===================SLIP PEMBAYARAN================\n");
                printf("\t\t\t\tNama Pelanggan\t: %s\n", nama);
                printf("\t\t\t\tJenis Pembayaran: Cash\n");
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tHarga Total Pesanan\t\t: Rp. %d\n", total);
                printf("\t\t\t\tPajak Pertambahan Nilai\t\t: %d%%\n", pajak);
                printf("\t\t\t\tBesaran Nilai Pajak\t\t: Rp. %d\n", besar_pajak);
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tTotal Pembayaran Adalah\t\t: Rp %d\n", total_bayar);
                printf("\t\t\t\t==================================================\n");

                }
                else if (pilih2 == 3){

                    pajak = 10;
                    besar_pajak = 0.1 * total;
                    total_bayar = total + besar_pajak;

                printf("\n\t\t\t\t==================SLIP PEMBAYARAN=================\n");
                printf("\t\t\t\tNama Pelanggan\t: %s\n", nama);
                printf("\t\t\t\tJenis Pembayaran: Qris\n");
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tHarga Total Pesanan\t\t: Rp. %d\n", total);
                printf("\t\t\t\tPajak Pertambahan Nilai\t\t: %d%%\n", pajak);
                printf("\t\t\t\tBesaran Nilai Pajak\t\t: Rp. %d\n", besar_pajak);
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tTotal Pembayaran Adalah\t\t: Rp %d\n", total_bayar);
                printf("\t\t\t\t==================================================\n");

                }
                else {
                    printf("\n\t\t\t\t\tMaaf Masukan Pilihan dengan Benar...");
                    goto pilih_ulang2;
                }
            }
            break;


        case (4): printf("\n\t\t\t\t\tMenu Yang Anda Pilih : Macchiato\n");
                  printf("\t\t\t\t\tjumlah Pesanan : ");
                  scanf ("%d", &jumlah);

                  pilih_uk3:
                  {
                  printf("\n\t\t\t\t\t+-----------------------+\n");
                  printf("\t\t\t\t\t|      Ukuran Gelas     |\n");
                  printf("\t\t\t\t\t+-----------------------+\n");
                  printf("\t\t\t\t\t| 1. Small  (Rp.0)\t|\n");
                  printf("\t\t\t\t\t| 2. Medium (Rp.4000)\t|\n");
                  printf("\t\t\t\t\t| 3. Large  (Rp.8000)\t|\n");
                  printf("\t\t\t\t\t+-----------------------+\n");
                  printf("\t\t\t\t\tSilahkan Pilih Ukuran : ");
                  scanf ("%d", &size);

                      if (size == 1){
                        size =0;
                      }
                      else if (size == 2){
                        size =4000*jumlah;
                      }
                      else if (size == 3){
                        size =8000*jumlah;
                      }
                      else{
                        printf("\t\t\t\t\tMaaf Masukan Pilihan dengan Benar....\n");
                        goto pilih_uk3;
                      }
                  }
                  system("cls");
                  printf("\n\t\t\t\t\t+---------------+\n");
                  printf("\t\t\t\t\t| 1. YA\t\t|\n");
                  printf("\t\t\t\t\t| 2. TIDAK\t|\n");
                  printf("\t\t\t\t\t+---------------+\n");

                  printf("\t\t\t\t\tApakah Ingin Beli Snack (YA/TIDAK) : ");
                  scanf ("%d", &pilih1);

                  if (pilih1 == 1){

                    ulang3 :
                    {
                    printf("\n\t\t\t\t\t+===============================+\n");
                    printf("\t\t\t\t\t|SNACK\t\t\t\t|\n");
                    printf("\t\t\t\t\t+-------------------------------+\n");
                    printf("\t\t\t\t\t| 1. Garlic Bread  (Rp. 30000)\t|\n");
                    printf("\t\t\t\t\t| 2. Pancake       (Rp. 20000)\t|\n");
                    printf("\t\t\t\t\t| 3. Croissant     (Rp. 25000)\t|\n");
                    printf("\t\t\t\t\t| 4. Sandwich      (Rp. 20000)\t|\n");
                    printf("\t\t\t\t\t| 5. Cream Puff    (Rp. 25000)\t|\n");
                    printf("\t\t\t\t\t+===============================+\n");
                    printf("\t\t\t\t\tPilih : ");
                    scanf ("%d", &pilih1);
                    printf("\t\t\t\t\tJumlah Pesanan : ");
                    scanf ("%d", &jmlh);

                    if (pilih1 == 1){
                        snack = 30000*jmlh;
                    }
                    else if (pilih1 == 2){
                        snack = 20000*jmlh;
                    }
                    else if (pilih1 == 3){
                        snack = 25000*jmlh;
                    }
                    else if (pilih1 == 4){
                        snack = 20000*jmlh;
                    }
                    else if (pilih1 == 5){
                        snack = 25000*jmlh;
                    }
                    else{
                        printf("\t\t\t\t\tMaaf Masukan Pilihan dengan Benar....\n\n");
                        goto ulang3;

                        }
                    }
                }

                harga = 35000;
                total = harga*jumlah+size+snack;

                pilih_ulang3:
                {
                printf("\n\t\t\t\t\t=========================\n");
                printf("\t\t\t\t\t|   Metode Pembayaran   |\n");
                printf("\t\t\t\t\t=========================\n");
                printf("\t\t\t\t\t| 1. Debit\t\t|\n");
                printf("\t\t\t\t\t| 2. Cash\t\t|\n");
                printf("\t\t\t\t\t| 3. Qris\t\t|\n");
                printf("\t\t\t\t\t=========================\n");

                printf("\t\t\t\t\tPilih Metode Pembayaran : ");
                scanf ("%d", &pilih2);
                system("cls");

                if (pilih2 == 1){

                    pajak = 10;
                    besar_pajak = 0.1 * total;
                    total_bayar = total + besar_pajak;

                printf("\n\t\t\t\t===================SLIP PEMBAYARAN================\n");
                printf("\t\t\t\tNama Pelanggan\t: %s\n", nama);
                printf("\t\t\t\tJenis Pembayaran: Debit\n");
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tHarga Total Pesanan\t\t: Rp. %d\n", total);
                printf("\t\t\t\tPajak Pertambahan Nilai\t\t: %d%%\n", pajak);
                printf("\t\t\t\tBesaran Nilai Pajak\t\t: Rp. %d\n", besar_pajak);
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tTotal Pembayaran Adalah\t\t: Rp %d\n", total_bayar);
                printf("\t\t\t\t==================================================\n");

                }
                else if (pilih2 == 2){

                    pajak = 10;
                    besar_pajak = 0.1 * total;
                    total_bayar = total + besar_pajak;

                printf("\n\t\t\t\t===================SLIP PEMBAYARAN================\n");
                printf("\t\t\t\tNama Pelanggan\t: %s\n", nama);
                printf("\t\t\t\tJenis Pembayaran: Cash\n");
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tHarga Total Pesanan\t\t: Rp. %d\n", total);
                printf("\t\t\t\tPajak Pertambahan Nilai\t\t: %d%%\n", pajak);
                printf("\t\t\t\tBesaran Nilai Pajak\t\t: Rp. %d\n", besar_pajak);
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tTotal Pembayaran Adalah\t\t: Rp %d\n", total_bayar);
                printf("\t\t\t\t==================================================\n");

                }
                else if (pilih2 == 3){

                    pajak = 10;
                    besar_pajak = 0.1 * total;
                    total_bayar = total + besar_pajak;

                printf("\n\t\t\t\t==================SLIP PEMBAYARAN=================\n");
                printf("\t\t\t\tNama Pelanggan\t: %s\n", nama);
                printf("\t\t\t\tJenis Pembayaran: Qris\n");
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tHarga Total Pesanan\t\t: Rp. %d\n", total);
                printf("\t\t\t\tPajak Pertambahan Nilai\t\t: %d%%\n", pajak);
                printf("\t\t\t\tBesaran Nilai Pajak\t\t: Rp. %d\n", besar_pajak);
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tTotal Pembayaran Adalah\t\t: Rp %d\n", total_bayar);
                printf("\t\t\t\t==================================================\n");

                }
                else {
                    printf("\n\t\t\t\t\tMaaf Masukan Pilihan dengan Benar....");
                    goto pilih_ulang3;
                }
            }
            break;


        case (5): printf("\n\t\t\t\t\tMenu Yang Anda Pilih : Americano\n");
                  printf("\t\t\t\t\tjumlah Pesanan : ");
                  scanf ("%d", &jumlah);

                  pilih_uk4:
                  {
                  printf("\n\t\t\t\t\t+-----------------------+\n");
                  printf("\t\t\t\t\t|      Ukuran Gelas     |\n");
                  printf("\t\t\t\t\t+-----------------------+\n");
                  printf("\t\t\t\t\t| 1. Small  (Rp.0)\t|\n");
                  printf("\t\t\t\t\t| 2. Medium (Rp.4000)\t|\n");
                  printf("\t\t\t\t\t| 3. Large  (Rp.8000)\t|\n");
                  printf("\t\t\t\t\t+-----------------------+\n");
                  printf("\t\t\t\t\tSilahkan Pilih Ukuran : ");
                  scanf ("%d", &size);

                      if (size == 1){
                        size =0;
                      }
                      else if (size == 2){
                        size =4000*jumlah;
                      }
                      else if (size == 3){
                        size =8000*jumlah;
                      }
                      else{
                        printf("\t\t\t\t\tMaaf Masukan Pilihan dengan benar....\n");
                        goto pilih_uk4;
                      }
                  }
                  system("cls");
                  printf("\n\t\t\t\t\t+---------------+\n");
                  printf("\t\t\t\t\t| 1. YA\t\t|\n");
                  printf("\t\t\t\t\t| 2. TIDAK\t|\n");
                  printf("\t\t\t\t\t+---------------+\n");

                  printf("\t\t\t\t\tApakah Ingin Beli Snack (YA/TIDAK) : ");
                  scanf ("%d", &pilih1);

                  if (pilih1 == 1){

                    ulang4 :
                    {
                    printf("\n\t\t\t\t\t+===============================+\n");
                    printf("\t\t\t\t\t|SNACK\t\t\t\t|\n");
                    printf("\t\t\t\t\t+-------------------------------+\n");
                    printf("\t\t\t\t\t| 1. Garlic Bread  (Rp. 30000)\t|\n");
                    printf("\t\t\t\t\t| 2. Pancake       (Rp. 20000)\t|\n");
                    printf("\t\t\t\t\t| 3. Croissant     (Rp. 25000)\t|\n");
                    printf("\t\t\t\t\t| 4. Sandwich      (Rp. 20000)\t|\n");
                    printf("\t\t\t\t\t| 5. Cream Puff    (Rp. 25000)\t|\n");
                    printf("\t\t\t\t\t+===============================+\n");
                    printf("\t\t\t\t\tPilih : ");
                    scanf ("%d", &pilih1);
                    printf("\t\t\t\t\tJumlah Pesanan : ");
                    scanf ("%d", &jmlh);

                    if (pilih1 == 1){
                        snack = 30000*jmlh;
                    }
                    else if (pilih1 == 2){
                        snack = 20000*jmlh;
                    }
                    else if (pilih1 == 3){
                        snack = 25000*jmlh;
                    }
                    else if (pilih1 == 4){
                        snack = 20000*jmlh;
                    }
                    else if (pilih1 == 5){
                        snack = 25000*jmlh;
                    }
                    else{
                        printf("\t\t\t\t\tMaaf Masukan Pilihan dengan Benar....\n\n");
                        goto ulang4;

                        }
                    }
                }

                harga = 28000;
                total = harga*jumlah+size+snack;

                pilih_ulang4:
                {
                printf("\n\t\t\t\t\t=========================\n");
                printf("\t\t\t\t\t|   Metode Pembayaran   |\n");
                printf("\t\t\t\t\t=========================\n");
                printf("\t\t\t\t\t| 1. Debit\t\t|\n");
                printf("\t\t\t\t\t| 2. Cash\t\t|\n");
                printf("\t\t\t\t\t| 3. Qris\t\t|\n");
                printf("\t\t\t\t\t=========================\n");

                printf("\t\t\t\t\tPilih Metode Pembayaran : ");
                scanf ("%d", &pilih2);
                system("cls");

                if (pilih2 == 1){

                    pajak = 10;
                    besar_pajak = 0.1 * total;
                    total_bayar = total + besar_pajak;

                printf("\n\t\t\t\t===================SLIP PEMBAYARAN================\n");
                printf("\t\t\t\tNama Pelanggan\t: %s\n", nama);
                printf("\t\t\t\tJenis Pembayaran: Debit\n");
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tHarga Total Pesanan\t\t: Rp. %d\n", total);
                printf("\t\t\t\tPajak Pertambahan Nilai\t\t: %d%%\n", pajak);
                printf("\t\t\t\tBesaran Nilai Pajak\t\t: Rp. %d\n", besar_pajak);
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tTotal Pembayaran Adalah\t\t: Rp %d\n", total_bayar);
                printf("\t\t\t\t==================================================\n");

                }
                else if (pilih2 == 2){

                    pajak = 10;
                    besar_pajak = 0.1 * total;
                    total_bayar = total + besar_pajak;

                printf("\n\t\t\t\t===================SLIP PEMBAYARAN================\n");
                printf("\t\t\t\tNama Pelanggan\t: %s\n", nama);
                printf("\t\t\t\tJenis Pembayaran: Cash\n");
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tHarga Total Pesanan\t\t: Rp. %d\n", total);
                printf("\t\t\t\tPajak Pertambahan Nilai\t\t: %d%%\n", pajak);
                printf("\t\t\t\tBesaran Nilai Pajak\t\t: Rp. %d\n", besar_pajak);
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tTotal Pembayaran Adalah\t\t: Rp %d\n", total_bayar);
                printf("\t\t\t\t==================================================\n");

                }
                else if (pilih2 == 3){

                    pajak = 10;
                    besar_pajak = 0.1 * total;
                    total_bayar = total + besar_pajak;

                printf("\n\t\t\t\t==================SLIP PEMBAYARAN=================\n");
                 printf("\t\t\t\tNama Pelanggan\t: %s\n", nama);
                printf("\t\t\t\tJenis Pembayaran: Qris\n");
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tHarga Total Pesanan\t\t: Rp. %d\n", total);
                printf("\t\t\t\tPajak Pertambahan Nilai\t\t: %d%%\n", pajak);
                printf("\t\t\t\tBesaran Nilai Pajak\t\t: Rp. %d\n", besar_pajak);
                printf("\t\t\t\t--------------------------------------------------\n");
                printf("\t\t\t\tTotal Pembayaran Adalah\t\t: Rp %d\n", total_bayar);
                printf("\t\t\t\t==================================================\n");

                }
                else {
                    printf("\n\t\t\t\t\tMaaf Masukan Pilihan dengan Benar....\n");
                    goto pilih_ulang4;
                }
            }
            break;


        default : printf("\t\t\t\t\tMohon masukan pilihan menu dengan benar...\n");
                  printf("\n\t\t\t\t\tPress any key to countinue....\n");
                  getch();
                  system("cls");
                  goto start;
                  break;
        }

    }

}


void main( )
{
    char selesai;

    tampilan_awal();
    pesanlagi:
    menu_coffe();

    ulang:
        printf("\n\t\t\t\tApakah anda ingin memesan lagi  (t/y) :  ");
            scanf("%s",&selesai);

            if (selesai=='t'){
                printf("\n\t\t\t\tTerimakasih telah memesan. Semoga harimu bahagia...!!");
            }
            else if (selesai=='y'){
                system("cls");
                goto pesanlagi;
            }
            else {
                printf("\t\t\t\t\tMasukkan Pilihan dengan benar...\n");
                goto ulang;
            }

            getch();
            system("cls");

            return 0;
}



