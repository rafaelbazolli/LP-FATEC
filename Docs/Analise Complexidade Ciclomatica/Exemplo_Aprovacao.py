
# Validar se o aluno foi aprovado ou não baseado em frequencia e notas
def validarAprovacao(freq, nota1, nota2, nota3):
    if(freq < 70):   #1
        return "Reprovado"
    else:            #2
        media =  (nota1 + nota2) / 2
        if(media < 3):  #3
            return "Reprovado"
        else:  #4
            if(media >= 7):  #5
                return "Aprovado"
            else: #6
                if(((media + nota3) / 2) > 5):  #7
                    return "Aprovado"
                else:    #8
                    return "Reprovado"



# Recebendo os valores
nomeAluno = input("Digite o nome do aluno: ")
nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))
nota3 = float(input("Digite a terceira nota(Nota Final): "))
frequencia = int(input("Digite a frequencia: "))


situacao = validarAprovacao(frequencia, nota1, nota2, nota3)

print(f"\nSituacao do aluno {nomeAluno}: {situacao}")


# def validarAprovacao(freq, nota1, nota2, nota3):
#     if(freq < 70): return "Reprovado"
#     media =  (nota1 + nota2) / 2
#     if(media < 3): return "Reprovado"
#     if(media >= 7): return "Aprovado"
#     if(((media + nota3) / 2) > 5): return "Aprovado"
#     else: return "Reprovado"