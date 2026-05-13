#include "../include/personasABB.h"

///////////////////////////////////
////// PEGAR CÓDIGO TAREA 2 //////
///////////////////////////////////

struct rep_personasAbb {

};

TPersonasABB crearTPersonasABB() {
    return NULL;
}

bool esVacioTPersonasABB(TPersonasABB personasABB) {
    return false;
}

void insertarTPersonasABB(TPersonasABB &personasABB, TPersona p) {

}

void liberarTPersonasABB(TPersonasABB &personasABB) {

}

void imprimirTPersonasABB(TPersonasABB personasABB) {
   
}

nat cantidadTPersonasABB(TPersonasABB personasABB) {
    return 0;
}

TPersona maxIdPersona(TPersonasABB personasABB) {
    return NULL;
}

void removerTPersonasABB(TPersonasABB &personasABB, nat id) {
    
}

bool estaTPersonasABB(TPersonasABB personasABB, nat id) {
    return false;
}

TPersona obtenerDeTPersonasABB(TPersonasABB personasABB, nat id) {
    return NULL;
}

nat alturaTPersonasABB(TPersonasABB personasABB) {
    return 0;
}

bool esPerfectoTPersonasABB(TPersonasABB personasABB) {
    return false;
}

TPersonasABB mayoresTPersonasABB(TPersonasABB personasABB, nat edad) {
    return NULL;
}

TPersonasLDE aTPersonasLDE(TPersonasABB personasABB) {
    return NULL;
}

///////////////////////////////////
////// FIN CÓDIGO TAREA 2 //////
///////////////////////////////////

///////////////////////////////////////////////////////////////////////////
/////////////  NUEVAS FUNCIONES  //////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////

nat amplitudTPersonasABB(TPersonasABB personasABB) {
}
    //Verificar
TPilaPersona serializarTPersonasABB(TPersonasABB personasABB) {
    TPilaPersona p = crearTPilaPersona();
    TColaPersonasABB c = crearTColaPersonasABB();
    while (!esVacioTPersonasABB(personasABB)) {
        encolarEnTColaPersonasABB(personasABB, c);
        apilarEnTPilaPersona(p, copiarTPersona(personasABB->persona));
        if (!esVacioTPersonasABB(personasABB->izq)) {
            encolarEnTColaPersonasABB(personasABB->izq, c);
            apilarEnTPilaPersona(p, copiarTPersona(personasABB->izq->persona));
        }
        if (!esVacioTPersonasABB(personasABB->der)) {
            encolarEnTColaPersonasABB(personasABB->der, c);
            apilarEnTPilaPersona(p, copiarTPersona(personasABB->der->persona));
        }
        desencolarDeTColaPersonasABB(c);

    }
    liberarTColaPersonasABB(c); 
    return pila;
}

TPersonasABB deserializarTPersonasABB(TPilaPersona &pilaPersonas) {

    TPersonasABB t = crearTpersonasABB();
    while (cantidadEnTPilaPersona(p) > 0) {
        insertarTPersonasABB(t, copiarTPersona(cimaDeTPilaPersona(p))); // CREO que este codigo se puede optimizar sin usar el insertar...
        desapilarDeTPilaPersona(p);
    }

    liberarTPilaPersona(p);
    return t;
}

///////////////////////////////////////////////////////////////////////////
/////////////  FIN NUEVAS FUNCIONES  //////////////////////////////////////
///////////////////////////////////////////////////////////////////////////

