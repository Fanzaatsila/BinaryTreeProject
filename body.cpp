#include "header.h"
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/* ======================= VARIABLE GLOBAL PENAMPUNG NODE ========================*/
#define MAX_NODES 100
nbtAddr insertedNodes[MAX_NODES];
int numInsertedNodes = 0;

// Fungsi untuk menyimpan node yang dimasukkan
void recordInsertedNode(nbtAddr node)
{
    insertedNodes[numInsertedNodes++] = node;
}
/* ======================= END VARIABLE GLOBAL PENAMPUNG NODE ========================*/
void ListParent(nbtAddr nbtRoot)
{
    if (nbtRoot != NULL)
    {
        printf("~ %c.\n", nbtRoot->info);
        ListParent(nbtRoot->fs);
        ListParent(nbtRoot->nb);
    }
}

nbtAddr SearchNbtNode(nbtAddr nbtRoot, infoType info)
{
    nbtAddr node;
    if (nbtRoot == NULL)
    {
        return NULL;
    }
    else if (nbtRoot->info == info)
    {
        return nbtRoot;
    }
    else
    {
        node = SearchNbtNode(nbtRoot->fs, info);
        if (node != NULL)
        {
            return node;
        }
        else
        {
            return SearchNbtNode(nbtRoot->nb, info);
        }
    }
}

/* ======================= KONSTRUKTOR NODE DAN TREE ========================*/
nbtAddr CreateNbtNode(infoType info)
{
    nbtAddr newNode;
    newNode = (nbtAddr)malloc(sizeof(nbtType));
    if (newNode != NULL)
    {
        newNode->info = info;
        newNode->fs = NULL;
        newNode->nb = NULL;
        newNode->pr = NULL;
        newNode->level = 0;
    }
    return newNode;
}

void InsertNbtNode(nbtAddr *nbtRoot, nbtAddr parent, infoType info)
{
    nbtAddr newNode = CreateNbtNode(info);
    newNode->pr = parent;
    if (parent == NULL)
    {
        newNode->level = 0;
        (*nbtRoot) = newNode;
    }
    else if (parent->fs == NULL)
    {
        newNode->level = parent->level + 1;
        parent->fs = newNode;
    }
    else
    {
        newNode->level = parent->level + 1;
        parent = parent->fs;
        while (parent->nb != NULL)
        {
            parent = parent->nb;
        }
        parent->nb = newNode;
    }
    recordInsertedNode(newNode);
    WriteCache(*nbtRoot, "cache.txt");
}

void NbtCreateTree(nbtAddr *nbtRoot)
{
    infoType option, parent, nama;
    boolean check;

    nbDeleteSub(nbtRoot, *nbtRoot);
    while (true)
    {
        if (*nbtRoot == NULL)
        {
            system("cls");
            printf("DAFTAR PARENTS\n");
            printf("Tree Masih Kosong!\n");
        }
        else
        {
            system("cls");
            printf("DAFTAR PARENTS\n");
            ListParent(*nbtRoot);
        }
        do
        {
            check = true;
            printf("Lanjutkan?(y/n) : ");
            option = getch();
            if (option == 'n')
            {
                return;
            }
            else if (option == 'y')
            {
                check = false;
            }
            else
            {
                printf("\nKamu memasukkan pilihan yang salah, pilihlah pilihan yang disediakan\n");
            }
        } while (check);
        printf("\nMasukkan Nama Node Yang Akan Dimasukkan: ");
        scanf(" %c", &nama);
        if (*nbtRoot == NULL)
        {
            InsertNbtNode(&(*nbtRoot), SearchNbtNode(*nbtRoot, '0'), nama);
            printf("\nInput Berhasil!\n");
        }
        else
        {
        a:
            printf("Masukkan Nama Parent: ");
            scanf(" %c", &parent);
            if (SearchNbtNode((*nbtRoot), parent) == NULL)
            {
                printf("\nInput Gagal! Masukkan Nama Parent yang sesuai\n");
                goto a;
            }
            else
            {
                InsertNbtNode(&(*nbtRoot), SearchNbtNode((*nbtRoot), parent), nama);
                printf("\nInput Berhasil!\n");
            }
        }
    }
}
/* ======================= END KONSTRUKTOR NODE DAN TREE ========================*/
/* ======================= SAVE LOAD TREE TO FILE ========================*/

