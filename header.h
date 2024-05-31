#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include "BOOLEAN.H"

typedef struct nbTree *nbtAddr;
typedef char infoType;

typedef struct nbTree
{
    int level;
    nbtAddr fs, nb, pr;
    infoType info;
} nbtType;

typedef struct bTree *(btAddr);
typedef struct bTree
{
    infoType info;
    int level;
    btAddr ls, rs, pr = NULL;
} btType;

typedef struct printT *(printTAddr);
typedef struct printT
{
    printTAddr next;
    int row, column;
    char info, pr;
} printTType;

typedef struct QueueNode {
    btAddr treeNode;
    struct QueueNode* next;
} QueueNode;

typedef struct Queue
{
    QueueNode *front;
    QueueNode *rear;
} Queue;

/* Membuat visualisasi sederhana non binary tree yang telah dibuat */
void ListParent(nbtAddr nbtRoot);
/*  IS : Pointer mengarah ke root non binary tree
    FS : Seluruh data di dalam node ditampilkan ke layar dengan urutan parent dan anaknya
*/

/* Function untuk mencari node dalam non-binary tree berdasarkan nilai info dan mengembalikan alamat node tersebut */
nbtAddr SearchNbtNode(nbtAddr nbtRoot, infoType info);
/*  IS : Pointer mengarah ke root non binary tree
    FS : Node yang memiliki info ditemukan dan direturn
*/

/* ======================= KONSTRUKTOR NODE DAN TREE ========================*/
/* Function untuk mengalokasikan node non-binary tree dan mengembalikan alamat node baru */
/*
	Created By : Rizq Hilal Rifaasya dan Zahratul Mardiyah
	GitHub : 
	Edited By : Fanza
*/
nbtAddr CreateNbtNode(infoType info);
/*  IS : Pointer yang tidak mengarah kemanapun
    FS : Pointer mengarah ke node yang sudah dialokasi dan memiliki data
*/

/* Modul untuk alokasi sebuah node yang dimasukkan */
void InsertNbtNode(nbtAddr *nbtRoot, nbtAddr parent, infoType info);
/* Function untuk mengalokasikan node non-binary tree dan mengembalikan alamat node baru
   I.S.: NBtree, parent, dan info terdefinisi
   F.S.: Non-binary tree bertambah satu node
*/

/* Modul untuk membuat non-binary-tree */
void NbtCreateTree(nbtAddr *nbtRoot);
/* Prosedur yang digunakan untuk membuat sebuah non-binary-tree, didalam modul ini sudah terdapat pengalokasian dan berbagai macam lainnya
   I.S.: Pointer of node sembarang
   F.S.: Pointer of node mengarah ke root non-binary-tree
*/
/* ======================= END KONSTRUKTOR NODE DAN TREE ========================*/

/* ======================= SAVE LOAD TREE TO FILE ========================*/
/* Modul untuk memanggil prosedur SaveNbtTreeToFile dan menyiapkan nama dari file yang akan disimpan */
void SaveTree(nbtAddr nbtTree);
/* I.S.: Pointer of node yang menunjuk ke root suatu non-binary-tree
   F.S.: Menjalankan prosedur SaveNbtTreeToFile
*/

/* Modul prosedur untuk melakukan save non-binary-tree ke dalam file */
void SaveNbtTreeToFile(nbtAddr root, char *fileName);
/* I.S.: Pointer of node yang mengarah ke root suatu non-binary-tree, juga nama file yang akan dibuat
   F.S.: File berisi data non-binary-tree yang kita punya sudah terbuat
*/

/* Modul prosedur untuk menyiapkan file dan mengatur penulisan di dalamnya */
void NbtTreeToFile(nbtAddr root, FILE *fp);
/* I.S.: Pointer of node yang mengarah ke root suatu non-binary-tree, juga file yang akan disimpan data di dalamnya
   F.S.: Data tree sudah disimpan di dalam file
*/

/* Modul untuk memanggil prosedur LoadNbtTreeFromFile dan menanyakan nama dari file yang akan dimuat */
void LoadTree(nbtAddr(*nbtTree));
/* I.S.: Pointer of node sembarang
   F.S.: Menjalankan prosedur LoadNbtTreeFromFile
*/

