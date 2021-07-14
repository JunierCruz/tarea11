#include <stdio.h>
#include <string.h>
#define MAXIMA_LONGITUD_CADENA 100

/*
El �ltimo argumento es un apuntador a la cadena de destino en donde almacenar� el signo zodiacal
*/
void calcularSignoZodiacal(int diaNacimiento, int mesNacimiento, char signo[MAXIMA_LONGITUD_CADENA])
{
    switch (mesNacimiento)
    {
    case 1:
        if (diaNacimiento <= 20)
        {

            strcpy(signo, "Capricornio \n\n TUS NUMEROS DE LA SUERTE SON 3,16,25.\n\n COLOR DE LA SUERTE ES NEGRO. \n\n TU SALUD SERA BUENA EN GENERAL Y DE BIENESTAR PARA LOS NATIVOS DE ESTE SIGNO. \n\n EN EL AMOR TE IRA BIEN, PERO SIN CAMBIO DE NINGUN TIPO.");
        }
        else
        {
            strcpy(signo, "Acuario \n\n TUS NUMEROS DE LA SUERTE SON 7,14,20. \n\n TU COLOR FAVORITO ES EL MORADO. \n\n TU SALUD SERA La salud ser� inestable. El principal problema, que puedes tener, es que no te cuides lo suficiente. Pensar�s demasiado en los dem�s y poco en ti mismo. \n\n EN EL AMOR TE IRA En el amor todo seguir� igual. Tendr�s estabilidad, pero sin cambios. Si est�s casado o en pareja, seguir�s con tu vida cotidiana sin problema. Si tienes novio/a, seguir�s con la relaci�n.");
        }
        break;
    case 2:
        if (diaNacimiento <= 18)
        {
            strcpy(signo, "Acuario \n\n TUS NUMEROS DE LA SUERTE SON 7,14,20. \n\n TU COLOR FAVORITO ES EL MORADO. \n\n TU SALUD SERA La salud ser� inestable. El principal problema, que puedes tener, es que no te cuides lo suficiente. Pensar�s demasiado en los dem�s y poco en ti mismo. \n\n EN EL AMOR TE IRA En el amor todo seguir� igual. Tendr�s estabilidad, pero sin cambios. Si est�s casado o en pareja, seguir�s con tu vida cotidiana sin problema. Si tienes novio/a, seguir�s con la relaci�n.");
        }
        else
        {
            strcpy(signo, "Piscis \n\n TUS NUMEROS DE LA SUERTE SON 5,11,19. \n\n TU COLOR FAVORITO ES EL VIOLETA \n\n TU SALUD SERA La salud ser� muy buena. Pero es importante, que mantengas tus energ�as altas todo el a�o, para no caer enfermar. \n\n EN EL AMOR TE IRA En el amor todo ir� bien. Tu vida sentimental ser� estable y sin cambios. Los casados seguir�n casados. Los solteros tambi�n y los que tienen novia/o, seguir�n de novios.");
        }
        break;
    case 3:
        if (diaNacimiento <= 20)
        {
            strcpy(signo, "Piscis \n\n TUS NUMEROS DE LA SUERTE SON 5,11,19. \n\n TU COLOR FAVORITO ES EL VIOLETA \n\n TU SALUD SERA La salud ser� muy buena. Pero es importante, que mantengas tus energ�as altas todo el a�o, para no caer enfermar. \n\n EN EL AMOR TE IRA En el amor todo ir� bien. Tu vida sentimental ser� estable y sin cambios. Los casados seguir�n casados. Los solteros tambi�n y los que tienen novia/o, seguir�n de novios.");
        }
        else
        {
            strcpy(signo, "Aries. \n\n NUMEROS DE LA SUERTE SON 7,17,21. \n\n TU COLOR FAVORITO ES EL ROJO. \n\n TU SALUD SERA Dolores musculares continuos por exceso de preocupaciones y compromisos, los masajes te har�n muy bien.\n\n EN EL AMOR TE IRA Una bendici�n del cielo llegar� a tu familia gracias a un milagro.");
        }
        break;
    case 4:
        if (diaNacimiento <= 20)
        {
            strcpy(signo, "Aries. \n\n NUMEROS DE LA SUERTE SON 7,17,21. \n\n TU COLOR FAVORITO ES EL ROJO. \n\n TU SALUD SERA Dolores musculares continuos por exceso de preocupaciones y compromisos, los masajes te har�n muy bien.\n\n EN EL AMOR TE IRA Una bendici�n del cielo llegar� a tu familia gracias a un milagro.");
        }
        else
        {
            strcpy(signo, "Tauro. \n\n TUS NUMEROS DE LA SUERTE SON 4,6,11. \n\n TU COLOR FAVORITO ES EL AMARILLO. \n\n TENDRAS BUENA SALUD. \n\n EN EL AMOR TE IRA BIEN SIN MAS. ");
        }
        break;
    case 5:
        if (diaNacimiento <= 21)
        {
            strcpy(signo, "Tauro. \n\n TUS NUMEROS DE LA SUERTE SON 4,6,11. \n\n TU COLOR FAVORITO ES EL AMARILLO. \n\n TENDRAS BUENA SALUD. \n\n EN EL AMOR TE IRA BIEN SIN MAS. ");
        }
        else
        {
            strcpy(signo, "Geminis. \n\n TUS NUMEROS DE LA SUERTE SON 2,4,7,9. \n\n TU COLOR FAVORITO ES EL GRIS. \n\n TU SALUD SERA La salud ser� muy buena durante casi todo el a�o. Solamente en momentos puntuales y a causa de alg�n eclipse, podr�as tener un baj�n moment�neo y f�cilmente recuperable. \n\n EN EL AMOR TE IRA Tu vida amorosa te va a ir muy bien y estar� llena de cambios, especialmente si est�s soltero y solo");
        }
        break;
    case 6:
        if (diaNacimiento <= 21)
        {
            strcpy(signo, "Geminis. \n\n TUS NUMEROS DE LA SUERTE SON 2,4,7,9. \n\n TU COLOR FAVORITO ES EL GRIS. \n\n TU SALUD SERA La salud ser� muy buena durante casi todo el a�o. Solamente en momentos puntuales y a causa de alg�n eclipse, podr�as tener un baj�n moment�neo y f�cilmente recuperable. \n\n EN EL AMOR TE IRA Tu vida amorosa te va a ir muy bien y estar� llena de cambios, especialmente si est�s soltero y solo");
        }
        else
        {
            strcpy(signo, "Cancer \n\n TUS NUMEROS DE LA SUERTE SON 5,6,8,19. \n\n TU COLOR FAVORITO ES EL BLANCO \n\n TU SALUD SERA La salud mejora mucho con respecto a los a�os anteriores, pero no podr�s evitar la repecusi�n del eclipse, el cual te afectar� directamente y te obligar� a hacer un par�n en el camino.  \n\n EN EL AMOR TE IRA El amor te ir� muy bien, pero ser� diferente. Si est�s soltero te vuelves m�s aventurrero y menos t�mido.");
        }
        break;
    case 7:
        if (diaNacimiento <= 22)
        {
            strcpy(signo, "Cancer \n\n TUS NUMEROS DE LA SUERTE SON 5,6,8,19. \n\n TU COLOR FAVORITO ES EL BLANCO \n\n TU SALUD SERA La salud mejora mucho con respecto a los a�os anteriores, pero no podr�s evitar la repecusi�n del eclipse, el cual te afectar� directamente y te obligar� a hacer un par�n en el camino.  \n\n EN EL AMOR TE IRA El amor te ir� muy bien, pero ser� diferente. Si est�s soltero te vuelves m�s aventurrero y menos t�mido.");
        }
        else
        {
            strcpy(signo, "Leo \n\n TUS NUMEROS DE LA SUERTE SON 1,9,10. \n\n TU COLOR FAVORITO ES EL NARANJA. \n\n TU SALUD SERA La salud ser� problem�tica este a�o y tu obsesi�n: estar bien. Vas a tener menos energ�as que otros a�os y tendr�s, que descansar m�s y cuidarte. \n\n EN EL AMOR TE IRA El amor ser� lo m�s importante para ti. Se convertir� en tu prioridad. Querr�s, que t� relaci�n de pareja funcione bien y te dedicar�s a ella en cuerpo y alma.");
        }
        break;
    case 8:
        if (diaNacimiento <= 23)
        {
            strcpy(signo, "Leo \n\n TUS NUMEROS DE LA SUERTE SON 1,9,10. \n\n TU COLOR FAVORITO ES EL NARANJA. \n\n TU SALUD SERA La salud ser� problem�tica este a�o y tu obsesi�n: estar bien. Vas a tener menos energ�as que otros a�os y tendr�s, que descansar m�s y cuidarte. \n\n EN EL AMOR TE IRA El amor ser� lo m�s importante para ti. Se convertir� en tu prioridad. Querr�s, que t� relaci�n de pareja funcione bien y te dedicar�s a ella en cuerpo y alma.");
        }
        else
        {
            strcpy(signo, "Virgo \n\n TUS NUMEROS DE LA SUERTE SON  10,15,27. \n\n TU COLOR FAVORITO ES EL VERDE. \n\n TU SALUD SERA La salud va a ser muy importante este a�o para ti. Cambiar�s de estilo de vida, porque querr�s llevar una vida m�s sana que nunca. T� lo har�s y querr�s, que tu familia lo comparta. \n\n EN EL AMOR TE IRA El amor ser� lo m�s importante del a�o, junto con la salud. Si est�s en pareja, estar�s muy bien. La relaci�n funciona y compartis el mismo tipo de vida, las mismas ilusiones.");
        }
        break;
    case 9:
        if (diaNacimiento <= 23)
        {
            strcpy(signo, "Virgo \n\n TUS NUMEROS DE LA SUERTE SON  10,15,27. \n\n TU COLOR FAVORITO ES EL VERDE. \n\n TU SALUD SERA La salud va a ser muy importante este a�o para ti. Cambiar�s de estilo de vida, porque querr�s llevar una vida m�s sana que nunca. T� lo har�s y querr�s, que tu familia lo comparta. \n\n EN EL AMOR TE IRA El amor ser� lo m�s importante del a�o, junto con la salud. Si est�s en pareja, estar�s muy bien. La relaci�n funciona y compartis el mismo tipo de vida, las mismas ilusiones.");
        }
        else
        {
            strcpy(signo, "Libra \n\n TUS NUMERO DE LA SUERTE SON 2,8,19. \n\n TU COLOR FAVORITO ES EL ROSA. \n\n TU SALUD SERA La salud es muy importante este a�o. Mejoras con respecto a los a�os anteriores. Tendr�s mucha energ�a y fuerzas, para afrontar el a�o con mucho �nimo, para todo. \n\n EN EL AMOR TE IRA En la vida sentimental tender�s a la estabilidad. No habr� cambios, tanto si est�s casado como soltero, sentir�s, que debes continuar igual que estabas al empezar el a�o. ");
        }
        break;
    case 10:
        if (diaNacimiento <= 23)
        {
            strcpy(signo, "Libra \n\n TUS NUMERO DE LA SUERTE SON 2,8,19. \n\n TU COLOR FAVORITO ES EL ROSA. \n\n TU SALUD SERA La salud es muy importante este a�o. Mejoras con respecto a los a�os anteriores. Tendr�s mucha energ�a y fuerzas, para afrontar el a�o con mucho �nimo, para todo. \n\n EN EL AMOR TE IRA En la vida sentimental tender�s a la estabilidad. No habr� cambios, tanto si est�s casado como soltero, sentir�s, que debes continuar igual que estabas al empezar el a�o. ");
        }
        else
        {
            strcpy(signo, "Escorpio \n\n TUS NUMEROS DE LA SUERTE SON 4,13,21. \n\n TU COLOR FAVORITO ES EL ROJO. \n\n TU SALUD SERA Te sentir�s muy bien la mayor parte del a�o y con mucha energ�a. \n\n EN EL AMOR TE IRA Ser� un a�o duro y lleno de conversaciones y concesiones, para intentar salvar el matrimonio o la relaci�n.");
        }
        break;
    case 11:
        if (diaNacimiento <= 22)
        {
            strcpy(signo, "Escorpio \n\n TUS NUMEROS DE LA SUERTE SON 4,13,21. \n\n TU COLOR FAVORITO ES EL ROJO. \n\n TU SALUD SERA Te sentir�s muy bien la mayor parte del a�o y con mucha energ�a. \n\n EN EL AMOR TE IRA Ser� un a�o duro y lleno de conversaciones y concesiones, para intentar salvar el matrimonio o la relaci�n.");
        }
        else
        {
        	strcpy(signo, "Sagitario \n\n TUS NUMEROS DE LA SUERTE SON 3,8,13. \n\n TU COLOR FAVORITO ES EL AZUL.\n\n TU SALUD SERA Debido a la actividad f�sica que practicas tu salud se ver� favorecida, pues con la eliminaci�n de toxinas est�s contribuyendo a reforzar la resistencia de tu organismo. \n\n EN EL AMOR TE IRA A lo largo de este a�o, los Sagitario experimentar�n el amor al m�ximo y pasar�n gratos momentos con amistades y seres queridos.");
        }
        break;
    case 12:
        if (diaNacimiento <= 21)
        {
            strcpy(signo, "Sagitario \n\n TUS NUMEROS DE LA SUERTE SON 3,8,13. \n\n TU COLOR FAVORITO ES EL AZUL.\n\n TU SALUD SERA Debido a la actividad f�sica que practicas tu salud se ver� favorecida, pues con la eliminaci�n de toxinas est�s contribuyendo a reforzar la resistencia de tu organismo. \n\n EN EL AMOR TE IRA A lo largo de este a�o, los Sagitario experimentar�n el amor al m�ximo y pasar�n gratos momentos con amistades y seres queridos.");
        }
        else
        {
            strcpy(signo, "Capricornio \n\n TUS NUMEROS DE LA SUERTE SON 3,16,25.\n\n COLOR DE LA SUERTE ES NEGRO. \n\n TU SALUD SERA BUENA EN GENERAL Y DE BIENESTAR PARA LOS NATIVOS DE ESTE SIGNO. \n\n EN EL AMOR TE IRA BIEN, PERO SIN CAMBIO DE NINGUN TIPO.");
        }
        break;
    }
}

int main()
{
    char signo[MAXIMA_LONGITUD_CADENA] = "";
    calcularSignoZodiacal(28, 11, signo);
    // Solicitar al usuario e imprimir
    int mes, dia, sexo;
    printf("Ingresa tu mes de nacimiento [1-12]: ");
    scanf("%d", &mes);
    printf("Ingresa tu dia de nacimiento [1-31]: ");
    scanf("%d", &dia);
     printf("Ingresa tu sexo: ");
    scanf("%d", &sexo);
    printf("El signo zodiacal es: \n\n", signo);
    calcularSignoZodiacal(dia, mes, signo);
    printf("%s\n", signo);
}