/* ======================= SAVE CACHE TREE TO FILE ========================*/
void WriteCache(nbtAddr root, const char *filename)
{
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Gagal membuka file\n");
        return;
    }

    // Menulis setiap node yang dimasukkan ke file
    for (int i = 0; i < numInsertedNodes; ++i)
    {
        fprintf(fp, "(%c, %c) ", insertedNodes[i]->pr != NULL ? insertedNodes[i]->pr->info : '0', insertedNodes[i]->info);
    }

    fclose(fp); // menutup file
}

void ClearCache(const char *filename)
{
    FILE *fp = fopen(filename, "w");
    if (fp == NULL)
    {
        printf("Gagal membuka file\n");
        return;
    }
    fclose(fp); // Mengosongkan isi file dengan membuka file dengan mode write (w), lalu langsung menutupnya
    printf("Cache berhasil dihapus!\n");
}

void LoadCache(nbtAddr *nbtTree)
{
    FILE *fp = fopen("cache.txt", "r");
    if (fp == NULL)
    {
        printf("Tidak ada cache yang ditemukan, buat pohon baru\n");
        return;
    }
    char parent, node;
    while (fscanf(fp, "(%c, %c) ", &parent, &node) != EOF)
    {
        InsertNbtNode(nbtTree, SearchNbtNode(*nbtTree, parent), node);
    }
    fclose(fp);
    printf("Cache berhasil dimuat!\n");
}

/* ======================= END SAVE CACHE TREE TO FILE ========================*/
void SaveTree(nbtAddr nbtTree)
{
    char fileName[20];

    printf("Silahkan Masukkan Nama File (.txt): ");
    scanf(" %s", &fileName);
    SaveNbtTreeToFile(nbtTree, fileName);
}

void SaveNbtTreeToFile(nbtAddr root, char *filename)
{
    FILE *fp = fopen(filename, "w");

    if (fp == NULL)
    {
        printf("Gagal membuka file\n");
        return;
    }

    NbtTreeToFile(root, fp); // menyimpan data ke file
    fclose(fp);              // menutup file
    printf("Save Berhasil!\n");
}

void NbtTreeToFile(nbtAddr root, FILE *fp)
{
    if (root == NULL)
    {
        return;
    }

    nbtAddr child = root->fs; // pointer ke node anak pertama
    if (root->pr == NULL)
    {
        // jika root, simpan dengan parent 0
        fprintf(fp, "(%c, %c) ", '0', root->info);
    }
    while (child != NULL)
    {
        // menyimpan pasangan (parent, child) ke file
        fprintf(fp, "(%c, %c) ", root->info, child->info);

        // rekursif untuk setiap anak
        NbtTreeToFile(child, fp);

        // menuju sibling berikutnya
        child = child->nb;
    }
}

void LoadTree(nbtAddr(*nbtTree))
{
    char fileName[20];

    printf("\nSilahkan Masukkan Nama File (.txt): ");
    scanf(" %s", &fileName);
    LoadNbtTreeFromFile(&(*nbtTree), fileName);
}

void LoadNbtTreeFromFile(nbtAddr *nbtRoot, char *fileName)
{
    FILE *fp = fopen(fileName, "r");

    if (fp == NULL)
    {
        printf("Gagal membuka file\n");
        return;
    }

    char parent, node;
    while (fscanf(fp, "(%c, %c) ", &parent, &node) != EOF)
    {
        InsertNbtNode(&(*nbtRoot), SearchNbtNode(*nbtRoot, parent), node);
    }

    fclose(fp);
    printf("Load Tree from file success!\n");
}
/* ======================= END SAVE LOAD TREE TO FILE ========================*/

/* ======================= EDIT NODE TREE ========================*/

