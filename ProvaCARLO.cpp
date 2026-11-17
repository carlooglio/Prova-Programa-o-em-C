//QUESTAO 1
#include <stdio.h>

int main() {
    int i, j, x = 0;

    for (i = 1; i <= 5; i++) {

        for (j = 5; j >= i; j--) {

            if ((i + j) % 2 == 0) {
                x += i + j;
            } else {
                x -= i;
            }

            if (x % 3 == 0) {
                x /= 2;
            }
        }

        printf("%d ", x);
    }

    printf("\nResultado final: %d", x);

    return 0;
}

//	a)
// 		4 7 10 11 10
// 		Resultado final: 10

//	b)
// 		5 vezes

//	c)
//		

//	d)
//		porque sem o valor de X as condiçoes do if/else se tornam inválidas e a operação não pode continuar



//QUESTAO 2

#include <stdio.h>

int main() {
	
	float media;
	int frequencia;
	
	printf("Digite a Media do Aluno: ");
	scanf("%f", &media);
	
	printf("Qual foi a Frequencia do Aluno? ");
		scanf("%d", &frequencia);

	
	if (frequencia < 75){
		printf("Aluno REPROVADO por Frequencia");
		
	}
	
	else {
		
		if (frequencia == 100 && media == 10){
			printf("Aluno com classificacao de EXCELENCIA");
		}
		
		else if (media >= 7){
			printf("Aluno APROVADO");
		}
		
		else if (media >=5 && media < 7){
			printf("Aluno em RECUPERAÇAO");
		}
		
		else {
			printf("Aluno REPROVADO");
		}
		
	}
	
	return 0;
}

//QUESTAO 3
#include<stdio.h>

int main() {
	
	int numero, original, auxiliar;
	int quantidade = 0;
	int soma = 0;
	int invertido = 0;
	int algarismo[3];
	int acumulador = 1;
	int contador;
	
	
	
	do {
		
		printf("Digite um numero entre 10 e 500: ");
		scanf("%d", numero);
		
		if (numero < 10 || numero > 500){
			
			printf("Numero Invalido!");
		}
		
	}
	
	while (numero <10 || numero > 500);
	
	original = numero;
	auxiliar = numero;
	
	while (auxiliar > 0){
		
		int algarismo = auxiliar % 10;
		algarismo[quantidade] = algarismo;
		
		quantidade++;
		soma += algarismo;
		
		invertido = invertido * 10 + algarsimo;
		auxiliar - auxiliar / 10;
	}

	for (contador = 1; contador <= quantidade; contador++); {
		if (contador % 2 == 0){
			
			acumulador = acumulador * contador;
		}

		else{
			
			acumulador = acumulador + contador;
		}
		
		if (acumulador % 3 == 0){
			
			acumulador = acumulador - algarismo[contador -1];
		}
		
		if (acumulador < 0){
			
			acumulador = acumulador * -1;
			
		}
	}

	printf("\n--- RESULTADOS ---\n");
	printf("Numero original: %d\n", original);
	printf("Quantidade de algarismos: %d\n", quantidade);
	printf("Soma dos algarismo: %d\n", soma);
	printf("Numero invertido: %d\n", invertido);
	printf("Valor final do acumulador: %d\n", acumulador);

	return 0;
}
