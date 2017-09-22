/***************************************************************************
 *  $MCI Mзdulo de implementaусo: TUR  Turma
 *
 *  Arquivo gerado:              TURMA.c
 *  Letras identificadoras:      TUR
 *
 *  Nome da base de software:    Arcabouуo para a automaусo de testes de programas redigidos em C
 *  Arquivo da base de software: D:\AUTOTEST\PROJETOS\LISTA.BSW
 *
 *  Projeto: INF 1301 / 1628 Automatizaусo dos testes de mзdulos C
 *  Gestor:  LES/DI/PUC-Rio
 *  Autores: cgln - Cristiane - Guilherme - Leonardo - Nathрlia
 *
 *  $HA Histзrico de evoluусo:
 *     Versсo  Autor    Data     Observaушes
 *     3       cgln  10/set/2017 manutenусo das funушes do mзdulo
 *     2       cgln  07/set/2017 unificaусo de todos os mзdulos em um sз projeto
 *     1       cgln  29/ago/2017 inьcio desenvolvimento
 *
 ***************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "turma.h"

/***********************************************************************
 *
 *  $TC Tipo de dados: TUR turma
 *
 *
 ***********************************************************************/

struct turma {
    
    char CodTurma [4] ;
    /* Cзdigo da turma */
    
    int HorarioInicio ;
    /* Horрrio de inьcio da turma */
    
    int HorarioTermino ;
    /* Horрrio de tжrmino da turma */
    
    char DiaSemana[28] ;
    /* Dias da semana da turma */
    
    int QtdVaga ;
    /* NЩmero de vagas da turma */
    
};

/*****  Cзdigo das funушes exportadas pelo mзdulo  *****/

/***************************************************************************
 * Funусo: TUR  &Cria turma
 *  ****/

TUR_tpCondRet TUR_CriaTurma ( Turma ** NovaTurma, char * CodTur,
                             int HorIni, int HorTer, char * DiaSem, int QtdVag )
{
    
    * NovaTurma = ( Turma * ) malloc( sizeof( Turma )) ;
    
    if ( * NovaTurma == NULL )
    {
        return TUR_CondRetFaltouMemoria ;
    } /* if */
    
    strcpy( ( *NovaTurma )->CodTurma, CodTur ) ;
    
    if ( HorIni < 7 || HorIni > 21 )
    {
        return TUR_CondRetFormatoInvalido;
    } /* if */
    
    ( *NovaTurma )->HorarioInicio = HorIni ;
    
    if ( HorTer < 07 || HorTer > 23)
    {
        return TUR_CondRetFormatoInvalido ;
    } /* if */
    
    ( *NovaTurma )->HorarioTermino = HorTer ;
    
    strcpy( ( *NovaTurma )->DiaSemana, DiaSem ) ;
    
    ( *NovaTurma )->QtdVaga = QtdVag ;
    
    return TUR_CondRetOk ;
    
} /* Fim funусo: TUR  &Cria turma */

/***************************************************************************
 *
 *  Funусo: TUR  &Altera horario inicio
 *  ****/

TUR_tpCondRet TUR_AlteraHorarioInicio ( Turma * tur, int hora1 )
{
    
    if ( hora1 < 7 || hora1 > 21 )
    {
        return TUR_CondRetFormatoInvalido ;
    } else
    {
        tur->HorarioInicio = hora1 ;
        printf( "Hora alterada" ) ;
        return TUR_CondRetOk ;
    } /* if */
    
} /* Fim funусo: TUR  &Altera horario inicio */

/***************************************************************************
 *
 *  Funусo: TUR  &Altera horario final
 *  ****/

TUR_tpCondRet TUR_AlteraHorarioFinal ( Turma * tur, int hora2 )
{
    
    if ( hora2 < 9 || hora2 > 23 )
    {
        return TUR_CondRetFormatoInvalido ;
    } else
    {
        tur->HorarioTermino = hora2 ;
        printf( "Hora alterada" ) ;
        return TUR_CondRetOk ;
    } /* if */
    
} /* Fim funусo: TUR  &Altera horario final */

/***************************************************************************
 *
 *  Funусo: TUR  &Altera dia
 *  ****/

TUR_tpCondRet TUR_AlteraDia ( Turma * tur, char * dia )
{
    
    strcpy( tur->DiaSemana, dia ) ;
    printf( "Dias alterados" ) ;
    return TUR_CondRetOk ;
    
} /* Fim funусo: TUR  &Altera dia */

