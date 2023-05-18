#!/usr/bin/env python3

# To change this license header, choose License Headers in Project Properties.
# To change this template file, choose Tools | Templates
# and open the template in the editor.

import sys

class Cidade():
    def __init__(self, nome, estado, valor):
        self.nome = nome
        self.estado = estado
        self.valor = valor

if __name__ == "__main__":
    cidsort = []

    while True:
        linha = input()
    
        if linha in '0':
            break
 
        temp = linha.split(";")

        achou = False
        
        if len(cidsort)>0:
            for c in cidsort:
                if c.nome==temp[3] and c.estado==temp[4]:
                    c.valor += float(temp[2]) * float(temp[5])
                    achou = True
                    break
                
        if  not achou:
            cidsort.append(Cidade(temp[3],temp[4],float(temp[2]) * float(temp[5])))

    cidsortord = sorted(cidsort, key=lambda Cidade: Cidade.valor, reverse=True)
        
    cont = 0
        
    for c in cidsortord:
        print("%s %s %i" % (c.nome, c.estado,c.valor))
        cont += 1
        if cont>2:
            break
        
    sys.exit()
        