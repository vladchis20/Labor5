#include "UserController.h"

#include <iostream>

UserController::UserController(Repository* r): m_repo{r}
{
    //ctor
    m_movieIndex = 0;
}

UserController::~UserController()
{
    //dtor
    m_watchList.clear();
    m_movieIndex = 0;
}

// functie care ia din repository toate filmele de un anumit gen. In interior populeaza membrul de clasa m_selectedMovies
void UserController::getMoviesByGenre(std::string genre)
{
    m_movieIndex = 0; // resetam indexul pentru ca o sa-i afisam utilizatorului filmele de la 0
    m_selectedMovies = m_repo->getMoviesByGenre(genre); // functie noua in repository care returneaza toate filmele cu un anumit genre
    std::cout<<"selected movies: "<<m_selectedMovies.size();

}

// functie care returneaza urmatorul film din lista de movie genre ceruta de utilizator prin functia displayMoviesByGenre
Film& UserController::getNextMovie()
{
    m_movieIndex++; // incrementam indexul
    if(m_movieIndex >= m_selectedMovies.size()) // ne asiguram ca nu depasim size-ul vectorului. daca ajungem la final, incepem de la 0
        m_movieIndex = 0;

    return m_selectedMovies[m_movieIndex]; // returnam filmul de la indexul respectiv
}

bool UserController::addMovieToWatchlist()
{
    m_watchList.push_back(m_selectedMovies[m_movieIndex]);
    return true;
}

 bool UserController::removeMovieFromWatchlist(std::string filmID, bool like)
 {
    return true;
 }

void UserController::displayWatchlist()
{
    // afiseaza tot watchlistul
    cout<<ends<<"Watchlist is:"<<endl<<endl;
    cout<<left<<setw(20)<<"Title"<<"|"<<setw(12)<<"Genre"<<"|"<<setw(5)<<"Year"<<"|"<<setw(5)<<"Likes"<<"|"<<setw(30)<<"Trailer"<<'\n';

    for(size_t i = 0; i < m_watchList.size(); i++)
    {
        std::cout<<m_watchList[i];
    }
    cout<<endl;
}
