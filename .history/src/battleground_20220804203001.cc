#include "battleground.h"
#include "minion.h"

namespace bgm{
BattleGround::BattleGround(size_t minion_number=0)
    :m_minion_number(minion_number){
        std::cout<<"battleground constructed"<<std::endl;
    }

void BattleGround::AddMinion(bgm::Minion::ptr minion){
    size_t size=m_minion_list.size();
    if(m_minion_list.size()>=7){
        std::cout<<"minion_list is full,add minion fail!"<<std::endl;
    }else{
        m_minion_list.push_back(minion);
        minion->SetPos()
    }
}

void BattleGround::AddMinion(bgm::Minion::ptr minion,size_t pos){
    size_t pos=minion->GetPos();
    auto it=m_minion_list.begin();
    m_minion_list.insert(,minion);
}

void BattleGround::DeleteMinion(bgm::Minion::ptr minion);

}