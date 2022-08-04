#include "minion.h"

namespace bgm{
Minion::Minion(uint32_t attack,uint32_t health,MinionRace::Race race,size_t pos)
    :m_attack(attack),m_health(health),m_race(race),m_pos(pos){
        
}

Minion::~Minion(){

}

}