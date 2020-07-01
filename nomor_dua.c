
/****************************************************************
 * Author           : Achmad Fadhitya Muharram                  *
 * NIM              : 2301974231                                *
 * Mata Kuliah      : Algorithm and Programming                 *
 * Nama Program     : Aplikasi Struct Dosen                     *
 ****************************************************************/

/************* List of To-Do **************
 * - TODO create validation
 * - TODO exit program implementation
 ******************************************/

typedef struct{
    char namaJalan[255];
    int nomorRumah;
    char kota[255];
    char provinsi[255];
} Alamat;

typedef struct{
    int tanggal;
    char bulan[255];
    int tahun;
} TanggalLahir;

typedef struct {
    char nomorDosen[255];
    char NIDN[255];
    char nama[255];
    Alamat alamat;
    char tempatLahir[255];
    TanggalLahir tanggalLahir;
} Dosen;

void inputDosen(Dosen arrayDosen[]){
    for(int i = 0; i < 1; i++){
        printf("\nMasukkan data dosen %d", i+1);
        fflush(stdin);
        printf("\nNo. Dosen:");
        scanf("%[^\n]%*c", arrayDosen[i].nomorDosen);

        fflush(stdin);
        printf("NIDN:");
        scanf("%[^\n]%*c", arrayDosen[i].NIDN);

        fflush(stdin);
        printf("Nama:");
        scanf("%[^\n]%*c", arrayDosen[i].nama);


        printf("Input Alamat");
        fflush(stdin);
        printf("\n\tNama Jalan:");
        scanf("%[^\n]%*c", arrayDosen[i].alamat.namaJalan);

        fflush(stdin);
        printf("\n\tNomor Rumah:");
        scanf("%d", &arrayDosen[i].alamat.nomorRumah);

        fflush(stdin);
        printf("\n\tKota:");
        scanf("%[^\n]%*c", arrayDosen[i].alamat.kota);

        fflush(stdin);
        printf("\n\tProvinsi:");
        scanf("%[^\n]%*c", arrayDosen[i].alamat.provinsi);


        printf("Input Lahir");
        fflush(stdin);
        printf("\n\tTempat Lahir:");
        scanf("%[^\n]%*c", arrayDosen[i].tempatLahir);

        fflush(stdin);
        printf("\n\tTanggal Lahir:");
        scanf("%d", &arrayDosen[i].tanggalLahir.tanggal);

        fflush(stdin);
        printf("\n\tBulan Lahir:");
        scanf("%[^\n]%*c", arrayDosen[i].tanggalLahir.bulan);

        fflush(stdin);
        printf("\n\tTahun Lahir:");
        scanf("%d", &arrayDosen[i].tanggalLahir.tahun);

        printf("\n");
    }
}

void showDosen(Dosen arr[]) {
    for(int i = 0; i < 1; i++){
        printf("%s", arr[i].nama);
    }
}

int main(){
    Dosen arrayDosen[5];

    inputDosen(arrayDosen);
    showDosen(arrayDosen);
}