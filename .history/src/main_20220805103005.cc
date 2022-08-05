#include "minion.h"
#include "battleground.h"
#include <random>

int main(int argc,char** argv){
    //初始化双方战场
    bgm::BattleGround b1();
    bgm::BattleGround b2();

    //输入双方随从数
    size_t b1_number;
    size_t b2_number;
    std::cout<<"b1 minion number:"<<std::endl;
    std::cin>>b1_number;
    std::cout<<"b2 minion number:"<<std::endl;
    std::cin>>b2_number;

    //依次初始化随从,
    for(size_t i=0;i<b1_number;++i){
        std::cout<<"初始化第"<<i+1<<"个随从：";
        bgm::Minion::ptr(new bgm::Minion(1,1,bgm::Race::dragon));
        //添加随从并set pos
        b1.addMinion(ptr,i);
    }
    //战斗阶段

    //决定先手
    std::mt19937(time(0));
    random()%50
    
    return 0;
}