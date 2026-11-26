#include <stdio.h>

int selecionarMenu(void) {
    int opcao = 0;
    printf("\n===== CONTROLE DE ATIVIDADES EXTRACURRICULARES =====\n");
    printf("1 – Cadastrar/identificar aluno\n");
    printf("2 – Registrar certificado/atividade\n");
    printf("3 – Listar atividades de um aluno\n");
    printf("4 – Consultar total de carga horária\n");
    printf("5 – Consultar situação de conclusão\n");
    printf("6 – Pesquisar aluno por matrícula\n");
    printf("0 - Sair\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

int main(void) {
    int opcaoMenu = 0;
    do {
        opcaoMenu = selecionarMenu();
        switch (opcaoMenu) {
            case 1: 
                printf("OP1\n");
                break;
            case 2: 
                printf("OP2\n");
                break;
            case 3: 
                printf("OP3\n");
                break;
            case 4: 
                printf("OP4\n");
                break;
            case 5: 
                printf("OP5\n");
                break;
            case 6: 
                printf("OP6\n");              
                break;
            case 0: 
                printf("Encerrando o sistema...\n");
                break;
            default: 
                printf("Opcao invalida!\n");
        }
    } while (opcaoMenu != 0);

    return 0;
}