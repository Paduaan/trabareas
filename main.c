/*
*@file trabalho.c
*@brief Faz o cálculo de área e volumes de diversas figuras escolhidas pelo usuário onde a leitura de dados é feita por uma função específica.
*
*O programa tem diversas funções, uma específica para a leitura e validação de dados, onde isso só pode ser feita dentro dela;
*funções cada qual utilizada para fazer a conta respectiva da área ou volume de certa figura determinada pelo usuário, tendo a possibilidade de voltar ao menus anteriores
*e escolher outra figura a seu desejo.
*
*@author Ricardo Paduan
*@author Henrique Costa
*@date 21/11/2018
*@bugs Nenhum conhecido.
*/

#include <stdio.h>//biblioteca necessária para execução
#include <stdlib.h>//biblioteca necessária para execução

double leiaDados(){//função para validação de todas as leituras de dados.
    int esc;
    scanf("%d", &esc);//faz a leitura dos dados.
    while(esc < 0){//enquanto o número lido for menor que 0, ele pede para ler o dado novamente.
        printf("Digite um valor valido!");
        printf("\nNumero: ");
        scanf("%d", &esc);
    }//while
    return esc;
}//leiaDados

void listaAreas(){//mostra na tela a lista de figuras planas e a chamada das funções das mesmas.
    int esc;
    printf("\n========================================="
        "\nCalculo das areas de figuras planas"
        "\n========================================="
        "\nOpcoes:"
        "\n1 - Triangulo"
        "\n2 - Paralelogramo"
        "\n3 - Losango"
        "\n4 - Quadrado"
        "\n5 - Retangulo"
        "\n6 - Circulo"
        "\n7 - Setor Circular"
        "\n8 - Coroa Circular"
        "\n9 - Trapezio"
        "\n10 - Retornar ao menu anterior"
        "\n\nDigite uma opcao: ");

        esc = leiaDados();//lê a opção escolhida pelo usuario.
        if(esc == 1)//se escolha for igual a 1 chama função de area do triangulo.
            atriangulo();
        else if(esc == 2)//se escolha for igual 2 chama função paralelogramo.
            aparalelogramo();
        else if(esc == 3)//se escolha for igual a 3 chama função de area do losango.
            alosango();
        else if(esc == 4)//se escolha for igual a 4 chama função de area do quadrado.
            aquadrado();
        else if(esc == 5)//se escolha for igual a 5 chama função de area do retangulo.
            aretangulo();
        else if(esc == 6)//se escolha for igual a 6 chama função de area do circulo.
            acirculo ();
        else if(esc == 7)//se escolha for igual a 7 chama função de area do setor circular.
            asetorcircular();
        else if(esc == 8)//se escolha for igual a 8 chama função de area do coroa circular.
            acoroacircular();
        else if(esc == 9)//se escolha for igual a 9 chama função de area do trapezio.
            atrapezio();
        else if(esc == 10)//se escolha for igual a 10 retorna para o menu anterior.
            main();
        return;
}//listaAreas

void listaVolumes(){//mostra na tela a lista de solidos e a chamada das funções dos mesmos.
    int esc;
    printf("\n========================================="
        "\nCalculo das volumes de solidos"
        "\n========================================="
        "\nOpcoes:"
        "\n1 - Cubo"
        "\n2 - Paralelepipedo"
        "\n3 - Cilindro"
        "\n4 - Esfera"
        "\n5 - Elipsoide"
        "\n6 - Piramide"
        "\n7 - Cone"
        "\n8 - Prisma"
        "\n9 - Retornar ao menu anterior"
        "\n\nDigite uma opcao: ");

        esc = leiaDados();//lê a opção escolhida pelo usuario

        if(esc == 1)//se a opção escolhida for igual a 1 chama a função de volume do cubo.
            vcubo();
        else if(esc == 2)//se a opção escolhida for igual a 2 chama a função de volume do paralelepipedo.
            vparalelepipedo();
        else if(esc == 3)//se a opção escolhida for igual a 3 chama a função de volume do cilindro.
            vcilindro();
        else if(esc == 4)//se a opção escolhida for igual a 4 chama a função de volume da esfera.
            vesfera();
        else if(esc == 5)//se a opção escolhida for igual a 5 chama a função de volume do elipsoide.
            velipsoide();
        else if(esc == 6)//se a opção escolhida for igual a 6 chama a função de volume da piramide.
            vpiramide();
        else if(esc == 7)//se a opção escolhida for igual a 7 chama a função de volume do cone.
            vcone();
        else if(esc == 8)//se a opção escolhida for igual a 8 chama a função de volume do prisma.
            vprisma();
        else if(esc == 9)//se a opção escolhida for igual a 9 retorna ao menu anterior.
            main();
        return;
}//listaVolumes

