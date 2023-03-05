#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <cmath>
#include <ctime>
#include <stack>
#include<conio.h> 
#include<windows.h>

using namespace std;

void calcularOperaciones();
void determinarParImpar();
void convUnidades();
bool esPalindromo(string str);
void convertirANumerosRomanos();
void enterosAletras();
void decimalesAletras();
void tablaMultiplicar();
void todasTablasMul();
void MultiplicacionManual();
void decABin();
void decimalesHexadecimal();
void Fig_geo();
void cajeroAuto();
void calcHipo();
void calcEdad();
void invFrase();
void puntoPantalla();
void velocidadPersona();
void letrasNum();
void invPala();

int main()
{
    int opcion;
    do {
        cout << "Menu" << endl;
        cout << "1. Calcular operaciones" << endl;
        cout << "2. Determinar si un numero es par o impar" << endl;
        cout << "3. Conversion de Unidades" << endl;
        cout << "4. Determinar si una palabra o un numero es palindromo" << endl;
        cout << "5. Convertir numero arabigo a romano" << endl;
        cout << "6. Convertir numero entero a letras" << endl;
        cout << "7. Convertir numero entero con decimales a letras" << endl;
        cout << "8. Tabla de multiplicar" << endl;
        cout << "9. Todas las tablas de multiplicar" << endl;
        cout << "10. Multiplicacion manual" << endl;
        cout << "11. Conversion de numeros decimales a binarios" << endl;
        cout << "12. Conversion de numeros decimales a hexadecimales" << endl;
        cout << "13. Crear figuras geometricas basicas" << endl;
        cout << "14. Mover un punto en toda la pantalla (w,a,s,d) (z salir)" << endl;
        cout << "15. Simulacion de un cajero(automata)" << endl;
        cout << "16. Calcular la Hipotenusa" << endl;
        cout << "17. Calcular edad" << endl;
        cout << "18. Calcular en cuanto tiempo llega una persona a determinado punto" << endl;
        cout << "19. Calcular cuantas letras tiene una palabra" << endl;
        cout << "20. Invertir una palabra" << endl;
        cout << "21. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                calcularOperaciones();
                break;
            case 2:
                determinarParImpar();
                break;
            case 3:
                convUnidades();
                break;
            case 4: {
                string entrada;
                cout << "Ingrese una palabra o un numero: ";
                cin >> entrada;

                bool resultado = esPalindromo(entrada);
                if (resultado) {
                    cout << entrada << " es un palindromo." << endl;
                } else {
                    cout << entrada << " no es un palindromo." << endl;
                }
                break;
            } 
            case 5:
                convertirANumerosRomanos();
                break; 
            case 6:
                enterosAletras();
                break;
            case 7:
                decimalesAletras();
                break;
            case 8:
                tablaMultiplicar();
                break;
            case 9:
                todasTablasMul();
                break;
            case 10:
                MultiplicacionManual();
                break;
            case 11:
                decABin();
                break;
            case 12: 
                decimalesHexadecimal();
                break;
            case 13:
                Fig_geo();
                break;
            case 14:
                puntoPantalla();
                break;
            case 15:
                cajeroAuto();
                break;
            case 16:
                calcHipo();
                break;
            case 17: 
                calcEdad();
                break;
            case 18:
                velocidadPersona();
                break;
            case 19:
                letrasNum();
                break;
            case 20:
                invPala();
                break;
            case 21:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
                break;
            
        }
    } while (opcion != 21);

    return 0;
}

void calcularOperaciones()
{
    float num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    float suma = num1 + num2;
    float resta = num1 - num2;
    float multiplicacion = num1 * num2;
    float division = num1 / num2;

    cout << "La suma es: " << suma << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La multiplicacion es: " << multiplicacion << endl;
    cout << "La division es: " << division << endl;
}

void determinarParImpar()
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }
}

void convUnidades() {
    float valor;
    int opcion;

    cout << "Ingrese el valor a convertir: ";
    cin >> valor;

    cout << "Seleccione la unidad de medida inicial:" << endl;
    cout << "1. Kilometros" << endl;
    cout << "2. Metros" << endl;
    cout << "3. Libras" << endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << valor << " kilometros equivalen a " << valor * 0.621371 << " millas." << endl;
            break;
        case 2:
            cout << valor << " metros equivalen a " << valor * 39.3701 << " pulgadas." << endl;
            break;
        case 3:
            cout << valor << " libras equivalen a " << valor * 0.453592 << " kilos." << endl;
            break;
        default:
            cout << "o invalida." << endl;
            break;
    }
}

