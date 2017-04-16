int pesel_check (char *x)
{
    int check=0;            //zero = true
    int suma_k=0;           //suma kontrolna   (zeby nie zaakceptowalo   np: qwertyui9    tylko dlatego ze ostatni warunek sie zgadza)
    int luty;               //czy rok jest przestepny

    check=(x[0]=='0'||x[0]=='1'||x[0]=='2'||x[0]=='3'||x[0]=='4'||x[0]=='5'||x[0]=='6'||x[0]=='7'||x[0]=='8'||x[0]=='9') ? 0:1;
    suma_k=suma_k+check;
    check=(x[1]=='0'||x[1]=='1'||x[1]=='2'||x[1]=='3'||x[1]=='4'||x[1]=='5'||x[1]=='6'||x[1]=='7'||x[1]=='8'||x[1]=='9') ? 0:1;
    suma_k=suma_k+check;
    check=(x[2]=='0'||x[2]=='1') ? 0:1;
    suma_k=suma_k+check;
    if (x[2]=='0')
        {
            check=(x[3]=='1'||x[3]=='2'||x[3]=='3'||x[3]=='4'||x[3]=='5'||x[3]=='6'||x[3]=='7'||x[3]=='8'||x[3]=='9') ? 0:1;
            suma_k=suma_k+check;
        }
    if (x[2]=='1')
        {
            check=(x[3]=='0'||x[3]=='1'||x[3]=='2') ? 0:1;
            suma_k=suma_k+check;
        }
    check=(x[4]=='0'||x[4]=='1'||x[4]=='2'||x[4]=='3') ? 0:1;
    suma_k=suma_k+check;
    if (x[4]=='0')
        {
            check=(x[5]=='1'||x[5]=='2'||x[5]=='3'||x[5]=='4'||x[5]=='5'||x[5]=='6'||x[5]=='7'||x[5]=='8'||x[5]=='9') ? 0:1;
            suma_k=suma_k+check;
        }
    if (x[4]=='1')
        {
            check=(x[5]=='0'||x[5]=='1'||x[5]=='2'||x[5]=='3'||x[5]=='4'||x[5]=='5'||x[5]=='6'||x[5]=='7'||x[5]=='8'||x[5]=='9') ? 0:1;
            suma_k=suma_k+check;
        }
    if (x[4]=='2')
        {
            check=(x[5]=='0'||x[5]=='1'||x[5]=='2'||x[5]=='3'||x[5]=='4'||x[5]=='5'||x[5]=='6'||x[5]=='7'||x[5]=='8'||x[5]=='9') ? 0:1;
            suma_k=suma_k+check;
        }
    if (x[4]=='3')
        {
            check=(x[5]=='0'||x[5]=='1') ? 0:1;
            suma_k=suma_k+check;
        }

    if (x[2]=='0')                          // sprawdznie czy miesiac ma dobra ilosc dni...  (01/02/03/04/05/06/07/08/09)
    {
        if(x[3]=='1'||x[3]=='3'||x[3]=='5'||x[3]=='7'||x[3]=='8')    //31 dniowe miesiace  0x
        {
            if (x[4]=='3')
            {
                check=(x[5]=='0'||x[5]=='1') ? 0:1;
                suma_k=suma_k+check;
            }
        }

        if(x[3]=='4'||x[3]=='6'||x[3]=='9')    //30 dniowe miesiace    0x
        {
            if (x[4]=='3')
            {
                check=(x[5]=='0') ? 0:1;
                suma_k=suma_k+check;
            }
        }

        if(x[3]=='2')    //luty...
        {
            luty=10*(x[0]-48);
            luty=luty+(x[1]-48);
            luty=luty%4;

            if (luty==0)
            {
                check=(x[4]=='0'||x[4]=='1'||x[4]=='2') ? 0:1;
                suma_k=suma_k+check;

                if(x[4]=='2')
                {
                    check=(x[5]=='0'||x[5]=='1'||x[5]=='2'||x[5]=='3'||x[5]=='4'||x[5]=='5'||x[5]=='6'||x[5]=='7'||x[5]=='8'||x[5]=='9') ? 0:1;
                    suma_k=suma_k+check;
                }
            }

            if (luty!=0)
            {
                check=(x[4]=='0'||x[4]=='1'||x[4]=='2') ? 0:1;
                suma_k=suma_k+check;

                if(x[4]=='2')
                {
                    check=(x[5]=='0'||x[5]=='1'||x[5]=='2'||x[5]=='3'||x[5]=='4'||x[5]=='5'||x[5]=='6'||x[5]=='7'||x[5]=='8') ? 0:1;
                    suma_k=suma_k+check;
                }
            }
        }
    }

    if (x[2]=='1')                          // sprawdznie czy miesiac ma dobra ilosc dni...  (10/11/12)
    {
        if(x[3]=='0'||x[3]=='2')    //31 dniowe miesiace  1x
        {
            if (x[4]=='3')
            {
                check=(x[5]=='0'||x[5]=='1') ? 0:1;
                suma_k=suma_k+check;
            }
        }

        if(x[3]=='1')    //30 dniowe miesiace    1x
        {
            if (x[4]=='3')
            {
                check=(x[5]=='0') ? 0:1;
                suma_k=suma_k+check;
            }
        }
    }
    //koniec miesiecy, teraz juz tylko sprawdza czy liczby i czy nie za dlugie...
    check=(x[6]=='0'||x[6]=='1'||x[6]=='2'||x[6]=='3'||x[6]=='4'||x[6]=='5'||x[6]=='6'||x[6]=='7'||x[6]=='8'||x[6]=='9') ? 0:1;
    suma_k=suma_k+check;
    check=(x[7]=='0'||x[7]=='1'||x[7]=='2'||x[7]=='3'||x[7]=='4'||x[7]=='5'||x[7]=='6'||x[7]=='7'||x[7]=='8'||x[7]=='9') ? 0:1;
    suma_k=suma_k+check;
    check=(x[8]=='0'||x[8]=='1'||x[8]=='2'||x[8]=='3'||x[8]=='4'||x[8]=='5'||x[8]=='6'||x[8]=='7'||x[8]=='8'||x[8]=='9') ? 0:1;
    suma_k=suma_k+check;
    check=(x[9]=='0'||x[9]=='1'||x[9]=='2'||x[9]=='3'||x[9]=='4'||x[9]=='5'||x[9]=='6'||x[9]=='7'||x[9]=='8'||x[9]=='9') ? 0:1;
    suma_k=suma_k+check;
    check=(x[10]=='0'||x[10]=='1'||x[10]=='2'||x[10]=='3'||x[10]=='4'||x[10]=='5'||x[10]=='6'||x[10]=='7'||x[10]=='8'||x[10]=='9') ? 0:1;
    suma_k=suma_k+check;
    check=(x[11]==NULL) ? 0:1;
    suma_k=suma_k+check;

    if (suma_k!=0)
    {
        check=1;
    }

    return check;
}
