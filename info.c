//
//  info.c
//  grade
//
//  Created by Leo Moraes on 02/10/17.
//  Copyright © 2017 Leo Moraes. All rights reserved.
//

#include "info.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "turma.h"
#include "disciplina.h"
#include "lista.h"

struct info{
    Disciplina *disp;
    Turma *tur;
    float nota[4];
    int faltas;
    
};


int CriaGradeHora(Info *inf){
    List *li;
    int ret;
   
    ret=createList(&li);
    return 0;}
    
    
    void insereInfo(Info *inf, List *li){
        int ret2;
        ret2=push_back(li,inf);}

    