bool esPalindromo(string str)
{
    string reversa = str;
    reverse(reversa.begin(), reversa.end());

    return str == reversa;
}

void convertirANumerosRomanos() {
        int numero,unidades,decenas,centenas,millares;
        
        cout << "Ingresa un numero entre [1-3999] para convertirlo a romano: ";
        cin >> numero;
        
        unidades = numero%10; numero /= 10;
        decenas = numero%10; numero /= 10;
        centenas = numero%10; numero /= 10;
        millares = numero%10; numero /= 10;
        
        switch(millares){
            case 1: cout << "M"; break;
            case 2: cout << "MM"; break;
            case 3: cout << "MMM"; break;
        }
        
        switch(centenas){
            case 1: cout << "C"; break;
            case 2: cout << "CC"; break;
            case 3: cout << "CCC"; break;
            case 4: cout << "CD"; break;
            case 5: cout << "D"; break;
            case 6: cout << "DC"; break;
            case 7: cout << "DCC"; break;
            case 8: cout << "DCCC"; break;
            case 9: cout << "CM"; break;
        }
        
        switch(decenas){
            case 1: cout << "X"; break;
            case 2: cout << "XX"; break;
            case 3: cout << "XXX"; break;
            case 4: cout << "XL"; break;
            case 5: cout << "L"; break;
            case 6: cout << "LX"; break;
            case 7: cout << "LXX"; break;
            case 8: cout << "LXXX"; break;
            case 9: cout << "XC"; break;
        }
        
        switch(unidades){
            case 1: cout << "I"; break;
            case 2: cout << "II"; break;
            case 3: cout << "III"; break;
            case 4: cout << "IV"; break;
            case 5: cout << "V"; break;
            case 6: cout << "VI"; break;
            case 7: cout << "VII"; break;
            case 8: cout << "VIII"; break;
            case 9: cout << "IX"; break;
        }
    cout<<endl;
}
void enterosAletras() {
    int numero;

    // Validación para asegurarse de que el numero ingresado esté entre 1 y 800
    do {
        cout << "Ingrese un numero entre 1 y 800: ";
        cin >> numero;

        if (numero < 1 || numero > 800) {
            cout << "Numero invalido. Intente de nuevo." << endl;
        }

    } while (numero < 1 || numero > 800);

    string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve"};
    string decenas[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

    string letraNumero = "";

    if (numero == 0) {
        letraNumero = "cero";
    } else if (numero <= 9) {
        letraNumero = unidades[numero];
    } else if (numero <= 19) {
        letraNumero = especiales[numero - 10];
    } else if (numero <= 99) {
        letraNumero = decenas[numero / 10];
        if (numero % 10 != 0) {
            letraNumero += " y " + unidades[numero % 10];
        }
    } else if (numero <= 999) {
        if (numero == 100) {
            letraNumero = "cien";
        } else {
            letraNumero = centenas[numero / 100];
            if (numero % 100 <= 9) {
                letraNumero += " " + unidades[numero % 100];
            } else if (numero % 100 <= 19) {
                letraNumero += " " + especiales[numero % 100 - 10];
            } else {
                letraNumero += " " + decenas[numero % 100 / 10];
                if (numero % 10 != 0) {
                    letraNumero += " y " + unidades[numero % 10];
                }
            }
        }
    }

    cout << "El numero " << numero << " en letras es: " << letraNumero << endl;
}
void decimalesAletras()
{
    double numero;
    std::cout << "Ingrese el numero: ";
    std::cin >> numero;

    // Separa la parte entera y la parte decimal
    int parte_entera = static_cast<int>(numero);
    int parte_decimal = static_cast<int>((numero - parte_entera) * 100);

    // Array con las palabras para los números
    std::string unidades[] = {"cero", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    std::string decenas[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciséis", "diecisiete", "dieciocho", "diecinueve", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    std::string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

    // Convierte la parte entera a letras
    std::string resultado;
    if (parte_entera == 0) {
        resultado = "cero";
    } else if (parte_entera < 0) {
        resultado = "menos ";
        parte_entera *= -1;
    }
    if (parte_entera >= 1000) {
        resultado += unidades[parte_entera / 1000] + " mil ";
        parte_entera %= 1000;
    }
    if (parte_entera >= 100) {
        resultado += centenas[parte_entera / 100] + " ";
        parte_entera %= 100;
    }
    if (parte_entera >= 10) {
        if (parte_entera <= 20) {
            resultado += decenas[parte_entera - 10] + " ";
        } else {
            resultado += decenas[parte_entera / 10] + " ";
            parte_entera %= 10;
            if (parte_entera > 0) {
                resultado += "y " + unidades[parte_entera] + " ";
            }
        }
    }
    if (parte_entera > 0 && parte_entera < 10) {
        resultado += unidades[parte_entera] + " ";
    }

    // Agrega la parte decimal a la salida
    if (parte_decimal > 0) {
        resultado += "con " + decenas[parte_decimal / 10] + " " + unidades[parte_decimal % 10];
    }

    // Utiliza std::setprecision() para especificar la cantidad de decimales a leer
    std::cout << "El numero " << std::setprecision(2) << std::fixed << numero << " en letras es: " << resultado << std::endl;
}
void tablaMultiplicar() {
    int num;
    cout << "Ingrese el numero de la tabla de multiplicar que desea generar: ";
    cin >> num;

    cout << "Tabla de multiplicar del " << num << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num*i << endl;
    }
}
void todasTablasMul() {
        for (int i = 1; i <= 10; i++) {
        cout << "Tabla de multiplicar del " << i << ":" << endl;
        for (int j = 1; j <= 10; j++) {
            cout << i << " x " << j << " = " << i*j << endl;
        }
        cout << endl;
    }
}
void MultiplicacionManual() {
  int num1, num2;
  cout << "Ingrese dos numeros enteros a multiplicar: "; // Se calcula el producto de ambos números
  cin >> num1 >> num2;
  int producto = num1 * num2; 

  // Se imprime la estructura visual de la multiplicacion
  cout << " " << setw(to_string(num2).length()) << num1 << endl;
  cout << "x" << num2 << endl;
  cout << "-----" << endl;

// Se procede a multiplicar los dígitos de num2 uno por uno
  int contador_digitos_num2 = 0; 
while (num2 > 0) {
    int digito_num2 = num2 % 10; 
    int resultado_parcial = num1 * digito_num2; 
    cout << setw(to_string(producto).length() - contador_digitos_num2) << resultado_parcial << endl; // Se imprime el resultado parcial de la multiplicacion de num1 por cada dígito de num2 
    num2 /= 10; // Se actualiza el valor de num2 para continuar con el siguiente dígito
    contador_digitos_num2++; // Se lleva la cuenta de los dígitos procesados de num2 para imprimir los espacios necesarios en cada resultado parcial
  }

// Se imprime la línea final y el producto total de la multiplicacion
  cout << "-----" << endl;
  cout << producto << endl;
}

void decABin() {
    int numeroDecimal;
    cout << "Ingrese un numero decimal: ";
    cin >> numeroDecimal;

    vector<int> bits;
    while (numeroDecimal > 0) {
        bits.push_back(numeroDecimal % 2);
        numeroDecimal /= 2;
    }

    reverse(bits.begin(), bits.end());

    cout << "El numero en binario es: ";
    for (int bit : bits) {
        cout << bit;
    }
    cout << endl;
}
void decimalesHexadecimal() {
    int decimal, cociente, residuo;
    string hexadecimales = "";
    cout << "Por favor ingrese un numero decimal: ";
    cin >> decimal;

    cociente = decimal;

    while (cociente != 0) {
        residuo = cociente % 16;
        cociente = cociente / 16;
        if (residuo < 10) {
            hexadecimales.push_back(residuo + '0');
        } else {
            hexadecimales.push_back(residuo - 10 + 'A');
        }
    }

    reverse(hexadecimales.begin(), hexadecimales.end());

    cout << "El numero convertido a hexadecimal es: ";
    for (int i = 0; i < hexadecimales.size(); i++) {
        cout << hexadecimales[i];
    }
    cout << endl;
}

void Fig_geo() {                
 int choice, height, width;

    cout << "¿Que figura geometrica desea crear?\n";
    cout << "1. Cuadrado\n";
    cout << "2. Rectangulo\n";
    cout << "3. Triangulo\n";

    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Introduce la altura del cuadrado: ";
            cin >> height;
            width = height;

            for (int i = 1; i <= height; i++)
            {
                for (int j = 1; j <= width; j++)
                {
                    cout << "* ";
                }

                cout << endl;
            }
            break;

        case 2:
            cout << "Introduce la altura del rectangulo: ";
            cin >> height;
            cout << "Introduce la anchura del rectangulo: ";
            cin >> width;

            for (int i = 1; i <= height; i++)
            {
                for (int j = 1; j <= width; j++)
                {
                    cout << "* ";
                }

                cout << endl;
            }
            break;

        case 3:
            cout << "Introduce la altura del triangulo: ";
            cin >> height;

            for (int i = 1; i <= height; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    cout << "* ";
                }

                cout << endl;
            }
            break;

        default:
            cout << "o invalida. Intentalo de nuevo.\n";
            break;
    }
}