/* Modul prosedur untuk mengambil data dari file yang sebelumnya sudah disave, lalu menkonversinya menjadi non-binary-tree */
void LoadNbtTreeFromFile(nbtAddr *nbtRoot, char *fileName);
/* I.S.: Pointer of node sembarang, dan juga nama file yang sudah disiapkan sebelumnya dengan format yang sesuai
   F.S.: Pointer of node sudah menunjuk root dari non-binary-tree
*/
/* ======================= END SAVE LOAD TREE TO FILE ========================*/

/* ======================= EDIT NODE TREE ========================*/
/* Prosedur untuk mengedit informasi dari suatu node */
void editNode(nbtAddr root, infoType oldInfo, infoType newInfo);
/* I.S.: Pointer mengarah ke root non-binary tree, oldInfo dan newInfo terdefinisi
   F.S.: Node dengan info oldInfo diubah menjadi newInfo
   Created By : Rizq Hilal Rifaasya dan Zahratul Mardiyah
   Github :
   Edited By : Fanza Atsila Fizarli
*/

/* Prosedur untuk menampilkan ui */
void getEditInfo(nbtAddr root, infoType *oldInfo, infoType *newInfo);
/* I.S.: Pointer mengarah ke root non-binary tree, oldInfo dan newInfo terdefinisi
   F.S.: Node dengan info oldInfo diubah menjadi newInfo
   Created By : Fanza Atsila Fizarli
*/

/* Prosedur untuk menampilkan ui */
void getAddInfo(nbtAddr root, nbtAddr nbtTree);
/* I.S.: Pointer mengarah ke root non-binary tree, oldInfo dan newInfo terdefinisi
   F.S.: Node dengan info oldInfo diubah menjadi newInfo
   Created By : Fanza Atsila Fizarli
*/
/* ======================= END EDIT NODE TREE ========================*/

/* ======================= DELETE NODE TREE ========================*/
/* Prosedur untuk menghapus node dari sebuah tree */
void nbDelete(nbtAddr *rootHolder, nbtAddr pDel);
/*  IS : Node yang ditunjuk masih terhubung dengan tree dan masih berada di memori
    FS : Node yang ditunjuk sudah terlepas dari tree tanpa merusak struktur tree dan node sudah di delete dari memori
    Created By : Rizq Hilal Rifaasya dan Zahratul Mardiyah
    Github :
    Edited By : Fanza Atsila Fizarli
*/

/* Prosedur untuk menghapus node dari daftar insertedNodes */
void removeFromInsertedNodes(infoType info);
/*  IS : Daftar insertedNodes terdefinisi
    FS : Node dengan info yang sesuai dihapus dari daftar insertedNodes
    Created By : Fanza Atsila Fizarli
*/

/* Prosedur untuk menghapus node dari sebuah tree */
void btDelete(btAddr *rootHolder, btAddr pDel);
/*  IS : Node yang ditunjuk masih terhubung dengan tree dan masih berada di memori
    FS : Node yang ditunjuk sudah terlepas dari tree tanpa merusak struktur tree dan node sudah di delete dari memori
    Created By : Rizq Hilal Rifaasya dan Zahratul Mardiyah
    Github :
    Edited By : Fanza Atsila Fizarli
*/

/* Prosedur untuk menghapus node beserta bawahannya dari sebuah tree */
void btDeleteSub(btAddr *rootHolder, btAddr pDel);
/*  IS : Node yang ditunjuk masih terhubung dengan tree dan masih berada di memori
    FS : Node yang ditunjuk dan semua child node-nya sudah terlepas dari tree dan sudah dihapus dari memori
    Created By : Rizq Hilal Rifaasya dan Zahratul Mardiyah
    Github :
    Edited By : Fanza Atsila Fizarli
*/

/* Prosedur untuk menghapus node beserta bawahannya dari sebuah tree */
void nbDeleteSub(nbtAddr *rootHolder, nbtAddr pDel);
/*  IS : Node yang ditunjuk masih terhubung dengan tree dan masih berada di memori
    FS : Node yang ditunjuk dan semua child node-nya sudah terlepas dari tree dan sudah dihapus dari memori
    Created By : Rizq Hilal Rifaasya dan Zahratul Mardiyah
    Github :
    Edited By : Fanza Atsila Fizarli
*/