void editNode(nbtAddr root, infoType oldInfo, infoType newInfo)
{
    nbtAddr node = SearchNbtNode(root, oldInfo);
    if (node != NULL)
    {
        node->info = newInfo;
        WriteCache(root, "cache.txt");
        printf("Node %c successfully updated to %c\n", oldInfo, newInfo);
    }
    else
    {
        printf("Node with info %c not found!\n", oldInfo);
    }
}

void getEditInfo(nbtAddr root, infoType *oldInfo, infoType *newInfo)
{
    printf("\nDaftar Parent:\n");
    ListParent(root);
    printf("\nEnter the node info to edit: ");
    scanf(" %c", oldInfo);
    printf("\nEnter the new info for the node: ");
    scanf(" %c", newInfo);
}

void getAddInfo(nbtAddr root, nbtAddr nbtTree)
{
    infoType parent, newData;

    printf("\nDaftar Parent:\n");
    ListParent(root);
    printf("\nEnter the parent node info: ");
    scanf(" %c", &parent);
    printf("\nEnter the new data to add: ");
    scanf(" %c", &newData);
    nbtAddr parentNode = SearchNbtNode(nbtTree, parent);
    if (parentNode != NULL)
    {
        InsertNbtNode(&nbtTree, parentNode, newData);
        printf("Data %c added successfully!\n", newData);
    }
    else
    {
        printf("Parent node with info %c not found!\n", parent);
    }
}

/* ======================= END EDIT NODE TREE ========================*/

/* ======================= DELETE NODE TREE ========================*/

/* Prosedur untuk menghapus node dari sebuah tree */
void nbDelete(nbtAddr *rootHolder, nbtAddr pDel)
{
    if (*rootHolder == pDel)
    {
        *rootHolder = NULL; // Menghapus root
    }
    free(pDel); // Membebaskan memori yang ditempati oleh node
}

/* Prosedur untuk menghapus node beserta bawahannya dari sebuah tree */
void nbDeleteSub(nbtAddr *rootHolder, nbtAddr pDel)
{
    if (pDel != NULL)
    {
        nbDeleteSub(rootHolder, pDel->fs); // Menghapus sub-tree sebelah kiri
        nbDeleteSub(rootHolder, pDel->nb); // Menghapus sub-tree sebelah kanan
        nbDelete(rootHolder, pDel);        // Menghapus node
    }
}

/* Prosedur untuk melakukan delete untuk suatu node */
void bDNode(nbtType **Node)
{
    free(*Node); // Menghapus node
    *Node = NULL;
}

