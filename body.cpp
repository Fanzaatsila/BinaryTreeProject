#include "header.h"
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

/* ======================= EDUCATION CREATE TREE ========================*/
int nbtEduCreateTHeader() {
    system("cls");
    printf("<<<<<<<<<<<<<<<<<< CREATING A TREE >>>>>>>>>>>>>>>>>>\n");
    printf("\n");
}

int nbtEduCreateT(int time, char root) {
	nbtEduCreateTHeader();
	printf("\t[root]                   \n");
	printf("\n");
	Sleep(time*2);
	nbtEduCreateTHeader();
	printf("\t[root] -                 \n");
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t[root] --                \n");
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t[root] -->               \n");
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t[root] --> NULL          \n");
	printf("\n");
	Sleep(time*2);
	//alokasi node
	nbtEduCreateTHeader();
	printf("\t[root] --> NULL          \n");
	printf("\t                         \n");
	printf("\t[nodeMaker]              \n");
	printf("\n");
	Sleep(time*2);
	nbtEduCreateTHeader();
	printf("\t[root] --> NULL          \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] -            \n");
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t[root] --> NULL          \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --           \n");
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t[root] --> NULL          \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] -->          \n");
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t[root] --> NULL          \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --> ('%c')   \n",root);
	printf("\n");
	Sleep(time*2);
	//penyambungan node
	nbtEduCreateTHeader();
	printf("\t[root]                   \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --> ('%c')   \n",root);
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t[root]                   \n");
	printf("\t                         \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --> ('%c')   \n",root);
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t[root]                   \n");
	printf("\t                         \n");
	printf("\t                         \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --> ('%c')   \n",root);
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t   [root]                \n");
	printf("\t                         \n");
	printf("\t                         \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --> ('%c')   \n",root);
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t      [root]             \n");
	printf("\t                         \n");
	printf("\t                         \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --> ('%c')   \n",root);
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t         [root]          \n");
	printf("\t                         \n");
	printf("\t                         \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --> ('%c')   \n",root);
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t             [root]      \n");
	printf("\t                         \n");
	printf("\t                         \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --> ('%c')   \n",root);
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t                [root]   \n");
	printf("\t                         \n");
	printf("\t                         \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --> ('%c')   \n",root);
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t                [root]   \n");
	printf("\t                  |      \n");
	printf("\t                         \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --> ('%c')   \n",root);
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t                [root]   \n");
	printf("\t                  |      \n");
	printf("\t                  |      \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --> ('%c')   \n",root);
	Sleep(time);
	nbtEduCreateTHeader();
	printf("\t                [root]   \n");
	printf("\t                  |      \n");
	printf("\t                  |      \n");
	printf("\t                  V      \n");
	printf("\t[nodeMaker] --> ('%c')   \n",root);
	printf("\n");
	Sleep(time*2);
	//result
	nbtEduCreateTHeader();
	printf("\t         [root]          \n");
	printf("\t           |             \n");
	printf("\t           |             \n");
	printf("\t           V             \n");
	printf("\t         ('%c')          \n",root);
	printf("\n");
	Sleep(time*2);
}

int nbtEduInsFsHeader() {
	system("cls");
	printf("<<<<<<<<<<<<<<<<<< FIRST SON INSERTION >>>>>>>>>>>>>>>>>>\n");
	printf("\n");
}