/* Prosedur untuk melakukan delete untuk suatu node */
void bDNode(nbtType **Node);
/*  IS:Node yang ditentukan
    FS:Node terhapus
    Created By : Rizq Hilal Rifaasya dan Zahratul Mardiyah
    Github :
    Edited By : Fanza Atsila Fizarli
*/

/* Prosedur untuk mencari node yang akan dilakukan delete dan menyesuaikan node-node pada struktur data tree sehingga tidak rusak */
nbtAddr deleteNode(nbtAddr *root, infoType X);
/*  IS:Pointer menunjuk ke root
    FS:Pointer menunjuk ke node yang akan dihapus dan mereturn node teresbut
    Created By : Fanza Atsila Fizarli
*/
/* ======================= END DELETE NODE TREE ========================*/

/* ======================= LOAD CACHE TREE ========================*/
/* Modul untuk menyimpan non-binary tree ke dalam file cache */
void WriteCache(nbtAddr root, const char *filename);
/* IS.: Pointer yang menunjuk ke root non-binary tree, nama file cache terdefinisi 
   FS.: Data non-binary tree disimpan ke dalam file cache dengan nama yang telah ditentukan 
   Created By : Fanza Atsila Fizarli
*/

/* Modul untuk memuat non-binary tree dari file cache */
void LoadCache(nbtAddr *nbtTree);
/* IS.: Pointer yang menunjuk ke root non-binary tree sembarang 
   FS.: Data non-binary tree dimuat dari file cache dan pointer root menunjuk ke root non-binary tree yang telah dimuat 
   Created By : Fanza Atsila Fizarli
*/

/* Modul untuk menghapus file cache */
void ClearCache(const char *filename);
/* IS.: Nama file cache terdefinisi 
   FS.: Isi cache dengan nama yang telah ditentukan dihapus 
   Created By : Fanza Atsila Fizarli
*/
/* ======================= END LOAD CACHE TREE ========================*/

/*======================== DETAIL INFORMATION NBTREE ============================*/
int nbtGetDepth(nbtAddr rootHolder);
/*  IS: Pointer mengarah ke root non-binary tree
    FS: Mengembalikan kedalaman dari non-binary tree
*/

int nbtGetElements(nbtAddr rootHolder);
/*  IS: Pointer mengarah ke root non-binary tree
    FS: Mengembalikan jumlah elemen dalam non-binary tree
*/

int nbtGetLeaves(nbtAddr rootHolder);
/*  IS: Pointer mengarah ke root non-binary tree
    FS: Mengembalikan jumlah daun dalam non-binary tree
*/

void nbtShowElStatus(nbtAddr nodeHolder);
/*  IS: Pointer mengarah ke suatu node dalam non-binary tree
    FS: Menampilkan status elemen pada node tersebut
*/

void nbtShowLeafStatus(nbtAddr nodeHolder);
/*  IS: Pointer mengarah ke suatu node dalam non-binary tree
    FS: Menampilkan status daun pada node tersebut
*/

int nbtGetChilds(nbtAddr nodeHolder);
/*  IS: Pointer mengarah ke suatu node dalam non-binary tree
    FS: Mengembalikan jumlah anak dari node tersebut
*/

void nbtShowElMetaData(nbtAddr nodeHolder);
/*  IS: Pointer mengarah ke suatu node dalam non-binary tree
    FS: Menampilkan metadata elemen pada node tersebut
*/

void nbtShowMetaData(nbtAddr rootHolder);
/*  IS: Pointer mengarah ke root non-binary tree
    FS: Menampilkan metadata dari seluruh non-binary tree
*/
/*======================== END DETAIL INFORMATIONA NBTREE ============================*/

/*==================== MODUL DETAIL INFORMATION TREE =========================*/
int btGetDepth(btAddr rootHolder);
/*  IS: Pointer mengarah ke root binary tree
    FS: Mengembalikan kedalaman dari binary tree
*/

int btGetElements(btAddr rootHolder);
/*  IS: Pointer mengarah ke root binary tree
    FS: Mengembalikan jumlah elemen dalam binary tree
*/

int btGetLeaves(btAddr rootHolder);
/*  IS: Pointer mengarah ke root binary tree
    FS: Mengembalikan jumlah daun dalam binary tree
*/

int btGetChilds(btAddr nodeHolder);
/*  IS: Pointer mengarah ke suatu node dalam binary tree
    FS: Mengembalikan jumlah anak dari node tersebut
*/

