#include <iostream>
#include "include/Object.hpp"

using namespace std;

int main(){
    //Cubo (cube.obj)
    cout << "Cargando..." << endl;
    Object golf_ball("models/GolfBall.obj");
    /* 
    Object armadillo("models/armadillo.obj");
    Object bun_zipper("models/bun_zipper.obj");
    Object bunny_1500("models/bunny-1500.obj");
    Object bunny_5000("models/bunny-5000.obj");
    Object cow_1500("models/cow-1500.obj");
    Object cow_5000("models/cow-5000.obj");
    Object cube("models/cube.obj");
    Object cup("models/cup.obj");
    Object dragon("models/dragon.obj");
    Object dragon_1500("models/dragon-1500.obj");
    Object dragon_5000("models/dragon-5000.obj");
    Object happy("models/happy.obj");
    Object lampp600("models/lampp600.obj");
    Object leho("models/leho.obj");
    Object snakie("models/snakie.obj");
    Object teapot("models/teapot.obj");
    Object venues("models/venues.obj");
    */
    cout << "Listo.";
    cout << "\n";
    golf_ball.print();
}