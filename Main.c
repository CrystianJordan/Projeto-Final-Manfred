#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>
#include <string.h>
#define LIMITE_AGENDA 100

//Declaraï¿½ï¿½o dos protï¿½tipos das funï¿½ï¿½es
void gotoxy(int x, int y);
void cadastraContato(void);
void geraframeMain(void);
void splashscreem(void);
void apagaBD(void);
void listarContatos(void);
void msgbox(void);
void about(void);
void procurarContatos(void);
void leArquivo();
void salvaArquivo();
int veLimite();
void setaFlag();
void clear();
void excluiCOntatos();
//Variï¿½veis globais
typedef struct contato{ 
	char nome[20]; 
	int flag ;
	char telefone[13];	
}Contato;

 Contato agenda[LIMITE_AGENDA];


int lim;
int main(void){
setaFlag();
  leArquivo();
  veLimite();


      
    //Chama o splashscreem....
    splashscreem();    
  
    //Gera o quadro inicial
    geraframeMain();

}

//Funï¿½ï¿½o que gera o splash screem...
void splashscreem(void)
{    
    int i;
    
    system("cls");     
    system("color 0A"); 
    gotoxy(17,10);
    printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
    gotoxy(17,11);
    printf("\xBA                                          \xBA");
    gotoxy(17,12);
    printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");
    gotoxy(18,13);
    printf("Carregando..."); 
    
    //Animaï¿½ï¿½o do progress bar...
    for (i=18;i<60;i++)
    {
        gotoxy(i,11);
        printf("\xB2");  
        
    } 
    
 
    
    system("cls"); 
}

//Funï¿½ï¿½o pra gerar a tela principal ===============================
void geraframeMain(void)
{ 
leArquivo();
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
        printf("\xB2    [5] Sair do sistema                                                       \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2    Digite a opcao : _                                                        \xB2");      
        printf("\xB2                                                                              \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        //Pega a opï¿½ï¿½o selecionada pelo usuï¿½rio...
        gotoxy(22,20);
        scanf("%i",&opt);
        fflush(stdin);
    
        //Determina a aï¿½ï¿½o de acordo com a opï¿½ï¿½o selecionada no menu...    
        switch(opt){
            case 1:
                cadastraContato();
                break;
            case 2:
                listarContatos();
                break;
            case 3:
                procurarContatos();
                break;
            case 4:
                excluiContatos();
                break;
            case 5:
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

//Funï¿½ï¿½o pra gerar a tela de cadastro ===============================
void cadastraContato(void)
{
	int limite; 
	Contato x;
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
	
	
	x.flag=1;
	gotoxy(5,22);
limite=veLimite();
int i;
int verif=0;
for(i=0;i<LIMITE_AGENDA;i++){
if(strcmp(agenda[i].telefone,x.telefone)==0){
verif=1;
break;	
}	
}
if(verif==0){
	agenda[limite]=x;
printf("%i",limite);
      
       salvaArquivo();
printf("Contato salvo com sucesso, pressione qualquer tecla para continuar");
}else{
	printf("Esse telefone ja existe, pressione qualquer tecla para continuar");
}

getch();
        
    
}



void listarContatos(void)
{
  splashscreem(); 
  gotoxy(0,0);
  leArquivo();
    int i;
    printf("Lista de contatos\n");
    printf("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n\n");
    
  for(i=0;i<=LIMITE_AGENDA;i++){
  if(agenda[i].flag!=0){
  		printf("Nome:%s    Telefone:%s\n",agenda[i].nome,agenda[i].telefone);
  }
  	

  }
    printf("Pressione qualquer tecla para continuar");
    getch();
}

// Funï¿½ï¿½o gotoxy =======================================
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

//Funï¿½ï¿½o pra desenhar o frame da messagebox...
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
	salvaArquivo();
    printf("Desligando...");
    Sleep(2000);
exit(0);
}

void procurarContatos(void)
{
	Contato x;
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
    
   splashscreem();
   gotoxy(0,0);
   printf("Aqui estão todos os resultados do nome procurado\n");
	printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2B2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2B2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
	for(cont=0;cont<=LIMITE_AGENDA;cont++){
		
		if(strcmp (agenda[cont].nome,x.nome) == 0){
			if(agenda[cont].flag!=0){
					printf("Nome:%s       Telefone:%s\n",agenda[cont].nome,agenda[cont].telefone);
			}
		
		}
	}
    getch();
}
void leArquivo()
{
int n;
	
	FILE *arquivo;
    if ((arquivo = fopen("ContatosBD.bin","rb")) == NULL)
    {
    	printf("Erro ao abrir arquivo");
		exit(1);
	}	
	
	for(n = 1; n <LIMITE_AGENDA; ++n) 
	{
		fread(agenda, sizeof(Contato)*LIMITE_AGENDA, 1, arquivo);
	}	
		

}

void salvaArquivo()
{
	int n;
	
	FILE *arquivo;
    if ((arquivo = fopen("ContatosBD.bin","wb")) == NULL)
    {
    	printf("Erro ao abrir arquivo");
		exit(1);
	}
	
	for(n = 1; n < LIMITE_AGENDA; ++n) 
	{
		fwrite(agenda, sizeof(Contato)*LIMITE_AGENDA, 1, arquivo);
	}
	fclose(arquivo);
}
	

		
	
		


int veLimite(){
	int lim=0;
	int index;
      
    for(index=0;index<LIMITE_AGENDA ;index++){
if(agenda[index].flag!=0){
lim=index+1;
}else{
	
    break;
}
}
return lim;
}

void setaFlag(){
	
	int i;
	for(i=0;i<LIMITE_AGENDA;i++){
		if(agenda[i].flag==1){
			
		}else{
			agenda[i].flag=0;
		}
		
	}
	
}
void clear(){
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

void excluiContatos(){
 splashscreem(); 
  gotoxy(0,0);
  leArquivo();
    int i;
    printf("Lista de contatos\n");
    printf("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n\n");
    
  for(i=0;i<=LIMITE_AGENDA;i++){
  if(agenda[i].flag!=0){
  		printf("Nome:%s    Telefone:%s\n",agenda[i].nome,agenda[i].telefone);
  }
  	

  }
	Contato x;
	printf("\nDigite o telefone de quem voce quer excluir: ");
	gets(x.telefone);
	fflush(stdin);
	
	int j;
	for(i=0;i<=LIMITE_AGENDA;i++){
		
	
			if(strcmp(x.telefone,agenda[i].telefone)==0){
			for(j=i;j<LIMITE_AGENDA;j++){
				if(j==100){
					break;
				}else{
					agenda[j]=agenda[j+1];
				}
			}
		}	
		}
	salvaArquivo();
	}
		
	

