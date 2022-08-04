#include "battleground.h"
#include "minion.h"

namespace bgm{
BattleGround::BattleGround(size_t minion_number=0)
    :m_minion_number(minion_number){
        std::cout<<"battleground constructed"<<std::endl;
    }

void BattleGround::AddMinion(bgm::Minion::ptr minion,size_t pos){
    size_t size=m_minion_list.size();
    auto it=m_minion_list.begin();
    if(size>=7){
        std::cout<<"minion_list is full,add minion fail!"<<std::endl;
    }else if(pos>size){
        std::cout<<"add into minion_list fail"<<std::endl;
    }else{
        it+=pos;
        m_minion_list.insert(it,minion);
        minion->SetPos(size);

        //list插入位置后面的所有随从依次后移，之前的判断已经保证随从不会溢出格子
        ++it;
        for(;it!=m_minion_list.end();++it){
            if(it->GetPos()==pos){

            }
        }
    }
 

}

void BattleGround::DeleteMinion(bgm::Minion::ptr minion);

}