void gotoxy(int x1, int y1) {
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x1;
    dwPos.Y = y1;
    SetConsoleCursorPosition(hcon, dwPos);
}

void puntoPantalla() {
    char opcion = ' ';
    int x = 10, y = 10;
    bool salir = false;
    while (!salir) {
        system("cls");
        gotoxy(x, y);
        cout << "*";
        opcion = getch();
        switch (opcion) {
            case 'w':
                y--;
                break;
            case 's':
                y++;
                break;
            case 'a':
                x--;
                break;
            case 'd':
                x++;
                break;
            case 'z': // Si se presiona la tecla 'z', se sale del programa
                salir = true;
                break;
        }
    }
}

void cajeroAuto() {
    int saldo = 10000;
    int opcion, monto;
    
    while(true) {
        cout << "Bienvenido al cajero automatico\n";
        cout << "Seleccione una opcion:\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar efectivo\n";
        cout << "3. Salir\n";
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                cout << "Su saldo actual es: $" << saldo << endl;
                break;
            case 2:
                cout << "Ingrese la cantidad a retirar: $";
                cin >> monto;
                if(monto > saldo) {
                    cout << "Fondos insuficientes\n";
                } else {
                    saldo -= monto;
                    cout << "Retire su efectivo\n";
                    cout << "Saldo restante: $" << saldo << endl;
                }
                break;
            case 3:
                char respuesta;
                cout << "¿Desea continuar en el programa? (S/N): ";
                cin >> respuesta;
                if(respuesta == 'N' || respuesta == 'n') {
                    cout << "Gracias por usar nuestro cajero automático\n";
                    return;
                }
                break;
        }
    }
}