void btShowElStatus(btAddr nodeHolder);
/*  IS: Pointer mengarah ke suatu node dalam binary tree
    FS: Menampilkan status elemen pada node tersebut
*/

void btShowLeafStatus(btAddr nodeHolder);
/*  IS: Pointer mengarah ke suatu node dalam binary tree
    FS: Menampilkan status daun pada node tersebut
*/

void btShowElMetaData(btAddr nodeHolder);
/*  IS: Pointer mengarah ke suatu node dalam binary tree
    FS: Menampilkan metadata elemen pada node tersebut
*/

void btShowMetaData(btAddr rootHolder);
/*  IS: Pointer mengarah ke root binary tree
    FS: Menampilkan metadata dari seluruh binary tree
*/

void btShowTreeMetaData(btAddr rootHolder);
/*  IS: Pointer mengarah ke root binary tree
    FS: Menampilkan metadata dari seluruh binary tree, termasuk metadata dari setiap node
*/

void btShowElsMetaData(btAddr nodeHolder);
/*  IS: Pointer mengarah ke suatu node dalam binary tree
    FS: Menampilkan metadata elemen pada setiap node dalam binary tree
*/
/*===================== END  DETAIL INFORMATION TREE ==========================*/

/*================== MODUL CONVERSION NON-BINARY-TREE TO BINARY-TREE==========================*/
/* Mengkonversi non-binary-tree menjadi binary tree dengan mengambil info dari non-binary-tree*/
btAddr NbtTreeConvertToBtTree(nbtAddr root, int level);
/*  IS:Pointer menunjuk ke root non-binary-tree
    FS:Binary-tree yang sudah dibuat direturn
*/

/* Mengalokasikan suatu node dengan struktur data binary-tree*/
btAddr CreateBtNode(infoType info, int level);
/*  IS:info yang akan dimasukkan untuk menjadi data untuk node binary-tree
    FS:Node direturn
*/
/*================== END MODUL CONVERT NON-BINARY-TREE TO BINARY-TREE==========================*/

/*================== MODUL CONVERSION BINARY-TREE TO BINARY-SEARCH-TREE===========================*/
/* Prosedur yang berfungsi untuk mengubah binary-tree yang masuk menjadi binary-search-tree*/
void BtTreeConvertToBstTree(btAddr root);
/* Sudah memanggil semua modul lain yang dibutuhkan (CountNodes, StoreInorder, Compare, ArrayToBST)*/
/*  IS:Pointer menunjuk ke root binary-tree
    FS:Urutan info yang ada di dalam binary tree sudah berubah menjadi binary-search-tree
*/

/* Function yang berfungsi untuk menghitung jumlah node yang ada*/
int CountNodes(btAddr root);
/*  IS:Pointer menunjuk ke root binary-tree
    FS:Nilai untuk jumlah node yang ada direturn
*/

/* Prosedur untuk menyimpan info yang ada di dalam binary-tree menjadi array, info diambil dengan cara inorder */
void StoreInorder(btAddr node, char inorder[], int *index_ptr);
/*  IS:Pointer menunjuk ke root binary-tree
    FS:Terbentuk sebuah array dari kumpulan info binary-tree
*/

/* Mendapatkan nilai dari perbandingan dua nilai yang dimasukkan */
int Compare(const void *a, const void *b);
/*  IS:2 nilai dimasukkan
    FS:Hasil perbandingan kedua nilai direturn
*/

/* Memasukkan info array yang dilakukan sort dan memasukkannya kembali ke dalam binary-tree dengan cara inorder */
void ArrayToBST(char *arr, btAddr root, int *index_ptr);
/*  IS:Kumpulan info di dalam array yang sudah terurut ascenden
    FS:Binary-search-tree terbentuk
*/

/* Menduplikat suatu binary-tree */
btAddr DuplicateBtTree(btAddr root);
/*  IS:Pointer of node yang menunjuk root dari sebuah binary-tree
    FS:Duplikasi untuk binary-tree yang dimasukkan direturn
*/
/*================== END MODUL CONVERSION BINARY-TREE TO BINARY-SEARCH-TREE===========================*/

//========================================= printTree preOrderly =============================================
void printTAllocBlank(printTAddr(*nodeMaker));
/*  IS: -
    FS: Mengalokasikan node kosong pada print tree
*/

