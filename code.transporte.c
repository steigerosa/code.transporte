// PROGRAMA P/ CALCULAR O TRANSPORTE LOGÍSTICO DE CAIXAS. O VALOR É CALCULADO DA SEGUINTE FORMA: VALOR=SEGURO+FRETE
#include <stdio.h>
#define dolar 4.92
int main()

{
    float vp,frete,vv,seguro,us; //vp= valor produto vv= valor venal, total
    int dest; 
    
    printf("\t PROGRAMA PARA CÁLCULO DO VALOR DO TRANSPORTE, SEGURO + FRETE \n\t  ***SUA EMBALEGEM DEVE SER MENOR OU IGUAL A 50CM***");
    
    printf("\n\n CONFORME A LISTA ABAIXO, ESCOLHA O ESTADO: \n\n [1]RS\n [2]SC\n [3]PR\n [4]SP\n [5]AM\n [6]MT\n [7]MS\n [8]AC\n [9]GO\n [10]RJ");
    printf("\n\n DESTINO: ");
    scanf("%d", &dest);
    switch(dest)
    {
        case 1:
        frete=dolar*5;
        break;
            case 2:
            frete=dolar*6;
            break;
                case 3:
                frete=dolar*8;
                break;
                    case 4:
                    frete=dolar*12;
                    break;
                        case 5:
                        frete=dolar*32;
                        break;
                            case 6:
                            frete=dolar*21;
                            break;
                        case 7:
                        frete=dolar*18;
                        break;
                    case 8:
                    frete=dolar*35;
                    break;        
                case 9:
                frete=dolar*21;
                break;            
            case 10:
            frete=dolar*12;
            break;
    
            default :printf("\n DESTINO INEXISTENTE");
            
    }
    printf(" TOTAL DO FRETE: %f", frete);
    
    printf("\n\n VALOR DO PRODUTO A SER ENVIADO --> R$");
    scanf("%f", &vp);
    if(vp<800)
    {
        seguro=0;
        vv=seguro+frete;
        printf("\n\n O VALOR VENAL SERÁ = %f ", vv);  
    }
    else if(800<=vp && vp<1900) 
    {
      seguro=(vp*8)/100; 
      vv=seguro+frete;
      printf("\n\n O VALOR VENAL SERÁ = %f ", vv);  
    }
    else if(1901<=vp  && vp<3000) 
    {    seguro=(vp*15)/100;
         vv=seguro+frete;
         printf("\n\n O VALOR VENAL SERÁ = %f ", vv);  
    }
    else
        printf("VALOR ACIMA DO LIMITE");
        
        
    printf(" O VALOR DO SEGURO: %f", seguro);
    
    vv=seguro+frete;
    printf("\n\n O VALOR VENAL SERÁ = %f ", vv);  
}

