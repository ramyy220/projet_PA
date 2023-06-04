#include <iostream>
#include "Solutions.h"
#include "NeighbourEchange.h"
#include "NeighbourSolution.h"
#include "NeighbourReinsertion.h"
#include "NeighbourTwoOpt.h"
#include "RechercheLocale.h"
#include "MeilleureAmeliorante.h"
#include "AlgorithmeDescente.h"
#include "PremiereAmeliorante.h"
#include "PremiereAmelioranteAleatoire.h"

int main() {

    Instance::writefile("solution_test_10", Solutions::random_solutions(10));
    Instance::writefile("solution_test_200", Solutions::random_solutions(200));

    std::vector<City> cities =  Instance::readfile("france_10.tsp");
    std::vector<City> Glouton10 = Solutions::solGloutonnes(cities);
    Instance::writesolinfile("Glouton10", Glouton10);
    int index = 9;

    //SolEchange :
    NeighbourEchange echangeSol = NeighbourEchange();
    NeighbourSolution* echange = &echangeSol;
    std::vector<City> sol1 = echange->upgrade(Glouton10,index );

    //SolReinsertion :
    NeighbourReinsertion reinsertionSol = NeighbourReinsertion();
    NeighbourSolution* reinsertion = &reinsertionSol;
    std::vector<City> sol2 = reinsertion->upgrade(Glouton10, index);

    //SolTwoOpt :
    NeighbourTwoOpt twooptSol = NeighbourTwoOpt();
    NeighbourTwoOpt *twoopt = &twooptSol;
    std::vector<City> sol = twoopt->upgrade(Glouton10, index);



    for (int i = 0; i < Glouton10.size(); i++) {
        std::cout << Glouton10[i].getId() << " ";
    }


    for (int i = 0; i < sol.size(); i++) {
        std::cout << sol[i].getId() << " ";
    }

    //4.3 nmbr de Neighbors :
    int n = index;
    std:: cout << "Number of neighbors: " << (n * (n - 1)) / 2;

    //5.3 nmbr de neighbors :
    std::cout << "Number of neighbors: " << (n - 1) * (n - 2);

    // Recherche Locale Meilleure Ameliorante
     //RechercheLocale *local_search = new MeilleureAmeliorante();
     //NeighbourSolution *upgrade = reinterpret_cast<NeighbourSolution *>(new NeighbourReinsertion());
     //std::vector<City> solution_cities = local_search->local_search(cities, upgrade);

     //Recherche Locale Algorithme Descente *
   // RechercheLocale *local_search = new AlgorithmeDescente();
    //NeighbourSolution *upgrade = reinterpret_cast<NeighbourSolution *>(new NeighbourTwoOpt());
     //std::vector<City> solution_cities = local_search->local_search(cities, upgrade);

     //Recherche variante Premiere Ameliorante
   // RechercheLocale *local_search = new PremiereAmeliorante();
    //NeighbourSolution *upgrade = reinterpret_cast<NeighbourSolution *>(new NeighbourReinsertion());
    //std::vector<City> solution_cities = local_search->local_search(cities, upgrade);

    //Recherche variante Premiere Ameliorante Aleatoire
    //RechercheLocale *local_search = new PremiereAmelioranteAleatoire();
    //NeighbourSolution *upgrade = reinterpret_cast<NeighbourSolution *>(new NeighbourTwoOpt());
    //std::vector<City> solution_cities = local_search->local_search(cities, upgrade);

     


    return 0;
}
