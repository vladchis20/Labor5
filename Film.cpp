#include "Film.h"
#include <iostream>
#include <string>
#include <graphics.h>
using namespace std;
Film::Film()
{
    Titel = "";
    Genre = "";
    Erscheinungsjahr = 0;
    Anzahl_von_Likes = 0;
    Trailer = "";
}

Film::Film(string Titel, string Genre, int Erscheinungsjahr, int Anzahl_von_Likes, string Trailer)
{
    this -> Titel = Titel;
    this -> Genre = Genre;
    this -> Erscheinungsjahr = Erscheinungsjahr;
    this -> Anzahl_von_Likes = Anzahl_von_Likes;
    this -> Trailer = Trailer;
}

Film::~Film()
{
    //dtor
}

//getteri
string Film::getTitel()
{
    return Titel;
}
string Film::getGenre()
{
    return Genre;
}
int Film::getErscheinungsjahr()
{
    return Erscheinungsjahr;
}
int Film::getAnzahl_von_Likes()
{
    return Anzahl_von_Likes;
}
string Film::getTrailer()
{
    return Trailer;
}

//getteri NEU
string Film::getNeuesGenre()
{
    return Genre;
}
int Film::getNeuesErscheinungsjahr()
{
    return Erscheinungsjahr;
}
int Film::getNeuesAnzahl_von_Likes()
{
    return Anzahl_von_Likes;
}
string Film::getNeuesTrailer()
{
    return Trailer;
}

//setteri
void Film::setTitel(string Titel)
{
    this->Titel = Titel;
}
void Film::setGenre(string Genre)
{
    this->Genre = Genre;
}
void Film::setErscheinungsjahr(int Erscheinungsjahr)
{
    this->Erscheinungsjahr = Erscheinungsjahr;
}
void Film::setAnzahl_von_Likes(int Anzahl_von_Likes)
{
    this->Anzahl_von_Likes = Anzahl_von_Likes;
}
void Film::setTrailer(string Trailer)
{
    this->Trailer = Trailer;
}

// implementare pentru operatorul de insertie in stream
ostream& operator<<(ostream& s, const Film &f)
{
    // left - specifica alinierea la stanga
    // setw - numarul de caractere pe care se va afisa elementul urmator din stream
    s<<left<<setw(20)<<f.Titel<<"|"<<setw(12)<<f.Genre<<"|"<<setw(5)<<f.Erscheinungsjahr<<"|"<<setw(5)<<f.Anzahl_von_Likes<<"|"<<setw(30)<<f.Trailer<<'\n';
    return s;
}