void printTAllocVert(printTAddr(*nodeMaker));
/*  IS: -
    FS: Mengalokasikan node dengan garis vertikal pada print tree
*/

void printTAllocHoriz(printTAddr(*nodeMaker));
/*  IS: -
    FS: Mengalokasikan node dengan garis horizontal pada print tree
*/

void printTAllocNL(printTAddr(*nodeMaker));
/*  IS: -
    FS: Mengalokasikan node dengan garis newline pada print tree
*/

void printTCreate(printTAddr(*rootHolder));
/*  IS: Pointer yang menunjuk ke root print tree sembarang
    FS: Print tree terbentuk dan pointer root menunjuk ke root print tree yang telah dibuat
*/

printTAddr printTSrchByInfo(printTAddr rootHolder, char info);
/*  IS: Pointer yang menunjuk ke root print tree dan info yang akan dicari
    FS: Mengembalikan pointer ke node dengan info yang sesuai, jika tidak ditemukan mengembalikan NULL
*/

printTAddr printTSrchByPr(printTAddr rootHolder, char pr);
/*  IS: Pointer yang menunjuk ke root print tree dan pr yang akan dicari
    FS: Mengembalikan pointer ke node dengan pr yang sesuai, jika tidak ditemukan mengembalikan NULL
*/

printTAddr printTSrchByRow(printTAddr rootHolder, int row);
/*  IS: Pointer yang menunjuk ke root print tree dan row yang akan dicari
    FS: Mengembalikan pointer ke node dengan row yang sesuai, jika tidak ditemukan mengembalikan NULL
*/

printTAddr printTSrchByColumn(printTAddr rootHolder, int column);
/*  IS: Pointer yang menunjuk ke root print tree dan column yang akan dicari
    FS: Mengembalikan pointer ke node dengan column yang sesuai, jika tidak ditemukan mengembalikan NULL
*/

printTAddr printTSrchByLoc(printTAddr rootHolder, int row, int column);
/*  IS: Pointer yang menunjuk ke root print tree dan row serta column yang akan dicari
    FS: Mengembalikan pointer ke node dengan row dan column yang sesuai, jika tidak ditemukan mengembalikan NULL
*/

void printTInsert(printTAddr(*rootHolder), char info, char pr);
/*  IS: Pointer yang menunjuk ke root print tree, info, dan pr yang akan dimasukkan
    FS: Node baru dengan info dan pr yang sesuai dimasukkan ke dalam print tree
*/

void printTTravNull(printTAddr(*holder), printTAddr start);
/*  IS: Pointer yang menunjuk ke holder dan start node
    FS: Melakukan traversal pada print tree dengan mengganti node kosong menjadi node dengan garis vertikal
*/

void printTTravSpecif(printTAddr(*holder), printTAddr start);
/*  IS: Pointer yang menunjuk ke holder dan start node
    FS: Melakukan traversal pada print tree dengan mengganti node kosong menjadi node dengan garis horizontal atau newline
*/

void printTToString(printTAddr rootHolder);
/*  IS: Pointer yang menunjuk ke root print tree
    FS: Menampilkan print tree dalam bentuk string
*/

void printTCn(printTAddr trNode, printTAddr(*firstNode), printTAddr(*secNode));
/*  IS: Pointer yang menunjuk ke trNode, firstNode, dan secNode
    FS: Menghubungkan trNode dengan firstNode dan secNode pada print tree
*/

int printTCountCh(printTAddr root, char pr);
/*  IS: Pointer yang menunjuk ke root print tree dan pr yang akan dihitung
    FS: Mengembalikan jumlah node dengan pr yang sesuai pada print tree
*/

void printTdelEl(printTAddr *rootHolder, printTAddr pDel);
/*  IS: Pointer yang menunjuk ke root print tree dan pDel yang akan dihapus
    FS: Node dengan info dan pr yang sesuai dihapus dari print tree
*/

void printTdelSub(printTAddr *rootHolder, printTAddr pDel);
/*  IS: Pointer yang menunjuk ke root print tree dan pDel yang akan dihapus
    FS: Node dengan info dan pr yang sesuai beserta semua child node-nya dihapus dari print tree
*/

void createNBPrintT(printTAddr(*printHolder), nbtAddr rootHolder);
/*  IS: Pointer yang menunjuk ke root print tree dan root non-binary tree
    FS: Print tree terbentuk berdasarkan struktur non-binary tree
*/

