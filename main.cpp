#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include "ui.h"
#include "header.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char **argv)
{
	//============================================ KAMUS DATA GLOBAL ============================================
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

	LoadCache(&nbtTree);
	if (nbtTree != NULL)
	{
		cacheFilled = true; // Setel ke true jika cache telah terisi
	}
	while (appCon)
	{
		menuCon = true;
		while (menuCon)
		{
			printAppHeader();
			printAppMenu();
			errorMsg(isError, isAvailable);
			isError = false;
			isAvailable = true;
			userInput(&inUser);
			switch (inUser)
			{
			case '1':
			{
				createCon = true;
				while (createCon)
				{
					printAppHeader();
					printAppCreateTree();
					errorMsg(isError, isAvailable);
					userInput(&inUser);
					switch (inUser)
					{
					case '1':
					{
						if (cacheFilled)
						{							 // Periksa apakah cache telah terisi
							ClearCache("cache.txt"); // Kosongkan cache jika telah terisi
							cacheFilled = false;	 // Setel ke false setelah mengosongkan cache
						}
						NbtCreateTree(&(nbtTree));
						break;
					}
					case '2':
					{
						LoadTree(&nbtTree);
						system("pause");
						break;
					}
					case '0':
					{
						createCon = false;
						break;
					}
					default:
					{
						isError = true;
						break;
					}
					}
				}
				break;
			}
			case '2':
			{
				if (nbtTree != NULL)
				{
					editCon = true;
					while (editCon)
					{
						printAppHeader();
						printAppEditTree();
						errorMsg(isError, isAvailable);
						userInput(&inUser);
						switch (inUser)
						{
						case '1':
						{
							infoType oldInfo, newInfo;
							getEditInfo(nbtTree, &oldInfo, &newInfo);
							editNode(nbtTree, oldInfo, newInfo);
							system("pause");
							break;
						}
						case '2':
						{
							getAddInfo(nbtTree, nbtTree);
							system("pause");
							break;
						}
						case '0':
						{
							editCon = false;
							break;
						}
						default:
						{
							isError = true;
							break;
						}
						}
					}
				}
				else
				{
					isAvailable = false;
					printf("Tree is not available!\n");
					system("pause");
				}
				break;
			}
			case '3':
			{
				if (nbtTree != NULL)
				{
					delCon = true;
					while (delCon)
					{
						printAppHeader();
						printAppDeleteTree();
						errorMsg(isError, isAvailable);
						userInput(&inUser);
						switch (inUser)
						{
						case '1':
						{
							infoType delInfo;
							printf("\nEnter the info of the node you want to delete: ");
							scanf(" %c", &delInfo);
							// Validate if the node exists before deletion
							if (SearchNbtNode(nbtTree, delInfo) == NULL)
							{
								printf("Node with info '%c' not found in the tree!\n", delInfo);
							}
							else
							{
								deleteNode(&nbtTree, delInfo);
								printf("Node with info '%c' deleted successfully!\n", delInfo);
							}
							system("pause");
							break;
						}
						case '2':
						{
							infoType delInfo;
							printf("\nEnter the info of the parent node whose subtree you want to delete: ");
							scanf(" %c", &delInfo);
							// Validate if the parent node exists before deletion
							nbtAddr parent = SearchNbtNode(nbtTree, delInfo);
							if (parent != NULL)
							{
								nbDeleteSub(&(parent->fs), parent->fs); // Menghapus subtree sebelah kiri dari parent
								printf("Subtree of parent node with info '%c' deleted successfully!\n", delInfo);
							}
							else
							{
								printf("Parent node with info '%c' not found!\n", delInfo);
							}
							system("pause");
							break;
						}

						case '0':
						{
							delCon = false;
							break;
						}
						default:
						{
							isError = true;
							break;
						}
						}
					}
				}
				else
				{
					isAvailable = false;
				}
				break;
			}
			case '4':
			{
				if (nbtTree != NULL)
				{
					convertCon = true;
					btTree = NbtTreeConvertToBtTree(nbtTree);
					bstTree = DuplicateBtTree(btTree);
					BtTreeConvertToBstTree(bstTree);
					

					createNBPrintT(&printNBT,nbtTree);
					createBPrintT(&printBT,btTree);
					createBPrintT(&printBST,bstTree);
					while (convertCon)
					{
						
						printAppHeader();
						printAppConvertTree();
						errorMsg(isError, isAvailable);
						userInput(&inUser);
						switch (inUser)
						{
						case '1':
						{
							printAppHeader();
							printf("\n~~~~~~~~~~~~~~~~~~ NB-TREE VISUALIZATION ~~~~~~~~~~~~~~~~~~\n");
							printTToString(printNBT);
							system("pause");
							printAppHeader();
							printf("\n~~~~~~~~~~~~~~~~~~ B-TREE VISUALIZATION ~~~~~~~~~~~~~~~~~~\n");
							printTToString(printBT);
							system("pause");
							printAppHeader();
							printf("\n~~~~~~~~~~~~~~~~~~ BST-TREE VISUALIZATION ~~~~~~~~~~~~~~~~~~\n");
							printTToString(printBST);
							system("pause");
							// conversion logic here
							break;
						}
						case '2':
						{
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
							break;
						}
						case '0':
						{
							convertCon = false;
							break;
						}
						default:
						{
							isError = true;
							break;
						}
						}
					}
				}
				else
				{
					isAvailable = false;
				}
				break;
			}
			case '5':
			{
				if (nbtTree != NULL)
				{
					saveCon = true;
					printAppHeader();
					SaveTree(nbtTree);
					system("pause");
				}
				else
				{
					isAvailable = false;
					printf("Tree is not available!\n");
					system("pause");
				}
				break;
			}
			case '6':
			{
				if (nbtTree != NULL)
				{
					eduCon = true;
					while (eduCon)
					{
						printAppHeader();
						printAppEdu();
						errorMsg(isError, isAvailable);
						userInput(&inUser);
						switch (inUser)
						{
						case '1':
						{
							// education logic here
							break;
						}
						case '2':
						{
							// education logic here
							break;
						}
						case '3':
						{
							// education logic here
							break;
						}
						case '4':
						{
							// education logic here
							break;
						}
						case '0':
						{
							eduCon = false;
							break;
						}
						default:
						{
							isError = true;
							break;
						}
						}
					}
				}
				else
				{
					isAvailable = false;
				}
				break;
			}
			case '0':
			{
				appCon = false;
				break;
			}
			default:
			{
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
