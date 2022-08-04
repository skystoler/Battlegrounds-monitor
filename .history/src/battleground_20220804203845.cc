#include "battleground.h"
#include "minion.h"

namespace bgm{
BattleGround::BattleGround(size_t minion_number=0)
    :m_minion_number(minion_number){
        std::cout<<"battleground constructed"<<std::endl;
    }

void BattleGround::AddMinion(bgm::Minion::ptr minion){
    size_t size=m_minion_list.size();
    auto it=m_minion_list.begin();
    if(size>=7){
        std::cout<<"minion_list is full,add minion fail!"<<std::endl;
    }else if(pos>=size){
        std::cout<<"add into minion_list fail"<<std::endl;
    }else{
        m_minion_list.insert(it+pos,minion);
        minion->SetPos(size);
    }

}

void BattleGround::AddMinion(bgm::Minion::ptr minion,size_t pos){

   
    m_minion_list.insert(,minion);
}

void BattleGround::DeleteMinion(bgm::Minion::ptr minion);

}