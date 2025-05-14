#include <iostream>

using namespace std;

int main()
{
    int edad, Categoria, Producto;
    float Pago, restante;

    // ver los productos para estudiante y profesional

    //falta comentar y aplicar descuentos

    cout << "Ingresa edad: ";
    cin >> edad;

    if (edad < 16 && edad<=0)
    {
        cout << "No puedes continuar la compra";
    }
    else if (edad >= 16)
    {
        cout << "Selecciona una categoria:";
        cout << "1.Estudiante\n 2.Profesional\n 3.Ver todos";
        cin >> Categoria;

        switch (Categoria)
        {
        case 1:
            cout << "Seleccionaste estudiante, aqui una lista de los productos:\n";
            cout << "1.Laptop Basica:$900\n 2.Tablet Estudiantil:$600\n 3.Chromebook:$700";
            cin >> Producto;

            switch (Producto)
            {
            case 1:
                cout << "Escogiste Laptop basica";

                cout << "Ingresa tu pago:";
                cin >> Pago;

                if (Pago < 900)
                {
                    restante = Pago - 900;
                    cout << "Lo siento te falta:$" << restante << endl;
                }
                else
                {
                    restante = Pago - 900;
                    cout << "Saldo restante:$" << restante << endl;
                }
                break;

            case 2:
                cout << "Escogiste Tablet Estudiantil\n";

                cout << "Ingresa tu pago:";
                cin >> Pago;

                if (Pago < 600)
                {
                    restante = Pago - 600;
                    cout << "Lo siento te falta:$" << restante << endl;
                }
                else
                {
                    restante = Pago - 600;
                    cout << "Saldo restante:$" << restante << endl;
                }
                break;

            case 3:
                cout << "Escogiste Chromebook";

                cout << "Ingresa tu pago:";
                cin >> Pago;

                if (Pago < 700)
                {
                    restante = Pago - 700;
                    cout << "Lo siento te falta:$" << restante << endl;
                }
                else
                {
                    restante = Pago - 700;
                    cout << "Saldo restante:$" << restante << endl;
                }
                break;

            default:
                cout << "Ocurrio un error";
                break;
            }

        case 2:
            cout << "Seleccionaste Profesional, aqui una lista de los productos:\n";
            cout << "1.Laptop Avanzada $1500\n 2.Tablet Pro:$1200\n 3.Estacion de Trabajo:$2000";
            cin >> Producto;

            switch (Producto)
            {
            case 1:
                cout << "Escogiste Laptop Avanzada";

                cout << "Ingresa tu pago:";
                cin >> Pago;

                if (Pago < 1500)
                {
                    restante = Pago - 1500;
                    cout << "Lo siento te falta:$" << restante << endl;
                }
                else
                {
                    restante = Pago - 1500;
                    cout << "Saldo restante:$" << restante << endl;
                }
                break;

            case 2:
                cout << "Escogiste Tablet Pro";

                cout << "Ingresa tu pago:";
                cin >> Pago;

                if (Pago < 1200)
                {
                    restante = Pago - 1200;
                    cout << "Lo siento te falta:$" << restante << endl;
                }
                else
                {
                    restante = Pago - 1200;
                    cout << "Saldo restante:$" << restante << endl;
                }
                break;

            case 3:
                cout << "Escogiste estacion de trabajo";

                cout << "Ingresa tu pago:";
                cin >> Pago;

                if (Pago < 700)
                {
                    restante = Pago - 2000;
                    cout << "Lo siento te falta:$" << restante << endl;
                }
                else
                {
                    restante = Pago - 2000;
                    cout << "Saldo restante:$" << restante << endl;
                }
                break;

            default:
                cout << "Ocurrio un error";
                break;

                break;
            }

        case 3:
            cout << "1.Laptop Basica:$900\n 2.Tablet Estudiantil:$600\n 3.Chromebook:$700\n";
            cout << "1.Laptop Avanzada:$1500\n 2.Tablet Pro:$1200\n 6.Estacion de trabajo:$2000";

        default:
            cout << "Cerrando programa...";
            break;
        }
    }

    return 0;
}