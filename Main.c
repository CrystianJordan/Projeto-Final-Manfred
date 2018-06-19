#include <stdio.h>
#include <windows.h>

//Declara��o dos prot�tipos das fun��es
void gotoxy(int x, int y);
void framecadastrar(void);
void geraframeMain(void);
void splashscreem(void);
void apagaBD(void);
void listarContatos(void);
void msgbox(void);
void about(void);
void procurarContatos(void);

//Vari�veis globais
typedef struct contato{ 
	char nome[20]; 
	

	char telefone[13];

	
}Contato;

struct contato x;

int main(void)
{    
    //Chama o splashscreem....
    splashscreem();    
  
    //Gera o quadro inicial
    geraframeMain();

}

//Fun��o que gera o splash screem...
void splashscreem(void)
{    
    int i;
    
    system("cls");     
    system("color 0E"); 
    gotoxy(17,10);
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
    gotoxy(17,11);
    printf("\xBA                                          \xBA");
    gotoxy(17,12);
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");
    gotoxy(18,13);
    printf("Carregando..."); 
    
    //Anima��o do progress bar...
    for (i=18;i<60;i++)
    {
        gotoxy(i,11);
        printf("\xB2");  
        
    } 
    
    gotoxy(18,13);
    printf("Aplicativo carregado com sucesso!");
    
    system("cls"); 
}

//Fun��o pra gerar a tela principal ===============================
void geraframeMain(void)
{ 
    int opt; 
    do{
        system("cls");   
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2                               Agenda                                         \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2    [1] Cadastrar contato                                                     \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2    [2] Listar contatos                                                       \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2    [3] Procurar contato                                                      \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2    [4] Eliminar contato                                                      \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2    [5] Eliminar banco de dados                                               \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2    [6] Sair do sistema                                                       \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2    Digite a opcao : _                                                        \xB2");      
        printf("\xB2                                                                              \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        //Pega a op��o selecionada pelo usu�rio...
        gotoxy(30,20);
        scanf("%i",&opt);
        fflush(stdin);
    
        //Determina a a��o de acordo com a op��o selecionada no menu...    
        switch(opt){
            case 1:
                framecadastrar();
                break;
            case 2:
                listarContatos();
                break;
            case 3:
                procurarContatos();
                break;
            case 4:
                listarContatos();
                break;
            case 5:
                apagaBD();
                break;
            case 6:
                about();
                break;
            default:
                //system("cls");
                msgbox();
                gotoxy(33,9);
                printf("Opcao invalida!");
                gotoxy(19,11);
                printf("Tecle 'ENTER' e selecione uma opcao valida!");
                getch();
                break;
        }
    }while(opt!=6);
}

//Fun��o pra gerar a tela de cadastro ===============================
void framecadastrar(void)
{
	char opt;
 	 
    system("cls");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                               Agenda                                         \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2    Nome: _______________________________________________________________     \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2    Telefone:________                                                         \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    
    
	 	
	gotoxy(11,8);
	gets(x.nome);
	fflush(stdin);
	

	
	
	
	gotoxy(14,11);
	gets(x.telefone);
	fflush(stdin);
	
	
	
	gotoxy(5,22);
	printf("Deseja gravar os dados informados?(S/N): ");
	scanf("%c",&opt);
	
	int cod=0;
	
	if(opt=='S' || opt=='s')
    {
        FILE *arquivo;
        arquivo = fopen("ContatosBD.txt","a");
        fprintf(arquivo,"Nome:%s  Telefone:%s \n",x.nome,x.telefone);
        fclose(arquivo);

        
    }
}

void apagaBD(void)
{
    char opt;
    
    //Desenha o frame do messagebox...
    msgbox();  
    
    gotoxy(19,9);
    printf("Deseja apagar a base de dados do sistema?");
    gotoxy(20,10);
    printf("Esta operacao nao podera ser desfeita!");
    gotoxy(17,11);
    printf("Aperte 'S' para SIM ou qualquer tecla para NAO");
    gotoxy(40,12);
    scanf("%c",&opt);
    fflush(stdin);
    
    if (opt=='S' || opt=='s')
    {
        FILE *arquivo;
        arquivo = fopen("ContatosBD.txt","w");
        gotoxy(23,13);
        printf("Base de dados apagada com sucesso!");
        Sleep(1000);
        fclose(arquivo);           
    }
}

void listarContatos(void)
{
    FILE *arquivo; //Ponteiro do arquivo
    char texto[200];
    int cont=1;
    
    arquivo = fopen("ContatosBD.txt","r"); //Abre o arquivo para leitura...
    system("cls");
    
    printf("Lista de contatos\n");
    printf("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n\n");
    
    while(fgets(texto,126,arquivo)){
        printf("%s\n",texto);
        cont++;
    }
    fclose(arquivo); //Fecha o arquivo...
    gotoxy(0,0);
    getch();
}

// Fun��o gotoxy =======================================
void gotoxy(int x, int y)
{
    HANDLE hOut;
    int i;
    COORD Position;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    Position.X = x;
    Position.Y = y;
    SetConsoleCursorPosition(hOut,Position);
}

//Fun��o pra desenhar o frame da messagebox...
void msgbox(void)
{
     //Desenha o frame do messagebox....
    gotoxy(14,7);
    printf("\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0");
    gotoxy(14,8); 
    printf("\xB0                                                  \xB0");
    gotoxy(14,9); 
    printf("\xB0                                                  \xB0");
    gotoxy(14,10); 
    printf("\xB0                                                  \xB0");
    gotoxy(14,11); 
    printf("\xB0                                                  \xB0");
    gotoxy(14,12); 
    printf("\xB0                                                  \xB0");
    gotoxy(14,13); 
    printf("\xB0                                                  \xB0");
    gotoxy(14,14);
    printf("\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0");
}

void about(void)
{
   int i;
    for(i=0;i<100;i++){
    	printf("\n");
	}
    printf("Desligando...");
    Sleep(2000);

}

void procurarContatos(void)
{
    int cont;
    char conteudo[126];
    
    system("cls");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                 Procurar Contato                             \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2    Nome: _______________________________________________________________     \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(11,8);
	scanf("%s",x.nome);  
    
    FILE *arquivo;
    arquivo = fopen("ContatosBD.txt","r");
    
    system("cls");

    while(fscanf(arquivo,"%s",&conteudo) != EOF){
        printf("%s",conteudo);                                     
    
    
    fclose(arquivo); //Fecha o arquivo...

        
        cont++;
    }
  
    fclose(arquivo);    
        
    getch();
}
