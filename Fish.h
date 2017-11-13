/*! 
 * \File:   Fish.h
 * \Author: James Kiernan
 * \StudentID: C00125728
 * \License: GNU General Public License
 * 
 * Created on 12 November 2017, 09:47
 */
#pragma once
#include <SFML/Graphics/Shape.hpp>
#include <iostream>
#include <SFML/Graphics/CircleShape.hpp>
/*!
 * \class: Fish
 * \brief: Fish object that lives in the WatorWorld. Determines the behavior,
 * status and movement of Fish as they traverse across the world. It inherits
 * from class sf::CircleShape
 */
class Fish: public sf::CircleShape{
private:
    /*!
     * This is the building blocks of the Fish and its physical appearance,
     * location in WatorWorld, breading time and whether the Fish is ready to
     * give birth.
     */
    const float HEIGHT = 2.f;
    const float WIDTH = 2.f;
    std::string name;
    int breedCounter;
    bool readyForBirth;
    
public:
    /*!
     * Constructor and destructor of the Fish.
     */
    /*!
     * \func: Fish
     * \param: none
     * \brief: Initializes the Fish with a location in the WatorWorld
     */
    Fish();
    
    ~Fish();
    
    /*!
     * Getters and setters of the Fish
     */
    
    /*!
     * \func: incrementBreedTime
     * \param: none
     * \brief: Increments the breed counter of the Fish
     */
    void incrementBreedTime();
    /*!
     * \func: resetBreedTime
     * \param: none
     * \brief: Sets, and used to reset the breeding time of Fish
     */
    void resetBreedTime();
    
    /*!
     * \func: getBreedTime
     * \param: none
     * \returns: breadTime(int)
     * \brief: Get the value of the breeding time of Fish
     */
    int getBreedTime();
    
    /*!
     * \func: checkIfPregnant
     * \param: none
     * \returns: pregnancy status of Fish (bool)
     * \brief: Determines whether the Fish is pregnant.
     */
    bool checkIfPregnant();
    
    void setFishName(std::string n);
    
    std::string getFishName();
};