#ifndef header_H
#define header_H
#include <stdlib.h>
#include <stdio.h>
#include "BOOLEAN.H"

typedef struct nbTree *nbtAddr;
typedef char infoType;

typedef struct nbTree
{
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

/* ======================= KONSTRUKTOR NODE ========================*/
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

#endif