void atriangulo(){//calcula, le os numeros e mostra na tela a area do triangulo, e da as opções para o usuario.
    int esc;
    double base, altura, area;
    printf("Digite o base do triangulo: ");
    base = leiaDados();
    printf("Digite a altura do triangulo: ");
    altura = leiaDados();

    area = base * altura / 2;
    printf("Area do triangulo: %lf", area);

    printf("\nOpcoes:"
    "\n1 - Calcular uma nova area para a mesma figura"
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            atriangulo();
        }else if(esc == 2){
            listaAreas();
        }//if
    }//while
    return;
}//atriangulo
void aparalelogramo(){//calcula, le os numeros e mostra na tela a area do paralelogramo, e da as opções para o usuario.
    int esc;
    double base, altura, area;

    printf("Digite a base do paralelogramo: ");
    base = leiaDados();
    printf("Digite a altura do paralelogramo: ");
    altura = leiaDados();

    area = base * altura;
    printf("Area do paralelogramo: %lf", area);

    printf("\nOpcoes:"
    "\n1 - Calcular uma nova area para a mesma figura"
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            aparalelogramo();
        }else if(esc == 2){
            listaAreas();
        }//if
    }//while
    return;
}//aparalelogramo
void alosango(){//calcula, le os numeros e mostra na tela a area do losango, e da as opções para o usuario.
    int esc;
    double dm, d, area;
    printf("Digite a diagonal maior do losango: ");
    dm = leiaDados();
    printf("Digite a diagonal menor do losango: ");
    d = leiaDados();

    area = dm * d / 2;
    printf("Area do losango: %lf", area);

    printf("\nOpcoes:"
    "\n1 - Calcular uma nova area para a mesma figura"
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            alosango();
        }else if(esc == 2){
            listaAreas();
        }//if
    }//while
    return;
}//alosango
void aquadrado(){//calcula, le os numeros e mostra na tela a area do quadrado, e da as opções para o usuario.
    int esc;
    double base, altura, area;
    printf("Digite a base do quadrado: ");
    base = leiaDados();
    printf("Digite a altura do quadrado: ");
    altura = leiaDados();

    area = base * altura;
    printf("Area do quadrado: %lf", area);

    printf("\nOpcoes:"
    "\n1 - Calcular uma nova area para a mesma figura"
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            aquadrado();
        }else if(esc == 2){
            listaAreas();
        }//if
    }//while
    return;
}//aquadrado
void aretangulo(){//calcula, le os numeros e mostra na tela a area do retangulo, e da as opções para o usuario.
    int esc;
    double area, base, altura;
    printf("Digite a base do retangulo: ");
    base = leiaDados();
    printf("Digite a altura do retangulo: ");
    altura = leiaDados();

    area = base * altura;
    printf("Area do retangulo: %lf", area);

    printf("\nOpcoes:"
    "\n1 - Calcular uma nova area para a mesma figura"
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            aretangulo();
        }else if(esc == 2){
            listaAreas();
        }//if
    }//while
    return;
}//aretangulo
void acirculo(){//calcula, le os numeros e mostra na tela a area do circulo, e da as opções para o usuario.
    int esc;
    double pi = 3.1415;
    double raio, area;
    printf("Digite o raio do circulo: ");
    raio = leiaDados();

    area = pi * (raio * raio);
    printf("Area do circulo: %lf", area);

    printf("\nOpcoes:"
    "\n1 - Calcular uma nova area para a mesma figura"
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            acirculo();
        }else if(esc == 2){
            listaAreas();
        }//if
    }//while
    return;
}//acirculo
void asetorcircular(){//calcula, le os numeros e mostra na tela a area do setor circular, e da as opções para o usuario.
    int esc;
    double raio, pi = 3.1415, area, angulo;
    printf("Digite o raio do setor circular: ");
    raio = leiaDados();
    printf("Digite o angulo do setor circular: ");
    angulo = leiaDados();

    area = angulo * pi * (raio * raio) / 360;
    printf("Area do setor circular: %lf", area);

    printf("\nOpcoes:"
    "\n1 - Calcular uma nova area para a mesma figura"
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            asetorcircular();
        }else if(esc == 2){
            listaAreas();
        }//if
    }//while
    return;
}//asetorcircular
void acoroacircular(){//calcula, le os numeros e mostra na tela a area do coroa circular, e da as opções para o usuario.
    int esc;
    double pi = 3.1415, rm, r, area;
    printf("Digite o raio maior: ");
    rm = leiaDados();
    printf("Digite o raio menor: ");
    r = leiaDados();

    area = pi * (rm * rm) - pi * (r * r);
    printf("Area da coroa circular: %lf", area);

    printf("\nOpcoes:"
    "\n1 - Calcular uma nova area para a mesma figura"
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            acoroacircular();
        }else if(esc == 2){
            listaAreas();
        }//if
    }//while
    return;
}//acoroacircular
void atrapezio(){//calcula, le os numeros e mostra na tela a area do trapezio, e da as opções para o usuario.
    int esc;
    double bm, b, area, altura;
    printf("Digite a base maior: ");
    bm = leiaDados();
    printf("Digite a base menor: ");
    b = leiaDados();
    printf("Digite a altura do trapezio: ");
    altura = leiaDados();

    area = (bm + b) * altura / 2;
    printf("Area do trapezio: %lf", area);

    printf("\nOpcoes:"
    "\n1 - Calcular uma nova area para a mesma figura"
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            atrapezio();
        }else if(esc == 2){
            listaAreas();
        }//if
    }//while
    return;
}//atrapezio

