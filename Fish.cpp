/*! 
 * \File:   Fish.cpp
 * \Author: James Kiernan
 * \StudentID: C00125728
 * \License: GNU General Public License
 * 
 * Created on 13 November 2017, 09:37
 */
#include "Fish.h"

/*!
 * \class: Fish
 * \brief: Fish object that lives in the WatorWorld. Determines the behavior,
 * status and movement of Fish as they traverse across the world. It inherits
 * from class sf::CircleShape
 */

Fish::Fish(){
    /*!
     * Fish is initialized.
     */
    setFishName("Steve");
    std::cout << getFishName() + " is born" << std::endl;
    sf::CircleShape::setRadius(this->HEIGHT + this->WIDTH);
    sf::CircleShape::setFillColor(sf::Color(192, 192, 192));
    sf::CircleShape::setOutlineThickness(2);
    sf::CircleShape::setOutlineColor(sf::Color::Cyan);
    sf::CircleShape::setPointCount(3);
    resetBreedTime();
}

Fish::~Fish(){
    // Does nothing
}

/*!
* Getters and setters of the Fish
*/
/*!
* \func: incrementBreedTime
* \param: none
* \brief: Increments the breed counter of the Fish
*/
void Fish::incrementBreedTime() {
    this->breedCounter++;
}

/*!
* \func: resetBreadTime
* \param: none
* \brief: Sets, and used to reset the breading time of Fish
*/
void Fish::resetBreedTime(){
    this->breedCounter = 0;
    this->readyForBirth = false;
}

/*!
* \func: getBreedTime
* \param: none
* \returns: breadTime(int)
* \brief: Get the value of the breeding time of Fish
*/
int Fish::getBreedTime(){
    return this->breedCounter;
}

/*!
* \func: checkIfPregnant
* \param: none
* \returns: pregnancy status of Fish (bool)
* \brief: Checks whether the Fish is pregnant, and returns the result of the check.
*/
bool Fish::checkIfPregnant(){
    if(this->breedCounter == 10){
        std::cout << getFishName() + " is ready to breed" << std::endl;
        this->readyForBirth = true;
    }
    return this->readyForBirth;
}

void Fish::setFishName(std::string n){
    this->name = n;
}

std::string Fish::getFishName(){
    return this->name;
}