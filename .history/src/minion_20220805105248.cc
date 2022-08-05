#include "minion.h"

namespace bgm{
Minion::Minion(uint32_t attack,uint32_t health,MinionRace::Race race)
    :m_attack(attack),m_health(health),m_race(race){
}

Minion::~Minion(){
    
}

void Minion::fight(){

}

}