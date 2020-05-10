#include "Film.h"
#include "Repository.h"
#include "Controller.h"
#include "UserController.h"
#include "UI.h"

#include <iostream>
#include <string>
#include <vector>
#include <graphics.h>

using namespace std;

int main()
{
    //Filmele care trebuie adaugate direct din cod
    Repository *f = new Repository();
    Film f1("Joker", "drama", 2019, 206, "www.Joker.com");
    f->add_Film(f1);
    Film f2("Colectiv", "documentar", 2019, 57, "www.Colectiv.com");
    f->add_Film(f2);
    Film f3("Parasite", "comedie", 2019, 328, "www.Parasite.com");
    f->add_Film(f3);
    Film f4("El reino", "thriller", 2018, 72, "www.El-reino.com");
    f->add_Film(f4);
    Film f5("Green Book", "biografic", 2018, 32, "www.Green-Book.com");
    f->add_Film(f5);
    Film f6("Bohemian Rhapsody", "biografic", 2018, 897, "www.Bohemian-Rhapsody.com");
    f->add_Film(f6);
    Film f7("Black Panther", "actiune", 2018, 100, "www.Black-Panther.com");
    f->add_Film(f7);
    Film f8("Dunkirk", "actiune", 2017, 87, "www.Dunkirk.com");
    f->add_Film(f8);
    Film f9("Coco", "animatie", 2017, 675, "www.Coco.com");
    f->add_Film(f9);
    Film f10("Loving Vincent", "biografic", 2017, 123, "www.Loving-Vincent.com");
    f->add_Film(f10);
    cout<<f1;
    cout<<f2;
    cout<<f3;
    cout<<f4;
    cout<<f5;
    cout<<f6;
    cout<<f7;
    cout<<f8;
    cout<<f9;
    cout<<f10;

    Film filme;
    Controller *ctrl = new Controller(f);
    UserController userController(f);
    UI *ui = new UI(ctrl, &userController);
    ui->Hauptmenu(filme);

    return 0;
}
