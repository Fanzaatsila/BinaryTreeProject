#include "ui.h"

#include <conio.h>
#include <windows.h>
#include <stdio.h>

void printAppHeader(){
	system("cls");
	printf("\n");
	printf(" ===================================================================================" );
	printf("===================================================================================\n");
	printf("     TREE TRANSFORMATION TREE TRANSFORMATION TREE TRANSFORMATION TREE TRANSFORMATION TREE");
	printf("TRANSFORMATION TREE TRANSFORMATION TREE TRANSFORMATION TREE TRANSFORMATION     \n");
	printf(" ===================================================================================");
	printf("===================================================================================\n");
}
void printAppMenu(){
	printf(" MAIN MENU\n");
	printf("\t1. CREATE TREE\n");
	printf("\t2. EDIT TREE\n");
	printf("\t3. DELETE TREE\n");
	printf("\t4. CONVERT TREE\n");
	printf("\t5. SAVE TREE\n");
	printf("\t6. EDUCATION\n");
	printf("\t0. EXIT\n");
	printf(" ===================================================================================");
	printf("===================================================================================\n");
}
void printAppCreateTree(){
	printf(" CREATE TREE MENU\n");
	printf("\t1. NEW TREE\n");
	printf("\t2. LOAD TREE\n");
	printf("\t0. BACK\n");
	printf(" ===================================================================================");
	printf("===================================================================================\n");
}
void userInput(char (*input)){
	printf(" YOUR RECENT SELECTION : ");
			if (*input!=' '){
				printf("%c",*input);
			}
			*input = getch();
}
void errorMsg(bool error, bool available){
	if (!available){
		printf("!!! opsi tersebut hanya bisa diakses jika tree sudah terbentuk, silahkan buat tree terlebih dahulu pada opsi 1 !!!\n\n");
	}
	if (error){
		printf("!!! input user tidak valid, silahkan input kembali dengan input yang valid !!!\n\n");
	}
}
void printAppConvertTree(){
	printf(" CONVERT TREE MENU\n");
	printf("\t1. SHOW TREE\n");
	printf("\t2. SHOW DETAIL ELEMENTS\n");
	printf("\t0. BACK\n");
	printf(" ===================================================================================");
	printf("===================================================================================\n");
}
void printAppEdu(){
	printf(" EDUCATION MENU\n");
	printf("\t1. HOW CREATE NB-TREE WORKS\n");
	printf("\t2. HOW NB-TREE TO B-TREE CONVERTION WORKS\n");
	printf("\t3. HOW B-TREE TO BS-TREE CONVERTION WORKS\n");
	printf("\t4. HOW BS-TREE TO AVL-TREE CONVERTION WORKS\n");
	printf("\t0. BACK\n");
	printf(" ===================================================================================");
	printf("===================================================================================\n");
}

void printAppEditTree(){
    printf(" EDIT TREE MENU\n");
    printf("\t1. EDIT NODE\n");
	printf("\t2. ADD DATA\n"); 
    printf("\t0. BACK\n");
    printf(" ===================================================================================");
    printf("===================================================================================\n");
}

void printAppDeleteTree() {
    printf(" DELETE TREE MENU\n");
    printf("\t1. DELETE NODE\n");
    printf("\t2. DELETE SUBTREE\n");
    printf("\t0. BACK\n");
    printf(" ===================================================================================");
    printf("===================================================================================\n");
}