int nbtEduInsFs(int time, char fs, char pr) {
	nbtEduInsFsHeader();
	printf("\t ...                      \n");
	printf("\t  |                       \n");
	printf("\t  V                       \n");
	printf("\t('%c') --> ...              \n",pr);
	printf("\t  |                       \n");
	printf("\t  V                       \n");
	printf("\t NULL                     \n");
	Sleep(time);
	Sleep(time);

	nbtEduInsFsHeader();
	printf("\t[nodeMaker]              \n");
	printf("\t                         \n");
	printf("\t ...                      \n");
	printf("\t  |                       \n");
	printf("\t  V                       \n");
	printf("\t('%c') --> ...              \n",pr);
	printf("\t  |                       \n");
	printf("\t  V                       \n");
	printf("\t NULL                     \n");
	Sleep(time);
	Sleep(time);

	nbtEduInsFsHeader();
	printf("\t[nodeMaker] -            \n");
	printf("\t                         \n");
	printf("\t ...                      \n");
	printf("\t  |                       \n");
	printf("\t  V                       \n");
	printf("\t('%c') --> ...              \n",pr);
	printf("\t  |                       \n");
	printf("\t  V                       \n");
	printf("\t NULL                     \n");
	Sleep(time);
	nbtEduInsFsHeader();
	printf("\t[nodeMaker] --           \n");
	printf("\t                         \n");
	printf("\t ...                      \n");
	printf("\t  |                       \n");
	printf("\t  V                       \n");
	printf("\t('%c') --> ...              \n",pr);
	printf("\t  |                       \n");
	printf("\t  V                       \n");
	printf("\t NULL                     \n");
	Sleep(time);
	nbtEduInsFsHeader();
	printf("\t[nodeMaker] -->          \n");
	printf("\t                         \n");
	printf("\t ...                      \n");
	printf("\t  |                       \n");
	printf("\t  V                       \n");
	printf("\t('%c') --> ...              \n",pr);
	printf("\t  |                       \n");
	printf("\t  V                       \n");
	printf("\t NULL                     \n");
	Sleep(time);
	nbtEduInsFsHeader();
	printf("\t[nodeMaker] --> ('%c')      \n",fs);
	printf("\t                         \n");
	printf("\t ...                      \n");
	printf("\t  |                       \n");
	printf("\t  V                       \n");
	printf("\t('%c') --> ...              \n",pr);
	printf("\t  |                       \n");
	printf("\t  V                       \n");
	printf("\t NULL                     \n");
	Sleep(time);
	Sleep(time);

	nbtEduInsFsHeader();
	printf("\t[searcher]               \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --> ('%c')      \n",fs);
	printf("\t                         \n");
	printf("\t ...                      \n");
	printf("\t  |                       \n");
	printf("\t  V                       \n");
	printf("\t('%c') --> ...              \n",pr);
	printf("\t  |                       \n");
	printf("\t  V                       \n");
	printf("\t NULL                     \n");
	Sleep(time);
	nbtEduInsFsHeader();
	printf("\t[searcher]               \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --> ('%c')      \n",fs);
	printf("\t                         \n");
	printf("\t      ...                      \n");
	printf("\t       |                       \n");
	printf("\t       V                       \n");
	printf("\t     ('%c') --> ...              \n",pr);
	printf("\t       |                       \n");
	printf("\t       V                       \n");
	printf("\t      NULL                     \n");
	Sleep(time);
	nbtEduInsFsHeader();
	printf("\t[searcher]               \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --> ('%c')      \n",fs);
	printf("\t                         \n");
	printf("\t           ...                      \n");
	printf("\t            |                       \n");
	printf("\t            V                       \n");
	printf("\t          ('%c') --> ...              \n",pr);
	printf("\t            |                       \n");
	printf("\t            V                       \n");
	printf("\t           NULL                     \n");
	Sleep(time);
	nbtEduInsFsHeader();
	printf("\t[searcher]               \n");
	printf("\t                         \n");
	printf("\t[nodeMaker] --> ('%c')      \n",fs);
	printf("\t                         \n");
	printf("\t                ...                      \n");
	printf("\t                 |                       \n");
	printf("\t                 V                       \n");
	printf("\t               ('%c') --> ...              \n",pr);
	printf("\t                 |                       \n");
	printf("\t                 V                       \n");
	printf("\t                NULL                     \n");
	Sleep(time);
	Sleep(time);

	nbtEduInsFsHeader();
	printf("\t[nodeMaker] --> ('%c')           \n",fs);
	printf("\t                              \n");
	printf("\t [searcher]     ...            \n");
	printf("\t                 |             \n");
	printf("\t                 V             \n");
	printf("\t               ('%c') --> ...   \n",pr);
	printf("\t                 |             \n");
	printf("\t                 V             \n");
	printf("\t                NULL           \n");
	Sleep(time);
	nbtEduInsFsHeader();
	printf("\t[nodeMaker] --> ('%c')           \n",fs);
	printf("\t                              \n");
	printf("\t [searcher] -   ...            \n");
	printf("\t                 |             \n");
	printf("\t                 V             \n");
	printf("\t               ('%c') --> ...   \n",pr);
	printf("\t                 |             \n");
	printf("\t                 V             \n");
	printf("\t                NULL           \n");
	Sleep(time);
	nbtEduInsFsHeader();
	printf("\t[nodeMaker] --> ('%c')           \n",fs);
	printf("\t                              \n");
	printf("\t [searcher] --  ...            \n");
	printf("\t                 |             \n");
	printf("\t                 V             \n");
	printf("\t               ('%c') --> ...   \n",pr);
	printf("\t                 |             \n");
	printf("\t                 V             \n");
	printf("\t                NULL           \n");
	Sleep(time);
	nbtEduInsFsHeader();
	printf("\t[nodeMaker] --> ('%c')           \n",fs);
	printf("\t                              \n");
	printf("\t [searcher] --> ...            \n");
	printf("\t                 |             \n");
	printf("\t                 V             \n");
	printf("\t               ('%c') --> ...   \n",pr);
	printf("\t                 |             \n");
	printf("\t                 V             \n");
	printf("\t                NULL           \n");
	Sleep(time);
	nbtEduInsFsHeader();
	printf("\t[nodeMaker] --> ('%c')           \n",fs);
	printf("\t                              \n");
	printf("\t                ...            \n");
	printf("\t                 |             \n");
	printf("\t                 V             \n");
	printf("\t[searcher] --> ('%c') --> ...   \n",pr);
	printf("\t                 |             \n");
	printf("\t                 V             \n");
	printf("\t                NULL           \n");
	Sleep(time);
	Sleep(time);

	nbtEduInsFsHeader();
	printf("\t                 ...           \n");
	printf("\t                  |            \n");
	printf("\t                  V            \n");
	printf("\t [searcher] --> ('%c') --> ...  \n",pr);
	printf("\t                  |            \n");
	printf("\t                  V            \n");
	printf("\t   [checker] --> NULL          \n");
	printf("\t                              \n");
	printf("\t                              \n");
	printf("\t[nodeMaker] --> ('%c')           \n",fs);
	Sleep(time);
	Sleep(time);
	Sleep(time);
	nbtEduInsFsHeader();
	printf("\t                 ...           \n");
	printf("\t                  |            \n");
	printf("\t                  V            \n");
	printf("\t [searcher] --> ('%c') --> ...  \n",pr);
	printf("\t                  |            \n");
	printf("\t                  |            \n");
	printf("\t                              \n");
	printf("\t                              \n");
	printf("\t                              \n");
	printf("\t[nodeMaker] --> ('%c')           \n",fs);
	Sleep(time);
	nbtEduInsFsHeader();
	printf("\t                 ...           \n");
	printf("\t                  |            \n");
	printf("\t                  V            \n");
	printf("\t [searcher] --> ('%c') --> ...  \n",pr);
	printf("\t                  |            \n");
	printf("\t                  |            \n");
	printf("\t                  |            \n");
	printf("\t                              \n");
	printf("\t                              \n");
	printf("\t[nodeMaker] --> ('%c')           \n",fs);
	Sleep(time);
	nbtEduInsFsHeader();
	printf("\t                 ...           \n");
	printf("\t                  |            \n");
	printf("\t                  V            \n");
	printf("\t [searcher] --> ('%c') --> ...  \n",pr);
	printf("\t                  |            \n");
	printf("\t                  |            \n");
	printf("\t                  |            \n");
	printf("\t                  |            \n");
	printf("\t                              \n");
	printf("\t[nodeMaker] --> ('%c')           \n",fs);
	Sleep(time);
	nbtEduInsFsHeader();
	printf("\t                 ...           \n");
	printf("\t                  |            \n");
	printf("\t                  V            \n");
	printf("\t [searcher] --> ('%c') --> ...  \n",pr);
	printf("\t                  |            \n");
	printf("\t                  |            \n");
	printf("\t                  |            \n");
	printf("\t                  |            \n");
	printf("\t                  V            \n");
	printf("\t[nodeMaker] --> ('%c')           \n",fs);
	Sleep(time);
	Sleep(time);

	nbtEduInsFsHeader();
	printf("\t ...                           \n");
	printf("\t  |                            \n");
	printf("\t  V                            \n");
	printf("\t('%c') --> ...                  \n",pr);
	printf("\t  |                            \n");
	printf("\t  V                            \n");
	printf("\t('%c')                           \n",fs);
	Sleep(time);
	Sleep(time);
}

