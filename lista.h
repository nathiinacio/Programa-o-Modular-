typedef struct node Node;


typedef struct list List;


/***********************************************************************
 *
 *  $TC Tipo de dados: LIS Condições de retorno
 *
 *
 ***********************************************************************/
typedef enum {
    LIS_CondRetOK = 0 ,
    /* Executou correto */
    LIS_CondRetListaVazia = 1,
    /* Estrutura list está deletada */
    LIS_CondRetFaltouMemoria = 2 ,
    /* Faltou memória ao alocar dados */
    LIS_CondRetCursorNoFinal = 3,
    /* Impossível obter próximo */
    LIS_CondRetCursorNoInicio = 4
    /* Impossível obter anterior*/
    
}LIS_tpCondRet;
/***********************************************************************
 *
 *  $FC Função: LIS create List
 *
 *  $ED Descrição da função
 *    Cria uma lista vazia
 *
 ***********************************************************************/
LIS_tpCondRet createList(List** l);
/***********************************************************************
 *
 *  $FC Função: LIS del
 *
 *  $ED Descrição da função
 *    Deleta uma lista já criada
 *
 ***********************************************************************/
LIS_tpCondRet del(List* l);
/***********************************************************************
 *
 *  $FC Função: LIS clear
 *
 *  $ED Descrição da função
 *    Limpa uma lista criada para zero nós
 *
 ***********************************************************************/
LIS_tpCondRet clear1(List* l);
/***********************************************************************
 *
 *  $FC Função: LIS push back
 *
 *  $ED Descrição da função
 *    Insere um elemento no final da List
 *
 ***********************************************************************/
LIS_tpCondRet push_back(List* l, void* val);
/***********************************************************************
 *
 *  $FC Função: LIS push front
 *
 *  $ED Descrição da função
 *    Insere um elemento no começo da List
 *
 ***********************************************************************/
LIS_tpCondRet push_front(List* l, void* val);
/***********************************************************************
 *
 *  $FC Função: LIS pop back
 *
 *  $ED Descrição da função
 *    Atualiza o parâmetro val, referenciado, para o último elemento da lista, que é removido da mesma.
 *
 ***********************************************************************/
LIS_tpCondRet pop_back(List* l, void** val);
/***********************************************************************
 *
 *  $FC Função: LIS pop front
 *
 *  $ED Descrição da função
 *    Atualiza o parâmetro val, referenciado, para o primeiro elemento da lista, que é removido da mesma.
 *
 ***********************************************************************/
LIS_tpCondRet pop_front(List* l, void** val);
/***********************************************************************
 *
 *  $FC Função: LIS pop cursor
 *
 *  $ED Descrição da função
 *    Remove o nó cursor da lista e retorna a referência para seu valor.
 *	 Caso o nó cursor seja o último nó, o cursor se torna o anterior, caso seja o primeiro
 *	 o cursor se torna o seguinte. Em qualquer outro caso o cursor se torna o próximo.
 *
 ***********************************************************************/
LIS_tpCondRet pop_cursor(List* l, void** val);
/***********************************************************************
 *
 *  $FC Função: LIS get val cursor
 *
 *  $ED Descrição da função
 *    Atualiza o parâmetro val para o valor no nó cursor.
 *
 ***********************************************************************/
LIS_tpCondRet get_val_cursor(List* l, void** val);
/***********************************************************************
 *
 *  $FC Função: LIS list size
 *
 *  $ED Descrição da função
 *    Atualiza o parametro size para o tamanho da lista.
 *
 ***********************************************************************/
LIS_tpCondRet list_size(List* l, unsigned int* size); //retorna a quantidade de elementos na List
/***********************************************************************
 *
 *  $FC Função: LIS first
 *
 *  $ED Descrição da função
 *    Atualiza para o primeiro nó da lista
 *
 ***********************************************************************/
LIS_tpCondRet first(List* l);
/***********************************************************************
 *
 *  $FC Função: LIS next
 *
 *  $ED Descrição da função
 *    Atualiza o cursor para o próximo nó
 *
 ***********************************************************************/
LIS_tpCondRet next(List* l);//atualiza o cursor para o próximo nó
/***********************************************************************
 *
 *  $FC Função: LIS prev
 *
 *  $ED Descrição da função
 *    Atualiza o cursor para o nó anterior
 *
 ***********************************************************************/
LIS_tpCondRet prev(List* l);//atualiza o cursor para o nó anterior
