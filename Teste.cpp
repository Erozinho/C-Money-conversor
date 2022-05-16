#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int tipo;
    float a, p, q, k, rs, totRs, totA, totPm, totQg, totKc;
    char l;

     do{
        system("color C");
  printf ("Conversor de Moedas em C++.");
  printf ("\n 1 - Dolar Australiano, 2 - Peso Mexicano, 3 - Quetzal Guatemalo, 4 - Kuna Croata, 5 - Reais. \n");
  cin >> tipo;

  switch (tipo)
  {
       case 1 :
            printf ("\n Dolar - Australia. \n");
            cout << "Informe seu Valor em Dolares Australiano!" << endl;
            cin >> a;

            if (a == 0)
            {
                cout << "0 em qualquer lugar é zero! IMBECIL!" << endl;
            }
            else
            {
              totRs = a * 4.02;
              totKc = a * 4.57;
              totQg = a * 5.54;
              totPm = a * 14.90;

              cout << a <<" AUD" << " " << "eh: " << totRs << " BRL." << endl;
              cout << a <<" AUD" << " " << "eh: " << totKc << " HRK." << endl;
              cout << a <<" AUD" << " " << "eh: " << totQg << " GTQ." << endl;
              cout << a <<" AUD" << " " << "eh: " << totPm << " MXN." << endl;
            }
        break;

        case 2 :
            printf ("\n Peso - Mexico. \n");
            cout << "Informe seu Valor em Pesos!" << endl;
            cin >> p;

            if (p == 0)
            {
                cout << "0 em qualquer lugar é zero! IMBECIL!" << endl;
            }
            else
            {
              totRs = p * 0.27;
              totKc = p * 0.31;
              totQg = p * 0.37;
              totA = p * 0.067;

              cout << p <<" MXN" << " " << "eh: " << totRs << " BRL." << endl;
              cout << p <<" MXN" << " " << "eh: " << totKc << " HRK." << endl;
              cout << p <<" MXN" << " " << "eh: " << totQg << " GTQ." << endl;
              cout << p <<" MXN" << " " << "eh: " << totA << " AUD." << endl;
            }
        break;

        case 3 :
            printf ("\n Quetzal - Guatemala. \n");
            cout << "Informe seu Valor em Quetzals!" << endl;
            cin >> q;

            if (q == 0)
            {
                cout << "0 em qualquer lugar é zero! IMBECIL!" << endl;
            }
            else
            {
              totRs = q * 0.73;
              totKc = q * 0.82;
              totPm = q * 2.69;
              totA = q * 0.18;

              cout << q <<" GTQ" << " " << "eh: " << totRs << " BRL." << endl;
              cout << q <<" GTQ" << " " << "eh: " << totKc << " HRK." << endl;
              cout << q <<" GTQ" << " " << "eh: " << totPm << " MXN." << endl;
              cout << q <<" GTQ" << " " << "eh: " << totA << " AUD." << endl;
            }
        break;

                case 4 :
            printf ("\n Kuna - Croacia. \n");
            cout << "Informe seu Valor em Kunas!" << endl;
            cin >> k;

            if (k == 0)
            {
                cout << "0 em qualquer lugar é zero! IMBECIL!" << endl;
            }
            else
            {
              totRs = k * 0.88;
              totQg = k * 1.21;
              totPm = k * 3.26;
              totA = k * 0.22;

              cout << k <<" HRK" << " " << "eh: " << totRs << " BRL." << endl;
              cout << k <<" HRK" << " " << "eh: " << totQg   << " GTQ." << endl;
              cout << k <<" HRK" << " " << "eh: " << totPm << " MXN." << endl;
              cout << k <<" HRK" << " " << "eh: " << totA << " AUD." << endl;
            }
        break;

        case 5 :
            printf ("\n Real - Brasil. \n");
            cout << "Informe seu Valor em Reais!" << endl;
            cin >> rs;

            if (rs == 0)
            {
                cout << "0 em qualquer lugar é zero! IMBECIL!" << endl;
            }
            else
            {
              totKc = rs * 1.13;
              totQg = rs * 1.38;
              totPm = rs * 3.70;
              totA = rs * 0.25;

              cout << rs <<" BRL" << " " << "eh: " << totKc << " HRK." << endl;
              cout << rs <<" BRL" << " " << "eh: " << totQg   << " GTQ." << endl;
              cout << rs <<" BRL" << " " << "eh: " << totPm << " MXN." << endl;
              cout << rs <<" BRL" << " " << "eh: " << totA << " AUD." << endl;
            }
        break;

        default :
    printf ("\nValor invalido!\n");
  }


printf("\nDeseja Se ir novamente??. (S)/(N):");
    cin >> l;
    system("cls");
    }while(l=='S'||l=='s');

  return 0;
}