int nbtEduInsNbHeader() {
	system("cls");
	printf("<<<<<<<<<<<<<<<<<< NEXT BROTHER INSERTION >>>>>>>>>>>>>>>>>>\n");
	printf("\n");
}
int nbtEduInsNb(int time, char nb, char pr) {

	nbtEduInsNbHeader();
	printf("\t ...\n");
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t('%c') --> ...\n",pr);
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t(...) --> NULL\n");
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t ...\n");
	Sleep(time);
	Sleep(time);

	nbtEduInsNbHeader();
	printf("\t ...\n");
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t('%c') --> ...\n",pr);
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t(...) --> NULL\n");
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t ...\n");
	printf("\t\n");
	printf("\t[nodeMaker]\n");
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t ...\n");
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t('%c') --> ...\n",pr);
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t(...) --> NULL\n");
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] -\n");
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t ...\n");
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t('%c') --> ...\n",pr);
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t(...) --> NULL\n");
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --\n");
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t ...\n");
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t('%c') --> ...\n",pr);
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t(...) --> NULL\n");
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> \n");
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t ...\n");
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t('%c') --> ...\n",pr);
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t(...) --> NULL\n");
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	Sleep(time);

	nbtEduInsNbHeader();
	printf("\t[searcher]\n");
	printf("\t\n");
	printf("\t ...\n");
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t('%c') --> ...\n",pr);
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t(...) --> NULL\n");
	printf("\t  |\n");
	printf("\t  V\n");
	printf("\t ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t[searcher]\n");
	printf("\t\n");
	printf("\t      ...\n");
	printf("\t       |\n");
	printf("\t       V\n");
	printf("\t     ('%c') --> ...\n",pr);
	printf("\t       |\n");
	printf("\t       V\n");
	printf("\t     (...) --> NULL\n");
	printf("\t       |\n");
	printf("\t       V\n");
	printf("\t      ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t[searcher]\n");
	printf("\t\n");
	printf("\t           ...\n");
	printf("\t            |\n");
	printf("\t            V\n");
	printf("\t          ('%c') --> ...\n",pr);
	printf("\t            |\n");
	printf("\t            V\n");
	printf("\t          (...) --> NULL\n");
	printf("\t            |\n");
	printf("\t            V\n");
	printf("\t           ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t[searcher]\n");
	printf("\t\n");
	printf("\t                ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t               ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t               (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	Sleep(time);

	nbtEduInsNbHeader();
	printf("\t[searcher]      ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t               ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t               (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t[searcher] -    ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t               ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t               (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t[searcher] --   ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t               ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t               (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t[searcher] -->  ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t               ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t               (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t                ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t[searcher] --> ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t               (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t                ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t[searcher] --> ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t [checker] --> (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	Sleep(time);
	Sleep(time);

	nbtEduInsNbHeader();
	printf("\t                ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t[searcher] --> ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t   [pTrav]     (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t                ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t[searcher] --> ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t   [pTrav] -   (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t                ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t[searcher] --> ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t   [pTrav] --  (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t                ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t[searcher] --> ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t   [pTrav] --> (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...\n");
	printf("\t\n");
	printf("\t[nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t                ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t[searcher] --> ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t   [pTrav] --> (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...\n");
	printf("\t\n");
	printf("\t     [nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t                ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t[searcher] --> ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t   [pTrav] --> (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...\n");
	printf("\t\n");
	printf("\t         [nodeMaker] --> ('%c')\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t                ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t[searcher] --> ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t   [pTrav] --> (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...\n");
	printf("\t\n");
	printf("\t                         ('%c') <-- [nodeMaker]\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t                ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t[searcher] --> ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t   [pTrav] --> (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...\n");
	printf("\t                         ('%c') <-- [nodeMaker]\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t                ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t[searcher] --> ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t   [pTrav] --> (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t                ...      ('%c') <-- [nodeMaker]\n",nb);
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t                ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t[searcher] --> ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t   [pTrav] --> (...) --> NULL\n");
	printf("\t                 |\n");
	printf("\t                 V       ('%c') <-- [nodeMaker]\n",nb);
	printf("\t                ...  \n");
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t                ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t[searcher] --> ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t   [pTrav] --> (...) --> NULL\n");
	printf("\t                 |       ('%c') <-- [nodeMaker]\n",nb);
	printf("\t                 V \n");
	printf("\t                ...\n");
	Sleep(time);
	nbtEduInsNbHeader();
	printf("\t                ...\n");
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t[searcher] --> ('%c') --> ...\n",pr);
	printf("\t                 |\n");
	printf("\t                 V\n");
	printf("\t   [pTrav] --> (...) --> ('%c') <-- [nodeMaker]\n",nb);
	printf("\t                 |   \n");
	printf("\t                 V \n");
	printf("\t                ...\n");
	Sleep(time);
	Sleep(time);

	nbtEduInsNbHeader();
	printf("\t  ...\n");
	printf("\t   |\n");
	printf("\t   V\n");
	printf("\t ('%c') --> ...\n",pr);
	printf("\t   |\n");
	printf("\t   V\n");
	printf("\t (...) --> ('%c') \n",nb);
	printf("\t   |   \n");
	printf("\t   V \n");
	printf("\t  ...\n");
	Sleep(time);
	Sleep(time);
}

char nbtCreateEdu(const char *filename) {
    nbtAddr nbtEdu = NULL;
    printTAddr printEdu;
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Tidak ada cache yang ditemukan\n");
        return '0';
    }
    char parent, node;
    while (fscanf(fp, "(%c, %c) ", &parent, &node) != EOF) {
        printEdu = NULL;
        if (parent == '0') {
            nbtEduCreateT(0, node);
        } else if (SearchNbtNode(nbtEdu, parent)->fs == NULL){
            nbtEduInsFs(0, node, parent);
        } else {
            nbtEduInsNb(0, node, parent);
        }
        InsertNbtNode(&nbtEdu, SearchNbtNode(nbtEdu, parent), node);
        createNBPrintT(&printEdu, nbtEdu);
        printf("\n\tRESULT :\n\n");
        printTToString(printEdu);
        system("pause");
    }
    fclose(fp);
    return '0';
}
/* ======================= END EDUCATION CREATE TREE ========================*/

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
//    WriteCache(*nbtRoot, "cache.txt");
}