/* Prosedur untuk mencari node yang akan dilakukan delete dan menyesuaikan node-node pada struktur data tree sehingga tidak rusak */
/* Prosedur untuk melakukan delete untuk suatu node */
nbtAddr deleteNode(nbtAddr *root, infoType X)
{
    nbtAddr temp, parent;

    if (*root == NULL)
    {
        return NULL;
    }

    if ((*root)->info == X)
    {
        if ((*root)->fs == NULL && (*root)->nb == NULL)
        {
            bDNode(root); // Hapus node jika tidak memiliki anak
        }
        else if ((*root)->fs != NULL && (*root)->nb == NULL)
        {
            temp = (*root)->fs;
            bDNode(root);
            *root = temp; // Ganti root dengan anak sebelah kiri
        }
        else if ((*root)->fs == NULL && (*root)->nb != NULL)
        {
            temp = (*root)->nb;
            bDNode(root);
            *root = temp; // Ganti root dengan anak sebelah kanan
        }
        else
        {
            temp = (*root)->nb;
            parent = *root;
            while (temp->fs != NULL)
            {
                parent = temp;
                temp = temp->fs;
            }
            (*root)->info = temp->info;      // Ganti info root dengan info terbesar dari anak sebelah kanan
            deleteNode(&parent, temp->info); // Hapus node yang menyimpan info terbesar
        }
    }
    else
    {
        if ((*root)->fs != NULL && (*root)->nb != NULL)
        {
            if ((*root)->fs->info == X || (*root)->nb->info == X)
            {
                if ((*root)->fs->info == X)
                {
                    temp = (*root)->fs;
                }
                else
                {
                    temp = (*root)->nb;
                }
                if (temp->fs == NULL && temp->nb == NULL)
                {
                    bDNode(&temp); // Hapus node jika tidak memiliki anak
                }
                else if (temp->fs != NULL && temp->nb == NULL)
                {
                    nbtAddr node = temp->fs;
                    temp->info = temp->fs->info;
                    temp->fs = temp->fs->fs;
                    free(node); // Hapus anak sebelah kiri dari node yang dihapus
                }
                else if (temp->fs == NULL && temp->nb != NULL)
                {
                    nbtAddr node = temp->nb;
                    temp->info = temp->nb->info;
                    temp->nb = temp->nb->nb;
                    free(node); // Hapus anak sebelah kanan dari node yang dihapus
                }
                else
                {
                    nbtAddr node = temp->nb;
                    parent = temp;
                    while (node->fs != NULL)
                    {
                        parent = node;
                        node = node->fs;
                    }
                    temp->info = node->info;         // Ganti info temp dengan info terbesar dari anak sebelah kanan
                    deleteNode(&parent, node->info); // Hapus node yang menyimpan info terbesar
                }
            }
            else
            {
                deleteNode(&((*root)->fs), X);
                deleteNode(&((*root)->nb), X);
            }
        }
        else if ((*root)->fs != NULL)
        {
            deleteNode(&((*root)->fs), X);
        }
        else if ((*root)->nb != NULL)
        {
            deleteNode(&((*root)->nb), X);
        }
    }
    WriteCache(*root, "cache.txt");
    return *root;
}

/* ======================= END DELETE NODE TREE ========================*/

/*======================== detail information nbTree ============================*/
int nbtGetDepth(nbtAddr rootHolder)
{
    int count;
    int total;
    nbtAddr p;
    bool resmi = true;
    count = 0;
    total = 0;
    p = rootHolder;
    while (p != NULL)
    {
        if (p->fs != NULL && resmi)
        {
            p = p->fs;
            count = count + 1;
        }
        else if (p->nb != NULL)
        {
            p = p->nb;
            resmi = true;
        }
        else
        {
            p = p->pr;
            resmi = false;
            if (total < count)
            {
                total = count;
            }
            count = count - 1;
        }
    }
    return total;
}

int nbtGetElements(nbtAddr rootHolder)
{
    int count;
    nbtAddr p;
    bool resmi = true;
    p = rootHolder;
    count = 0;
    while (p != NULL)
    {
        if (resmi)
        {
            count = count + 1;
        }
        if (p->fs != NULL && resmi)
        {
            p = p->fs;
        }
        else if (p->nb != NULL)
        {
            p = p->nb;
            resmi = true;
        }
        else
        {
            p = p->pr;
            resmi = false;
        }
    }
    return count;
}

int nbtGetLeaves(nbtAddr rootHolder)
{
    int count;
    nbtAddr p;
    bool resmi = true;
    p = rootHolder;
    count = 0;
    while (p != NULL)
    {
        if (p->fs != NULL && resmi)
        {
            p = p->fs;
        }
        else if (p->nb != NULL)
        {
            if (resmi)
            {
                count = count + 1;
            }
            p = p->nb;
            resmi = true;
        }
        else
        {
            if (resmi)
            {
                count = count + 1;
            }
            p = p->pr;
            resmi = false;
        }
    }
    return count;
}

int nbtGetChilds(nbtAddr nodeHolder)
{
    int count = 0;
    bool resmi = true;
    nbtAddr p;
    p = nodeHolder;
    if (p->fs != NULL)
    {
        p = p->fs;
        while (p != NULL)
        {
            count = count + 1;
            p = p->nb;
        }
        return count;
    }
    else
    {
        return 0;
    }
}

