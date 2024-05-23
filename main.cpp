#include <conio.h>
#include <windows.h>
#include <stdio.h>
#include "ui.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//============================================ KAMUS DATA GLOBAL ============================================
	bool appCon = true;
	bool menuCon = false, createCon = false, editCon = false, delCon = false, convertCon = false, saveCon = false, eduCon = false;
	char inUser = ' ';
	bool isError;
	bool isAvailable = true; //ini tipe datanya masih dummy, nantinya ini tipe datanya pointer of nbTree
	bool treeHolder = NULL;
	while (appCon){
		menuCon = true;
		while (menuCon){
			printAppHeader();
			printAppMenu();
			errorMsg(isError,isAvailable);
			isError = false;
			isAvailable = true;
			userInput(&inUser);
			switch (inUser){
				case '1':{
					createCon = true;
					while (createCon){
						printAppHeader();
						printAppCreateTree();
						errorMsg(isError,isAvailable);
						userInput(&inUser);
						switch (inUser){
							case '1':{
								
								break;
							}
							case '2':{
								
								break;
							}
							case '0':{
								createCon = false;
								break;
							}
							default:{
								isError = true;
								break;
							}
						}
					}
					
					break;
				}
				case '2':{
					if (treeHolder!=NULL){
						editCon = true;
						while (editCon){
							printAppHeader();
						}
					}else{
						isAvailable = false;
					}
					break;
				}
				case '3':{
					if (treeHolder!=NULL){
						delCon = true;
						while (delCon){
							printAppHeader();
						}
					}else{
						isAvailable = false;
					}
					break;
				}
				case '4':{
					if (treeHolder!=NULL){
						convertCon = true;
						while (convertCon){
							printAppHeader();
							printAppConvertTree();
							errorMsg(isError,isAvailable);
							userInput(&inUser);
							switch (inUser){
								case '1':{
									
									break;
								}
								case '2':{
									
									break;
								}
								case '0':{
									convertCon = false;
									break;
								}
								default:{
									isError = true;
									break;
								}
							}
						}
					}else{
						isAvailable = false;
					}
					break;
				}
				case '5':{
					if (treeHolder!=NULL){
						saveCon = true;
						while (saveCon){
							printAppHeader();
						}
					}else{
						isAvailable = false;
					}
					break;
				}
				case '6':{
					if (treeHolder!=NULL){
						eduCon = true;
						while (eduCon){
							printAppHeader();
							printAppEdu();
							errorMsg(isError,isAvailable);
							userInput(&inUser);
							switch (inUser){
								case '1':{
									
									break;
								}
								case '2':{
									
									break;
								}
								case '3':{
									
									break;
								}
								case '4':{
									
									break;
								}
								case '0':{
									eduCon = false;
									break;
								}
								default:{
									isError = true;
									break;
								}
							}
						}
					}else{
						isAvailable = false;
					}
					break;
				}
				case '0':{
					appCon = false;
					break;
				}
				default :{
					isError = true;
					break;
				}	
			}
			menuCon = false;
		}
		
	}
	
	//============================================ ============================================
	
}
