#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int h = 1000000, j = 2, gu = 1000;
void delay( unsigned int mseconds) {
int da;
for (da = 0; d <= mseconds; d++);
}
float serie () {
  int coracao; for (coracao = 0; coracao < j; coracao++) {printf("\e[H\e[2J");printf("\n   ..      ..   "); printf("\n  .....   ..... ");  printf("\n ..............."); printf("\n ...............");
  printf("\n  ............."); printf("\n   ..........."); delay(h); printf("\n    ........."); printf("\n     .......");   printf("\n      ....."); printf("\n       ..."); printf("\n        ."); delay(h); printf("\e[H\e[2J");}  j = 2; return(1);
}
int main () {
  serie(); delay(1000); char frases[] = " Sao Paulo, 02/04/2020.\n (Na Quarentena)\n\n\n Este Programa foi feito com muito Carinho, Amor e Admiracao\n para a linda: Ana Clara Scomparim Oliveira. Espero que goste! \n\n\n Por: Igor Costa Doliveira.";
  int f; for (f = 0; f < 196; f++) printf("%c", frases[f]), delay(gu); delay(h);
  int ch; do {
    serie(); char frases[] = "\n Linda, escolha uma das opcoes abaixo:\n\n 1 - Tutorial Inicial do Programa (Clique aqui na sua primeira vez).\n\n"
    " 2 - Desafios.\n\n 3 - Tesouro (Clique aqui apenas quando descobrir a senha) :).\n\n 4 - Demonstracao do meu coracao quando te vejo.\n\n Opcao: ";
    int f; for (f = 0; f < 249; f++) printf("%c", frases[f]), delay(gu); scanf("%d",&ch); fflush(stdin);
    if (ch == 1) {
      serie(); char frases[] = "  Tutorial inicial:\n\n Este programa foi feito com muito carinho como uma forma de presente para os seus 19 anos de idade Linda! Como estamos em uma epoca muito dificil de nos vermos (famosa quarentena) fiz este presente como uma forma de parabeniza-la mesmo nessa epoca. Portanto, considere esse programa como uma cartinha linda, porem uma cartinha que nunca vai se apagar, molhar ou estragar com o tempo...\n\n  Essa cartinha funciona como um caca ao tesouro, onde eu coloquei 19 perguntinhas bem faceis sobre voce e o nosso relacionamento e se voce acertar todas vai conseguir uma senha que abre o seu presentinho de aniversario ta bom bebe?\n\n  As perguntas estao divididas em 3 etapas:\n  Na primeira possui 5 perguntas alternativas (a, b, c, d, e) com dificuldade facil.\n  Na segunda possui 5 charadas com dificuldade media onde voce precisa adivinhar as palavras que me refiro.\n  Na terceira tem 9 charadas com dificuldade dificil bb, vai precisar pensar haha.\n\n  Voce acha que seria tao facil ganhar o presente sua safada? Boa sorte mozinho e espero que voce nao resolva tao rapido os desafios... Te amo, Espero que goste! Que comece os jogos amorosos!\n\n\n  Obs: Mozinho, como nao sou um programador muito bom, apenas escreva as opcoes que foram dadas se nao o programa pode explodir, obg.";
      int f; for (f = 0; f < 1292; f++) printf("%c", frases[f]), delay(gu); getch();
    }
    if (ch == 4) {delay (1000); h = 0; j = 40; serie(); }
  }
  while ((ch != 2)&&(ch != 3)&&(ch != 2017));
  if (ch == 2) {
    serie(); char frases[] = "\n\n Voce escolheu o caminho certo gata! Primeiro em namorar comigo hihi, e por \n ultimo"
    " um desafio sempre faz bem para a saude...\n\n Voce tem infinitos segundos para resolver este questionario vida.\n\n Boa sorte, Te Amo <3";
    int f; for (f = 0; f < 220; f++) printf("%c", frases[f]), delay(50); delay(2000);
    serie(); char frase[] = "\n\n  ETAPA 1: IDENTIFICACAO - DIFICULDADE: FACINHO.";
    for (f = 0; f < 50; f++) printf("%c", frase[f]), delay(gu); delay(h);
    char ch1 = '1'; do {
     serie(); char frases[] = "\n\n DESAFIO 1: Qual eh o seu nome (preciso confirmar que eh voce):\n\n (a)- Aninha. \n\n"
     " (b)- Xuxu.\n\n (c)- Ana Clara Scomparim Oliveira.\n\n (d)- Pudinzinho.\n\n (e)- Isso nao importa, apenas te amo.\n\n\n Resposta:  ";
     int f; for (f = 0; f < 203; f++) printf("%c", frases[f]), delay(gu); scanf("%c",&ch1); fflush(stdin);
     if (ch1 != 'd') serie(), printf("\n\n\n\n  ERROU!! Estou em duvida se voce eh mesmo o meu love... to de olho."), delay(h);
    }
    while (ch1 != 'd');
    serie(); printf("\n\n\n\n  ACERTOU!! Logico que seu nome importa, ele eh pudinzinho!"); delay(h);
     ch1 = '1'; do {
     serie(); char frases[] = "\n\n DESAFIO 2: Ainda estou um pouco em duvida da sua identidade. Qual a sua idade?\n\n (a)- Sla. \n\n"
     " (b)- 19.\n\n (c)- Corpao de 19 e Mentalidade de 1.\n\n (d)- Mentalidade de 19 e Corpao de 1.\n\n (e)- Tem 1 aninho porque eh bebe.\n\n\n Resposta:  ";
     int f; for (f = 0; f < 234; f++) printf("%c", frases[f]), delay(gu); scanf("%c",&ch1); fflush(stdin);
     if (ch1 != 'c') serie(), printf("\n\n\n\n  ERROU AMORZINHO, que decpcao..."), delay(h);
    }
    while (ch1 != 'c');
    serie(); printf("\n\n\n\n ACERTOUU VIDAA! Tu eh um bebe, porem tem um corpao da poha..."); delay(h);
     ch1 = '1'; do {
     serie(); char frases[] = "\n\n DESAFIO 3: Quais sao as suas duas comidas favoritas gatinha?:\n\n (a)- Eu e eu. \n\n"
     " (b)- Strognoff de Frango.\n\n (c)- Comida Japonesa e Miojo.\n\n (d)- Comida Japonesa e Hamburguer.\n\n (e)- Comida Japonesa e Pizza.\n\n\n Resposta:";
     int f; for (f = 0; f < 225; f++) printf("%c", frases[f]), delay(gu); scanf("%c",&ch1); fflush(stdin);
     if (ch1 != 'd' && ch1 != 'a') serie(), printf("\n\n\n\n  ERROU CARALHO!!"), delay(h);
     else if (ch1 == 'a') serie(), printf("\n\n\n\n  Essa poderia ser bb safada :), mas errou..."), delay(h);
    }
    while (ch1 != 'd');
    serie(); printf("\n\n\n\n  ACERTOUU VIDAA! Voce prefere mais Hamburguer sim, sei mais que voce..."); delay(h);
     ch1 = '1'; do {
     serie(); char frases[] = "\n\n DESAFIO 4: O que voce ja roubou de mim safada:\n\n (a)- Tudo que eu ja tive e vou ter. \n\n"
     " (b)- Pen Drive.\n\n (c)- Blusas e Calsas.\n\n (d)- Relogios e Pulseiras.\n\n (e)- Os meus melhores blusoes :(.\n\n\n Resposta:  ";
     int f; for (f = 0; f < 210; f++) printf("%c", frases[f]), delay(gu); scanf("%c",&ch1); fflush(stdin);
     if (ch1 != 'a') serie(), printf("\n\n\n\n  IMPOSSIVEL VOCE ERRAR ESSA PO!"), delay(h);
    }
    while (ch1 != 'a');
    serie(); printf("\n\n\n\n  ACERTOUU VIDAA! Tudo meu eh seu..."); delay(h);
     ch1 = '1'; do {
     serie(); char frases[] = "\n\n  DESAFIO 5: Quem eh o ser vivo que voce mais ama na vida do universo visivel?\n\n (a)- Igor Costa.\n\n"
     " (b)- Iguinho.\n\n (c)- O seu Amor.\n\n (d)- O mais Lindo.\n\n (e)- Qualquer um menos o Tobi. \n\n\n Resposta:  ";
     int f; for (f = 0; f < 203; f++) printf("%c", frases[f]), delay(gu); scanf("%c",&ch1); fflush(stdin);
    }
    while (ch1 != 'a' && ch1!='b' && ch1 != 'c' && ch1!='d' && ch1 != 'e');
    serie(); printf("\n\n\n\n  Todas estavam certas vida HAHAHA!!"); delay(h);
    serie(); char frase1[] = "\n\n  ETAPA 2: CHARADAS - DIFICULDADE: ATE QUE VAI.";
    for (f = 0; f < 49; f++) printf("%c", frase1[f]), delay(gu); delay(h);
    ch = 0; do {
      serie(); char senha1[21] = "ligeirinho",senha2[21],deposito[26];
      char frases[] = "\n\n  DESAFIO 6: Lo amo mucho mas que a ti chica. Personagem do Looney Tunes. \n\n\n  Resposta: ";
      int f; for (f = 0; f < 91; f++) printf("%c", frases[f]), delay(gu);
      fgets(deposito, sizeof(deposito), stdin);
      sscanf(deposito, "%s", &senha2); fflush(stdin); if (strcmp (senha1,senha2) == 0 ) ch = 1;
      if (ch == 0) serie(), printf("\n\n  ERROU! NAO ACREDITO QUE ERRARIA ISSO..."), delay(h); }
    while (ch == 0); serie(); printf("\n\n  ACERTOU! CLARO QUE EH AQUELE GORDINHO SAFADO."), delay(h);
    ch = 0; do {
      serie(); char senha1[21] = "bolinho,donuts",senha2[21],deposito[26];
      char frases[] = "\n\n  DESAFIO 7: Em ordem alfabetica quais sao os dois doces que eu compraria\n     na sua padaria? Coloca as palavras assim mozinho [xxxx,xxxx].\n\n  Resposta: ";
      int f; for (f = 0; f < 156; f++) printf("%c", frases[f]), delay(gu);
      fgets(deposito, sizeof(deposito), stdin);
      sscanf(deposito, "%s", &senha2); if (strcmp (senha1,senha2) == 0 ) ch = 1; fflush(stdin);
      if (ch == 0) serie(), printf("\n\n  TEM CERTEZA QUE EU PEDIRIA ISSO NA SUA PADARIA?"), delay(h); }
    while (ch == 0); serie(); printf("\n\n  ACERTOU!!! E APROVEITA E ME DA UM BOLINHO COM DONUTS?"), delay(h);
    ch = 0; do {
      serie(); char senha1[21] = "acefalinho",senha2[21],deposito[26];
      char frases[] = "\n\n  DESAFIO 8: Com voce ate a malformacao da mula sem cabeca virou um\n     elogio carinhoso.\n\n\n  Resposta: ";
      int f; for (f = 0; f < 107; f++) printf("%c", frases[f]), delay(gu);
      fgets(deposito, sizeof(deposito), stdin);
      sscanf(deposito, "%s", &senha2); fflush(stdin); if (strcmp (senha1,senha2) == 0 ) ch = 1;
      if (ch == 0) serie(), printf("\n\n  ERROU! SABIA QUE VOCE ERA..."), delay(h); }
    while (ch == 0); serie(); printf("\n\n  PARABENS ACEFALINHA, VOCE PEGOU O JEITO!"), delay(h);
    ch = 0; do {
      serie(); char senha1[21] = "truco",senha2[21],deposito[26];
      char frases[] = "\n\n  DESAFIO 9: Voce precisou perder um jogo para ganhar o jogo.\n\n\n  Qual o nome daquele jogo pata?:";
      int f; for (f = 0; f < 100; f++) printf("%c", frases[f]), delay(gu);
      fgets(deposito, sizeof(deposito), stdin);
      sscanf(deposito, "%s", &senha2); if (strcmp (senha1,senha2) == 0 ) ch = 1; fflush(stdin);
      if (ch == 0) serie(), printf("\n\n MDS PERDEDORA, TENTA DE NOVO!"), delay(h); }
    while (ch == 0); serie(); printf("\n\n SO NAO VAI PEDIR TRUCO EM MAO DE ONZE AGORA HEIN!"), delay(h);
    serie(); char frase2[] = "\n\n  ETAPA 3: CHARADAS - DIFICULDADE: DE PISCAR O CU.";
    for (f = 0; f < 53; f++) printf("%c", frase2[f]), delay(gu); delay(h);
    ch = 0; do {
      serie(); char senha1[21] = "rapunzel",senha2[21],deposito[26];
      char frases[] = "\n\n  DESAFIO 10: Voce se apaixonou pela Agua Fervente do Vegano da Marvel.\n\n\n  Quem eh voce?: ";
      int f; for (f = 0; f < 93; f++) printf("%c", frases[f]), delay(30);
      fgets(deposito, sizeof(deposito), stdin);
      sscanf(deposito, "%s", &senha2); fflush(stdin); if (strcmp (senha1,senha2) == 0 ) ch = 1;
      if (ch == 0) serie(), printf("\n\n  PUTZ AMOR, BRISA MAIS..."), delay(3000); }
    while (ch == 0); serie(); printf("\n\n  A PRINCESA MAIS LINDA DA CIDADE :)"), delay(3000);
    ch = 0; do {
      serie(); char senha1[21] = "-26",senha2[21],deposito[26];
      char frases[] = "\n\n  DESAFIO 11: Algelim eh nosso amigo e como voce eh expert e ja teve a materia\n\t resolve o determinante rapidao ai: \n\n\n\t\t\t\t1  0  3  2\n\t\t\t\t3  4  -1 2\n\t\t\t\t0  3  1  2\n\t\t\t\t1  5  2  3\n\n  Det = ";
      int f; for (f = 0; f < 190; f++) printf("%c", frases[f]), delay(30);
      fgets(deposito, sizeof(deposito), stdin);
      sscanf(deposito, "%s", &senha2); if (strcmp (senha1,senha2) == 0 ) ch = 1; fflush(stdin);
      if (ch == 0) serie(), printf("\n\n  VAI ESTUDAR MAIS GORDINHA, ERROU!"), delay(3000); }
    while (ch == 0); serie(); printf("\n\n  ALGELIN EH NOSSO AMIGUINHO :)"), delay(3000);
    ch = 0; do {
      serie(); char senha1[21] = "2",senha2[21],deposito[26];
      char frases[] = "\n\n  DESAFIO 12: Agora que esta em dia faz uma matriz 5x5 ai rapidao kkk.\n\n\n\t\t\t\t1  2  2  1  2\n\t\t\t\t0  1  1  0  0\n\t\t\t\t-1 3  3  1 -2\n\t\t\t\t2  1  2  1 -3\n\t\t\t\t1  1  1  1  1\n\n  Det = ";
      int f; for (f = 0; f < 174; f++) printf("%c", frases[f]), delay(30);
      fgets(deposito, sizeof(deposito), stdin);
      sscanf(deposito, "%s", &senha2); if (strcmp (senha1,senha2) == 0 ) ch = 1; fflush(stdin);
      if (ch == 0) serie(), printf("\n\n  PUTZ AMOR, PENSEI QUE TINHA PEGADO O JEITO..."), delay(3000); }
    while (ch == 0); serie(); printf("\n\n  TU EH FODA GAROTA, ME DA UM TOQUE QUANDO ACERTAR ESSA PQ VOU TE DAR UM BEIJO NA SUA BOCA"), delay(6000);
    ch = 0; do {
      serie(); char senha1[21] = "cricri",senha2[21],deposito[26];
      char frases[] = "\n\n  DESAFIO 13: Meu maior desejo eh ter todos os dias 9911410599114105 comigo,\n              mas esqueci de converter int em char...\n\n\n  O que eu quero linda?: ";
      int f; for (f = 0; f < 161; f++) printf("%c", frases[f]), delay(30);
      fgets(deposito, sizeof(deposito), stdin);
      sscanf(deposito, "%s", &senha2); if (strcmp (senha1,senha2) == 0 ) ch = 1; fflush(stdin);
      if (ch == 0) serie(), printf("\n\n  INFELIZMENTE TU ERROU ESSA..."), delay(3000); }
    while (ch == 0); serie(); printf("\n\n  AI MDS QUE SAUDADE DELE, QUEROOO!"), delay(4000);
    ch = 0; do {
      serie(); char senha1[21] = "10",senha2[21],deposito[26];
      char frases[] = "\n\n  DESAFIO 14: No dia 16/05/2018 voce _scomparim_ me ligou quantas vezes?: ";
      int f; for (f = 0; f < 76; f++) printf("%c", frases[f]), delay(30);
      fgets(deposito, sizeof(deposito), stdin);
      sscanf(deposito, "%s", &senha2); if (strcmp (senha1,senha2) == 0 ) ch = 1; fflush(stdin);
      if (ch == 0) serie(), printf("\n\n  ERROU GATINHA, PROCURA UM POUCO MAIS!"), delay(3000); }
    while (ch == 0); serie(); printf("\n\n  MDS COMO VOCE EH BOA EM CHARADA HEIN GATA!"), delay(4000);
    ch = 0; do {
      serie(); char senha1[21] = "gostosa",senha2[21],deposito[26];
      char frases[] = "\n\n  DESAFIO 15: Vigenere me contou que a chave do yqgfdsr era SCOMPARIM.\n\n\n  O que ele contou?: ";
      int f; for (f = 0; f < 96; f++) printf("%c", frases[f]), delay(30);
      fgets(deposito, sizeof(deposito), stdin);
      sscanf(deposito, "%s", &senha2); if (strcmp (senha1,senha2) == 0 ) ch = 1; fflush(stdin);
      if (ch == 0) serie(), printf("\n\n  EEERRRROOOOUUUUU!"), delay(3000); }
    while (ch == 0); serie(); printf("\n\n  AGORA QUE VOCE ENTENDE DE CRIPTOGRAFIA VEM ME DECIFRAR Rs"), delay(5000);
    ch = 0; do {
      serie(); char senha1[21] = "cu",senha2[21],deposito[26];
      char frases[] = "\n\n  DESAFIO 16: Qual eh a palavra que eu e voce mais falamos entre nos?\n\n\n  Resposta: ";
      int f; for (f = 0; f < 85; f++) printf("%c", frases[f]), delay(30);
      fgets(deposito, sizeof(deposito), stdin);
      sscanf(deposito, "%s", &senha2); if (strcmp (senha1,senha2) == 0 ) ch = 1; fflush(stdin);
      if (ch == 0) serie(), printf("\n\n  NAO ACREDITO NESSE TEU ERRO..."), delay(3000); }
    while (ch == 0); serie(); printf("\n\n  AIAI TU VAI ME DAR DEMAIS ELE!"), delay(4000);
    ch = 0; do {
      serie(); char senha1[21] = "tiradentes",senha2[21],deposito[26];
      char frases[] = "\n\n  DESAFIO 17: Sua gravura esta presente no aco revestido com cobre.\n\n\n  Inesquecivel bebe: ";
      int f; for (f = 0; f < 93; f++) printf("%c", frases[f]), delay(30);
      fgets(deposito, sizeof(deposito), stdin);
      sscanf(deposito, "%s", &senha2); if (strcmp (senha1,senha2) == 0 ) ch = 1; fflush(stdin);
      if (ch == 0) serie(), printf("\n\n  TU ERROU, GOSTARIA DE UM REPLAY?"), delay(3000); }
    while (ch == 0); serie(); printf("\n\n  SAUDADES DESSE LUGAR GOSTOSINHO QUE VIVEMOS S2"), delay(5000);
    ch = 0; do {
      serie(); char senha1[21] = "sexo",senha2[21],deposito[26];
      char frases[] = "\n\n  DESAFIO 18+: Com voce isso eh sempre incrivel.\n\n\n  Resposta: ";
      int f; for (f = 0; f < 64; f++) printf("%c", frases[f]), delay(30);
      fgets(deposito, sizeof(deposito), stdin);
      sscanf(deposito, "%s", &senha2); if (strcmp (senha1,senha2) == 0 ) ch = 1; fflush(stdin);
      if (ch == 0) serie(), printf("\n\n  NAO VOU FALAR NADA."), delay(3000); }
    while (ch == 0); serie(); printf("\n\n  EU AMO! META TODOS OS DIAS"), delay(4000);
    ch = 0; do {
      serie(); char senha1[21] = "25/06/2017",senha2[21],deposito[26];
      char frases[] = "\n\n  DESAFIO 19: Qual foi a data em que nossos destinos se cruzaram?.\n\n\n  [xx/xx/xxxx] = ";
      int f; for (f = 0; f < 88; f++) printf("%c", frases[f]), delay(30);
      fgets(deposito, sizeof(deposito), stdin);
      sscanf(deposito, "%s", &senha2); if (strcmp (senha1,senha2) == 0 ) ch = 1; fflush(stdin);
      if (ch == 0) serie(), printf("\n\n  ESTA QUASE LA, VAMOS MOZINHO..."), delay(3000); }
    while (ch == 0); serie(); printf("\n\n  ACERTOU MDS DO CEU, TE AMO!"), delay(4000);
    serie(); char frase3[] = "  Ana Clara Scomparim\n\n  Tu acertou todos os desafios! Mds que orgulho de voce, tao inteligente, bonita e esperta, iti malia! Vontade de guardar em um potinho aqui em casa e ficar te alimentando e cuidando de voce! \n\n  Parabens bb, voce mereceu a chave do meu coracao. Olha que eu nunca dei a chave dele para nenhuma outra hein, toma bastante cuidado com ele ta bom? Promete de dedinho? A chave eh tua, voce que virou o meu mundo de ponta cabeca... Ne Scomparim de ponta cabeca! Te amo.\n\n\n  CHAVE DO MEU CORACAO: 'MIRAPMOCS'.";
    for (f = 0; f < 525; f++) printf("%c", frase3[f]), delay(70); getch();
  }
  if (ch == 3) {
    int ch = 0; do {
      char senha1[21] = "MIRAPMOCS",senha2[21],deposito[26];
      serie(); char frase[] = "\n\n  <3 Entao voce ja sabe a senha safada? <3\n\n\n  SENHA: ";
      int f; for (f = 0; f < 56; f++) printf("%c", frase[f]), delay(60); fgets(deposito, sizeof(deposito), stdin);
      sscanf(deposito, "%s", &senha2); fflush(stdin); if (strcmp (senha1,senha2) == 0 ) ch = 1;
      if (ch == 0) serie(), printf("\n\n\n  ERROU! NAO VALE CHUTAR FEIA."), delay(3000); }
    while (ch == 0); serie(); char frases[] = "\n\n  PARABENS BEBE!!!\n\n  FINALMENTE VOCE CONSEGUIU A CHAVE PARA O MEU CORACAO!\n\n  DEU MUITO TRABALHO FAZER ESSE PROGRAMA LINDA...\n\n"
    "  ESPERO QUE VOCE GOSTE, FIZ COM MUITO AMOR NO CORACAO\n\n  VOCE EH MARAVILHOSA, MELHOR NAMORADA!\n\n  AGORA DIGITE A SENHA PARA PROSSEGUIR:";
    int f; for (f = 0; f < 267; f++) printf("%c", frases[f]), delay(60); delay(5000);

    char ch1; serie(); char frase1[] = "\n\n  MENTIRA LINDA NAO TEM MAIS NENHUMA SENHA KKK\n\n  Digite qualquer coisa para encontrar o seu presente.";
    for (f = 0; f < 105; f++) printf("%c", frase1[f]), delay(65); scanf("%c",&ch1); fflush(stdin);
    if (ch1 != 's') { serie(); char frase[] = "\n\n  PRESENTE: Ticket vale infinitos beijinhos.\n\n            Validade: Nao tem.\n\n  Espero que tenha gostado! Beijos!";
    for (f = 0; f < 115; f++) printf("%c", frase[f]), delay(100); getch(); return 0;} } ch = 2017;

   if(ch == 2017) {int loop = 1; while (loop) {
      char ch1 = '1'; do {
       serie(); printf("\n\n  Escolha os seus presentes gatinha. Te amo!\n\n\n  a - Textinho de Parabens. \n\n"
       "  b - Cartinhas.\n\n  c - Tickets.\n\n  Opcao: "); scanf("%c",&ch1); fflush(stdin); } while ((ch1 != 'a')&&(ch1 != 'b')&&(ch1 != 'c'));
      if (ch1 == 'a') {
         serie();char frase[] = " Sao Paulo, 02 de Abril de 2020. \n\n\n Amorzinho,\n\n\n Feliz Aniversario, te desejo tudo de mais maravilhoso que essa vida possa dar. Muito amor, muita alegria, que voce consiga realizar todos os seus sonhos e desejos e que sempre seja essa mulher incrivel que voce se tornou.\n\n Te amo muito, voce eh uma pessoa, mulher, filha, irma, prima, amiga, bestfriend, pudinzinha, amorzinho, mozao, namorada incrivel, onde alem de ser gata por fora, tem um coracao tao lindo por dentro."
         "\n\n O aniversario eh seu mas sou eu que ganho presentes todos os dias ao seu lado, eu que preciso comemorar por ter essa bundinha maravilhosa so para mim! Entao quero agradecer a voce por tudo que ja me fez, voce eh realmente muito especial para mim, seria como um whooper ta ligada, voce eh demais.\n\n Portanto, parabens por essa nova fase na sua vida e que voce seja muito feliz nela. O peso de ter 19 anos ja eh bastante alto haha, com ele vem responsabilidades e desafios novos, porem"
         " eu sei que voce vai ter muito sucesso nessa nova fase bb. Alem de Gostosa, Delicinha, Amorosa, Sentimental, Alegre, Tecnica em Automacao, voce vai ser uma Engenheira do caralho e vai sustentar eu e o Ligeirinho ne mozinho...\n\n Cada momento com voce eh espetacular, que a nossa relacao seja maravilhosa para sempre!\n\n\n\n Te amo! Feliz 19 anos!";
         int f; for (f = 0; f < 1302; f++) printf("%c", frase[f]), delay(65); getch();
      }
      else if (ch1 == 'b') {
        int ch1; do {
       serie(); printf("\n  1 - Cartinha do Amor. \n  2 - Cartinha da Felicidade.\n  3 - Cartinha da Sinceridade.\n  4 - Cartinha da Confianca.\n  5 - Cartinha da Cumplicidade.\n  6 - Cartinha que realca a sua Beleza.\n  7 - Cartinha da Saudade.\n  8 - Cartinha dos Problemas.\n  9 - Cartinha dos Desafios.\n  10 - Cartinha do Ciumes."
       "\n  11 - Cartinha para ler se quiser Terminar.\n  12 - Cartinha das Rimas.\n  13 - Cartinha das Musicas.\n  14 - Cartinha Melhores Comidas.\n  15 - Cartinha dos Sonhos.\n  16 - Cartinha da Preguica.\n  17 - Cartinha de Moda.\n  18 - Cartinha dos Presentes.\n  19 - Cartinha do Respeito.\n\n  Opcao:"); scanf("%d",&ch1); fflush(stdin);
      }
      while ((ch1 <= 0)&&(19 < ch1 <= 68)&& (ch1 > 69));
        if (ch1 == 1) {
         serie();char frase[] = "  Vila Matilde, SP - 30/03/2020\n\n\n  Mozinho, Cartinha do Amor.\n\n\n  O intuito dessa cartinha eh declarar o meu imenso amor por voce. Quando eu me refiro a voce, estou falando sobre o seu fisico, a sua personalidade, o seu jeitinho e principalmente o seu cheirinho. Devo relatar a ti garota que inicialmente era apenas uma paixao muito grande por voce ser linda e maravilhosa por fora, porem quando comecei a te conhecer por dentro (a sua cartinha e todas aquelas ligacoes nas ferias de 2018 ajudaram nisso) eu me apaixonei e virou amor de verdade. O significado de amor eh muito dificil de ser explicado para outra pessoa, varia muito ne, entretanto para mim amor eh quando da calafrios na barriguinha gordinha quando se encontra com a pessoa, quando voce para de pensar em si e prioriza o outro (dividir os lanches do BK, odeio, mas gosto de te ver de barriguinha cheia), quando rola aquela quimica ne, tipo os beijinhos e outras coisas rs. Entao o amor eh algo muito gostosinho e sempre quero sentir isso comigo bebe...\n\n  O amor siginfica:\n  A: Aninha.\n  M: Minha.\n  O: Ornitorrinco.\n  R: Risonha.\n\n  Te amo, Iguinho.";
         int f; for (f = 0; f < 1119; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 2) {
         serie();char frase[] = "  Tiradentes, SP - 30/01/2018\n\n\n  Gatinha, Cartinha da Felicidade.\n\n\n  Meus Deus como eu sou Feliz com voce garota!\n  Voce ja me fez acordar as sete horas da manha em um final de semana so para encontrar voce na Paulista, voce acha que eu faria isso por qualquer um? Eu amo ficar com voce, a tua presenca faz o ambiente tao bom, voce tem uma vibracao muito boa e gostosa meu amor. Amo as suas piadas que sao muito ruins, amo as conversas bobas que eu tenho com voce, como naquele video que a Melissa gravou da gente conversando no chao do quarto, amo sair com voce para qualquer lugar, porque so a sua companhia ja esta otimo, mas gosto de sair principalmente para lugares que tenham coisas gostosas para comer tipo Shoppings e Paulista. Voce faz uma comidinha caseira tao gostosa que eu fico super feliz em come-la haha, amo muito voce e obrigado por me fazer tao feliz!\n\n  Eu nao sei como acabar esta cartinha porque eu poderia falar sobre varias coisas que voce me deixa super feliz, tipo a sua repiracao no meu ouvidinho, os seus abracos na escada rolante, os apelidos que nos criamos, as nossas brincadeira e varias outras coisas bobas como essas. Para mim ser feliz eh so ter voce do lado hihi, te amo!\n\n  A Felicidade significa:\n  F: Feita\n  E: Exclusivamente.\n  L: Linda.\n  I: Incrivel.\n  C: Cuzona\n  I: Invisivel\n  D: De.\n  A: Amor.\n  D: Dinheiro.\n  E: Empatia.";
         int f; for (f = 0; f < 1370; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 3) {
         serie();char frase[] = "  Sao Bernardo do Campo - 12/02/2020\n\n\n  Bebezinho, Cartinha da Siceridade.\n\n\n  Nessa cartinha declararo compromisso com a sinceridade.\n\n  Ha diversos tipos de amor, porem o meu tem um sentimento sincero, um carinho e um interesse verdadeiro por voce pudinzinho. Depois de viver praticamente uma vida muito pessoal antes de te encontrar, com segredos e sentimentos intimos, tive que falar sobre eles para voce, nao foi facil e ainda nao vai ser facil ser totalmente verdadeiro, mas eu acredito que regando a nossa relacao com a sinceridade eh muito facil ela continuar crescendo e se tornar um lindo pe de maconha, no qual nos poderemos fumar muito e ficar bem chapados ouvindo um rap acustico gata!\n\n Portanto, acredito que nos devemos ser sinceros um com o outro, ate nas coisas que vao magoar, porque eu acho que uma mentira doi bem mais que uma sinceridade.\n\n\n  Te amo, seja sempre sincera comigo ta bom gatinha.";
         int f; for (f = 0; f < 917; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 4) {
         serie();char frase[] = "  Vila Matilde, SP - 01/04/2020\n\n\n  Pudinzinho, Cartinha da Confianca.\n\n\n  A confianca eh o sentimento de segurança que alguém tem relativamente a outra pessoa. A confianca pode ser tanto conquistada como oferecida, e neste exato momento eu estou oferecendo a voce sinceramente que pode ter confianca em mim. Mas se ter confianca na pessoa fosse tao facil e simples, nos nunca teriamos brigas bobas e tretas de sair no soco ne mozao. Por isso eu acho que com o passar do tempo, nos vamos conquistando e melhorando essa nossa confianca um com o outro e chegar em um nivel de inercia que nem o Newton propos, cuja movimentacao era apenas formada apartir de uma forca resultante na qual nao teria mais movimento negativo uma forca contraria que anularia a forca resultante para acabar com as nossas insegurancas e realcar o nosso compromisso e amor um com o outro.\n\n  Eu me empolguei um pouco no outro paragrafo, peco desculpas, mas so quero deixar bem claro que eu confio bastante em voce bebe, so que dependendo da situacao vou precisar da sua ajuda para ter total controle dos meus sentimentos e da minha confianca em voce, essa ajuda pode ser so uma ligacao de 10 minutinhos haha. Eu acho que a confianca eh conquistada totalmente com o tempo e a terceira cartinha eh fundamental para isso acontecer, por isso vai la ler!\n\n\n  Te amo muito, confio na sua bundinha!";
         int f; for (f = 0; f < 1365; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 5) {
         serie();char frase[] = "  Tiradentes, SP - 14/10/2018\n\n\n  Sua Linda, Cartinha da Cumplicidade.\n\n\n  Antes de iniciar esta cartinha eu quero declarar que eu amei as cartinhas que voce fez para mim e ate hoje fico muito emocionado ao ler, portanto a criacao dessas cartinhas foi possivel apenas pela sua criatividade magnifica e original, te amo bebe. As suas cartinhas vao estar na bibliografia deste programa, muito Obrigado!\n\n  A cumplicidade numa relação envolve parceria, confiança e apoio nas mais diversas decisões a serem tomadas. A cumplicidade é uma característica importante em nosso relacionamento, nao so no amoroso como no pessoal tambem, porque com apenas uma trocada de olhares ou a conotacao que atribuimos ao falar uma frase ja sabemos os sentimentos um do outro, eh algo muito dificil de se ter e apenas com o convivio e o companheirismo se controi. Obrigado, por me contar tudinho do seu dia e saber exatamente o que voce esta sentindo, quero ficar do seu lado tanto nos dias bons quanto nos ruins, quero ser seu namorado mas principalmente seu melhor amigo.\n\n  Espero que sempre no finalzinho dos roles, como sempre acontece, eu fique abracadinho em um banco com voce conversando sobre a vida um do outro, trocando historias, ideias, sentimentos e beijinhos.\n\n\n Quer ser a minha cumplice na vida?";
         int f; for (f = 0; f < 1291; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 6) {
         serie();char frase[] = "  Liceu de Artes e Oficios, SP - 28/07/2017\n\n\n  Sua Gostosa, Cartinha que realca a sua Beleza.\n\n\n  Eu vou amar fazer essa cartinha porque eu adoro realcar a beleza da minha namorada para todo o mundo hihi.\n\n  Amor tu eh gata hein puta que pariu, eu nao tenho nem palavras para descrever como eu te acho bonita, atraente e linda. Tu me encantou com esses cabelos de princesa desde o primeiro dia em que te vi no liceu, ainda mais depois que voce levantou e eu vi o seu corpinho esbelto com a sua bundinha piscando para mim. Eu amo tanto o seu corpinho, a sua boquinha gostosa, os seus cabelos, a cor dos teus olhos, os donuts maravilhosos, a dobrinha, nao: A DOBRINHA, pqp tudo em voce eh perfeito gata, ate mesmo o seu pe feio com seis dedos...\n\n  Agora eu vou te falar o que sempre quis falar: tua boniteza, beldade, formosura, venustidade, encanto, graca, lindeza, perfeicao, harmonia, imponencia, grandiosidade, perfeicao, proporcao, simetria, bondade, sublimidade, benevolencia, benignidade, excelencia, magnanimidade, impoluto, perfeicao, sem jaca, imaculado, indeformado, inatacavel, mds do ceu papai, que isso coisa linda, gata, poha que mina do krl, estou apaixonado, iti malia nene!";
         int f; for (f = 0; f < 1192; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 7) {
         serie();char frase[] = "  Em Todo Lugar, Mundo - Sempre\n\n\n  Sra Puff, Cartinha da Saudade.\n\n\n  Essa cartinha merece um destaque pelo tema que sempre fez muita parte na nossa relacao. Deus quis nos castigar por termos achado o amor da nossa vida tao cedo e tao facil, foi tipo 'puf' e voce apareceu, assim o Todo Criador para nao deixar tao facil colocou diversos obstaculos no nosso caminho minha vida, mas nao vai ser pelos empecilhos que vamos parar de se amar ne vida?\n\n  Gosto muito de voce, por isso quero ficar todo segundo dessa vida do seu lado e apenas uns minutinhos, horas, dias, semanas longe de voce parecem um inferno... Sei que voce sente o mesmo hihi, por isso quando voce sentir muita saudades de mim porque nao tenta me ligar, mandar uma mensagem, uma fotinho, um beijinho na video chamada ou ate mesmo um nudes haha! Ainda nao entendo todos os meus sentimento, mas desde que eu te conheci reconheco bem a saudade que sinto todos os dias de voce, principalmente apartir de 2019 quando saimos do Liceu que nos viamos muito pouco, nao quero que isso nunca mais ocorro por isso estou te esperando qualquer horario no Whats para te dar muito amor e carinho bebe! Morro de saudades de voce sempre, a saudade ja eh a minha companheira, entao vamos parar de besteira e vem mamar na mamadeira...";
         int f; for (f = 0; f < 1279; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 8) {
        serie();char frase[] = "  Sao Paulo, Capital - 2019\n\n\n  Florzinha, Cartinha dos Problemas.\n\n\n  Mozinho, mesmo em uma relacao considerada perfeita vai ter problemas entre o casal, a diferenca entre um casal perfeito eh que eles vao conversar, se entender e amadurecer o namoro novamente. Sempre que houver problemas tanto na sua vida academica, pessoal e amorosa eu quero que me diga o que esta acontecendo ta bom? Nunca eu vou querer fica sem saber uma coisinha sobre voce viu, nao se esqueca de mim e nao faz a gente ficar separado e longe um do outro! CONTA TUDO SAFADA, QUE EU VOU AI PARA A SUA CASA E NOS RESOLVEMOS COM MUITOS BEIJINHOS RS.\n\n  Por: IGUINHO.";
         int f; for (f = 0; f < 638; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 9) {
         serie();char frase[] = "  New York, EUA - 2032\n\n\n  Xuxu, Cartinha dos Desafios.\n\n\n  Voce ja passou por varios desafios e conseguiu com sucesso superar os seus limites diversas vezes. Apenas comigo ja foram varias, como todas as provas que voce estudava no Liceu, TCC, conseguir paciencia para suportar o seu namorado, a convivencia ai na sua casa, o vestibular, a saudade :( e varios outros. Voce eh uma grande mulher e essa cartinha tem o objetivo de te falar que eu sempre vou estar do seu lado te apoiando, te ajudando e te empurrando nos momentos mais dificeis e desafiadores da sua vida! Essa cartinha foi feita no seu futuro, aqui voce conseguiu superar muitos desafios e eh uma famosa engenheira no mundo (no meu pelo menos haha), alem do mais superou aquele seu medo com o cu rs. TE AMO HAHAHAAH SEMPRE VOU ESTAR DO SEU LADO, QUANTO MAIS DIFICIL OS DESAFIOS MELHOR VAI SER S2.\n\n  Por Mozinho.";
         int f; for (f = 0; f < 877; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 10) {
         serie();char frase[] = "  Sao Paulo, BR - O tempo todo.\n\n\n  Feia, Cartinha do Ciumes.\n\n\n  Essa cartinha eh muito importante para a nossa relacao. Eu gosto muito de voce e eu acho que voce gosta de mim kk, quando uma pessoa gosta tanto assim de alguem da vontade de guardar em um potinho, porem nao podemos fazer isso, entao essa pessoa cai nas tentacoes do mundo ne mozinho... Eh normal sentir ciumes, mas vamos tentar sempre deixar bem claro pro outro os motivos e o sentimento que esta rolando, vamos tentar sempre sermos sinceros e companheiros! Eh foda ver voce com esses mlk ai que eh tudo seu amiguinho mas esta so esperando voce a minha princesinha terminar, porem esses mlk vao esperar ate o caixao porque isso nao vai acontecer haha, voce eh so minha e vai ser assim para sempre fodasse. Eu? com ciumes? Claro que nao, eu so tranquei o meu mozinho no meu quarto para ela nunca sair...\n\n Bebe se voce estiver sentindo ciumes de algo que eu fiz tenta conversar comigo sobre isso para nos resolver logo e voltarmos para a cama rs. Te amo!";
         int f; for (f = 0; f < 1020; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 11) {
         serie();char frase[] = "\n\n\n      VAI TOMA NO CU, VAI TERMINAR O CARALHO, DEPOIS DESSA CARTINHA MARAVILHOSA QUE EU FIZ PARA VOCE? VAI CONVERSAR COMIGO LINDA!";
         int f; for (f = 0; f < 132; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 12) {
         serie();char frase[] = "  Batalha da Aldeia, SP - Sou Cria\n\n\n  Artista, Cartinha das Rimas.\n\n\n  O limao eh tao azedo, que ninguem pode chupar.\n\n  A sua boca eh tao doce que so eu posso beijar.\n\n  O Ministerio da Saude adverte: te ver longe de mim me faz sentir saudade.\n\n Para mais rimas eh so me contratar! Meu cel eh 11951015738, faco rimas ao vivo!";
         int f; for (f = 0; f < 328; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 13) {
         serie();char frase[] = "  Em Todo Lugar - Para Sempre\n\n\n  Gatinha, Cartinha das Musicas.\n\n\n  Nessa cartinha eu vou selecionar 5 musicas que a maioria voce conhece e eu quero que voce escute porque para mim sao as nossas musiquinhas e eu lembro de voce quando escuto elas:\n\n  1 - 4 da Manha (UM44K).\n\n  2 - Vou Te Levar (Fabio Brazza).\n\n  3 - Pra Voce Guardei o Amor (Nando Reis).\n\n  4 - Oracao (Abanda mais bonita da cidade).\n\n  5 - Agora Vai Sentar (MCs Jhowzinho).";
         int f; for (f = 0; f < 443; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 14) {
         serie();char frase[] = "  Sao Paulo - Finais de Semana\n\n\n  Gordinha, Cartinha Melhores Comidas.\n\n\n  Mozinho, essa cartinha vai ser bem dificil fazer porque nos gostamos de pouca comida ne? K K K. Nao sei nem por onde comecar, esses sao os meus favoritos que eu comi com voce e quero comer todos os dias quando nos formos ricos... Nordestino, Mexicano, Madero, Rodizio Japa, Pizzarias caras, PizzaHut tambem haha, Burguer King, Mc, Divino Fogao e aqueles de comida baratinha que a gente sempre come hihi!\n\n  Obs: A melhor comida eh a que voce faz ai na sua casa para mim, mds sou apaixonado, obrigado por fazer!!";
         int f; for (f = 0; f < 588; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 15) {
         serie();char frase[] = "  Na Minha Cama, SP - Toda noite.\n\n\n  Anjo, Cartinha dos Sonhos.\n\n\n  Mozinho, eu sonho todos os dias com voce porque voce eh perfeita, um anjo, uma gatinha safada que me faz acordar todo dia feliz hehe. Te amo! S2 S2 S2 z z Z.";
         int f; for (f = 0; f < 226; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 16) {
         serie();char frase[] = "  Vila Matilde, SP - 01/04/2020\n\n\n  Picanha, Cartinha da Preguica.\n\n\n  Fiquei com Preguica de fazer essa aqui, pode ir para a proxima!\n\n\n  Autor: Igor Costa.";
         int f; for (f = 0; f < 157; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 17) {
         serie();char frase[] = "  Sao Paulo, 01/04/2020\n\n\n  Coisa Linda, Cartinha de Moda.\n\n\n  Eu fiz esta cartinha para te dar um toque sobre os seus melhores looks e moda:\n\n  Qualquer pano, mas melhor sem pano, voce de pijama ou de cobertor, com aparelho, sem aparelho, usando crocs e meia, com oculos ou com lente, com saia, vestida de medica doutora que vai me tratar, qualquer coisa apenas voce e o seu cheirinho!\n\n\n Feito por: Cheirosinho.";
         int f; for (f = 0; f < 414; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 69) {

         serie();char frase[] = "  Em Qualquer Lugar - Em qualquer hora...\n\n\n  Delicia, Cartinha da Safadeza.\n\n\n  Finalmente chegou a hora dessa cartinha que eu tanto estava esperando hihi. Agora eu posso falar bem disso ne +18? Amor, voce eh um tesao! Pronto falei logo de cara, voce me deixa louco estando totalmente de roupa ou sem nada, pode estar de burca, biquine, so de sutia ou so com a cor da sua pele. Mozinho, nao tem como entrar nesse assunto e nao falar deles, os donuts, maravilhosos, perfeitos, excentricos, circulares, parecem uma montanha de doce de leite gostoso que eu quero meter a cara toda hora. Tem o cricri tambem que meu Deus do seu eu queria conhecer bem mais ele, maravilhoso, gostoso, lindo, queria fazer carinho nele toda hora pqp, voce deixa um dia eu ficar conversando com ele o dia todo, voce pode ficar vendo um filminho ou sla, se vira... Mozinho eu acho as nossas horinhas de safadeza as melhores que a gente tem, eh tao bom aquela nossa posicao mds, fico ate com falta de ar, amo o seu bolinho e espero que voce goste do meu, quero fazer bem mais agora que a gente tem lugar para fazer ne mozao hehe!! Falando nisso, nos podemos sair para um motelzinho toda semana agora ne vida, eu super topo e acho que voce tambem, eh claro quando nos tivermos dinheiro porque somos desempregados ainda. Quando morarmos juntos mds do ceu vai ser mais de uma vez por dia ne mozinho? Fala sim por favor, amo fazer essas coisas com voce, eh tao gostosinho hehe! Depois daquele dia com o Gui eu nunca mais tive a coragem de fazer com vontade ai mozinho, acho que para fazer isso nos precisamos estar com a mente limpa e despreocupados, ai na sua casa cada barulhinho eu ja tenho medo de chegar o seu pai de 2 metros de altura, da nao... Mas falando de coisa boa agora a melhor vez que nos fizemos foi naquele dia que foi em varios comodos ai na sua casa hehe, maravilhoso pqp, te amo safada!\n\n  Bora fazer muito mais, dedo no seu cu, te amo!";
         int f; for (f = 0; f < 1927; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 18) {
         serie(); char frase[] = "  Sao Paulo, SP - 02/04/2010\n\n\n  Meu Presentinho, Cartinha dos Presentes.\n\n\n  Mozinho, eu fiz essa cartinha para que voce saiba que eu amo os seus presentinhos, nao importa o que eh, se eh bonito, feio (nunca eh mas vai que), apenas palavra, roupa, qualquer coisa mesmo. Gosto apenas de ver a sua intencao e ver que voce trabalhou para fazer aquilo. Te amo gatinha, Espero que voce goste dos meus presentinhos bobos tambem haha!!";
         int f; for (f = 0; f < 430; f++) printf("%c", frase[f]), delay(65); getch();
        }
        else if (ch1 == 19) {
         serie();char frase[] = "  Shopping Tatuape, Sao Paulo - 30/01/2019\n\n\n  Ana Clara, Cartinha do Respeito.\n\n\n Te Respeito por admiracao.\n Te respeito por Amor.\n Te respeito por Reciprocidade.\n Te respeito por Igualdade.\n Te respeito por Beleza.\n Te respeito por Inteligencia.\n Te respeito por Individualidades.\n Te respeito por Sentimento.\n Te respeito por Aproximacao.\n Te respeito por ser Mulher.\n Te respeito pelas suas Conquistas.\n Te respeito por Confianca.\n Te respeito por medo de voce sua loca.\n\n  Voce eh maravilhosa como pessoa, por isso esta rodiada de pessoas que te amam e gostam de voce! Obrigado por tudo mozinho. Espero que tenha gostado do presentinho que eu me dispus a fazer, com muito respeito e admiracao por voce, te amo!\n\n\n  Autor: Igor Costa Doliveira.";
         int f; for (f = 0; f < 749; f++) printf("%c", frase[f]), delay(65); getch();
        }
      }
      else if (ch1 == 'c') {
       serie();int a; for (a = 0; a < 3; a++){
       char frase[] = "\n Vale Beijo.\n Vale Cafune.\n Vale Atitude. \n Vale barzinho.\n Vale Bolinho.\n Vale Docura.\n Vale Preguica.\n Vale Horario na Agenda.\n Vale Gostosuras e Travessuras.\n Vale Conchinha.\n Vale Remember.\n Vale Esquema.\n Vale Indicacao de Filmes.\n Vale Esquecimento de Problemas.\n Vale Quem sabe Faz ao Vivo rs.\n Vale Iniciativa.\n Vale Role Quinta Serie.\n Vale Cheirinho no Cangote.\n Vale Mordidinha daquele Jeito.\n Vale Jantar a Luz de Velas.\n Vale Motelzinho.\n Vale Netflix no Quarto.\n Vale Cinema.\n Vale Observacao.\n Vale Churras na casa da sogra.\n Vale Figurinha.\n Vale tirar a roupa.\n Vale Matar a Saudade.\n Vale Bitocas\n Vale Oi.\n Vale Paz.\n Vale Poxa, Crush.\n Vale Massagem nas Costas.\n Vale Encontrinho\n Vale Curso de Idiomas rs.\n Vale Cerveja.\n Vale Troca de Carinho.\n Vale Safarinho.\n Vale Dia de frio.\n Vale Cafezinho.\n Vale Desculpas.\n Vale Malandro.\n Vale Mimos.\n Vale Preguica.\n Vale Sarrada.\n Vale Celinho.\n Vale Beijo de Verdade.\n Vale Aquela Posicao.\n Vale Musica com Cafune.\n Vale Limpeza\n Vale Te Amo.\n Vale Licao de Casa.\n Vale Ajuda no Trabalho\n Vale Torta de Limao.\n Vale Chupao.\n Vale Mensagem.\n Vale Ligacao na Madrugada.\n Vale Desenho.\n Vale Musica.\n Vale Viagem.\n Vale Motorista.\n Vale Faisca.\n Vale Banheira.\n Vale Bebidas Alcoolicas.\n Vale Bolinho.\n Vale 10 Bolinhos..\n Vale Tapa.\n Vale 5 Minutos de Soco.\n Vale Me Xingar.\n Vale Ciumes.\n Vale Madero.\n Vale Pizza.\n Vale Hamburguer.\n Vale Casquinha de Baunilha.\n Vale Chiquinho.\n Vale Burguer King.\n Vale Mc Donalds.\n Vale Minha Cama.\n Vale Mil Beijinhos.\n Vale Eu Comer Seu Cu.\n Vale Biscoito.\n Vale Elogio no Instagram.\n Vale Elogio no Facebook.\n Vale Elogio no Whats.\n Vale Elogio na minha caminha.\n Vale Ficar no Escuro Comigo.\n Vale Ronco.\n Vale Conchinha.\n Vale Abraco.\n Vale Banho comigo.\n Vale Um Banho.\n Vale Escovar os Dentinhos.\n Vale Baleia Infinita...";
       int f; for (f = 0; f < 1829; f++) printf("%c", frase[f]), delay(17);}getch();
      }}}
}
