

> Status: Developing ⚠️

# AEDS Lista

## descrição

<body>
  <p> Em uma lista A temos um conjunto de elementos inteiros
positivos ou não ha 1 , a 2 , . . . , a n i. Elaborar uma função que consiga encontrar
neste conjunto a máxima soma.</p>
</body>

## instruções
<body>
  <ol>
    
       1- Digite 1, inicialize o programa e leia o arquivo.

       2- Digite 2 para verificar se existe nomes iguais para remover.
      
       3- Digite 3 para imprimir a lista.
        
       4- Digite 4 para fechar o programa.

  </ol>
</body>

![codigo menu](https://user-images.githubusercontent.com/102326098/167859546-dbbc2f5e-c59d-4fb9-9296-98d25b340924.png)


## Objetivos
<body>
  
     Criar uma função que consiga percorrer uma lista de números, dentre esses números, encontrar a maior soma. Para que seja possível, é interessante que a lista possua números negativos.

  
</body>

## Solução
<body>
  Primeiramente, para que possamos começar o algoritmo, é necessário conferir se o primeiro elemento da lista é um número negativo, se for, o primeiro elemento é descartado. Em seguida, percorremos a lista sempre somando os valores, caso a soma dos valores seja maior do que a variável aux, aux recebe o valor da soma, após todos os valores serem conferidos, aux manterá o valor da maior soma da lista.
 
  
</body>


## Tecnologias usadas:

<table>
  <tr>
    <td>c++</td>
  </tr>
  
</table>

## Compilação e Execução 

A Lista estática disponibilizada possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |
