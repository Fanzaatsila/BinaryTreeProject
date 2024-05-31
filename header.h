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
void btDelete(btAddr *rootHolder, btAddr pDel);
void btDeleteSub(btAddr *rootHolder, btAddr pDel);
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

/*======================== detail information nbTree ============================*/
int nbtGetDepth(nbtAddr rootHolder);
int nbtGetElements(nbtAddr rootHolder);
int nbtGetLeaves(nbtAddr rootHolder);
void nbtShowElStatus(nbtAddr nodeHolder);
void nbtShowLeafStatus(nbtAddr nodeHolder);
int nbtGetChilds(nbtAddr nodeHolder);
void nbtShowElMetaData(nbtAddr nodeHolder);
void nbtShowMetaData(nbtAddr rootHolder);
/*======================== END detail information nbTree ============================*/

//==================== MODUL DETAIL INFORMATION TREE =========================
int btGetDepth(btAddr rootHolder);
int btGetElements(btAddr rootHolder);
int btGetLeaves(btAddr rootHolder);
int btGetChilds(btAddr nodeHolder);
void btShowElStatus(btAddr nodeHolder);
void btShowLeafStatus(btAddr nodeHolder);
void btShowElMetaData(btAddr nodeHolder);
void btShowMetaData(btAddr rootHolder);
void btShowTreeMetaData(btAddr rootHolder);
void btShowElsMetaData(btAddr nodeHolder);
//===================== END  DETAIL INFORMATION TREE ==========================

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
void printTAllocVert(printTAddr(*nodeMaker));
void printTAllocHoriz(printTAddr(*nodeMaker));
void printTAllocNL(printTAddr(*nodeMaker));
void printTCreate(printTAddr(*rootHolder));
printTAddr printTSrchByInfo(printTAddr rootHolder, char info);
printTAddr printTSrchByPr(printTAddr rootHolder, char pr);
printTAddr printTSrchByRow(printTAddr rootHolder, int row);
printTAddr printTSrchByColumn(printTAddr rootHolder, int column);
printTAddr printTSrchByLoc(printTAddr rootHolder, int row, int column);
void printTInsert(printTAddr(*rootHolder), char info, char pr);
void printTTravNull(printTAddr(*holder), printTAddr start);
void printTTravSpecif(printTAddr(*holder), printTAddr start);
void printTToString(printTAddr rootHolder);
void printTCn(printTAddr trNode, printTAddr(*firstNode), printTAddr(*secNode));
int printTCountCh(printTAddr root, char pr);
void printTdelEl(printTAddr *rootHolder, printTAddr pDel);
void printTdelSub(printTAddr *rootHolder, printTAddr pDel);

void createNBPrintT(printTAddr(*printHolder), nbtAddr rootHolder);
void createBPrintT(printTAddr(*printHolder), btAddr rootHolder);
//====================================== printTree preOrderly end =============================================

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

int eduCreateTHeader();
int eduCreateT(int time, char root);

int nbtEduCreateTHeader();
/* IS: Menunjukkan bahwa fungsi ini akan membuat header untuk pembuatan tree Rducation */

int nbtEduCreateT(int time, char root);
/* IS: Menerima input waktu dan karakter root dari user */
/* FS: Mengembalikan nilai 1 jika pembuatan tree berhasil, 0 jika gagal */


int nbtEduInsFsHeader();
/* IS: Menunjukkan bahwa fungsi ini akan membuat header untuk menyisipkan node fs pada tree Education */

int nbtEduInsFs(int time, char fs, char pr);
/* IS: Menerima input waktu, karakter fs, dan karakter pr dari user */
/* FS: Mengembalikan nilai 1 jika penyisipan node fs berhasil, 0 jika gagal */

int nbtEduInsNbHeader();

int nbtEduInsNb(int time,  char nb, char pr);
void eduLRotationHeader();
void eduLRotation(int time,btAddr root);
void eduRRotationHeader();
void eduRRotation(int time,btAddr root);
void nbtCreateEdu(const char *filename, int time);
int eduFsToLsHeader();
int eduFsToLs(int time,char pr, char ls);
int eduNbToRsHeader();
int eduNbToRs(int time, char rs, char pr);

void eduLsAddHeader();
void eduLsAdd(int time,char pr, char ls);
void eduRsAddHeader();
void eduRsAdd(int time,char pr, char rs);

void btCreateEdu(btAddr root,int time,printTAddr *printQ);
void arrStoreEdu(btAddr root, int time);
void arrSortEdu(char *arr, btAddr root, int *index_ptr, int time);
void avlCreateEdu(btAddr bstTree, btAddr *avlTree, int time);
btAddr InsertAvlEdu(btAddr rootAvl, infoType info, int time);


/* IS: Menunjukkan bahwa fungsi ini akan membuat header untuk menyisipkan node nb pada tree Education */

int nbtEduInsNb(int time, char nb, char pr);
/* IS: Menerima input waktu, karakter nb, dan karakter pr dari user */
/* FS: Mengembalikan nilai 1 jika penyisipan node nb berhasil, 0 jika gagal */

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

/* Mengecek nilai apakah masih ada queue atau tidak */
int IsQueueEmpty(Queue *queue);

/* Memasukkan suatu node binary-tree ke dalam queue */
void Enqueue(Queue *queue, btAddr treeNode);

/* Mengeluarkan suatu node binary-tree dari queue */
btAddr Dequeue(Queue *queue);
/*================== END Queue ===========================*/
void numInsertedNodesCls();
#endif // HEADER_H
