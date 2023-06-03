#include <iostream>
#include "Solutions.h"
#include "NeighbourEchange.h"
#include "NeighbourSolution.h"
#include "NeighbourReinsertion.h"
#include "NeighbourTwoOpt.h"

int main() {

    Instance::writefile("solution_test_10", Solutions::random_solutions(10));
    Instance::writefile("solution_test_200", Solutions::random_solutions(200));

    std::vector<City> cities =  Instance::readfile("france_10.tsp");
    std::vector<City> Glouton10 = Solutions::solGloutonnes(cities);
    Instance::writesolinfile("Glouton10", Glouton10);

    //SolEchange :
    NeighbourEchange echangeSol = NeighbourEchange();
    NeighbourSolution* echange = &echangeSol;
    std::vector<City> sol1 = echange->upgrade(Glouton10,9 );

    //SolReinsertion :
    NeighbourReinsertion reinsertionSol = NeighbourReinsertion();
    NeighbourSolution* reinsertion = &reinsertionSol;
    std::vector<City> sol2 = reinsertion->upgrade(Glouton10, 9);

    //SolTwoOpt :
    NeighbourTwoOpt twooptSol = NeighbourTwoOpt();
    NeighbourTwoOpt *twoopt = &twooptSol;
    std::vector<City> sol = twoopt->upgrade(Glouton10, 9);



    for (int i = 0; i < Glouton10.size(); i++) {
        std::cout << Glouton10[i].getId() << " ";
    }


    for (int i = 0; i < sol.size(); i++) {
        std::cout << sol[i].getId() << " ";
    }

    //4.3 nmbr de Neighbors :
    std:: cout << "Number of neighbors: " << (9 * (9 - 1)) / 2;

    //5.3 nmbr de neighbors :
    std::cout << "Number of neighbors: " << (9 - 1) * (9 - 2);

    return 0;
}
