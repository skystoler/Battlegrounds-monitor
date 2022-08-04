#include "battleground.h"
#include "minion.h"

namespace bgm{
BattleGround::BattleGround(size_t minion_number=0);
    ~BattleGround();

    static size_t GetSize() const{return m_size;} 
    size_t GetMinionNumber() const{return m_minion_number;}

    void AddMinion();

    void DeleteMinion(bgm::Minion::ptr minion);

}