void createBPrintT(printTAddr(*printHolder), btAddr rootHolder);
/*  IS: Pointer yang menunjuk ke root print tree dan root binary tree
    FS: Print tree terbentuk berdasarkan struktur binary tree
*/

/*==================== MODUL CONVERSION BINARY-SEARCH-TREE TO AVL-TREE ===========================*/
/* Membuat sebuah Avl Tree */
void CreateAvlTree(btAddr bstTree, btAddr *avlTree);
/*  IS:Pointer of node yang menunjuk root dari sebuah binary-search-tree, dan juga node yang akan menunjuk pada avl-tree
    FS:avl-tree terbentuk
*/

/* Melakukan insert ke dalam info ke dalam avl-tree dan dilakukan balancing */
btAddr InsertAvlTree(btAddr rootAvl, infoType info);
/*  IS:Pointer of node yang akan menunjuk root dari sebuah avl-tree, dan juga node yang akan menunjuk pada avl-tree
    FS:Info yang ada dimasukkan ke dalam node dan dilakukan balancing sehingga tercipta avl-tree
*/

/* Mengambil level dari node */
int GetLevel(btAddr node);
/*  IS:Pointer of node yang menunjuk root dari sebuah binary-tree
    FS:Mengembalikan nilai level dari node
*/

/* Membandingkan dua nilai dan mengembalikan nilai terbesar */
int Max(int a, int b);
/*  IS:2 nilai integer
    FS:Nilai terbesar diantara 2 nilai dikembalikan
*/

/* Melakukan rotasi ke kanan */
btAddr RightRotate(btAddr root);

/* Melakukan rotasi ke kiri */
btAddr LeftRotate(btAddr root);

/* Mengembalikan nilai yang keseimbangan antara left son dan rigt son */
int GetBalance(btAddr root);
/*  IS:Pointer of node yang menunjuk root dari sebuah avl-tree
    FS:Nilai terbesar diantara 2 nilai dikembalikan
*/
/*================== END MODUL CONVERSION BINARY-SEARCH-TREE TO AVL-TREE ===========================*/

/*==================== EDUCATION CREATE TREE ===========================*/

int nbtEduCreateTHeader();
/* IS: Menunjukkan bahwa fungsi ini akan membuat header untuk pembuatan tree Rducation */

int nbtEduCreateT(int time, char root);
/* IS: Menerima input waktu dan karakter root dari user 
   FS: Mengembalikan nilai 1 jika pembuatan tree berhasil, 0 jika gagal 
*/

int nbtEduInsFsHeader();
/* IS: Menunjukkan bahwa fungsi ini akan membuat header untuk menyisipkan node fs pada tree Education */

int nbtEduInsFs(int time, char fs, char pr);
/* IS: Menerima input waktu, karakter fs, dan karakter pr dari user 
   FS: Mengembalikan nilai 1 jika penyisipan node fs berhasil, 0 jika gagal 
*/

/* IS: Menunjukkan bahwa fungsi ini akan membuat header untuk menyisipkan node nb pada tree Education */
int nbtEduInsNbHeader();

int nbtEduInsNb(int time, char nb, char pr);
/* IS: Menerima input waktu, karakter nb, dan karakter pr dari user 
   FS: Mengembalikan nilai 1 jika penyisipan node nb berhasil, 0 jika gagal 
*/

void eduLRotationHeader();
/* IS: Menunjukkan bahwa fungsi ini akan membuat header untuk melakukan rotasi ke kiri pada tree Education */

void eduLRotation(int time, btAddr root);
/* IS: Menerima input waktu dan node root dari user 
   FS: Melakukan rotasi ke kiri pada tree Education 
*/

void eduRRotationHeader();
/* IS: Menunjukkan bahwa fungsi ini akan membuat header untuk melakukan rotasi ke kanan pada tree Education */

void eduRRotation(int time, btAddr root);
/* IS: Menerima input waktu dan node root dari user 
   FS: Melakukan rotasi ke kanan pada tree Education 
*/

void nbtCreateEdu(const char* filename, int time);
/* IS: Menerima input nama file dan waktu dari user     
   FS: Membuat tree pendidikan berdasarkan data yang ada di fil    
   Created By: Faisal Bashri Albir 
*/

int eduFsToLsHeader();
/* IS: Menunjukkan bahwa fungsi ini akan membuat header untuk menyisipkan node fs pada tree Education */

