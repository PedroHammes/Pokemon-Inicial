#define BULBASAUR 1
#define CHARMANDER 2
#define SQUIRTLE 3

int compatibilidade[3], i;
int indice_maior=0, maior;
int bulb, charm, squir, total;
float porcent;
int indicep, indices, indicet;
int primeiro=0, segundo=0, terceiro=0;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                  TESTES
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void QuestoesEstrategicas(){
  int cont;
  char BancodeQuestoesEst[5][300]={
    "\nVoce prefere ser FORTE contra: \n1 - Agua e Pedra \n2 - Grama e Gelo \n3 - Fogo e Terra\n",
    "\nVoce prefere ser FRACO conta: \n1 - Fogo e Inseto \n2 - Agua e Pedra \n3 - Grama e Eletrico\n",
    "\nVoce prefere:\n1 - Equilibrio \n2 - Ataque \n3 - Defesa\n",
    "\nVoce prefere:\n1 - Regenerar vida. \n2 - Causar muito dano. \n3 - Ter uma defesa muito alta.\n",
    "\nVoce prefere: \n1 - Causar bom Dano Especial e ter boa Defesa Especial, mas com uma Velocidade menor. \n2 - Velocidade alta mas com pouca Defesa \n3 - Alta Defesa com menor Velocidade. \n"
  };
  for(cont=0; cont<5; cont++){
    printf("%s\n", BancodeQuestoesEst[cont]);
    scanf("%i", &i);
    Escolha();
  }
}

void QuestoesDePersonalidade(){
  int cont;
  char BancodeQuestoesPers[4][300]={
    "Sua autoestima eh:\n1 - Neutra \n2 - Baixa \n3 - Alta\n",
    "Voce se considera:\n1 - Serio \n2 - Timido \n3 - Animado\n",
    "Em uma hierarquida de poder, voce seria:\n1 - Lider \n2 - Seguidor \n3 - Nao obedece hierarquias de poder.\n",
    "Voce se considera:\n1 - Corajoso \n2 - Inseguro \n3 - Ousado\n"
  };
  for(cont=0; cont<4; cont++){
    printf("%s\n", BancodeQuestoesPers[cont]);
    scanf("%i", &i); 
    Escolha();
  }
}

void Escolha (){
    switch (i){
    case BULBASAUR: compatibilidade[BULBASAUR-1]=compatibilidade[BULBASAUR-1]+1; break;
    case CHARMANDER: compatibilidade[CHARMANDER-1]=compatibilidade[CHARMANDER-1]+1; break;
    case SQUIRTLE: compatibilidade[SQUIRTLE-1]=compatibilidade[SQUIRTLE-1]+1; break;
    default:
        break;
    }
}

void TotalDeVotos (){
  bulb=compatibilidade[BULBASAUR-1];
  charm=compatibilidade[CHARMANDER-1];
  squir=compatibilidade[SQUIRTLE-1];

  total=bulb+charm+squir;
  // printf("%i", total);
}

// void ExibirPontos (){
//         for(i=0; i<3; i++){
//             printf("\n\n%i\n", compatibilidade[i]);
//         }
// }

void PokeCompativel (){
      for (i=0; i<3; i++){
     if (compatibilidade[i]>maior){
       indice_maior=i;
       maior=compatibilidade[i];
     }
}
}

void Porcentagem (){
  porcent=(maior*100)/total;
}

