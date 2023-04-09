#include <iostream>
#include <cstdlib>
#include <string>
#include <conio.h>
using namespace std;
using namespace System;

int i = 0;
int j = 0;
bool vuelos[9][9] = {
            { false, false, false, false, true, false, false, false, false},
            { false, false, false, false, true, false, false, false, false},
            { false, false, false, false, true, false, false, false, false},
            { false, false, false, false, true, false, false, false, false},
            { true, true, true, true, false, true, true, true, true},
            { false, false, false, false, true, false, true, false, false},
            { false, false, false, false, true, true, false, false, false},
            { false, false, false, false, true, false, false, false, false},
            { false, false, false, false, false, true, false, true, false}

};


void valida_vuelos(string a, string b)
{
    //filas
    {
        if (a == "Piura" || a == "piura" || a == "PIURA")
        {
            i = 0;
        }
        if (a == "Chiclayo" || a == "chiclayo" || a == "CHICLAYO")
        {
            i = 1;
        }
        if (a == "Iquitos" || a == "iquitos" || a == "IQUITOS")
        {
            i = 2;
        }
        if (a == "TRUJILLO" || a == "Trujillo" || a == "trujillo")
        {
            i = 3;
        }
        if (a == "Lima" || a == "LIMA" || a == "lima")
        {
            i = 4;
        }
        if (a == "Cusco" || a == "cusco" || a == "CUSCO")
        {
            i = 5;
        }
        if (a == "Arequipa" || a == "arequipa" || a == "AREQUIPA")
        {
            i = 6;
        }
        if (a == "Juliaca" || a == "juliaca" || a == "JULIACA")
        {
            i = 7;
        }
        if (a == "Puerto Maldonado" || a == "PUERTO MALDONADO" || a == "puerto maldonado")
        {
            i = 8;
        }
    }
    //columnas    
    {
        if (b == "Piura" || b == "piura" || b == "PIURA")
        {
            j = 0;
        }
        if (b == "Chiclayo" || b == "chiclayo" || b == "CHICLAYO")
        {
            j = 1;
        }
        if (b == "Iquitos" || b == "iquitos" || b == "IQUITOS")
        {
            j = 2;
        }
        if (b == "TRUJILLO" || b == "Trujillo" || b == "trujillo")
        {
            j = 3;
        }
        if (b == "Lima" || b == "LIMA" || b == "lima")
        {
            j = 4;
        }
        if (b == "Cusco" || b == "cusco" || b == "CUSCO")
        {
            j = 5;
        }
        if (b == "Arequipa" || b == "arequipa" || b == "AREQUIPA")
        {
            j = 6;
        }
        if (b == "Juliaca" || b == "juliaca" || b == "JULIACA")
        {
            j = 7;
        }
        if (b == "Puerto Maldonado" || b == "PUERTO MALDONADO" || b == "puerto maldonado")
        {
            j = 8;
        }
    }

}
void matriz_validad(int i, int j)
{
    if (vuelos[i][j] == true)
        cout << "Existe vuelo directo";
    else
    {
        cout << "No existe";
    }
}
void comenzar() {
    string salida, llegada;
    cout << "Lugar de salida: ";
    cin >> salida;
    cout << "Lugar de llegada: ";
    cin >> llegada;
    valida_vuelos(salida, llegada);
    matriz_validad(i, j);
    getch();
}



