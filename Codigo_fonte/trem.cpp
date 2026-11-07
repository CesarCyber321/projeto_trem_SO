#include "trem.h"
#include <QtCore>
#include <QMutexLocker>

//Construtor
Trem::Trem(int ID, int x, int y){
    this->ID = ID;
    this->x = x;
    this->y = y;
    velocidade = 100;
}

void Trem::setVelocidade(int velocidade)
{
    QMutexLocker locker(&mutex);

    if (velocidade < 0)
        velocidade = 0;

    if (velocidade > 200)
        velocidade = 200;

    this->velocidade = velocidade;
}

//Função a ser executada após executar trem->START
void Trem::run()
{
    const int percurso[6][5][2] = {
        { {104, 9},   {104, 109}, {404, 109}, {404, 9},   {254, 9}   }, // a
        { {104, 209}, {254, 209}, {254, 109}, {104, 109}, {104, 159} }, // b
        { {404, 109}, {254, 109}, {254, 209}, {404, 209}, {404, 159} }, // c
        { {29, 309},  {179, 309}, {179, 209}, {29, 209},  {29, 259}  }, // d
        { {329, 309}, {329, 209}, {179, 209}, {179, 309}, {254, 309} }, // e
        { {479, 209}, {329, 209}, {329, 309}, {479, 309}, {479, 259} }  // f
    };

    const int indiceTrem = ID - 1;
    if (indiceTrem < 0 || indiceTrem >= 6)
        return;

    const int passo = 25;
    int ponto = 0;

    emit updateGUI(ID, x, y);

    while (true) {

        int velocidadeAtual;

        {
        QMutexLocker locker(&mutex);
        velocidadeAtual = velocidade;
        }

    // Velocidade zero significa trem parado
    if (velocidadeAtual == 0) {
        msleep(10);
        continue;
    }

        const int alvoX = percurso[indiceTrem][ponto][0];
        const int alvoY = percurso[indiceTrem][ponto][1];

        if (x < alvoX)
            x += passo;
        else if (x > alvoX)
            x -= passo;
        else if (y < alvoY)
            y += passo;
        else if (y > alvoY)
            y -= passo;

        emit updateGUI(ID, x, y);

        if (x == alvoX && y == alvoY)
            ponto = (ponto + 1) % 5;

        msleep(201 - velocidadeAtual);
    }
}