void NbtCreateTree(nbtAddr *nbtRoot)
{
    infoType option, parent, nama;
    boolean check;

    nbDeleteSub(nbtRoot, *nbtRoot);
//    char root = nbtCreateEdu("cache.txt");
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
    fprintf(fp," ");
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

/* ======================= SAVE LOAD TREE TO FILE ========================*/

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

//===================================== modul detail information bTree ========================================
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
            return lDepth + 1;
        }
        else
        {
            return rDepth + 1;
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

int btGetLeaves(btAddr rootHolder){//geeksforgeeks algorithm
	
	if (rootHolder==NULL){
		return 0;
	}
	if (!rootHolder->ls&&!rootHolder->rs){
		return 1;
	}else{
		return btGetLeaves(rootHolder->ls) + btGetLeaves(rootHolder->rs);
	}
}

int btGetChilds(btAddr nodeHolder){//geeksforgeeks algorithm
	int count = 0;
	
	if (nodeHolder==NULL) return 0;
	if (nodeHolder->ls) count = count + 1;
	if (nodeHolder->rs) count = count + 1;
	return count;
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

void btShowLeafStatus(btAddr nodeHolder){
	if (nodeHolder->ls!=NULL || nodeHolder->rs!=NULL){
		printf("false");
	}else printf("true");
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
    btShowElMetaData(nodeHolder);
    btShowElsMetaData(nodeHolder->ls);
    btShowElsMetaData(nodeHolder->rs);
}
//===========================================================================================================

/*================== MODUL CONVERT NON-BINARY-TREE TO BINARY-TREE==========================*/
btAddr NbtTreeConvertToBtTree(nbtAddr root, int currentLevel) {
    if (!root) {
        return NULL;
    }

    btAddr binaryRoot = CreateBtNode(root->info, currentLevel);
    if (root->fs) {
        binaryRoot->ls = NbtTreeConvertToBtTree(root->fs, currentLevel + 1);
        binaryRoot->ls->pr = binaryRoot;  // Set parent for the left subtree
    }
    if (root->nb) {
        binaryRoot->rs = NbtTreeConvertToBtTree(root->nb, currentLevel + 1);
        binaryRoot->rs->pr = binaryRoot;  // Set parent for the right subtree
    }
    return binaryRoot;
}

// Fungsi untuk membuat node binary tree baru
btAddr CreateBtNode(infoType info, int level) {
    btAddr newNode = (btAddr)malloc(sizeof(btType));
    newNode->info = info;
    newNode->ls = newNode->rs = newNode->pr = NULL;
    newNode->level = level;
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

// Fungsi untuk menduplikasi binary tree
btAddr DuplicateBtTree(btAddr root)
{
    if (root == NULL)
    {
        return NULL;
    }

    btAddr newRoot = CreateBtNode(root->info, root->level);
    if (newRoot == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }

    newRoot->ls = DuplicateBtTree(root->ls);
    newRoot->rs = DuplicateBtTree(root->rs);

    // Atur pointer parent (pr) untuk node anak
    if (newRoot->ls != NULL)
    {
        newRoot->ls->pr = newRoot;
    }
    if (newRoot->rs != NULL)
    {
        newRoot->rs->pr = newRoot;
    }

    return newRoot;
}
/*================== END MODUL CONVERSION BINARY-TREE TO BINARY-SEARCH-TREE===========================*/

//========================================= printTree preOrderly =============================================
void printTAllocBlank(printTAddr(*nodeMaker))
{
    (*nodeMaker) = NULL;
    (*nodeMaker) = (printTAddr)malloc(sizeof(printTType));
    if ((*nodeMaker) != NULL)
    {
        (*nodeMaker)->info = ' ';
        (*nodeMaker)->row = 0;
        (*nodeMaker)->column = 0;
        (*nodeMaker)->next = NULL;
    }
}
void printTAllocVert(printTAddr(*nodeMaker))
{
    (*nodeMaker) = NULL;
    (*nodeMaker) = (printTAddr)malloc(sizeof(printTType));
    if ((*nodeMaker) != NULL)
    {
        (*nodeMaker)->info = '|';
        (*nodeMaker)->row = 0;
        (*nodeMaker)->column = 0;
        (*nodeMaker)->next = NULL;
    }
}
void printTAllocHoriz(printTAddr(*nodeMaker))
{
    (*nodeMaker) = NULL;
    (*nodeMaker) = (printTAddr)malloc(sizeof(printTType));
    if ((*nodeMaker) != NULL)
    {
        (*nodeMaker)->info = '_';
        (*nodeMaker)->row = 0;
        (*nodeMaker)->column = 0;
        (*nodeMaker)->next = NULL;
    }
}
void printTAllocNL(printTAddr(*nodeMaker))
{
    (*nodeMaker) = NULL;
    (*nodeMaker) = (printTAddr)malloc(sizeof(printTType));
    if ((*nodeMaker) != NULL)
    {
        (*nodeMaker)->info = '\n';
        (*nodeMaker)->row = 0;
        (*nodeMaker)->column = 0;
        (*nodeMaker)->next = NULL;
    }
}
void printTAllocInfo(printTAddr(*nodeMaker), char info, char pr)
{
    (*nodeMaker) = NULL;
    (*nodeMaker) = (printTAddr)malloc(sizeof(printTType));
    if ((*nodeMaker) != NULL)
    {
        (*nodeMaker)->info = info;
        (*nodeMaker)->row = 0;
        (*nodeMaker)->column = 0;
        (*nodeMaker)->next = NULL;
        (*nodeMaker)->pr = pr;
    }
}
printTAddr printTSrchByInfo(printTAddr rootHolder, char info)
{
    printTAddr pSrchr;
    pSrchr = rootHolder;
    while (pSrchr != NULL)
    {
        if (pSrchr->info == info)
        {
            return pSrchr;
        }
        pSrchr = pSrchr->next;
    }
    return NULL;
}
printTAddr printTSrchByPr(printTAddr rootHolder, char pr)
{
    printTAddr pSrchr;
    pSrchr = rootHolder;
    while (pSrchr != NULL)
    {
        if (pSrchr->pr == pr && pSrchr->info != '|' && pSrchr->info != ' ' && pSrchr->info != '_' && pSrchr->info != '\n')
        {
            return pSrchr;
        }
        pSrchr = pSrchr->next;
    }
    return NULL;
}
printTAddr printTSrchByRow(printTAddr rootHolder, int row)
{
    printTAddr pSrchr;
    pSrchr = rootHolder;
    while (pSrchr != NULL)
    {
        if (pSrchr->row == row)
        {
            return pSrchr;
        }
        pSrchr = pSrchr->next;
    }
    return NULL;
}
printTAddr printTSrchByColumn(printTAddr rootHolder, int column)
{
    printTAddr pSrchr;
    pSrchr = rootHolder;
    while (pSrchr != NULL)
    {
        if (pSrchr->column == column)
        {
            return pSrchr;
        }
        pSrchr = pSrchr->next;
    }
    return NULL;
}
printTAddr printTSrchByLoc(printTAddr rootHolder, int row, int column)
{
    printTAddr pSrchr;
    pSrchr = rootHolder;
    while (pSrchr != NULL)
    {
        if (pSrchr->column == column && pSrchr->row == row)
        {
            return pSrchr;
        }
        pSrchr = pSrchr->next;
    }
    return NULL;
}
void printTTravNull(printTAddr(*holder), printTAddr start)
{
    (*holder) = start;
    while ((*holder)->next != NULL)
    {
        (*holder) = (*holder)->next;
    }
}
void printTToString(printTAddr rootHolder)
{
    printTAddr p;

    p = rootHolder;
    while (p != NULL)
    {
        if (p->column == 1)
        {
            printf("\t");
        }
        printf("%c", p->info);
        p = p->next;
    }
}
void printTTravSpecif(printTAddr(*holder), printTAddr start, char info)
{
    (*holder) = start;
    while ((*holder)->next->info != info)
    {
        (*holder) = (*holder)->next;
    }
}
void printTCn(printTAddr(*trNode), printTAddr(*firstNode), printTAddr(*secNode))
{
    if ((*firstNode)->info == '\n')
    {
        (*trNode)->row = (*firstNode)->row + 1;
        (*trNode)->column = 1;
    }
    else
    {
        (*trNode)->row = (*firstNode)->row;
        (*trNode)->column = (*firstNode)->column + 1;
    }
    if ((*secNode) != NULL)
    {
        if ((*trNode)->info == '\n')
        {
            (*secNode)->row = (*trNode)->row + 1;
            (*secNode)->column = 1;
        }
        else
        {
            (*secNode)->row = (*trNode)->row;
            (*secNode)->column = (*trNode)->column + 1;
        }
    }
    (*firstNode)->next = (*trNode);
    (*trNode)->next = (*secNode);
    (*firstNode) = (*trNode);
}
int printTCountCh(printTAddr root, char pr)
{
    if (pr == 'A')
    {
        printf("checked");
    }
    int count = 0;
    while (root != NULL)
    {
        if (root->pr == pr)
        {
            count++;
        }
        root = root->next;
    }
    return count;
}

void printTInsert(printTAddr(*rootHolder), char info, char pr)
{
    printTAddr nodeMaker, root, prHolder, p1, p2;

    int i, j, k, l, m, colTr, rowTr, chCount;
    if ((*rootHolder) == NULL)
    {
        printTAllocInfo(&nodeMaker, info, pr);
        nodeMaker->row = 1;
        nodeMaker->column = 1;
        (*rootHolder) = nodeMaker;

        printTAllocNL(&nodeMaker);
        nodeMaker->row = 1;
        nodeMaker->column = 2;
        (*rootHolder)->next = nodeMaker;
    }
    else
    {
        root = (*rootHolder);
        prHolder = printTSrchByInfo(root, pr);
        if (printTSrchByRow(root, prHolder->row + 1) == NULL)
        {
            for (i = 1; i <= 3; i++)
            {
                printTTravNull(&p1, prHolder);
                rowTr = p1->row + 1;
                colTr = 1;
                while (colTr != prHolder->column)
                {
                    printTAllocBlank(&nodeMaker);
                    nodeMaker->row = rowTr;
                    nodeMaker->column = colTr;
                    colTr = colTr + 1;
                    p1->next = nodeMaker;
                    printTTravNull(&p1, prHolder);
                }
                if (i == 3)
                {
                    printTAllocInfo(&nodeMaker, info, pr);
                    nodeMaker->row = rowTr;
                    nodeMaker->column = colTr;
                }
                else
                {
                    printTAllocVert(&nodeMaker);
                    nodeMaker->row = rowTr;
                    nodeMaker->column = colTr;
                }
                colTr = colTr + 1;

                p1->next = nodeMaker;
                printTTravNull(&p1, prHolder);

                printTAllocNL(&nodeMaker);
                nodeMaker->row = rowTr;
                nodeMaker->column = colTr;
                p1->next = nodeMaker;
            }
        }
        else
        {

            if (printTSrchByLoc(root, prHolder->row + 1, prHolder->column) == NULL)
            {
                for (i = 1; i <= 3; i++)
                {
                    p1 = printTSrchByRow((*rootHolder), prHolder->row + i);
                    printTTravSpecif(&p1, p1, '\n');
                    p2 = p1->next;
                    while (p2->column != prHolder->column)
                    {
                        printTAllocBlank(&nodeMaker);
                        printTCn(&nodeMaker, &p1, &p2);
                    }
                    if (i == 3)
                    {
                        printTAllocInfo(&nodeMaker, info, pr);
                        printTCn(&nodeMaker, &p1, &p2);
                    }
                    else
                    {
                        printTAllocVert(&nodeMaker);
                        printTCn(&nodeMaker, &p1, &p2);
                    }
                }
            }
            else
            {

                chCount = 0;
                p1 = printTSrchByPr(root, pr);
                p2 = printTSrchByPr(p1->next, pr);

                if (p2 != NULL)
                {
                    while (p2 != NULL)
                    {
                        p1 = printTSrchByPr(p1->next, pr);
                        p2 = printTSrchByPr(p2->next, pr);
                    }
                }
                chCount = chCount + printTCountCh(root, p1->info);
                for (i = 1; i <= 3; i++)
                {
                    p1 = printTSrchByLoc(root, prHolder->row + i, prHolder->column);
                    printTTravSpecif(&p1, p1, '\n');
                    p2 = p1->next;
                    if (i == 1)
                    {
                        if (chCount == 0 || chCount == 1)
                        {
                            for (j = 0; j != 2; j++)
                            {
                                printTAllocHoriz(&nodeMaker);
                                printTCn(&nodeMaker, &p1, &p2);
                            }
                        }
                        else
                        {
                            for (j = 0; j != (2 * chCount) + 1; j++)
                            {
                                printTAllocHoriz(&nodeMaker);
                                printTCn(&nodeMaker, &p1, &p2);
                            }
                        }
                    }
                    else
                    {
                        if (chCount == 0 || chCount == 1)
                        {
                            for (j = 0; j != 1; j++)
                            {
                                printTAllocBlank(&nodeMaker);
                                printTCn(&nodeMaker, &p1, &p2);
                                printTTravSpecif(&p1, p1, p2->info);
                            }
                        }
                        else
                        {
                            for (j = 0; j != 2 * chCount; j++)
                            {
                                printTAllocBlank(&nodeMaker);
                                printTCn(&nodeMaker, &p1, &p2);
                                printTTravSpecif(&p1, p1, p2->info);
                            }
                        }
                        if (i == 2)
                        {
                            printTAllocVert(&nodeMaker);
                        }
                        else
                            printTAllocInfo(&nodeMaker, info, pr);
                        printTCn(&nodeMaker, &p1, &p2);
                        printTTravSpecif(&p1, p1, p2->info);
                    }
                }
            }
        }
    }
}

void createNBPrintT(printTAddr(*printHolder), nbtAddr rootHolder)
{

    nbtAddr p;
    bool resmi = true;
    p = rootHolder;
    while (p != NULL)
    {
        if (resmi)
        {

            if (p->pr != NULL)
            {

                printTInsert(&(*printHolder), p->info, p->pr->info);
            }
            else
            {
                printTInsert(&(*printHolder), p->info, NULL);
            }
        }
        if (p->fs != NULL && resmi)
        {
            p = p->fs;
            resmi = true;
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

void createBPrintT(printTAddr(*printHolder), btAddr rootHolder)
{

    if (rootHolder == NULL)
    {
        return;
    }
    if (rootHolder->pr != NULL)
    {
        printTInsert(&(*printHolder), rootHolder->info, rootHolder->pr->info);
    }
    else
    {
        printTInsert(&(*printHolder), rootHolder->info, NULL);
    }

    createBPrintT(&(*printHolder), rootHolder->ls);

    createBPrintT(&(*printHolder), rootHolder->rs);
}
//====================================== printTree preOrderly end =============================================

/*==================== MODUL CONVERSION BINARY-SEARCH-TREE TO AVL-TREE===========================*/
void CreateAvlTree(btAddr bstTree, btAddr *avlTree)
{
    if (bstTree == NULL)
        return;
    CreateAvlTree(bstTree->ls, avlTree);
    *avlTree = InsertAvlTree(*avlTree, bstTree->info);
    CreateAvlTree(bstTree->rs, avlTree);
}

btAddr InsertAvlTree(btAddr root, infoType info)
{
    if (root == NULL)
        return (CreateBtNode(info, 1));

    if (info < root->info)
    {
        root->ls = InsertAvlTree(root->ls, info);
        if (root->ls)
            root->ls->pr = root;
    }
    else if (info > root->info)
    {
        root->rs = InsertAvlTree(root->rs, info);
        if (root->rs)
            root->rs->pr = root;
    }
    else
    {
        return root;
    }

    root->level = 1 + Max(GetLevel(root->ls),
                          GetLevel(root->rs));

    int balance = GetBalance(root);

    // ls ls Case
    if (balance > 1 && info < root->ls->info)
        return RightRotate(root);

    // Right Right Case
    if (balance < -1 && info > root->rs->info)
        return LeftRotate(root);

    // Left Right Case
    if (balance > 1 && info > root->ls->info)
    {
        root->ls = LeftRotate(root->ls);
        return RightRotate(root);
    }

    // Right Left Case
    if (balance < -1 && info < root->rs->info)
    {
        root->rs = RightRotate(root->rs);
        return LeftRotate(root);
    }

    /* return the (unchanged) root pointer */
    return root;
}

int GetLevel(btAddr node)
{
    if (node == NULL)
        return 0;
    return node->level;
}

int Max(int a, int b)
{
    return (a > b) ? a : b;
}

btAddr RightRotate(btAddr root)
{
    btAddr x = root->ls;
    btAddr T2 = x->rs;

    // Perform rotation
    x->rs = root;
    root->ls = T2;

    // Update heights
    root->level = Max(GetLevel(root->ls),
                      GetLevel(root->rs)) +
                  1;
    x->level = Max(GetLevel(x->ls),
                   GetLevel(x->rs)) +
               1;

    if (T2)
        T2->pr = root;
    x->pr = root->pr;
    root->pr = x;

    // Return new root
    return x;
}

btAddr LeftRotate(btAddr root)
{
    btAddr y = root->rs;
    btAddr T2 = y->ls;

    // Perform rotation
    y->ls = root;
    root->rs = T2;

    //  Update heights
    root->level = Max(GetLevel(root->ls),
                      GetLevel(root->rs)) +
                  1;
    y->level = Max(GetLevel(y->ls),
                   GetLevel(y->rs)) +
               1;

    if (T2)
        T2->pr = root;
    y->pr = root->pr;
    root->pr = y;

    // Return new root
    return y;
}

int GetBalance(btAddr root)
{
    if (root == NULL)
        return 0;
    return GetLevel(root->ls) - GetLevel(root->rs);
}
/*================== END MODUL CONVERSION BINARY-SEARCH-TREE TO AVL-TREE===========================*/

/*==================== TRAVERSAL NBT & BT ===========================*/
void PrintBtPreorder(btAddr node)
{
    if (node == NULL)
        return;
    printf("%c ", node->info);
    PrintBtPreorder(node->ls);
    PrintBtPreorder(node->rs);
}

void PrintBtInorder(btAddr node)
{
    if (node == NULL)
        return;
    PrintBtInorder(node->ls);
    printf("%c ", node->info);
    PrintBtInorder(node->rs);
}

void PrintBtPostorder(btAddr node)
{
    if (node == NULL)
        return;
    PrintBtPostorder(node->ls);
    PrintBtPostorder(node->rs);
    printf("%c ", node->info);
}

void PrintBtLevelorder(btAddr root) {
    // Menentukan level maksimum dari tree
    int maxLevel = 0;
    CalculateBtMaxLevel(root, &maxLevel);

    // Melakukan traversal level order
    for (int level = 0; level <= maxLevel; level++) {
        PrintBtNodesAtLevel(root, level);
    }
}

void CalculateBtMaxLevel(btAddr root, int* maxLevel) {
    if (root == NULL) return;
    
    if (root->level > *maxLevel) {
        *maxLevel = root->level;
    }

    CalculateBtMaxLevel(root->ls, maxLevel);
    CalculateBtMaxLevel(root->rs, maxLevel);
}

// Fungsi rekursif untuk mencetak node pada suatu level
void PrintBtNodesAtLevel(btAddr root, int level) {
    if (root == NULL) return;

    if (root->level == level) {
        printf("%c ", root->info); // Misalnya, mencetak nilai info
    }

    PrintBtNodesAtLevel(root->ls, level);
    PrintBtNodesAtLevel(root->rs, level);
}

void PrintNbtPreorder(nbtAddr root)
{
    if (root == NULL)
        return;
    printf("%c ", root->info);
    PrintNbtPreorder(root->fs);
    PrintNbtPreorder(root->nb);
}

void PrintNbtPostorder(nbtAddr root)
{
    if (root == NULL)
        return;
    PrintNbtPostorder(root->fs);
    printf("%c ", root->info);
    PrintNbtPostorder(root->nb);
}

void PrintNbtInorder(nbtAddr root)
{
    if (root == NULL)
        return;
    PrintNbtInorder(root->fs);
    printf("%c ", root->info);
    if (root->fs)
    {
        nbtAddr sibling = root->fs->nb;
        while (sibling)
        {
            PrintNbtInorder(sibling);
            sibling = sibling->nb;
        }
    }
}

void PrintNbtLevelorder(nbtAddr root) {
    // Menentukan level maksimum dari tree
    int maxLevel = 0;
    CalculateNbtMaxLevel(root, &maxLevel);

    // Melakukan traversal level order
    for (int level = 0; level <= maxLevel; level++) {
        PrintNbtNodesAtLevel(root, level);
    }
}

void CalculateNbtMaxLevel(nbtAddr root, int* maxLevel) {
    if (root == NULL) return;
    
    if (root->level > *maxLevel) {
        *maxLevel = root->level;
    }

    CalculateNbtMaxLevel(root->fs, maxLevel);
    CalculateNbtMaxLevel(root->nb, maxLevel);
}

// Fungsi rekursif untuk mencetak node pada suatu level
void PrintNbtNodesAtLevel(nbtAddr root, int level) {
    if (root == NULL) return;

    if (root->level == level) {
        printf("%c ", root->info); // Misalnya, mencetak nilai info
    }

    PrintNbtNodesAtLevel(root->fs, level);
    PrintNbtNodesAtLevel(root->nb, level);
}

void PrintAvlLevelorder(btAddr root) {
    if (root == NULL) return;
    Queue* queue = CreateQueue();
    Enqueue(queue, root);
    while (!IsQueueEmpty(queue)) {
        btAddr node = Dequeue(queue);
        printf("%c ", node->info);
        if (node->ls != NULL) Enqueue(queue, node->ls);
        if (node->rs != NULL) Enqueue(queue, node->rs);
    }
    free(queue);
}
/*================== END TRAVERSAL NBT & BT ===========================*/

/*====================== QUEUE ===========================*/
Queue *CreateQueue()
{
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

int IsQueueEmpty(Queue *queue)
{
    return queue->front == NULL;
}

void Enqueue(Queue* queue, btAddr treeNode) {
    QueueNode* newNode = (QueueNode*)malloc(sizeof(QueueNode));
    newNode->treeNode = treeNode;
    newNode->next = NULL;
    if (queue->rear == NULL) {
        queue->front = newNode;
        queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

btAddr Dequeue(Queue* queue) {
    if (IsQueueEmpty(queue)) return NULL;
    QueueNode* temp = queue->front;
    btAddr treeNode = temp->treeNode;
    queue->front = queue->front->next;
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    free(temp);
    return treeNode;
}
/*==================== END QUEUE ===========================*/