void nbtShowMetaData(nbtAddr rootHolder)
{
    bool resmi = true;
    nbtAddr p;
    printf("TREE DETAIL INFORMATION\n\tTree Root : %c\n\tTree Depth : %i\n\tTree Elements : %i\n\tTree Leaves : %i\n\n",
           rootHolder->info, nbtGetDepth(rootHolder), nbtGetElements(rootHolder), nbtGetLeaves(rootHolder));

    p = rootHolder;
    while (p != NULL)
    {
        if (resmi)
        {
            nbtShowElMetaData(p);
        }
        if (p->fs != NULL && resmi)
        {
            p = p->fs;
        }
        else if (p->nb != NULL)
        {
            p = p->nb;
            resmi = true;
        }
        else
        {
            p = p->pr;
            resmi = false;
        }
    }
}

void nbtShowElStatus(nbtAddr nodeHolder)
{
    if (nodeHolder->pr == NULL)
    {
        printf("root");
    }
    else
    {
        printf("child of %c", nodeHolder->pr->info);
    }
}

void nbtShowLeafStatus(nbtAddr nodeHolder)
{
    if (nodeHolder->fs == NULL)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}

void nbtShowElMetaData(nbtAddr nodeHolder)
{

    printf("\t'%c' DETAIL INFORMATION\n\t\tElement Status : ", nodeHolder->info);
    nbtShowElStatus(nodeHolder);
    printf("\n\t\tElement Level : %i\n\t\tElement Childs : %i\n\t\tElement Leaf Status : ",
           nodeHolder->level, nbtGetChilds(nodeHolder));
    nbtShowLeafStatus(nodeHolder);
    printf("\n\n");
}

/*======================== END detail information nbTree ============================*/

//==================== modul detail information bTree =========================
int btGetDepth(btAddr rootHolder)
{ // geeksforgeeks algorithm
    int lDepth;
    int rDepth;
    if (rootHolder == NULL)
    {
        return 0;
    }
    else
    {
        lDepth = btGetDepth(rootHolder->ls);
        rDepth = btGetDepth(rootHolder->rs);

        if (lDepth > rDepth)
        {
            return lDepth;
        }
        else
        {
            return rDepth;
        }
    }
}

int btGetElements(btAddr rootHolder)
{ // geeksforgeeks algorithm
    int lCount;
    int rCount;

    if (rootHolder == NULL)
    {
        return 0;
    }

    lCount = btGetElements(rootHolder->ls);
    rCount = btGetElements(rootHolder->rs);

    return 1 + lCount + rCount;
}

int btGetLeaves(btAddr rootHolder)
{ // geeksforgeeks algorithm

    if (rootHolder == NULL)
    {
        return 0;
    }
    if (rootHolder->ls && rootHolder->rs)
    {
        return 1;
    }
    else
    {
        return btGetLeaves(rootHolder->ls) + btGetLeaves(rootHolder->rs);
    }
}

int btGetChilds(btAddr nodeHolder)
{ // geeksforgeeks algorithm
    int lCount;
    int rCount;

    if (nodeHolder == NULL)
    {
        return 0;
    }

    lCount = btGetElements(nodeHolder->ls);
    rCount = btGetElements(nodeHolder->rs);

    return lCount + rCount;
}

void btShowElStatus(btAddr nodeHolder)
{
    if (nodeHolder->pr == NULL)
    {
        printf("root");
    }
    else
    {
        printf("child of %c", nodeHolder->pr->info);
    }
}

void btShowLeafStatus(btAddr nodeHolder)
{
    if (nodeHolder->ls != NULL || nodeHolder->rs != NULL)
    {
        printf("true");
    }
    else
        printf("false");
}

void btShowElMetaData(btAddr nodeHolder)
{
    printf("\t'%c' DETAIL INFORMATION\n\t\tElement Status : ", nodeHolder->info);
    btShowElStatus(nodeHolder);
    printf("\n\t\tElement Level : %i\n\t\tElement Childs : %i\n\t\tElement Leaf Status : ",
           nodeHolder->level, btGetChilds(nodeHolder));
    btShowLeafStatus(nodeHolder);
    printf("\n\n");
}
void btShowTreeMetaData(btAddr rootHolder)
{
    printf("TREE DETAIL INFORMATION\n\tTree Root : %c\n\tTree Depth : %i\n\tTree Elements : %i\n\tTree Leaves : %i\n\n",
           rootHolder->info, btGetDepth(rootHolder), btGetElements(rootHolder), btGetLeaves(rootHolder));
}
void btShowElsMetaData(btAddr nodeHolder)
{
    if (nodeHolder == NULL)
    {
        return;
    }
    btShowElsMetaData(nodeHolder->ls);
    btShowElMetaData(nodeHolder);
    btShowElsMetaData(nodeHolder->rs);
}
//=============================================================================

