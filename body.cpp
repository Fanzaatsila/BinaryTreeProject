#include "header.h"
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
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
        newNode->level = NULL;
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
            option = getch();
            if (option == 'n')
            {
                return;
            }else if (option == 'y')
            {
                check = false;
            }else
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
void SaveTree(nbtAddr nbtTree){
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
    fclose(fp);             // menutup file
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

void LoadTree(nbtAddr (*nbtTree)){
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

/*======================== detail information nbTree ============================*/
int nbtGetDepth(nbtAddr rootHolder){
	int count;
	int total;
	nbtAddr p;
	bool resmi = true;
	count = 0;
	total = 0;
	p = rootHolder;
	while (p!=NULL){
		if (p->fs!=NULL&&resmi){
			p = p->fs;
			count = count + 1;
		}else if (p->nb!=NULL){
			p = p->nb;
			resmi = true;
		}else{
			p = p->pr;
			resmi = false;
			if (total<count){
				total = count;
			}
			count = count - 1;
		}
	}
	return total;
}

int nbtGetElements(nbtAddr rootHolder){
	int count;
	nbtAddr p;
	bool resmi = true;
	p = rootHolder;
	count = 0;
	while (p!=NULL){
		if (resmi){
			count = count+1;
		}
		if (p->fs!=NULL&&resmi){
			p = p->fs;
		}else if (p->nb!=NULL){
			p = p->nb;
			resmi = true;
		}else{
			p = p->pr;
			resmi = false;
		}
	}
	return count;
}

int nbtGetLeaves(nbtAddr rootHolder){
	int count;
	nbtAddr p;
	bool resmi = true;
	p = rootHolder;
	count = 0;
	while (p!=NULL){
		if (p->fs!=NULL&&resmi){
			p = p->fs;
		}else if (p->nb!=NULL){
			if (resmi){
				count = count + 1;
			}
			p = p->nb;
			resmi = true;
		}else{
			if (resmi){
				count = count + 1;
			}
			p = p->pr;
			resmi = false;
		}
	}
	return count;
}

int nbtGetChilds(nbtAddr nodeHolder){
	int count = 0;
	bool resmi = true;
	nbtAddr p;
	p = nodeHolder;
	if (p->fs!=NULL){
		p = p->fs;
		while (p!=NULL){
			count = count + 1;
			p = p->nb;
		}
		return count;			
	}else {
		return 0;
	}
}

void nbtShowMetaData(nbtAddr rootHolder){
	bool resmi = true;
	nbtAddr p;
	printf("TREE DETAIL INFORMATION\n\tTree Root : %c\n\tTree Depth : %i\n\tTree Elements : %i\n\tTree Leaves : %i\n\n",
	rootHolder->info,nbtGetDepth(rootHolder),nbtGetElements(rootHolder),nbtGetLeaves(rootHolder));
	
	p = rootHolder;
	while (p!=NULL){
		if (resmi){
			nbtShowElMetaData(p);
		}
		if (p->fs!=NULL&&resmi){
			p = p->fs;
		}else if (p->nb!=NULL){
			p = p->nb;
			resmi = true;
		}else{
			p = p->pr;
			resmi = false;
		}
	}
}

void nbtShowElStatus(nbtAddr nodeHolder){
	if(nodeHolder->pr==NULL){
		printf("root");
	}else{
		printf("child of %c",nodeHolder->pr->info);
	}
}

void nbtShowLeafStatus(nbtAddr nodeHolder){
	if (nodeHolder->fs==NULL){
		printf("true");
	}else{
		printf("false");
	}
}

void nbtShowElMetaData(nbtAddr nodeHolder){
	
	printf("\t'%c' DETAIL INFORMATION\n\t\tElement Status : ",nodeHolder->info);
	nbtShowElStatus(nodeHolder);
	printf("\n\t\tElement Level : %i\n\t\tElement Childs : %i\n\t\tElement Leaf Status : ",
	nodeHolder->level,nbtGetChilds(nodeHolder));
	nbtShowLeafStatus(nodeHolder);printf("\n\n");
	
}

/*======================== END detail information nbTree ============================*/
