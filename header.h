#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include "BOOLEAN.H"

typedef struct nbTree *nbtAddr;
typedef char infoType;

typedef struct nbTree
{
    int level;
    nbtAddr fs, nb, pr;
    infoType info;
} nbtType;

typedef struct bTree* (btAddr);
typedef struct bTree{
	char info;
	int level;
	btAddr ls,rs,pr;
}btType;

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
void LoadTree(nbtAddr (*nbtTree));
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
void getEditInfo(nbtAddr root, infoType* oldInfo, infoType* newInfo);
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

//==================== modul detail information bTree =========================
int btGetDepth(btAddr rootHolder);
int btGetElements(btAddr rootHolder);
int btGetLeaves(btAddr rootHolder);
int btGetChilds(btAddr nodeHolder);
void btShowElStatus(btAddr nodeHolder);
void btShowLeafStatus(btAddr nodeHolder);
void btShowElMetaData(btAddr nodeHolder);
void btShowMetaData(btAddr rootHolder);
//==============================================================================

#endif // HEADER_H
