#incluir  <stdio.h>

// Cadastro das cartas 1 e 2.
// Definindo as variáveis ​​.
int  principal () {
    char  carta1 [ 50 ], carta2 [ 50 ];
    char  Pais1 [ 50 ], Pais2 [ 50 ];  
    char  codigodacidade1 [ 50 ], codigodacidade2 [ 50 ];
    char  nomeCidade1 [ 50 ] , nomeCidade2 [ 50 ];  
    int  população1 , população2 ;
     área flutuante1 , área2 ;  
    flutuar  pib1 , pib2 ;
    int  turismo1 , turismo2 ;  
    float  densidadepopulacional1 , densidadepopulacional2 ;
    flutuar  pibpercapita1 , pibpercapita2 ;
    flutuar  Superpoder1 , Superpoder2 ;

    printf ( "*** Digite os dados da cidade ***\n" );

    printf ( "Carta: " );
    scanf ( "%s" , carta1 );

    printf ( País : ");
    scanf ( "%s" , Pais1 );

    printf ( "Código da cidade: " );
    scanf ( "%s" , codigodacidade1 );  

    printf ( "Nome da cidade: " );
    scanf ( "%s" , nomeCidade1 );

    printf ( "População: " );
    scanf ( "%d" , & população1 );

    printf ( "Área: " );
    scanf ( "%f" , & área1 );

    printf ( "PIB: " );
    scanf ( "%f" , & pib1 );

    printf ( "Pontos turísticos: " );
    scanf ( "%d" , & turismo1 );


    printf ( "Carta: %s\n" , carta1 );
    printf ( "País: %s\n" , Pais1 );
    printf ( "Código da cidade: %s\n" , codigodacidade1 );
    printf ( "Nome da cidade: %s\n" , nomeCidade1 );
    printf ( "População: %d\n" , populacao1 );
    printf ( "Área: %.2f\n" , área1 );
    printf ( "PIB: %.2f\n" , pib1 );
    printf ( "Pontos turísticos: %d\n" , turismo1 );
   densidadepopulacional1 = ( população1 / área1 );
   pibpercapita1 = ( pib1 / população1 );

   printf ( "Densidade Populacional:%.2f \n" , densidadepopulacional1 );
   printf ( "PIb per capita: %.2f \n" , pibpercapita1 );

   Superpoder1 = ( float ) +  área1 +  pib1 +  pibpercapita1 + densidade populacional1  +  turismo1 +  populaçãocao1 ;
  printf ( "Superpoder: %.2f\n" , Superpoder1 );

   // Carta 2.
  
   printf ( "*** Digite os dados da cidade ***\n" );

   printf ( "Carta: " );
   scanf ( "%s" , carta2 );  

   printf ( "País: " );
   scanf ( "%s" , Pais2 );   

   printf ( "Código da cidade: " );
   scanf ( "%s" , codigodacidade2 );  

   printf ( "Nome da cidade: " );
   scanf ( "%s" , nomeCidade2 );

   printf ( "População: " );
   scanf ( "%d" , & população2 );

   printf ( "Área: " );
   scanf ( "%f" , & área2 );  
   printf ( "PIB: " );
   scanf ( "%f" , & pib2 );

   printf ( "Pontos turísticos: " );
   scanf ( "%d" , & turismo2 );



   printf ( "Carta : %s\n" , carta2 );
   

   printf ( "País: %s\n" , pais2 ); // Imprimindo o nome do estado
   printf ( "Código da cidade: %s\n" , codigodacidade2 ); // Imprimindo o código da cidade
   printf ( "Nome da cidade: %s\n" , nomeCidade2 ); // Imprimindo o nome da cidade
   printf ( "População: %d\n" , populacao2 ); // Imprimindo a população
   printf ( "Área: %.2f\n" , área2 ); // Imprimindo a área com 2 casas decimais
   printf ( "PIB: %.2f\n" , pib2 ); // Imprimindo o PIB com 2 casas decimais
   printf ( "Pontos turísticos: %d\n" , turismo2 ); // Imprimindo os pontos turísticos
   densidadepopulacional2 = ( população2 / área2 );
   pibpercapita2 = ( pib2 / população2 );

  printf ( "Densidade Populacional:%.2f \n" , densidadepopulacional2 );
  printf ( "PIb per capita: %.2f \n" , pibpercapita2 );

  Superpoder2 = ( float ) +  área2 +  pib2 +  pibpercapita2 + densidade populacional2  +  turismo2 +  populaçãocao2 ;
  printf ( "Superpoder: %.2f\n" , Superpoder2 );
  
  printf ( "*** Carta 1 vs Carta 2 ***\n" );

 printf ( "Carta 1- %s - População:%d \n " , Pais1 , populacao1 );
 printf ( "Carta 2 - %s - População:%d \n " , Pais2 , populacao2 );
 printf ( "Carta 1 - %s- Pib:%f \n" , Pais1 , pib1 );
 printf ( "Carta 2 - %s - Pib:%f \n" , Pais2 , pib2 );
 printf ( "Carta 1 - %s - Pontos Turísticos:%d \n" , Pais1 , turismo1 );
 printf ( "Carta 2 - %s - Pontos Turísticos:%d \n" , Pais2 , turismo2 );
printf ( "Carta 1 - %s - Área:%f \n" , Pais1 , área1 );
printf ( "Carta 2 - %s - Área:%f \n" , Pais2 , área2 );
printf ( "Carta 1 - %s - Pib Percapita:%f \n" , Pais1 , pibpercapita1 );
printf ( "Carta 2 - %s - Pib Percapita:%f \n" , Pais2 , pibpercapita2 );
printf ( "Carta 1 - %s - Superpoder:%f \n" , Pais1 , Superpoder1 );
printf ( "Carta 2 - %s - Super poder:%f \n" , Pais2 , Superpoder2 );
printf ( "Carta 1 - %s - Densidade populacional:%f\n" , Pais1 , densidadepopulacional1 );
printf ( "Carta 2 - %s - Densidade populacional:%f\n" , Pais2 , densidadepopulacional2 );


  if ( populacao1 > populacao2 ) { printf ( "Carta 1 vencida!\n" );}
  else { printf ( "Carta 2 vencida!\n" );}

  if ( pib1 > pib2 ) { printf ( "Carta 1 vencida!\n" );}
  else { printf ( "Carta 2 vencida!\n" );}

  if ( turismo1 > turismo2 ) { printf ( "Carta 1 vencida!\n" );}
  else { printf ( "Carta 2 vencida!\n" );}
  
  if ( area1 > area2 ) { printf ( "Carta 1 vencida!\n" );}
  else { printf ( "Carta 2 vencida!\n" );}
  
  if ( pibpercapita1 > pibpercapita2 ) { printf ( "Carta 1 vencida!\n" );}
  else { printf ( "Carta 2 vencida!\n" );}
  
  if ( Superpoder1 > Superpoder2 ) { printf ( "Carta 1 vencida!\n" );}
  else { printf ( "Carta 2 vencida!\n" );}
  
  if ( densidade populacional1 < densidade populacional2 ) { printf ( "Carta 1 vencida!\n" );}
  else { printf ( "Carta 2 vencida!\n" );}
   
    retornar  0 ;
}
