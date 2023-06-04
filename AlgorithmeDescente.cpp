//
// Created by ramya on 04/06/2023.
//

#include "AlgorithmeDescente.h"
#include "Solutions.h"
#include "MeilleureAmeliorante.h"

AlgorithmeDescente::AlgorithmeDescente() {}

std::vector<City> AlgorithmeDescente::local_search(std::vector<City> cities, NeighbourSolution *voisinage) {
    std::vector<City> solution = cities;
    int distance_solution = Solutions::compute_score(cities);
    std::vector<City> meilleure_solution = solution;
    int meilleure_distance = distance_solution;
    while (meilleure_distance > distance_solution) {
        meilleure_solution = solution;
        meilleure_distance = distance_solution;
        MeilleureAmeliorante *local_search = new MeilleureAmeliorante();
        solution = local_search->local_search(solution, voisinage);
        distance_solution = Solutions::compute_score(solution);
    }
    return meilleure_solution;
}
