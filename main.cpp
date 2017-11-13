/*! 
 * \File:   main.cpp
 * \Author: James Kiernan
 * \StudentID: C00125728
 * \License: GNU General Public License
 *  
 * Created on 12 November 2017, 09:40
 */
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#include "Fish.h"

/*!
 *  \func: main
 *  \params: none
 *  \brief: This runs the WatorWorld simulation of Fish and Sharks
 */
int main() 
{
    /*!
     * This is the settings of WatorWorld dimensions
     */
    sf::Vector2f windowSize(800, 600);
    sf::RenderWindow world(sf::VideoMode(windowSize.x, windowSize.y), "WatorWorld");
    
    /*!
     * Testing Shape to run WatorWorld
     * TODO: A collection (Vector) of Fish to the screen
     */
    Fish fish;
    fish.setPosition(400.f, 300.f);
    
    /*!
     * These settings determine the framerate of the WatorWorld draw update.
     */
    sf::Clock clock;
    sf::Time fTime;
    world.setFramerateLimit(5);
    
    /*!
     * These settings control the random movement choices
     * of the Fish and Shark.
     */
    int rand();
    int moveChoice;
    
    /*!
     * This loop displays and redraws the world after events have occurred.
     */
    while(world.isOpen()){
        sf::Event event;
        
        while (world.pollEvent(event))
        {
          if(event.type == sf::Event::Closed){
              world.close();
          }
        }
        
        fTime = clock.getElapsedTime();
        
        // Testing incrementation of breed counter of Fish
        // TODO: Game loop here
        moveChoice = rand() % 4;
        switch(moveChoice){
            case 0:
                // Move down
                fish.setPosition(fish.getPosition().x,
                        fish.getPosition().y + 10.f);
                fish.incrementBreedTime();
                break;
            case 1:
                // Move up
                fish.setPosition(fish.getPosition().x,
                        fish.getPosition().y - 10.f);
                fish.incrementBreedTime();
                break;
            case 2:
                // Move left
                fish.setPosition(fish.getPosition().x - 10.f,
                        fish.getPosition().y);
                fish.incrementBreedTime();
                break;
            case 3:
                // Move right
                fish.setPosition(fish.getPosition().x + 10.f,
                        fish.getPosition().y);
                fish.incrementBreedTime();
                break;
        }
        
        //  Testing Fish pregnancy status
        if(fish.checkIfPregnant()){
            fish.resetBreedTime();
        }
        
        /*!
         * This is how WatorWorld is drawn to the screen
         * TODO: Draw the Vector of the Fish on-screen
         */
        world.clear();
        world.draw(fish);
        world.display();
        clock.restart().asSeconds();
    }
    return 0;
}