void vcubo(){//calcula, le os numeros e mostra na tela o volume do cubo, e da as opcões para o usuario.
    int esc;
    double volume, aresta;
    printf("Digite a aresta do cubo: ");
    aresta = leiaDados();

    volume = aresta * aresta * aresta;
    printf("Volume do cubo: %lf", volume);

    printf("\nOpcoes:"
    "\n1 - Calcular um novo volume para o mesmo solido."
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            vcubo();
        }else if(esc == 2){
            listaVolumes();
        }//if
    }//while

    return;
}//vcubo
void vparalelepipedo(){//calcula, le os numeros e mostra na tela o volume do paralelepipedo, e da as opcões para o usuario.
    int esc;
    double comprimento, largura, altura, volume;
    printf("Digite o comprimento do paralelepipedo: ");
    comprimento = leiaDados();
    printf("Digite a largura do paralelepipedo: ");
    largura = leiaDados();
    printf("Digite a altura do paralelepipedo: ");
    altura = leiaDados();

    volume = comprimento * largura * altura;
    printf("Volume do paralelepipedo: %lf", volume);

    printf("\nOpcoes:"
    "\n1 - Calcular um novo volume para o mesmo solido."
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            vparalelepipedo();
        }else if(esc == 2){
            listaVolumes();
        }//if
    }//while

    return;
}//vparalelepipedo
void vcilindro(){//calcula, le os numeros e mostra na tela o volume do cilindro, e da as opcões para o usuario.
    int esc;
    double pi = 3.1415, raio, altura, volume;
    printf("Digite o raio do cilindro: ");
    raio = leiaDados();
    printf("Digite a altura do cilindro: ");
    altura = leiaDados();

    volume = pi * (raio * raio) * altura;
    printf("Volume do cilindro: %lf", volume);

    printf("\nOpcoes:"
    "\n1 - Calcular um novo volume para o mesmo solido."
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            vcilindro();
        }else if(esc == 2){
            listaVolumes();
        }//if
    }//while

    return;
}//vcilindro
void vesfera(){//calcula, le os numeros e mostra na tela o volume da esfera, e da as opcões para o usuario.
    int esc;
    double pi = 3.1415, raio, volume;
    printf("Digite o raio da esfera: ");
    raio = leiaDados();

    volume = 4 * pi * (raio * raio * raio) / 3;
    printf("Volume da esfera: %lf", volume);

    printf("\nOpcoes:"
    "\n1 - Calcular um novo volume para o mesmo solido."
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            vesfera();
        }else if(esc == 2){
            listaVolumes();
        }//if
    }//while

    return;
}//vesfera
void velipsoide(){//calcula, le os numeros e mostra na tela o volume do elipsoide, e da as opcões para o usuario.
    int esc;
    double a, b, c, pi = 3.1415, volume;
    printf("Digite valor pra A: ");
    a = leiaDados();
    printf("Digite valor pra B: ");
    b = leiaDados();
    printf("Digite valor pra C: ");
    c = leiaDados();

    volume = 4 / 3 * pi * a * b * c;
    printf("Volume do elipsoide: %lf", volume);

    printf("\nOpcoes:"
    "\n1 - Calcular um novo volume para o mesmo solido."
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            velipsoide();
        }else if(esc == 2){
            listaVolumes();
        }//if
    }//while

    return;
}//velipsoide
void vpiramide(){//calcula, le os numeros e mostra na tela o volume da piramide, e da as opcões para o usuario.
    int esc;
    double areab, altura, volume;
    printf("Digite a area base da piramide: ");
    areab = leiaDados();
    printf("Digite a altura da piramide: ");
    altura = leiaDados();

    volume = 1 * areab * altura / 3;
    printf("Volume da piramide: %lf", volume);

    printf("\nOpcoes:"
    "\n1 - Calcular um novo volume para o mesmo solido."
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            vpiramide();
        }else if(esc == 2){
            listaVolumes();
        }//if
    }//while

    return;
}//vpiramide
void vcone(){//calcula, le os numeros e mostra na tela o volume do cone, e da as opcões para o usuario.
    int esc;
    double pi = 3.1415, raio, altura, volume;
    printf("Digite o raio: ");
    raio = leiaDados();
    printf("Digite a altura: ");
    altura = leiaDados();

    volume = pi * (raio * raio) * altura / 3;
    printf("Volume do cone: %lf", volume);

    printf("\nOpcoes:"
    "\n1 - Calcular um novo volume para o mesmo solido."
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            vcone();
        }else if(esc == 2){
            listaVolumes();
        }//if
    }//while

    return;
}//vcone
void vprisma(){//calcula, le os numeros e mostra na tela o volume do prisma, e da as opcões para o usuario.
    int esc;
    double altura, taml, base, volume;
    printf("Digite a altura do prisma: ");
    altura = leiaDados();
    printf("Digite o tamanho do lado do prisma: ");
    taml = leiaDados();
    printf("Digite a base do prisma: ");
    base = leiaDados();

    volume = (1 * base * taml)/2 * altura;
    printf("Volume do prisma: %lf", volume);

    printf("\nOpcoes:"
    "\n1 - Calcular um novo volume para o mesmo solido."
    "\n2 - Retornar ao menu anterior"
    "\nDigite uma opcao: ");
    esc = leiaDados();// le o numero para o menu anterior.
    while(esc > 0){
        if(esc < 1 || esc > 2){
            printf("\nDigite uma opcao valida!");
            printf("\nNumero: ");
            leiaDados();
        }else if(esc == 1){
            vprisma();
        }else if(esc == 2){
            listaVolumes();
        }//if
    }//while
    return;
}//vprisma.

int main(){//funcao main.
    int esc;
    printf("Opcoes:"
    "\n1 - Calculo de area"
    "\n2 - Calculo de volume"
    "\n3 - Sair"
    "\nDigite uma opcao: ");

    esc = leiaDados();//le os dados do primeiro menu.

    while(esc > 0){//validação se o numero for maior que 0
        if(esc < 1 || esc > 3){//validação se o numero entrado esta nas opções do menu, se não, le o numero novamente.
            printf("Digite um numero valido!");
            printf("\nNumero: ");
            esc = leiaDados();
        }else if(esc == 1){//se for igual a 1 chama a função lista areas.
            listaAreas();
        }else if(esc == 2){//se for igual a 2 chama a funcao lista volumes.
            listaVolumes();
        }//if
    }//while
    return 0;
}//main
