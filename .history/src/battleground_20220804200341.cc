#include "battleground.h"
#include "minion.h"

namespace bgm{
BattleGround::BattleGround(size_t minion_number=0)
    :m_minion_number(minion_number){
        std::cout<<"battleground constructed"<<std::endl;
    }

void BattleGround::AddMinion(){
    
}

void BattleGround::DeleteMinion(bgm::Minion::ptr minion);

}