/*================== MODUL CONVERT NON-BINARY-TREE TO BINARY-TREE==========================*/
btAddr NbtTreeConvertToBtTree(nbtAddr root)
{
    if (!root)
    {
        return NULL;
    }

    btAddr binaryRoot = CreateBtNode(root->info);
    if (root->fs)
    {
        binaryRoot->ls = NbtTreeConvertToBtTree(root->fs);
        binaryRoot->ls->pr = binaryRoot; // Set parent for the left subtree
    }
    if (root->nb)
    {
        binaryRoot->rs = NbtTreeConvertToBtTree(root->nb);
        binaryRoot->rs->pr = binaryRoot; // Set parent for the right subtree
    }
    return binaryRoot;
}

// Fungsi untuk membuat node binary tree baru
btAddr CreateBtNode(infoType info)
{
    btAddr newNode = (btAddr)malloc(sizeof(btType));
    newNode->info = info;
    newNode->ls = newNode->rs = newNode->pr = NULL;
    newNode->level = 0;
    return newNode;
}
/*================== END MODUL CONVERT NON-BINARY-TREE TO BINARY-TREE==========================*/

/*================== MODUL CONVERSION BINARY-TREE TO BINARY-SEARCH-TREE===========================*/
void BtTreeConvertToBstTree(btAddr root)
{
    if (root == NULL)
        return;

    int n = CountNodes(root);

    char *arr = (char *)malloc(n * sizeof(char));
    int i = 0;
    StoreInorder(root, arr, &i);

    qsort(arr, n, sizeof(arr[0]), Compare);

    i = 0;
    ArrayToBST(arr, root, &i);

    free(arr);
}

int CountNodes(btAddr root)
{
    if (root == NULL)
        return 0;
    return CountNodes(root->ls) + CountNodes(root->rs) + 1;
}

void StoreInorder(btAddr node, char inorder[], int *index_ptr)
{
    if (node == NULL)
        return;

    StoreInorder(node->ls, inorder, index_ptr);

    inorder[*index_ptr] = node->info;
    (*index_ptr)++;

    StoreInorder(node->rs, inorder, index_ptr);
}

int Compare(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}

void ArrayToBST(char *arr, btAddr root, int *index_ptr)
{
    if (root == NULL)
        return;

    ArrayToBST(arr, root->ls, index_ptr);

    root->info = arr[*index_ptr];
    (*index_ptr)++;

    ArrayToBST(arr, root->rs, index_ptr);
}

// void PrintInorder(btAddr node) {
//     if (node == NULL)
//         return;

//     /* first recur on ls child */
//     PrintInorder(node->ls);

//     /* then print the info of node */
//     printf("%c ", node->info);

//     /* now recur on rs child */
//     PrintInorder(node->rs);
// }

// Fungsi untuk menduplikasi binary tree
btAddr DuplicateBtTree(btAddr root) {
    if (root == NULL) {
        return NULL;
    }
    
    btAddr newRoot = CreateBtNode(root->info);
    if (newRoot == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }
    
    newRoot->ls = DuplicateBtTree(root->ls);
    newRoot->rs = DuplicateBtTree(root->rs);
    
    // Atur pointer parent (pr) untuk node anak
    if (newRoot->ls != NULL) {
        newRoot->ls->pr = newRoot;
    }
    if (newRoot->rs != NULL) {
        newRoot->rs->pr = newRoot;
    }
    
    return newRoot;
}
/*================== END MODUL CONVERSION BINARY-TREE TO BINARY-SEARCH-TREE===========================*/