/***************************************************************************
 *
 *  Funусo: TUR  &Altera codigo
 *  ****/

TUR_tpCondRet TUR_AlteraCodigo ( Turma * tur, char * cod )
{
    
    strcpy( tur->CodTurma, cod ) ;
    printf( "Codigo alterado" ) ;
    return TUR_CondRetOk ;
    
} /* Fim funусo: TUR  &Altera codigo */

/***************************************************************************
 *
 *  Funусo: TUR  &Altera qtd vaga
 *  ****/

TUR_tpCondRet TUR_AlteraQtdVaga ( Turma * tur, int qtd )
{
    
    tur->QtdVaga = qtd ;
    printf( "Quantidade alterada" ) ;
    return TUR_CondRetOk ;
    
} /* Fim funусo: TUR  &Altera qtd vaga */

/***************************************************************************
 *
 *  Funусo: TUR  &Get codigo
 *  ****/

TUR_tpCondRet TUR_GetCodigo ( Turma * tur, char * CodTur)
{
    
    strcpy( CodTur, tur->CodTurma ) ;
    return TUR_CondRetOk ;
    
} /* Fim funусo: TUR  &Get codigo */

/***************************************************************************
 *
 *  Funусo: TUR  &Get horрrio inicio
 *  ****/

TUR_tpCondRet TUR_GetHorIni ( Turma * tur, int * HorIni)
{
    
    *HorIni = tur->HorarioInicio ;
    return TUR_CondRetOk ;
    
} /* Fim funусo: TUR  &horрrio inicio */

/***************************************************************************
 *
 *  Funусo: TUR  &Get horрrio final
 *  ****/

TUR_tpCondRet TUR_GetHorFin ( Turma * tur, int * HorTer )
{
    
    *HorTer = tur->HorarioTermino ;
    return TUR_CondRetOk ;
    
}  /* Fim funусo: TUR  &horрrio final */

/***************************************************************************
 *
 *  Funусo: TUR  &Get dia
 *  ****/

TUR_tpCondRet TUR_GetDiaSem ( Turma * tur, char * DiaSem )
{
    
    strcpy( DiaSem, tur->DiaSemana ) ;
    return TUR_CondRetOk ;
    
}  /* Fim funусo: TUR  &Get dia */

/***************************************************************************
 *
 *  Funусo: TUR  &Get qtd vaga
 *  ****/

TUR_tpCondRet TUR_GetQtdVaga ( Turma * tur, int * QtdVag )
{
    
    *QtdVag = tur->QtdVaga ;
    return TUR_CondRetOk ;
    
} /* Fim funусo: TUR  &Get qtd vaga */

/***************************************************************************
 *
 *  Funусo: TUR  &Get turma
 *  ****/

TUR_tpCondRet TUR_GetTurma ( Turma * tur, char * CodTur, int * HorIni, int * HorTer,
                            char * DiaSem, int * QtdVag )
{
    
    strcpy( CodTur, tur->CodTurma ) ;
    *HorIni = tur->HorarioInicio ;
    *HorTer = tur->HorarioTermino ;
    strcpy( DiaSem, tur->DiaSemana ) ;
    *QtdVag = tur->QtdVaga ;
    
    return TUR_CondRetOk ;
    
}  /* Fim funусo: TUR  &Get turma */

/***************************************************************************
 *
 *  Funусo: TUR &Exibe turma
 *  ****/

TUR_tpCondRet TUR_ExibeTurma ( Turma * tur )
{
    
    puts( "\n\n****** TURMA SELECIONADA ******" ) ;
    printf( "\nCodigo: %s",tur->CodTurma ) ;
    printf( "\nHorario de inicio: %d:00",tur->HorarioInicio ) ;
    printf( "\nHorario de termino: %d:00",tur->HorarioTermino ) ;
    printf( "\nDias da semana: %s",tur->DiaSemana ) ;
    printf( "\nQuantidade de vagas: %d\n\n",tur->QtdVaga ) ;
    
    return TUR_CondRetOk ;
    
} /* Fim funусo: TUR  &Exibe turma */

/***************************************************************************
 *
 *  Funусo: TUR  &Exclui turma
 *  ****/

TUR_tpCondRet TUR_ExcluiTurma ( Turma * turma )
{
    
    free( turma ) ;
    
    return TUR_CondRetOk ;
    
} /* Fim funусo: TUR  &Exclui turma */

/********** Fim do mзdulo de implementaусo: TUR  Turma
