#include <iostream>

using namespace std;

int main()
{
    int edad, Categoria, Producto;
    float descuento1, descuento2, Pago, restante;

    // Le pedimos al usuario que ingrese su edad
    cout << "Ingresa edad: ";
    cin >> edad;

    // Verficamos que la edad del usuario sea mayor a 16
    if (edad < 16)
    {
        cout << "No puedes continuar la compra";
    }

    // Si la edad es mayor o igual a 16 entonces le mostramos el menu
    else if (edad >= 16)
    {
        cout << "Selecciona una categoria:";
        cout << "\n1.Estudiante\n 2.Profesional\n 3.Ver todos" << endl;
        cin >> Categoria;

        // Mediante un switch le mostramos el menu y le mostramos las opciones y guardamos la seleccion en la variable categoria
        switch (Categoria)
        {
        case 1:
            // Presentamos el menu al usuario
            cout << "Seleccionaste estudiante, aqui una lista de los productos:\n";
            cout << "1.Laptop Basica:$900\n 2.Tablet Estudiantil:$600\n 3.Chromebook:$700"<<endl;
            cout << "Selecciona una opcion" << endl;
            cin >> Producto;

            // Le pedimos al usurio que ingrese la opcion a comprar
            switch (Producto)
            {
            case 1:
                cout << "Escogiste Laptop basica" << endl;

                // Le pedimos que ingrese el pago
                cout << "Ingresa tu pago:";
                cin >> Pago;

                // Si el pago es menor a 900 entonces no puede hacer la compra
                if (Pago < 900)
                {
                    restante = Pago - (900 - descuento1);
                    cout << "Lo siento te falta:$" << restante << endl;
                    return 1;
                }

                // si es mayor a 900 entonces le decimos que si puede hacer la compra y aplicamos el 10% de descuento
                else
                {
                    // calculamos el descuento
                    descuento1 = 900 * 0.20;
                    // calculamos la cuenta total
                    restante = Pago - (900 - descuento1);
                    cout << "compra exitosa : laptop basica" << endl;
                    cout << "Saldo restante $"  <<restante<<endl;
                    // terminamos el programa
                    return 1;
                }
                break;

            case 2:
                cout << "Escogiste Tablet Estudiantil" << endl;

                cout << "Ingresa tu pago:";
                cin >> Pago;

                // Si el pago es menor a 600 entonces no puede hacer la compra
                if (Pago < 600)
                {
                    restante = Pago - (600 - descuento1);
                    cout << "Lo siento te falta:$" << restante << endl;
                    return 1;
                }
                else
                {
                    // calculo de descuento
                    descuento1 = 600 * 0.20;
                    // calculo cuenta total
                    restante = Pago - (600 - descuento1);
                    cout << "compra exitosa : table estudiantil" << endl;
                    cout << "Saldo restante $" <<restante<<endl;
                    return 1;
                }
                break;

            case 3:
                cout << "Escogiste Chromebook" << endl;

                cout << "Ingresa tu pago:";
                cin >> Pago;

                // si es mayor a 700 entonces le decimos que si puede hacer la compra y aplicamos el 10% de descuento

                if (Pago < 700)
                {
                    restante = Pago - (700 - descuento1);
                    cout << "Lo siento te falta:$" << "para comprar chromebook" << restante << endl;
                    return 1;
                }
                else
                {
                    descuento1 = 700 * 0.20;
                    restante = Pago - (700 - descuento1);
                    cout << "compra exitosa : chromebook" << endl;
                    cout << "Saldo restante $" <<restante<<endl;
                    return 1;
                }
                break;

            default:
                cout << "Ocurrio un error";
                break;
            }

        case 2:
            // Presentamos el menu al usuario

            cout << "Seleccionaste Profesional, aqui una lista de los productos:\n";
            cout << "1.Laptop Avanzada $1500\n 2.Tablet Pro:$1200\n 3.Estacion de Trabajo:$2000" << endl;
            cout << "Selecciona una opcion" << endl;
            cin >> Producto;

            switch (Producto)
            {
            case 1:
                cout << "Escogiste Laptop Avanzada" << endl;

                cout << "Ingresa tu pago:";
                cin >> Pago;

                // si es mayor a 1500 entonces le decimos que si puede hacer la compra y aplicamos el 10% de descuento

                if (Pago < 1500)
                {
                    restante = Pago - (1500 - descuento2);
                    cout << "Lo siento te falta:$" << restante << "para comprar laptop avanzada " << endl;
                    return 1;
                }
                else
                {
                    // calculo del descuento
                    descuento2 = 1500 * 0.10;
                    // calculo cuenta total
                    restante = Pago - (1500 - descuento2);
                    cout << "compra exitosa : laptop avanzada" << endl;
                    cout << "Saldo restante $"  <<restante<<endl;
                    return 1; 
                   
                }

                break;

            case 2:
                cout << "Escogiste Tablet Pro" << endl;

                cout << "Ingresa tu pago:";
                cin >> Pago;

                // si es mayor a 1200 entonces le decimos que si puede hacer la compra y aplicamos el 10% de descuento

                if (Pago < 1200)
                {
                    restante = Pago - (1200 - descuento2);
                    cout << "Lo siento te falta:$" << restante << endl;
                    return 1;
                }
                else
                {
                    // calculo descuento
                    descuento2 = 1200 * 0.10;
                    // calculo cuenta total
                    restante = Pago - (1200 - descuento2);
                    cout << "compra exitosa :$ de tablet pro" << endl;
                    cout << "Saldo restante $" <<restante<<endl;
                    return 1;
                }
                break;

            case 3:
                cout << "Escogiste estacion de trabajo" << endl;

                cout << "Ingresa tu pago:";
                cin >> Pago;

                // si es mayor a 700 entonces le decimos que si puede hacer la compra y aplicamos el 10% de descuento

                if (Pago < 700)
                {
                    restante = Pago - (2000 - descuento2);
                    cout << "Lo siento te falta:$" << restante << "para comprar estacion de trabajo" << endl;
                    return 1;
                }
                else
                {
                    // calculo descuento
                    descuento1 = 2000 * 0.10;
                    // calculo cuenta total
                    restante = Pago - (2000 - descuento2);
                    cout << "compra exitosa : estancion de trabajo" << endl;
                    cout << "Saldo restante $"  <<restante<<endl;
                   
                    return 1;
                }
                break;

            default:
                cout << "Ocurrio un error";
                break;

                break;
            }

        case 3:
            // Mostramos todas las opciones
            cout << "1.Laptop Basica:$900\n 2.Tablet Estudiantil:$600\n 3.Chromebook:$700\n";
            cout << "1.Laptop Avanzada:$1500\n 2.Tablet Pro:$1200\n 6.Estacion de trabajo:$2000";

        default:
            cout << "Cerrando programa...";
            break;
        }
    }

    return 0;
}