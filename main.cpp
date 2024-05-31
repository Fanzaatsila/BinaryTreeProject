#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include "ui.h"
#include "header.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char **argv) {
	//============================================ KAMUS DATA GLOBAL ============================================
	int i, maxLvl=0;
	bool appCon = true;
	bool menuCon = false, createCon = false, editCon = false, delCon = false, convertCon = false, saveCon = false, eduCon = false;
	char inUser = ' ';
	bool isError;
	bool isAvailable = true; // ini tipe datanya masih dummy, nantinya ini tipe datanya pointer of nbTree
	bool cacheFilled = false;
	bool treeHolder = NULL;
	nbtAddr nbtTree = NULL;
	btAddr btTree = NULL;
	btAddr bstTree = NULL;
	printTAddr printNBT = NULL;
	printTAddr printBT = NULL;
	printTAddr printBST = NULL;
	printTAddr printAVLT = NULL;
	btAddr avlTree = NULL;

	LoadCache(&nbtTree);
	if (nbtTree != NULL) {
		cacheFilled = true; // Setel ke true jika cache telah terisi
	}
	while (appCon) {
		menuCon = true;
		while (menuCon) {
			printAppHeader();
			printAppMenu();
			errorMsg(isError, isAvailable);
			isError = false;
			isAvailable = true;
			userInput(&inUser);
			switch (inUser) {
				case '1': {
					createCon = true;
					while (createCon) {
						printAppHeader();
						printAppCreateTree();
						errorMsg(isError, isAvailable);
						userInput(&inUser);
						switch (inUser) {
							case '1': {
								numInsertedNodesCls();
								if (cacheFilled) {
									ClearCache("cache.txt");
								}
								NbtCreateTree(&(nbtTree));
								if (nbtTree!=NULL)WriteCache(nbtTree, "cache.txt");
								break;
							}
							case '2': {
								if (cacheFilled) {
									ClearCache("cache.txt");
								}
								LoadTree(&nbtTree);
//						printf("checked before crash");
								if (nbtTree!=NULL)WriteCache(nbtTree, "cache.txt");
								system("pause");
								break;
							}
							case '0': {
								createCon = false;
								break;
							}
							default: {
								isError = true;
								break;
							}
						}
					}
					break;
				}
				case '2': {
					if (nbtTree != NULL) {
						editCon = true;
						while (editCon) {
							printAppHeader();
							printAppEditTree();
							errorMsg(isError, isAvailable);
							userInput(&inUser);
							switch (inUser) {
								case '1': {
									infoType oldInfo, newInfo;
									getEditInfo(nbtTree, &oldInfo, &newInfo);
									editNode(nbtTree, oldInfo, newInfo);
									system("pause");
									break;
								}
								case '2': {
									getAddInfo(nbtTree, nbtTree);
									system("pause");
									break;
								}
								case '0': {
									editCon = false;
									break;
								}
								default: {
									isError = true;
									break;
								}
							}
						}
					} else {
						isAvailable = false;
					}
					break;
				}
				case '3': {
					if (nbtTree != NULL) {
						delCon = true;
						while (delCon) {
							printAppHeader();
							printAppDeleteTree();
							errorMsg(isError, isAvailable);
							userInput(&inUser);
							switch (inUser) {
								case '1': {
									infoType delInfo;
									printf("\nEnter the info of the node you want to delete: ");
									scanf(" %c", &delInfo);
									// Validate if the node exists before deletion
									if (SearchNbtNode(nbtTree, delInfo) == NULL) {
										printf("Node with info '%c' not found in the tree!\n", delInfo);
									} else {
										deleteNode(&nbtTree, delInfo);
										printf("Node with info '%c' deleted successfully!\n", delInfo);
									}
									system("pause");
									break;
								}
								case '2': {
									infoType delInfo;
									printf("\nEnter the info of the parent node whose subtree you want to delete: ");
									scanf(" %c", &delInfo);
									// Validate if the parent node exists before deletion
									nbtAddr parent = SearchNbtNode(nbtTree, delInfo);
									if (parent != NULL) {
										nbDeleteSub(&(parent->fs), parent->fs); // Menghapus subtree sebelah kiri dari parent
										printf("Subtree of parent node with info '%c' deleted successfully!\n", delInfo);
									} else {
										printf("Parent node with info '%c' not found!\n", delInfo);
									}
									system("pause");
									break;
								}

								case '0': {
									delCon = false;
									break;
								}
								default: {
									isError = true;
									break;
								}
							}
						}
					} else {
						isAvailable = false;
					}
					break;
				}
				case '4': {
					if (nbtTree != NULL) {
						convertCon = true;
						if (btTree==NULL) btTree = NbtTreeConvertToBtTree(nbtTree, 0);
						if (bstTree==NULL) {
							bstTree = DuplicateBtTree(btTree);
							BtTreeConvertToBstTree(bstTree);
						}
						if (avlTree==NULL) CreateAvlTree(bstTree,&avlTree);

						if (printNBT==NULL) createNBPrintT(&printNBT,nbtTree);
						if (printBT==NULL) createBPrintT(&printBT,btTree);
						if (printBST==NULL) createBPrintT(&printBST,bstTree);
						if (printAVLT==NULL) createBPrintT(&printAVLT,avlTree);
						while (convertCon) {

							printAppHeader();
							printAppConvertTree();
							errorMsg(isError, isAvailable);
							userInput(&inUser);

							switch (inUser) {
								case '1': {
									printAppHeader();
									printf("\n~~~~~~~~~~~~~~~~~~ NB-TREE VISUALIZATION ~~~~~~~~~~~~~~~~~~\n");
									printTToString(printNBT);
									printf("Preorder Traversal\t:");
									PrintNbtPreorder(nbtTree);
									printf("\n");
									printf("Postoder Traversal\t:");
									PrintNbtPostorder(nbtTree);
									printf("\n");
									printf("Inorder Traversal\t:");
									PrintNbtInorder(nbtTree);
									printf("\n");
									printf("Levelorder Traversal\t:");
									PrintNbtLevelorder(nbtTree);
									printf("\n");
									printf("\n");
									system("pause");
									printAppHeader();
									printf("\n~~~~~~~~~~~~~~~~~~ B-TREE VISUALIZATION ~~~~~~~~~~~~~~~~~~\n");
									printTToString(printBT);
									printf("Preorder Traversal\t:");
									PrintBtPreorder(btTree);
									printf("\n");
									printf("Postoder Traversal\t:");
									PrintBtPostorder(btTree);
									printf("\n");
									printf("Inorder Traversal\t:");
									PrintBtInorder(btTree);
									printf("\n");
									printf("Levelorder Traversal\t:");
									PrintBtLevelorder(btTree);
									printf("\n");
									printf("\n");
									system("pause");
									printAppHeader();
									printf("\n~~~~~~~~~~~~~~~~~~ BST-TREE VISUALIZATION ~~~~~~~~~~~~~~~~~~\n");
									printTToString(printBST);
									printf("Preorder Traversal\t:");
									PrintBtPreorder(bstTree);
									printf("\n");
									printf("Postoder Traversal\t:");
									PrintBtPostorder(bstTree);
									printf("\n");
									printf("Inorder Traversal\t:");
									PrintBtInorder(bstTree);
									printf("\n");
									printf("Levelorder Traversal\t:");
									PrintBtLevelorder(bstTree);
									printf("\n");
									printf("\n");
									system("pause");
									printAppHeader();
									printf("\n~~~~~~~~~~~~~~~~~~ AVL-TREE VISUALIZATION ~~~~~~~~~~~~~~~~~~\n");
									printTToString(printAVLT);
									printf("Preorder Traversal\t:");
									PrintBtPreorder(avlTree);
									printf("\n");
									printf("Postoder Traversal\t:");
									PrintBtPostorder(avlTree);
									printf("\n");
									printf("Inorder Traversal\t:");
									PrintBtInorder(avlTree);
									printf("\n");
									printf("Levelorder Traversal\t:");
									PrintAvlLevelorder(avlTree);
									printf("\n");
									// printf("Levelorder Traversal\t:");PrintBtLevelorder(avlTree);printf("\n"); KARENA LEVEL TERBALIK, MAKA LEVELORDER TERBALIK
									printf("\n");
									system("pause");
									// conversion logic here
									break;
								}
								case '2': {
									printAppHeader();
									printf("\n~~~~~~~~~~~~~~~~~~ NB-TREE DETAIL INFORMATION ~~~~~~~~~~~~~~~~~~\n");
									nbtShowMetaData(nbtTree);
									system("pause");
									printAppHeader();
									printf("\n~~~~~~~~~~~~~~~~~~ B-TREE DETAIL INFORMATION ~~~~~~~~~~~~~~~~~~\n");
									btShowTreeMetaData(btTree);
									btShowElsMetaData(btTree);
									system("pause");
									printAppHeader();
									printf("\n~~~~~~~~~~~~~~~~~~ BS-TREE DETAIL INFORMATION ~~~~~~~~~~~~~~~~~~\n");
									btShowTreeMetaData(bstTree);
									btShowElsMetaData(bstTree);
									system("pause");
									printAppHeader();
									printf("\n~~~~~~~~~~~~~~~~~~ AVL-TREE DETAIL INFORMATION ~~~~~~~~~~~~~~~~~~\n");
									btShowTreeMetaData(avlTree);
									btShowElsMetaData(avlTree);
									system("pause");
									break;
								}
								case '0': {
									convertCon = false;
									break;
								}
								default: {
									isError = true;
									break;
								}
							}
						}

						printTdelSub(&printNBT,printNBT);
						printTdelSub(&printBT,printBT);
						printTdelSub(&printBST,printBST);
						printTdelSub(&printAVLT,printAVLT);
					} else {
						isAvailable = false;
					}
					break;
				}
				case '5': {
					if (nbtTree != NULL) {
						saveCon = true;
						printAppHeader();
						SaveTree(nbtTree);
						system("pause");
					} else {
						isAvailable = false;
					}
					break;
				}
				case '6': {
					if (nbtTree != NULL) {
						eduCon = true;
						while (eduCon) {
							int speed;

							printAppHeader();
							printAppEdu();
							errorMsg(isError, isAvailable);
							userInput(&inUser);
							switch (inUser) {
								case '1': {
									printf("\n\tMove Per Animation Speed (milisec):");
									scanf(" %i",&speed);
									if (speed<0) {
										speed = speed - (2*speed);
									}
									nbtCreateEdu("cache.txt",speed);
									break;
								}
								case '2': {
									printf("\n\tMove Per Animation Speed (milisec):");
									scanf(" %i",&speed);
									if (speed<0) {
										speed = speed - (2*speed);
									}
									if (btTree==NULL) btTree = NbtTreeConvertToBtTree(nbtTree, speed);
									btCreateEdu(btTree, speed,&printBT);
									break;
								}
								case '3': {
									printf("\n\tMove Per Animation Speed (milisec):");
									scanf(" %i",&speed);
									if (speed<0) {
										speed = speed - (2*speed);
									}
									if (btTree==NULL) btTree = NbtTreeConvertToBtTree(nbtTree, speed);
									if (bstTree==NULL) {
										bstTree = DuplicateBtTree(btTree);
										BtTreeConvertToBstTree(bstTree);
									}
									int n = CountNodes(btTree);
									char *arr = (char *)malloc(n * sizeof(char));
									int i = 0;
									StoreInorder(btTree, arr, &i);
									qsort(arr, n, sizeof(arr[speed]), Compare);
									system("cls");
									printf("\n CREATE IDENTICAL TREE FROM THE EXISTING B-TREE\t:\n\n");
									Sleep(speed*3);
									printf("\n\tB-TREE CLONE\t:\n\n");
									createBPrintT(&printBST, bstTree);
									printTToString(printBST);
									Sleep(speed*3);
									printf("\n STORE NODE VALUES INORDERLY\t:\n\n [");
									arrStoreEdu(btTree,speed*2);
									printf("]\n\n ");
									i = 0;
									printf("\n SORT THE NODES\t:\n\n [");
									arrSortEdu(arr, btTree, &i,speed*2);
									printf("]\n\n ");
									system("pause");
									system("cls");
									printf("\n LASTLY, CHANGE THE NODES OF THE TREE BY THE SORTED NODES THAT ARE STORED INORDERLY !\n\n");
									system("pause");
									printTdelSub(&printBST,printBST);
									btCreateEdu(bstTree, speed*2,&printBST);
									free(arr);
									// education logic here
									break;
								}
								case '4': {
									printf("\n\tMove Per Animation Speed (milisec):");
									scanf(" %i",&speed);
									if (speed<0) {
										speed = speed - (2*speed);
									}
									if (btTree==NULL) btTree = NbtTreeConvertToBtTree(nbtTree, speed);
									if (bstTree==NULL) {
										bstTree = DuplicateBtTree(btTree);
										BtTreeConvertToBstTree(bstTree);
									}
									if (avlTree!=NULL) btDeleteSub(&avlTree,avlTree);
									avlCreateEdu(bstTree,&avlTree, speed);
									// education logic here
									break;
								}
								case '0': {
									eduCon = false;
									break;
								}
								default: {
									isError = true;
									break;
								}
							}
						}
					} else {
						isAvailable = false;
					}
					break;
				}
				case '0': {
					appCon = false;
					break;
				}
				default: {
					isError = true;
					break;
				}
			}
			menuCon = false;
		}
	}

	//============================================ ============================================
	return 0;
}
