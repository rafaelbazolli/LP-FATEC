# Exercícios Ponteiros - Capítulo 9

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



6 - Faça um programa em C para verificar se uma string digitada pelo usuário está contida dentro das palavras. O programa deve atender aos seguintes requisitos:
- Ler 5 palavras digitadas pelo usuário;
- Após isso, ler uma nova palavra do usuário, que será usada como referência para a comparação;
- Percorrer as palavras digitadas, contar quantas vezes a palavra de referencia(lida no item acima) foi encontrada dentre as digitadas pelo usuário, e exibir essa contagem;
- A comparação deve ser case sensitive, ou seja, considerar se as letras são maiúsculas ou minúsculas;
- Sugestão: Usar o comando strstr() da biblioteca string.h para realizar a comparação;
Exemplo: 
entradas do usuario: "Cachorro", "Cavalo", "Macaco", "Camelo"
palavra a ser buscada: "Ca"
saída esperada: 3



7 - Refaça o exercício 6, porém agora você deve considerar:
- A comparação não deve considerar diferenças entre letras maiúsculas e minúsculas;
- O comando usado para realizar a comparação deve ser o strstr(), da biblioteca string.h;
- Sugestão: Uma das maneiras de solucionar o problema seria transformando os caracteres através das funções tolower() ou toupper() que fazem parte da biblioteca ctype.h;
- Tente criar uma nova matriz para armazenar as strings convertidas para maiúsculo/minúsculo;
Exemplo: 
entradas do usuario: "Cachorro", "Cavalo", "Macaco", "Camelo"
palavra a ser buscada: "Ca"
saída esperada: 4



8 - Crie um programa em C que receba uma palavra digitada pelo usuário, e armazene numa variável. Essa palavra deve ser enviada como parâmetro para uma função que você vai criar. Seguem os requisitos do programa: 
- A função que você deve criar pode ser do tipo 'void';
- Na criação dela, será necessário indicar que ela receberá um ponteiro do tipo char. Ex: void receberPalavra(char *palavra) {}
- A única coisa que a função precisa fazer é imprimir na tela a palavra digitada pelo usuário;
- Ao chamar a função dentro do programa, o parâmetro a ser passado é um ponteiro para a posição da palavra na memória, pode ser feita de algumas formas, uma delas seria: receberPalavra(palavraLida);
- Passando palavraLida sem os '[]', ela se torna um ponteiro para o endereço inicial da variavel palavraLida;



9 - Faça um programa em C que receba um vetor de 5 números inteiros do usuário. Esse vetor, da mesma maneira que no exercício anterior(Exercício 8), deve ser enviado como parâmetro para uma função que você vai criar. Seguem os requisitos:
- Para a criação da função, seguem as mesmas regras do exercício 8, porém o tipo de variavel é um ponteiro inteiro e não um ponteiro char;
- A função precisa fazer imprimir cada elemento do vetor somado em 5. Não precisa usar 'return', somente imprimir os elementos;
- A chamada de função dentro do programa ocorre da mesma forma que o Exercício 8, deve ser passado um ponteiro para a primeira posição do vetor lido;
Exemplo:
vetor de entrada do usuário: [1, 2, 3, 4, 5]
vetor de saída deve ser:     [6, 7, 8, 9, 10]



10 - Crie um programa em C que leia um vetor de 7 números inteiros(Esse exercício usará princípios similares ao Exercício 9). Depois disso:
- Crie uma função no programa, ela deve receber como parâmetro um ponteiro do tipo inteiro;
- A função deve substituir os números pares desse vetor por 0, e os números ímpares desse vetor em 1;
- Como iremos manipular o vetor a partir de seu ponteiro, estaremos manipulando ele diretamente no endereço de memória, então não será necessário usar 'return' para voltar o valor pra função main;
- Depois de ler o vetor do usuário, chamar a função que você criou no primeiro item, e passar o ponteiro desse vetor como parâmetro;
- Ao final, imprimir na tela o vetor convertido;
Exemplo:
vetor de entrada do usuário: [2, 3, 4, 5, 6, 7, 8]
vetor de saída deve ser:     [0, 1, 0, 1, 0, 1, 0]



11 - Faça um programa em C, que receba uma palavra digitada pelo usuário e imprima na tela quantas letras 'a' ou 'A' essa palavra possui. Porém devem ser seguidas as seguintes regras: 
- Crie uma função do tipo int, e ela deve receber como parâmetro um ponteiro char e o inteiro contador(por exemplo: int minhaFuncao(char *letras, int k));
- Dentro da função, você pode manipular esse vetor de caracteres lido(no caso, 'letras'), percorre-lo através de um laço FOR, e contar quantas vezes apareceu a letra 'a' ou 'A', acumulando o valor no contador('k');
- No fim da função, usar o 'return' para que o valor possa ser recebido de volta na função main. Na função main, esse valor pode ser armazenado em uma variavel, para ser impresso conforme o item abaixo;
- Após receber o vetor do usuário, chamar a função criada no primeiro item, e passar como parâmetros o ponteiro para o vetor da palavra, e o inteiro que é o seu contador;
- Ao final, imprimir a palavra digitada pelo usuário e o numero de vezes que a letra 'a' ou 'A' foi encontrado;
Exemplo:
entrada do usuário: "parAlelepipedo"
saída esperada: 2



12 - Crie um programa em C para auxiliar uma locadora de carros a gerenciar sua frota de veículos. O programa deve receber o nome do locador, modelo do veículo, a data de devolução do veículo, a quilometragem(quando foi retirado), a quilometragem(ao ser devolvido) de 7 veículos. Seguem os requisitos do programa: 
- As quilometragens(de retirada e devolução) devem ser armazenadas numa mesma matriz(por exemplo: matriz[7][3]);
- As posições matriz[x][0] conterão a quilometragem da retirada, matriz[x][1] terá a quilometragem da devolução, e matriz[x][2] não terá nenhum valor no momento;
- Deve haver uma função no programa chamada calcularValor(), que recebe essa matriz com as quilometragens, calcula a quilometragem percorrida até a devolução, e armazena esse valor em matriz[x][2];
- Ao final, após a função ter preenchido todas as diferenças de quilometragem, mostrar as informações completas(nome, modelo, data, km retirada, km devolução) somente do veículo que percorreu a maior distância até a devolução.