int eduFsToLs(int time, char pr, char ls);
/* IS: Menerima input waktu, karakter pr, dan karakter ls dari user     
   FS: Mengembalikan nilai 1 jika penyisipan node fs berhasil, 0 jika gaga    
*/

int eduNbToRsHeader();
/* IS: Menunjukkan bahwa fungsi ini akan membuat header untuk menyisipkan node nb pada tree Education */

int eduNbToRs(int time, char rs, char pr);
/* IS: Menerima input waktu, karakter rs, dan karakter pr dari user     
   FS: Mengembalikan nilai 1 jika penyisipan node nb berhasil, 0 jika gaga   
*/

void eduLsAddHeader();
/* IS: Menunjukkan bahwa fungsi ini akan membuat header untuk menyisipkan node ls pada tree Education */

void eduLsAdd(int time, char pr, char ls);
/* IS: Menerima input waktu, karakter pr, dan karakter ls dari user     
   FS: Menyisipkan node ls pada tree Educatio    
*/

void eduRsAddHeader();
/* IS: Menunjukkan bahwa fungsi ini akan membuat header untuk menyisipkan node rs pada tree Education */

void eduRsAdd(int time, char pr, char rs);
/* IS: Menerima input waktu, karakter pr, dan karakter rs dari user     
   FS: Menyisipkan node rs pada tree Educatio    
*/

void btCreateEdu(btAddr root, int time, printTAddr* printQ);
/* IS: Menerima input node root, waktu, dan pointer ke printQ dari user     
   FS: Membuat tree pendidikan berdasarkan data yang ada di fil    
   Created By: Faisal Bashri Albir */

void arrStoreEdu(btAddr root, int time);
/* IS: Menerima input node root, waktu, dan pointer ke printQ dari user     
   FS: Menyimpan info dari tree pendidikan ke dalam array 
*/

void arrSortEdu(char* arr, btAddr root, int* index_ptr, int time);
/* IS: Menerima input array, node root, pointer ke index_ptr, dan waktu dari user 
   FS: Mengurutkan array dan memasukkan info ke dalam tree pendidikan 
*/

void avlCreateEdu(btAddr bstTree, btAddr* avlTree, int time);
/* IS: Menerima input node bstTree, node avlTree, dan waktu dari user 
   FS: Membuat avlTree berdasarkan bstTree 
*/

btAddr InsertAvlEdu(btAddr rootAvl, infoType info, int time);
/* IS: Menerima input node rootAvl, info, dan waktu dari user 
   FS: Menyisipkan info ke dalam avlTree 
*/

int nbtEduInsNb(int time, char nb, char pr);
/* IS: Menerima input waktu, karakter nb, dan karakter pr dari user
 FS: Mengembalikan nilai 1 jika penyisipan node nb berhasil, 0 jika gagal 
*/

void nbtCreateEdu(const char* filename);
/* IS: Menerima input nama file 
   FS: Membuat tree pendidikan berdasarkan data yang ada di file 
   Created By : Fanza Atsila Fizarli
*/

/*================== END EDUCATION CREATE TREE ===========================*/

/*==================== TRAVERSAL NBT & BT ===========================*/
/* Melakukan traversal secara preorder untuk binary-tree dan ditampilkan di layar */
void PrintBtPreorder(btAddr root);
/*  IS:Pointer of node yang menunjuk root dari sebuah binary-tree
    FS:Setiap info di dalam node sudah ditampilkan di layar dengan metode preorder
*/

/* Melakukan traversal secara inorder untuk binary-tree dan ditampilkan di layar */
void PrintBtInorder(btAddr root);
/*  IS:Pointer of node yang menunjuk root dari sebuah binary-tree
    FS:Setiap info di dalam node sudah ditampilkan di layar dengan metode inorder
*/

/* Melakukan traversal secara postorder untuk binary-tree dan ditampilkan di layar */
void PrintBtPostorder(btAddr root);
/*  IS:Pointer of node yang menunjuk root dari sebuah binary-tree
    FS:Setiap info di dalam node sudah ditampilkan di layar dengan metode postorder
*/

/* Melakukan traversal secara levelorder untuk binary-tree dan ditampilkan di layar */
void PrintBtLevelorder(btAddr root);
/*  IS:Pointer of node yang menunjuk root dari sebuah binary-tree
    FS:Setiap info di dalam node sudah ditampilkan di layar dengan metode levelorder
*/

