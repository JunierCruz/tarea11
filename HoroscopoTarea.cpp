#include <stdio.h>
#include <string.h>
#define MAXIMA_LONGITUD_CADENA 100

/*
El último argumento es un apuntador a la cadena de destino en donde almacenará el signo zodiacal
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
            strcpy(signo, "Acuario \n\n TUS NUMEROS DE LA SUERTE SON 7,14,20. \n\n TU COLOR FAVORITO ES EL MORADO. \n\n TU SALUD SERA La salud será inestable. El principal problema, que puedes tener, es que no te cuides lo suficiente. Pensarás demasiado en los demás y poco en ti mismo. \n\n EN EL AMOR TE IRA En el amor todo seguirá igual. Tendrás estabilidad, pero sin cambios. Si estás casado o en pareja, seguirás con tu vida cotidiana sin problema. Si tienes novio/a, seguirás con la relación.");
        }
        break;
    case 2:
        if (diaNacimiento <= 18)
        {
            strcpy(signo, "Acuario \n\n TUS NUMEROS DE LA SUERTE SON 7,14,20. \n\n TU COLOR FAVORITO ES EL MORADO. \n\n TU SALUD SERA La salud será inestable. El principal problema, que puedes tener, es que no te cuides lo suficiente. Pensarás demasiado en los demás y poco en ti mismo. \n\n EN EL AMOR TE IRA En el amor todo seguirá igual. Tendrás estabilidad, pero sin cambios. Si estás casado o en pareja, seguirás con tu vida cotidiana sin problema. Si tienes novio/a, seguirás con la relación.");
        }
        else
        {
            strcpy(signo, "Piscis \n\n TUS NUMEROS DE LA SUERTE SON 5,11,19. \n\n TU COLOR FAVORITO ES EL VIOLETA \n\n TU SALUD SERA La salud será muy buena. Pero es importante, que mantengas tus energías altas todo el año, para no caer enfermar. \n\n EN EL AMOR TE IRA En el amor todo irá bien. Tu vida sentimental será estable y sin cambios. Los casados seguirán casados. Los solteros también y los que tienen novia/o, seguirán de novios.");
        }
        break;
    case 3:
        if (diaNacimiento <= 20)
        {
            strcpy(signo, "Piscis \n\n TUS NUMEROS DE LA SUERTE SON 5,11,19. \n\n TU COLOR FAVORITO ES EL VIOLETA \n\n TU SALUD SERA La salud será muy buena. Pero es importante, que mantengas tus energías altas todo el año, para no caer enfermar. \n\n EN EL AMOR TE IRA En el amor todo irá bien. Tu vida sentimental será estable y sin cambios. Los casados seguirán casados. Los solteros también y los que tienen novia/o, seguirán de novios.");
        }
        else
        {
            strcpy(signo, "Aries. \n\n NUMEROS DE LA SUERTE SON 7,17,21. \n\n TU COLOR FAVORITO ES EL ROJO. \n\n TU SALUD SERA Dolores musculares continuos por exceso de preocupaciones y compromisos, los masajes te harán muy bien.\n\n EN EL AMOR TE IRA Una bendición del cielo llegará a tu familia gracias a un milagro.");
        }
        break;
    case 4:
        if (diaNacimiento <= 20)
        {
            strcpy(signo, "Aries. \n\n NUMEROS DE LA SUERTE SON 7,17,21. \n\n TU COLOR FAVORITO ES EL ROJO. \n\n TU SALUD SERA Dolores musculares continuos por exceso de preocupaciones y compromisos, los masajes te harán muy bien.\n\n EN EL AMOR TE IRA Una bendición del cielo llegará a tu familia gracias a un milagro.");
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
            strcpy(signo, "Geminis. \n\n TUS NUMEROS DE LA SUERTE SON 2,4,7,9. \n\n TU COLOR FAVORITO ES EL GRIS. \n\n TU SALUD SERA La salud será muy buena durante casi todo el año. Solamente en momentos puntuales y a causa de algún eclipse, podrías tener un bajón momentáneo y fácilmente recuperable. \n\n EN EL AMOR TE IRA Tu vida amorosa te va a ir muy bien y estará llena de cambios, especialmente si estás soltero y solo");
        }
        break;
    case 6:
        if (diaNacimiento <= 21)
        {
            strcpy(signo, "Geminis. \n\n TUS NUMEROS DE LA SUERTE SON 2,4,7,9. \n\n TU COLOR FAVORITO ES EL GRIS. \n\n TU SALUD SERA La salud será muy buena durante casi todo el año. Solamente en momentos puntuales y a causa de algún eclipse, podrías tener un bajón momentáneo y fácilmente recuperable. \n\n EN EL AMOR TE IRA Tu vida amorosa te va a ir muy bien y estará llena de cambios, especialmente si estás soltero y solo");
        }
        else
        {
            strcpy(signo, "Cancer \n\n TUS NUMEROS DE LA SUERTE SON 5,6,8,19. \n\n TU COLOR FAVORITO ES EL BLANCO \n\n TU SALUD SERA La salud mejora mucho con respecto a los años anteriores, pero no podrás evitar la repecusión del eclipse, el cual te afectará directamente y te obligará a hacer un parón en el camino.  \n\n EN EL AMOR TE IRA El amor te irá muy bien, pero será diferente. Si estás soltero te vuelves más aventurrero y menos tímido.");
        }
        break;
    case 7:
        if (diaNacimiento <= 22)
        {
            strcpy(signo, "Cancer \n\n TUS NUMEROS DE LA SUERTE SON 5,6,8,19. \n\n TU COLOR FAVORITO ES EL BLANCO \n\n TU SALUD SERA La salud mejora mucho con respecto a los años anteriores, pero no podrás evitar la repecusión del eclipse, el cual te afectará directamente y te obligará a hacer un parón en el camino.  \n\n EN EL AMOR TE IRA El amor te irá muy bien, pero será diferente. Si estás soltero te vuelves más aventurrero y menos tímido.");
        }
        else
        {
            strcpy(signo, "Leo \n\n TUS NUMEROS DE LA SUERTE SON 1,9,10. \n\n TU COLOR FAVORITO ES EL NARANJA. \n\n TU SALUD SERA La salud será problemática este año y tu obsesión: estar bien. Vas a tener menos energías que otros años y tendrás, que descansar más y cuidarte. \n\n EN EL AMOR TE IRA El amor será lo más importante para ti. Se convertirá en tu prioridad. Querrás, que tú relación de pareja funcione bien y te dedicarás a ella en cuerpo y alma.");
        }
        break;
    case 8:
        if (diaNacimiento <= 23)
        {
            strcpy(signo, "Leo \n\n TUS NUMEROS DE LA SUERTE SON 1,9,10. \n\n TU COLOR FAVORITO ES EL NARANJA. \n\n TU SALUD SERA La salud será problemática este año y tu obsesión: estar bien. Vas a tener menos energías que otros años y tendrás, que descansar más y cuidarte. \n\n EN EL AMOR TE IRA El amor será lo más importante para ti. Se convertirá en tu prioridad. Querrás, que tú relación de pareja funcione bien y te dedicarás a ella en cuerpo y alma.");
        }
        else
        {
            strcpy(signo, "Virgo \n\n TUS NUMEROS DE LA SUERTE SON  10,15,27. \n\n TU COLOR FAVORITO ES EL VERDE. \n\n TU SALUD SERA La salud va a ser muy importante este año para ti. Cambiarás de estilo de vida, porque querrás llevar una vida más sana que nunca. Tú lo harás y querrás, que tu familia lo comparta. \n\n EN EL AMOR TE IRA El amor será lo más importante del año, junto con la salud. Si estás en pareja, estarás muy bien. La relación funciona y compartis el mismo tipo de vida, las mismas ilusiones.");
        }
        break;
    case 9:
        if (diaNacimiento <= 23)
        {
            strcpy(signo, "Virgo \n\n TUS NUMEROS DE LA SUERTE SON  10,15,27. \n\n TU COLOR FAVORITO ES EL VERDE. \n\n TU SALUD SERA La salud va a ser muy importante este año para ti. Cambiarás de estilo de vida, porque querrás llevar una vida más sana que nunca. Tú lo harás y querrás, que tu familia lo comparta. \n\n EN EL AMOR TE IRA El amor será lo más importante del año, junto con la salud. Si estás en pareja, estarás muy bien. La relación funciona y compartis el mismo tipo de vida, las mismas ilusiones.");
        }
        else
        {
            strcpy(signo, "Libra \n\n TUS NUMERO DE LA SUERTE SON 2,8,19. \n\n TU COLOR FAVORITO ES EL ROSA. \n\n TU SALUD SERA La salud es muy importante este año. Mejoras con respecto a los años anteriores. Tendrás mucha energía y fuerzas, para afrontar el año con mucho ánimo, para todo. \n\n EN EL AMOR TE IRA En la vida sentimental tenderás a la estabilidad. No habrá cambios, tanto si estás casado como soltero, sentirás, que debes continuar igual que estabas al empezar el año. ");
        }
        break;
    case 10:
        if (diaNacimiento <= 23)
        {
            strcpy(signo, "Libra \n\n TUS NUMERO DE LA SUERTE SON 2,8,19. \n\n TU COLOR FAVORITO ES EL ROSA. \n\n TU SALUD SERA La salud es muy importante este año. Mejoras con respecto a los años anteriores. Tendrás mucha energía y fuerzas, para afrontar el año con mucho ánimo, para todo. \n\n EN EL AMOR TE IRA En la vida sentimental tenderás a la estabilidad. No habrá cambios, tanto si estás casado como soltero, sentirás, que debes continuar igual que estabas al empezar el año. ");
        }
        else
        {
            strcpy(signo, "Escorpio \n\n TUS NUMEROS DE LA SUERTE SON 4,13,21. \n\n TU COLOR FAVORITO ES EL ROJO. \n\n TU SALUD SERA Te sentirás muy bien la mayor parte del año y con mucha energía. \n\n EN EL AMOR TE IRA Será un año duro y lleno de conversaciones y concesiones, para intentar salvar el matrimonio o la relación.");
        }
        break;
    case 11:
        if (diaNacimiento <= 22)
        {
            strcpy(signo, "Escorpio \n\n TUS NUMEROS DE LA SUERTE SON 4,13,21. \n\n TU COLOR FAVORITO ES EL ROJO. \n\n TU SALUD SERA Te sentirás muy bien la mayor parte del año y con mucha energía. \n\n EN EL AMOR TE IRA Será un año duro y lleno de conversaciones y concesiones, para intentar salvar el matrimonio o la relación.");
        }
        else
        {
        	strcpy(signo, "Sagitario \n\n TUS NUMEROS DE LA SUERTE SON 3,8,13. \n\n TU COLOR FAVORITO ES EL AZUL.\n\n TU SALUD SERA Debido a la actividad física que practicas tu salud se verá favorecida, pues con la eliminación de toxinas estás contribuyendo a reforzar la resistencia de tu organismo. \n\n EN EL AMOR TE IRA A lo largo de este año, los Sagitario experimentarán el amor al máximo y pasarán gratos momentos con amistades y seres queridos.");
        }
        break;
    case 12:
        if (diaNacimiento <= 21)
        {
            strcpy(signo, "Sagitario \n\n TUS NUMEROS DE LA SUERTE SON 3,8,13. \n\n TU COLOR FAVORITO ES EL AZUL.\n\n TU SALUD SERA Debido a la actividad física que practicas tu salud se verá favorecida, pues con la eliminación de toxinas estás contribuyendo a reforzar la resistencia de tu organismo. \n\n EN EL AMOR TE IRA A lo largo de este año, los Sagitario experimentarán el amor al máximo y pasarán gratos momentos con amistades y seres queridos.");
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
