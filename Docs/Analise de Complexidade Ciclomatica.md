# Analise de Complexidade Ciclomatica

1. O que é complexidade ciclomática
A análise de complexidade ciclomática é uma técnica utilizada na engenharia de software para medir a complexidade de um programa. Ela foi proposta por Thomas J. McCabe em 1976 como uma forma de quantificar o número de caminhos independentes em um programa e, assim, avaliar sua complexidade.

A complexidade ciclomática está diretamente relacionada ao número de caminhos independentes que existem em um grafo de fluxo de controle de um programa. Cada caminho independente representa uma sequência única de instruções que pode ser executada. Quanto mais caminhos independentes um programa tiver, maior será sua complexidade.


2. Como calcular a complexidade ciclomática
A complexidade ciclomática é calculada por meio da fórmula:

M = E - N + 2

Onde:
M é a complexidade ciclomática
E é o número de arestas do grafo de fluxo de controle do programa
N é o número de nós do grafo de fluxo de controle do programa

Os seguintes elementos são considerados nós no grafo:
- Instruções simples, como atribuições, declarações de variáveis, chamadas de funções, etc.
- Estruturas de controle de fluxo, como condicionais (if, switch), loops (for, while, do-while), etc.
- Conexões entre as instruções, que representam a sequência em que elas são executadas.
Cada nó representa um ponto de decisão no código, onde o fluxo de controle pode mudar de direção. A contagem do número de nós no grafo permite a determinação da complexidade ciclomática do código.


3. Como interpretar o resultado da complexidade ciclomática
O resultado da análise de complexidade ciclomática indica um valor numérico que representa a complexidade de um determinado trecho de código. Esse valor pode ser usado como uma medida da dificuldade de entender, manter e modificar o código.
Geralmente, quanto maior o valor da complexidade ciclomática, mais complexo é o código e mais difícil é de entender e manter. Valores muito altos podem indicar que o código precisa ser reestruturado para torná-lo mais simples e fácil de manter.

A tabela(também proposta por Thomas J. McCabe) base para interpretar a complexidade ciclomática de um software é a seguinte:
1-10: O código é considerado simples e fácil de manter.
11-20: O código é moderadamente complexo e pode ser difícil de manter.
21-50: O código é altamente complexo e provavelmente difícil de manter.
Acima de 50: O código é extremamente complexo e altamente arriscado de manter.



5. Redução da complexidade ciclomática
Existem várias técnicas que podem ser usadas para reduzir a complexidade ciclomática de um programa, algumas delas são:
- Divisão de funções em funções menores: se uma função tiver uma complexidade ciclomática muito alta, ela pode ser dividida em várias funções menores, cada uma com uma responsabilidade específica. Isso não apenas reduz a complexidade ciclomática, mas também torna o código mais modular e fácil de entender e manter.

- Simplificação de estruturas de controle: o uso excessivo de estruturas de controle, como loops e condicionais, pode aumentar a complexidade ciclomática de um programa. É possível simplificar essas estruturas de controle por meio de técnicas como a redução de aninhamentos e a eliminação de código redundante.

- Utilização de técnicas de programação estruturada: a programação estruturada visa tornar o código mais organizado e fácil de entender, evitando o uso de estruturas complexas e promovendo a modularização do código. A utilização de técnicas como a separação de dados e comportamentos e a utilização de funções e sub-rotinas podem ajudar a reduzir a complexidade ciclomática de um programa.

- Refatoração de código: a refatoração é um processo de melhoria contínua do código, que visa torná-lo mais simples, eficiente e fácil de manter. Através da refatoração, é possível identificar trechos de código redundantes ou desnecessariamente complexos e simplificá-los, reduzindo a complexidade ciclomática do programa.

- Utilização de ferramentas de análise de código: existem diversas ferramentas de análise de código que podem ser utilizadas para identificar pontos de alto risco em termos de complexidade ciclomática. Essas ferramentas podem ajudar a identificar trechos de código que precisam de uma atenção especial, permitindo que o desenvolvedor atue de forma mais eficiente na redução da complexidade ciclomática do programa.



6. Relação entre complexidade ciclomática e teste de software
A complexidade ciclomática tem uma relação muito importante com o teste de software, pois ela é uma medida que pode ser usada para avaliar a qualidade do código-fonte e determinar a extensão do esforço de teste necessário.

A partir da complexidade ciclomática, é possível identificar as partes mais críticas do código e definir testes mais eficazes para cobrir todos os caminhos possíveis do programa. Em geral, quanto maior a complexidade ciclomática, maior a chance de existirem erros no código e, consequentemente, maior a necessidade de testes mais rigorosos.

Além disso, a complexidade ciclomática pode ser usada para definir critérios de cobertura de teste, como o critério de cobertura de caminhos, que visa garantir que todos os caminhos possíveis do programa tenham sido testados.



7. Exemplos práticos de aplicação da complexidade ciclomática

