#include "minion.h"
#include "battleground.h"

int main(int argc,char** argv){
    //初始化双方战场
    bgm::BattleGround::BattleGround b1();
    bgm::BattleGround::BattleGround b2();

    //输入双方随从数
    size_t b1_number;
    size_t b2_number;
    std::cout<<"b1 minion number:"<<std::endl;
    std::cin>>b1_number;
    std::cout<<"b2 minion number:"<<std::endl;
    std::cin>>b2_number;

    //依次初始化随从
    for(size_t i=0;i<b1_number;++i){
        std::cout<<"初始化第"<<i<<"个随从：";
        Minion::ptr(new)
        b1.addMinion();
    }

    //依次添加随从并set pos

    //战斗阶段

    
    return 0;
}