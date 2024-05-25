#include "header.h"

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

/* ======================= KONSTRUKTOR NODE ========================*/
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
    }
    return newNode;
}

void InsertNbtNode(nbtAddr *nbtRoot, nbtAddr parent, infoType info)
{
    nbtAddr newNode = CreateNbtNode(info);
    newNode->pr = parent;
    if (parent == NULL)
    {
        (*nbtRoot) = newNode;
    }
    else if (parent->fs == NULL)
    {
        parent->fs = newNode;
    }
    else
    {
        parent = parent->fs;
        while (parent->nb != NULL)
        {
            parent = parent->nb;
        }
        parent->nb = newNode;
    }
}

void NbtCreateTree(nbtAddr *nbtRoot)
{
    infoType option, parent, nama;
    boolean check;
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
            scanf(" %c", &option);
            if (option == 'n')
            {
                return;
            }else if (option == 'y')
            {
                check = false;
            }else
            {
                printf("\nKamu memasukkan pilihan yang salah, pilihlah pilihan yang disediakan");
            }
        } while (check);
        printf("Masukkan Nama Node Yang Akan Dimasukkan: ");
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