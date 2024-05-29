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
    btAddr ls, rs, pr;
} btType;

typedef struct printT *(printTAddr);
typedef struct printT
{
    printTAddr next;
    int row, column;
    char info, pr;
} printTType;

typedef struct QueueNode
{
    btAddr btTree;
    nbtAddr nbtTree;
    struct QueueNode *next;
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
*/
void getEditInfo(nbtAddr root, infoType *oldInfo, infoType *newInfo);
void getAddInfo(nbtAddr root, nbtAddr nbtTree);
/* ======================= END EDIT NODE TREE ========================*/

/* ======================= DELETE NODE TREE ========================*/
/* Prosedur untuk menghapus node dari sebuah tree */
void nbDelete(nbtAddr *rootHolder, nbtAddr pDel);
/*  IS : Node yang ditunjuk masih terhubung dengan tree dan masih berada di memori
    FS : Node yang ditunjuk sudah terlepas dari tree tanpa merusak struktur tree dan node sudah di delete dari memori
*/

/* Prosedur untuk menghapus node beserta bawahannya dari sebuah tree */
void nbDeleteSub(nbtAddr *rootHolder, nbtAddr pDel);
/*  IS : Node yang ditunjuk masih terhubung dengan tree dan masih berada di memori
    FS : Node yang ditunjuk dan semua child node-nya sudah terlepas dari tree dan sudah dihapus dari memori
*/

/* Prosedur untuk melakukan delete untuk suatu node */
void bDNode(nbtType **Node);
/*  IS:Node yang ditentukan
    FS:Node terhapus
*/

/* Prosedur untuk mencari node yang akan dilakukan delete dan menyesuaikan node-node pada struktur data tree sehingga tidak rusak */
nbtAddr deleteNode(nbtAddr *root, infoType X);
/*  IS:Pointer menunjuk ke root
    FS:Pointer menunjuk ke node yang akan dihapus dan mereturn node teresbut
*/
/* ======================= END DELETE NODE TREE ========================*/

/* ======================= LOAD CACHE TREE ========================*/
void WriteCache(nbtAddr root, const char *filename);
void traverseAndSave(nbtAddr node, nbtAddr parent, FILE *fp);
void LoadCache(nbtAddr *nbtTree);
void ClearCache(const char *filename);
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

void createNBPrintT(printTAddr(*printHolder), nbtAddr rootHolder);
void createBPrintT(printTAddr(*printHolder), btAddr rootHolder);
//====================================== printTree preOrderly end =============================================

/*==================== MODUL CONVERSION BINARY-SEARCH-TREE TO AVL-TREE ===========================*/
void CreateAvlTree(btAddr bstTree, btAddr *avlTree);
btAddr InsertAvlTree(btAddr root, infoType info);
int GetLevel(btAddr node);
int Max(int a, int b);
btAddr RightRotate(btAddr root);
btAddr LeftRotate(btAddr root);
int GetBalance(btAddr root);
/*================== END MODUL CONVERSION BINARY-SEARCH-TREE TO AVL-TREE ===========================*/

/*==================== EDUCATION CREATE TREE ===========================*/
int nbtEduCreateTHeader();
int nbtEduCreateT(int time, char root);
int nbtEduInsFsHeader();
int nbtEduInsFs(int time, char fs, char pr);
int nbtEduInsNbHeader();
int nbtEduInsNb(int time,  char nb, char pr);
char nbtCreateEdu(const char* filename);
/*================== END EDUCATION CREATE TREE ===========================*/

/*==================== TRAVERSAL NBT & BT ===========================*/
void PrintBtPreorder(btAddr node);
void PrintBtInorder(btAddr node);
void PrintBtPostorder(btAddr node);
void PrintBtNbtLevelorder(nbtAddr nbtRoot, btAddr btRoot);
void PrintNbtPreorder(nbtAddr root);
void PrintNbtPostorder(nbtAddr root);
void PrintNbtInorder(nbtAddr root);
/*================== END TRAVERSAL NBT & BT ===========================*/

/*==================== Queue ===========================*/
Queue *CreateQueue();
int IsQueueEmpty(Queue *queue);
void Enqueue(Queue *queue, nbtAddr nbtTree, btAddr btTree);
QueueNode *Dequeue(Queue *queue);
/*================== END Queue ===========================*/
#endif // HEADER_H
