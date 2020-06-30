#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    int tanggal;
    char bulan[20];
    int tahun;
} TanggalLahir;

typedef struct {
    char nama[255];
    TanggalLahir tanggalLahir;
} Orang;

char *tentukanBintang(TanggalLahir lahir);

void toUpperString(char *str){

    printf("%d", sizeof(str));

    for (int i=0; i<sizeof(str); i++){
        str[i] = toupper(str[i]);
    }
}

int main() {
    Orang orang;
    char* bintang;

    fflush(stdin);
    printf("\nMasukkan nama anda:");
    scanf("%[^\n]%*c", orang.nama);
    fflush(stdin);
    printf("\nMasukkan tanggal anda lahir:");
    scanf("%d", &(orang.tanggalLahir.tanggal));
    fflush(stdin);
    printf("\nMasukkan bulan anda lahir:");
    scanf("%[^\n]%*c", orang.tanggalLahir.bulan);
    toUpperString(orang.tanggalLahir.bulan);
    fflush(stdin);
    printf("\nMasukkan tahun anda lahir:");
    scanf("%d", &(orang.tanggalLahir.tahun));

    bintang = tentukanBintang(orang.tanggalLahir);

    //TODO test only
    printf("\nnama: %s lahir %d %s %d %s", orang.nama, orang.tanggalLahir.tanggal, orang.tanggalLahir.bulan, orang.tanggalLahir.tahun, bintang);

    return 0;
}

char *tentukanBintang(TanggalLahir lahir) {

    printf("%d %s %d", lahir.tanggal, lahir.bulan, lahir.tahun);

    if(strcmp(lahir.bulan, "JANUARI") == 0 && lahir.tanggal <= 19 && lahir.tanggal >= 1){
        return "Capricon";
    }else if(strcmp(lahir.bulan, "JANUARI") == 0 && lahir.tanggal >= 20 && lahir.tanggal <= 31){
        return "Aquarius";
    }else if(strcmp(lahir.bulan, "FEBRUARI") == 0 && lahir.tanggal <= 19 && lahir.tanggal >= 1){
        return "Aquarius";
    }else if(strcmp(lahir.bulan, "FEBRUARI") == 0 && lahir.tanggal >= 20 && lahir.tanggal <= 30){
        return "Pisces";
    }else if(strcmp(lahir.bulan, "MARET") == 0 && lahir.tanggal <= 20 && lahir.tanggal >= 1){
        return "Pisces";
    }else if(strcmp(lahir.bulan, "MARET") == 0 && lahir.tanggal >= 21 && lahir.tanggal <= 31){
        return "Aries";
    }else if(strcmp(lahir.bulan, "APRIL") == 0 && lahir.tanggal <= 19 && lahir.tanggal >= 1){
        return "Aries";
    }else if(strcmp(lahir.bulan, "APRIL") == 0 && lahir.tanggal >= 20 && lahir.tanggal <= 30){
        return "Taurus";
    }else if(strcmp(lahir.bulan, "MEI") == 0 && lahir.tanggal <= 20 && lahir.tanggal >= 1){
        return "Taurus";
    }else if(strcmp(lahir.bulan, "MEI") == 0 && lahir.tanggal >= 21 && lahir.tanggal <= 31){
        return "Gemini";
    }else if(strcmp(lahir.bulan, "JUNI") == 0 && lahir.tanggal <= 20 && lahir.tanggal >= 1){
        return "Gemini";
    }else if(strcmp(lahir.bulan, "JUNI") == 0 && lahir.tanggal >= 21 && lahir.tanggal <= 30){
        return "Cancer";
    }else if(strcmp(lahir.bulan, "JULI") == 0 && lahir.tanggal <= 22 && lahir.tanggal >= 1){
        return "Cancer";
    }else if(strcmp(lahir.bulan, "JULI") == 0 && lahir.tanggal >= 23 && lahir.tanggal <= 31){
        return "Leo";
    }else if(strcmp(lahir.bulan, "AGUSTUS") == 0 && lahir.tanggal <= 22 && lahir.tanggal >= 1){
        return "Leo";
    }else if(strcmp(lahir.bulan, "AGUSTUS") == 0 && lahir.tanggal >= 23 && lahir.tanggal <= 31){
        return "Virgo";
    }else if(strcmp(lahir.bulan, "SEPTEMBER") == 0 && lahir.tanggal <= 22 && lahir.tanggal >= 1){
        return "Virgo";
    }else if(strcmp(lahir.bulan, "SEPTEMBER") == 0 && lahir.tanggal >= 23 && lahir.tanggal <= 30){
        return "Libra";
    }else if(strcmp(lahir.bulan, "OKTOBER") == 0 && lahir.tanggal <= 22 && lahir.tanggal >= 1){
        return "Libra";
    }else if(strcmp(lahir.bulan, "OKTOBER") == 0 && lahir.tanggal >= 23 && lahir.tanggal <= 31){
        return "Scorpio";
    }else if(strcmp(lahir.bulan, "NOVEMBER") == 0 && lahir.tanggal <= 21 && lahir.tanggal >= 1){
        return "Scorpio";
    }else if(strcmp(lahir.bulan, "NOVEMBER") == 0 && lahir.tanggal >= 22 && lahir.tanggal <= 30){
        return "Sagitarius";
    }else if(strcmp(lahir.bulan, "DESEMBER") == 0 && lahir.tanggal <= 21 && lahir.tanggal >= 1){
        return "Sagitarius";
    }else if(strcmp(lahir.bulan, "DESEMBER") == 0 && lahir.tanggal >= 20 && lahir.tanggal <= 31){
        return "Capricon";
    }else{
        return "Bintang Tidak Tersedia";
    }
}