void PokeRecomendado(){
    switch(indice_maior+1){
    maior=compatibilidade[0];
     case BULBASAUR: printf("\n\tO Pokemon mais indicado para voce eh:\n\tBULBASAUR, %.2lf %% de compatibilidade\n", porcent); break;
     case CHARMANDER: printf("\n\tO Pokemon mais indicado para voce eh:\n\tCHARMANDER, %.2lf %% de compatibilidade\n", porcent); break;
     case SQUIRTLE: printf("\n\tO Pokemon mais indicado para voce eh:\n\tSQUIRTLE, %.2lf %% de compatibilidade\n", porcent); break;
   }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                             IMAGEM DOS POKÉMONS
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void ImagemBulbasaur(){
  system("color A");
  printf("                                           /\n");
printf("                        _,.------....___,.' ',.-.\n");
printf("                     ,-'          _,.--'        |\n");
printf("                   ,'         _.-'              .\n");
printf("                  /   ,     ,'                   `\n");
printf("                 .   /     /                     ``.\n");
printf("                 |  |     .                       \\.\\ \n");
printf("       ____      |___._.  |       __               \\ `.\n");
printf("     .'    `---''       ``'-.--''`  \\               .  \\ \n");
printf("    .  ,            __               `              |   .\n");
printf("    `,'         ,-''  .               \\             |    L\n");
printf("   ,'          '    _.'                -._          /    |\n");
printf("  ,`-.    ,'.   `--'                      >.      ,'     |\n");
printf(" . .'\'   `-'       __    ,  ,-.         /  `.__.-      ,'\n");
printf(" ||:, .           ,'  ;  /  / \\ `        `.    .      .'/\n");
printf(" j|:D  \\          `--'  ' ,'_  . .         `.__, \\   , /\n");
printf("/ L:_  |                 .  '' :_;                `.'.'\n");
printf(".    ""'                  ''''''                    V\n");
printf(" `.                                 .    `.   _,..  `\n");
printf("   `,_   .    .                _,-'/    .. `,'   __  `\n");
printf("    ) \\`._        ___....----''  ,'   .'  \\ |   '  \\  .\n");
printf("   /   `. '`-.--''         _,' ,'     `---' |    `./  |\n");
printf("  .   _  `'''--.._____..--'   ,             '         |\n");
printf("  | .' `. `-.                /-.           /          ,\n");
printf("  | `._.'    `,_            ;  /         ,'          .\n");
printf(" .'          /| `-.        . ,'         ,           ,\n");
printf(" '-.__ __ _,','    '`-..___;-...__   ,.'\\ ____.___.'\n");
printf(" `'^--'..'   '-`-^-''--    `-^-'`.'''''''`.,^.`.--' \n");
}

void ImagemCharmander(){
  system("color 4");
  printf("              _.--""`-..\n");
  printf("            ,'          `.\n");
  printf("          ,'          __  `.\n");
  printf("         /|          ' __   \\ \n");
  printf("        , |          /   |   .\n");
  printf("        |,'         !    |   |\n");
  printf("      ,'            '    |   |\n");
  printf("     /              |`--'|   |\n");
  printf("    |                `---'   |\n");
  printf("    |.   ,                   |                       ,'.\n");
  printf("    \\._     '           _'  |                    , ' \\ `\n");
  printf("  `.. `.`-...___,...---""    |       __,.        ,`'   L,|\n");
  printf("  |, `- .`._        _,-,.'   .  __.-'-. /        .   ,    \\ \n");
  printf("-:..     `. `-..--_.,.<       `'      / `.        `-/ |   .\n");
  printf("  `,         '''''     `.              ,'         |   |  ',,\n");
  printf("    `.      '            '            /          '    |'. |/\n");
  printf("      `.   |              \\       _,-'           |       ''\n");
  printf("        `._'               \\   ''\\                .      |\n");
  printf("           |                \\     \\                `._  ,'\n");
  printf("           |                \\     \\                 .'|\n");
  printf("           |                 |      \\                | |\n");
  printf("           |                 |       L              ,' |\n");
  printf("           `                 |       |             /   '\n");
  printf("            \\                |       |           ,'   /\n");
  printf("          ,' \\               |  _.._ ,-..___,..-'    ,'\n");
  printf("         /     .             .      `!             ,j'\n");
  printf("        /       `.          /        .           .'/\n");
  printf("       .          `.       /         |        _.'.'\n");
  printf("        `.          7`'---'|         |------''_.'\n");
  printf("      _,.`,_     _'       |        ,''-----''\n");
  printf("    /'    '       `.     .'      ,\\ \n");
  printf("   /__`.         _,'     | _  _  _.|\n");
  printf("  /____'---''''''        `' '! |! /\n");
  printf("                            `'.'' -' \n");
}

void ImagemSquirtle(){
  system("color 3");
  printf("               _,........__\n");
  printf("            ,'               '`-.\n");
  printf("         ,'                      `-.\n");
  printf("       ,'                           \\ \n");
  printf("     ,'                              .\n");
  printf("    | .'\\               ,"".         `\n");
  printf("     '   |             /     `         \\\n");
  printf("     |   |            `     .|         `.\n");
  printf("     |._.|            '-._,' |         |\\ \n");
  printf("     .`.,'             `..,.'       , |`-.\n");
  printf("     l                       .'`.  _/  |   `.\n");
  printf("     `-.._'-   ,          _ _'   -' \\  .     `\n");
  printf("`.''''''-.`-...,---------','         `. `....__.\n");
  printf(".'        `'-..___      __,'\\          \\  \\    \\ \n");
  printf("\\_ .          |   `'''''    `.           . \\      \\ \n");
  printf("  `.          |              `.          |  .        |\n");
  printf("    `.        |`--...________.'.        j   |        |\n");
  printf("      `._    .'      |          `.     .|   ,        |\n");
  printf("         `--,\\       .            `7""' |  ,        |\n");
  printf("            ` `      `\\            /     |  |       |   _,-''''`-.\n");
  printf("             \\ `.     \\          /      |  '       | ,'            `.\n");
  printf("              \\  v.__  \\        '       .   \\    //                 \\ \n");
  printf("               \\/    `""\"""""""`.       \\  \\   /''                  |\n");
  printf("                `        \\        `._ ___,j.  `/ .-       ,---.        |\n");
  printf("                ,`-.      \\         .'     `.  |/        j     `       |\n");
  printf("               /    `.     \\       /         \\ /        |     /      j\n");
  printf("              |       `-.   7-.._./          |'         '.            /\n");
  printf("              |          `./_    `|          |            .       __,'\n");
  printf("              `.           / `----|          |-............`---- '\n");
  printf("                \\         \\     |          |\n");
  printf("               ,'           )     `.         |\n");
  printf("                7____,,..--'      /          |\n");
  printf("                                  `---.__,--.'\n");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                              EXIBINDO A IMAGEM
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void ExibirImagens(){
  switch(indice_maior+1){
    maior=compatibilidade[0];
    case BULBASAUR: ImagemBulbasaur(); break;
    case CHARMANDER: ImagemCharmander(); break;
    case SQUIRTLE: ImagemSquirtle(); break;
}
}