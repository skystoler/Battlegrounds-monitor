#ifndef __BATTLEGROUND_H__
#define __BATTLEGROUND_H__

namespace bgm{

class BattleGround{
public:
    BattleGround();
    ~BattleGround();
private:
    size_t m_size=7;
    size_t m_minion_number;
};


}
#endif