/* Melakukan traversal secara preorder untuk non-binary-tree dan ditampilkan di layar */
void PrintNbtPreorder(nbtAddr root);
/*  IS:Pointer of node yang menunjuk root dari sebuah non-binary-tree
    FS:Setiap info di dalam node sudah ditampilkan di layar dengan metode preorder
*/

/* Melakukan traversal secara postorder untuk non-binary-tree dan ditampilkan di layar */
void PrintNbtPostorder(nbtAddr root);
/*  IS:Pointer of node yang menunjuk root dari sebuah non-binary-tree
    FS:Setiap info di dalam node sudah ditampilkan di layar dengan metode postorder
*/

/* Melakukan traversal secara inorder untuk non-binary-tree dan ditampilkan di layar */
void PrintNbtInorder(nbtAddr root);
/*  IS:Pointer of node yang menunjuk root dari sebuah non-binary-tree
    FS:Setiap info di dalam node sudah ditampilkan di layar dengan metode inorder
*/

/* Melakukan traversal secara levelorder untuk non-binary-tree dan ditampilkan di layar */
void PrintNbtLevelorder(nbtAddr root);
/*  IS:Pointer of node yang menunjuk root dari sebuah non-binary-tree
    FS:Setiap info di dalam node sudah ditampilkan di layar dengan metode levelorder
*/

/* Menghitung max level di level terakahir untuk binary-tree*/
void CalculateBtMaxLevel(btAddr root, int* maxLevel);
/*  IS:Pointer of node yang menunjuk root dari sebuah binary-tree, dan juga parsing by refrence untuk maxLevel
    FS:maxLevel memiliki nilai max jumlah node yang dimiliki tree
*/

/* Melakukan print info untuk setiap node di setiap level di binary-tree*/
void PrintBtNodesAtLevel(btAddr root, int level);

/* Menghitung max level di level terakahir untuk non-binary-tree*/
void CalculateNbtMaxLevel(nbtAddr root, int* maxLevel);
/*  IS:Pointer of node yang menunjuk root dari sebuah -non-binary-tree, dan juga parsing by refrence untuk maxLevel
    FS:maxLevel memiliki nilai max jumlah node yang dimiliki tree
*/

/* Melakukan print info untuk setiap node di setiap level di non-binary-tree*/
void PrintNbtNodesAtLevel(nbtAddr root, int level);

/* Melakukan traversal secara levelorder untuk avl-tree dan ditampilkan di layar */
void PrintAvlLevelorder(btAddr root);
/*  IS:Pointer of node yang menunjuk root dari sebuah avl-tree
    FS:Setiap info di dalam node sudah ditampilkan di layar dengan metode levelorder
*/
/*================== END TRAVERSAL NBT & BT ===========================*/

/*==================== Queue ===========================*/
/* Mengalokasikan node queue */
Queue *CreateQueue();
/*  IS: -
    FS:Mengembalikan pointer yang menunjuk ke node queue yang baru dialokasikan
*/

/* Mengecek nilai apakah masih ada queue atau tidak */
int IsQueueEmpty(Queue *queue);
/*  IS:Pointer of node yang menunjuk ke queue
    FS:Mengembalikan nilai 1 jika queue kosong, 0 jika tidak kosong
*/

/* Memasukkan suatu node binary-tree ke dalam queue */
void Enqueue(Queue *queue, btAddr treeNode);
/*  IS:Pointer of node yang menunjuk ke queue dan pointer of node yang menunjuk ke binary-tree
    FS:Node binary-tree dimasukkan ke dalam queue
*/

/* Mengeluarkan suatu node binary-tree dari queue */
btAddr Dequeue(Queue *queue);
/*  IS:Pointer of node yang menunjuk ke queue
    FS:Node binary-tree yang dikeluarkan dari queue
*/
/*================== END Queue ===========================*/

void numInsertedNodesCls();
/*  IS: -
    FS: -
*/

void CreateAvlTree(btAddr bstTree, btAddr *avlTree);
/*  IS:Pointer of node yang menunjuk root dari sebuah binary-search-tree, dan juga node yang akan menunjuk pada avl-tree
    FS:avl-tree terbentuk
*/
#endif // HEADER_H
