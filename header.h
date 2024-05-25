#ifndef header_H
#define header_H
#include <stdlib.h>
#include <stdio.h>
#include "BOOLEAN.H"

typedef struct nbTree *nbtAddr;
typedef char infoType;

typedef struct nbTree
{
	int level;
    nbtAddr fs,nb,pr;
    infoType info;
}nbtType;

/* Membuat visualisasi sederhana non binary tree yang telah dibuat */
void ListParent(nbtAddr nbtRoot);
/*  IS : Pointer mengarah ke root non binary tree
    FS : Seluruh data di dalam node ditampilkan ke layar dengan urutan parent dan anaknya
*/

/* Function untuk mencari node dalam non-binary tree berdasarkan nilai info dan mengembalikan alamat node tersebut*/
nbtAddr SearchNbtNode (nbtAddr nbtRoot, infoType info);
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
/*Function untuk mengalokasikan node non-binary tree dan mengembalikan alamat node baru
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
/*	I.S.: Pointer of node yang menunjuk ke root suatu non-binary-tree
	F.S.: Menjalankan prosedur SaveNbtTreeToFile
*/

/* Modul prosedur untuk melakukan save non-binary-tree ke dalam file*/
void SaveNbtTreeToFile(nbtAddr root, char *fileName);
/*	I.S.: Pointer of node yang mengarah ke root suatu non-binary-tree, juga nama file yang akan dibuat
	F.S.: File berisi data non-binary-tree yang kita punya sudah terbuat
*/

/* Modul prosedur untuk menyiapkan file dan mengatur penulisan di dalamnya*/
void NbtTreeToFile(nbtAddr root, FILE *fp);
/*	I.S.: Pointer of node yang mengarah ke root suatu non-binary-tree, juga file yang akan disimpan data di dalamnya
	F.S.: Data tree sudah disimpan di dalam file
*/

/* Modul untuk memanggil prosedur LoadNbtTreeFromFile dan menanyakan nama dari file yang akan dimuat */
void LoadTree(nbtAddr (*nbtTree));
/*	I.S.: Pointer of node sembarang
	F.S.: Menjalankan prosedur LoadNbtTreeFromFile
*/

/* Modul prosedur untuk mengambil data dari file yang sebelumnya sudah disave, lalu menkonversinya menjadi non-binary-tree*/
void LoadNbtTreeFromFile(nbtAddr *nbtRoot, char *fileName);
/*	I.S.: Pointer of node sembarang, dan juga nama file yang sudah disiapkan sebelumnya dengan format yang sesuai
	F.S.: Pointer of node sudah menunjuk root dari non-binary-tree
*/
/* ======================= END SAVE LOAD TREE TO FILE ========================*/

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

#endif
