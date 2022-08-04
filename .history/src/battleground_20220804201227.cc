#include "battleground.h"
#include "minion.h"

namespace bgm{
BattleGround::BattleGround(size_t minion_number=0)
    :m_minion_number(minion_number){
        std::cout<<"battleground constructed"<<std::endl;
    }

void BattleGround::AddMinion(bgm::Minion::ptr minion,size_t pos){
    
}

void BattleGround::DeleteMinion(bgm::Minion::ptr minion);

}