void creditos() {
    setlocale(LC_ALL, "");
    int tecla;
    Console::SetWindowSize(212, 48);
    Console::BackgroundColor = ConsoleColor::White;
    Console::ForegroundColor = ConsoleColor::Black;
    cout << "                                                ___                    _     _                                          " << endl;
    cout << "                                               (  _`\\                 ( ) _ ( )_                                        " << endl;
    cout << "                                               | ( (_) _ __   __     _| |(_)| ,_)   _     ___                           " << endl;
    cout << "                                               | |  _ ( '__)/'__`\\ /'_` || || |   /'_`\\ /',__)                          " << endl;
    cout << "                                               | (_( )| |  (  ___/( (_| || || |_ ( (_) )\\__, \\                          " << endl;
    cout << "                                               (____/'(_)  `\\____)`\\__,_)(_)`\\__)`\\___/'(____/                          " << endl;
    cout << "                                                                                                                        " << endl;
    cout << "                                                                                                                        " << endl;
    short x = 0, y = 7;

    for (y; y <= 20; y++) {
        Console::BackgroundColor = ConsoleColor::White;
        Console::ForegroundColor = ConsoleColor::Black;
        Console::SetCursorPosition(x, y);
        switch (y) {
        case 8:  cout << "                         __                                                                              "
            << "                                                                                                                  "; break;
        case 9: cout << "                       .'  '.                                                                            "
            << "                                                                                                                  "; break;
        case 10: cout << "                    .-'/  | 0|                                                                           "
            << "                                                                                                                  "; break;
        case 11: cout << "       ,       _.-'  ,|  /    `.                                                                         "
            << "                                                                                                                  "; break;
        case 12: cout << "      /|    .-'       `--''-._.'=================================-,                                      "
            << "                                                                                                                  "; break;
        case 13: cout << "      | '-'`        .___.--._)===================================|                                      "
            << "                                                                                                                  "; break;
        case 14: cout << "       |            .'      |          Integrantes               |                                      "
            << "                                                                                                                  "; break;
        case 15: cout << "        |     /,_.-'        |  Arroyo Ormeño, André Alonso       | "
            << "                                                                                                                  "; break;
        case 16: cout << "      _/   _.' (            |  Del Carpio Flores, Ariana Ileen   |                                      "
            << "                                                                                                                  "; break;
        case 17: cout << "     /  ,-' |  |            |  Diaz Espinoza, Carlos Gabriel     |                                      "
            << "                                                                                                                  "; break;
        case 18: cout << "     |  |    `-'            |  Ramirez Rodriguez, Diego          |                                      "
            << "                                                                                                                  "; break;
        case 19: cout << "      `-'                   '------------------------------------'                                      "
            << "                                                                                                                  ";
        case 20: Console::ForegroundColor = ConsoleColor::White;
            Console::SetCursorPosition(0, 20);
            cout << "........................................................................................................"
                << "............................................................................................................."; break;
        }
        Console::BackgroundColor = ConsoleColor::Black;
        (y == 20 ? ++x, y = 4 : x += 0);
        (x == 60 ? ++x, x = 2 : x += 0);
        _sleep(10);

    }
}
void menu() {
    system("cls");
    int opcion;

    do {
        system("cls");

        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. VIAJES" << endl;
        cout << "2. CREDITOS" << endl;
        cout << "3. SALIR" << endl;

        cout << "\nIngrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            // Lista de instrucciones de la opción 1        
            system("cls");
            comenzar();
            break;

        case 2:
            // Lista de instrucciones de la opción 2                
            system("cls");
            creditos();
         
            break;
        case 3:
            exit(0);
            break;
        }
    } while (true);


}

