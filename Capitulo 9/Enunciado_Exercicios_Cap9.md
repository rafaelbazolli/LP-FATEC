# Exercícios Ponteiros

1 - Criar um programa em C que receba uma variável do tipo inteiro do usuario(num), e crie um ponteiro para o endereço de memória dessa variável. Em seguida: 
- criar uma nova variável, ela deve receber 1 + o valor de 'num'(deve ser recebido através de seu ponteiro);
- somar o valor de 'num' mais o da variável criada no item acima;
- Imprimir para o usuario o resultado dessa soma. E tambem imprimir o endereço das variaveis 'num' e da variavel criada no primeiro item;


2 - Criar um programa com ponteiro que atribua duas constantes a duas variáveis do tipo inteiro e depois:
- Inserir o endereço das variáveis em dois ponteiros, e imprimir os valores dos ponteiros;
- Atribuir um ponteiro em outro e depois imprimir os valores dos ponteiros;
- Atribuir um numero inteiro a um ponteiro já usado, e também atribuir uma variável a outra e depois imprimir tudo(valores dos ponteiros e das variaveis).


3 - Criar um programa que crie e atribua um valor qualquer para cada tipo de variável solicitada: inteiro, float, char, boolean. Em seguida, mostre na tela:
- Qual tipo de variável, seguido do valor que lhe foi atribuido, do espaço que ela ocupa em memória;


4 - Criar um programa em C, que receba duas palavras do usuário. Declarando a biblioteca string.h, você poderá usar as funções strncpy(), strcat(), entre outros. Em sua maioria elas utilizam ponteiros como parâmetros para indicar a posição das strings que estão sendo tratadas. Tendo isso em mente, realize as operações abaixo de acordo com os requisitos:
-  Crie uma nova string vazia e, usando o comando strncpy(), copie as 3 primeiras letras da primeira palavra que o usuario digitou para essa sua string vazia;
- Crie uma nova string vazia e, usando o comando strcat(), concatene nessa nova string a segunda palavra digitada pelo usuário junto com a string criada no item acima;
- Se atentar ao tamanho das strings criadas, para que após concatenar evite problemas de overflow;
- Ao final, exibir as palavras que o usuario digitou, e também as duas palavras que você gerou nos itens acima;
Exemplo:
palavra1 do usuario: "Fatec"
palavra2 do usuario: "Taubate"
nova string deve receber somente: "Fat"
Saída esperada, após concatenar: "TaubateFat"


5 - Faça um programa em C, para concatenar palavras. O programa deve seguir as seguintes regras:
- Declarar uma string, que depois irá armazenar as palavras que serão lidas;
- Usando um laço FOR, leia 4 palavras digitadas pelo usuário.
- Se atentar ao tamanho maximo/ou total dessas 4 palavras juntas, pois a string declarada no item 1 deve ser maior que esse tamanho, senão ao concatenar as palavras digitadas dentro da string trará problemas de overflow;
- Concatenar as 4 palavras lidas dentro dessa string declarada no primeiro item, e exibir a string para o usuário;
Exemplo:
entradas do usuário: "Fatec", "Taubate", "Teste", "Teste2", "Teste3"
saída esperada após concatenar: "FatecTaubateTesteTeste2Teste3"

6 - Faça um programa em C para comparar palavras. O programa deve atender aos seguintes requisitos:
- Ler 5 palavras digitadas pelo usuário;
- Após isso, ler uma nova palavra do usuário, que será usada como referência para a comparação;
- Percorrer as palavras digitadas, contar quantas vezes a palavra de referencia(lida no item acima) foi encontrada dentre as digitadas pelo usuário, e exibir essa contagem;
- A comparação deve ser case sensitive, ou seja, considerar se as letras são maiúsculas ou minúsculas;
- Sugestão: Usar o comando strstr() da biblioteca string.h para realizar a comparação;
Exemplo: 
entradas do usuario: "Cachorro", "Cavalo", "Vaca", "Camelo"
palavra a ser buscada: "Ca"
saída esperada: 3

7 - 




