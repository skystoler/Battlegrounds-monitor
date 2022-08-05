#include "minion.h"

namespace bgm{
Minion::Minion(uint32_t attack,uint32_t health,MinionRace::Race race,bool shield=false,
        bool windfury=false,bool poisonous=false,bool taunt=false)
    :m_attack(attack),m_health(health),m_race(race),m_sheild(shield)
    ,m_windfury(windfury),m_poisonous(poisonous),m_taunt(taunt){

}

Minion::~Minion(){
    
}

void Minion::fight(ptr minion){
    if(m_sheild && minion->getShield(0))
}

}