void pantalla_inicio() {
    Console::SetWindowSize(150, 200);
    char tecla;

    cout << " .    .   .       .       .       .       .       .       .       .       .       .          .  .  " << endl;
    cout << "    .   .   .  .    .  .    .  .    .  .    .  .    .  .    .  .    .  .    .  .    .  .  .   .   ." << endl;
    cout << " .    .      .   .   .   .   .   .   .   .   .   .   .   .   .   .   .   .   .   .   .   .  .   .  " << endl;
    cout << "  ""   __________  __  ______  ____     ___ _    _________    _   ___________    .   .   .   . :;S@@8@St.          . ." << endl;
    cout << " .""  / ____/ __ \\/ / / / __ \\/ __ \\   /   | |  / /  _/   |  / | / / ____/   |     .      .:%@88@X@X;%8; 8:::. .  ." << endl;
    cout << "  "" / / __/ /_/ / / / / /_/ / / / /  / /| | | / // // /| | /  |/ / /   / /| |. .     . .t888888@XS8X8X@.%@X88% .  " << endl;
    cout << " .""/ /_/ / _, _/ /_/ / ____/ /_/ /  / ___ | |/ // // ___ |/ /|  / /___/ ___ |    . .:%@888888@X@t SSX:XX@XXSt%;   " << endl;
    cout << "  ""\\____/_/ |_|\\____/_/    \\____/  /_/  |_|___/___/_/  |_/_/ |_/\\____/_/  |_|. .:%@888888;X.XXXXX;%XXXXXSt:.tX   ." << endl;
    cout << ".    .   .       . .          .         . .     . .     . .     . .     . .   .;8@88@88XX@88@XX@XXXXX@XXt:.:%t  .   ." << endl;
    cout << "   .   .   .  .      .  . . .    . .  .     .       .       .       .      :%@8888888:.SXX:%;@XXX@XXXSt:..t8;     .  " << endl;
    cout << ".    .      .   .  .           .     .t:  .   . .     . .     . .     .:%@888888%@;XX%X:XXXXXXX@XXS%:..:S@:.  .:t    " << endl;
    cout << ".    .   .       .   . .  .  .    . %X88%         .  .    .  .    . .;@@@8@@88XX @ 8XX@XX@X@XXXXXt..:.t8.     %X.8. ." << endl;
    cout << "   .   .   .  .    .       .   .   @88888%t .  .   .    .   .   ..t@8888888%88SXS:%XXXX@XXXXXXS;:.::%8;     . %88;X  " << endl;
    cout << ".    .      .   .  .;. . .       . :888%888:%    .    .   .  .t@888888@t;SX%@%SSSSX@XXXXXXX%t:.:. ;@888St888;S8t88S;." << endl;
    cout << ".    .   .       . S@8      . .     t8888%X88S.     .      :X8@@@X8X%t:S888@S8t@8SS@XX@XX%:..:.:88:8@8@888.;;8:8%@@  " << endl;
    cout << "   .   .   .  .    88;X.  .     .    S8SS8;8t8@8SSX8888XX:888XX8X@@S@@888888:8.8%%;XXX%t:.:..888%tS8tt8;X8;:.88tX. . " << endl;
    cout << ".    .      .   .  @88:8.SSS%XtX.8X88888;88.88:88 8 88.88.888.88X%t : 8%8..8;: t8tS%;:.: ;@S8.8;;%t8 t.8;8@t:.::.    " << endl;
    cout << ".    .   .       . %.8888.88.888888888%8::8:8;8;8:8:8t8;8:8%8@ t S 8.X:8X8:8 8;St;.... 8%88;8:%ttttt8. StS. : ..  .  " << endl;
    cout << "   .   .   .  .    %8ttt:8S8:.::::...8:8.8;8;8:8;8:8;8:8:8;88:t%%%%SX:  ;. .t;t:..:t88@@8%t@ tttttt%S88@X. ... .    ." << endl;
    cout << ".    .      .   .  :       .;;;ttt%%;:t;%@S88X@ :X.@@XXXXXXXSttttttt%@88@:%;:.:t88;...  .  8tttttttt .8t     .  .    " << endl;
    cout << ".    .   .       . .   .   .  .  .   . . @8;SSSXSS8%.@XXXX%ttttttttt%%t ...:8@:..  .      .X;tttt X% .  .    .   .  ." << endl;
    cout << "   .   .   .  .  . .  .     .  .  .  .  .S%:S;8%XXSX8.XXXX@X: %tttt;   .;%8@t:        .  .  .;X@X%:  .    . .   .   ." << endl;
    cout << ".    .      .   .     .   X888@S%8S88X88.8.::8%8%X@XS8%XX@XXXS%;:..:tX8%:..   . . .  .    .            .      .   .  " << endl;
    cout << ".    .   .       . .  .  888.t;;:%8888:8.8;:88%SXXXXX%XXXXXS%;..:S8t.               .  .     .  .  .  .  .  .        " << endl;
    cout << "   .   .   .  .         .:%S8S8S@S88X8@X8S%8@8888888X8X8S@XX@88%;.    .   . .  .  .      .     .    .          . .  ." << endl;
    cout << ".    .      .   .   .   .    .      .  .. .......::..... .  ..    . .   .            .     . .   .     .  .  .       " << endl;
    cout << ".    .   .       .     ..    .   .                     .        .          . . .  .    . .         .  .    .    . .  " << endl;
    cout << "   .   .   .  .      .     .   .   .     .    .  .  .    .    .    . . . .          .      .  . .   .   .    .       " << endl;
    cout << ".    .      .   .  .    .           Persione <<Espacio> para empezar a viajar     .  . .   .  .      . .   .   .  .  " << endl;
    cout << ".    .   .       .    .  .   .   .     .      . .   .   .    .     .  .  .         .   .  . . .      . .    .        " << endl;
    do
    {


        if (_kbhit())
        {
            tecla = getch();
            if (tecla = 32)
            {
                menu();
            }
        }
    } while (true);
}


int main()
{
    pantalla_inicio();
    getch();
    return 0;
}