void calcHipo() {
    float cateto1, cateto2;
    cout << "Ingrese el valor del primer cateto: ";
    cin >> cateto1;
    cout << "Ingrese el valor del segundo cateto: ";
    cin >> cateto2;
    float hipotenusa = sqrt(cateto1*cateto1 + cateto2*cateto2);
    cout << "La hipotenusa es: " << hipotenusa << endl;
}


void calcEdad() {
  int diaNacimiento, mesNacimiento, anioNacimiento;
  time_t now = time(0);
  tm *ltm = localtime(&now);

  cout << "Ingresa tu fecha de nacimiento (dia mes anio separados por un espacio): ";
  cin >> diaNacimiento >> mesNacimiento >> anioNacimiento;

  int edad = ltm->tm_year + 1900 - anioNacimiento;

  if (ltm->tm_mon + 1 < mesNacimiento || (ltm->tm_mon + 1 == mesNacimiento && ltm->tm_mday < diaNacimiento)) {
    edad--;
  }

  cout << "Tu edad es " << edad << " anios." << endl;
  
}

void velocidadPersona()
{
    float distancia, velocidad, tiempo;

    cout << "Ingrese la distancia a recorrer (en metros): ";
    cin >> distancia;

    cout << "Ingrese la velocidad de la persona (en metros por segundo): ";
    cin >> velocidad;

    tiempo = distancia / velocidad;

    cout << "El tiempo necesario para llegar al punto es de " << tiempo << " segundos." << endl;
}

void letrasNum() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin >> palabra;
    int cantidad_letras = palabra.length();
    cout << "La palabra \"" << palabra << "\" tiene " << cantidad_letras << " letras." << endl;
}

void invPala() {
    string palabra;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    reverse(palabra.begin(), palabra.end());

    cout << "La palabra invertida es: " << palabra << endl;
}