#ifndef __BATTLEGROUND_H__
#define __BATTLEGROUND_H__

#include <list5>
namespace bgm{

class BattleGround{
public:
    BattleGround();
    ~BattleGround();

    static size_t GetSize() const{return m_size;} 
    size_t GetMinionNumber() const{return m_minion_list.size();}

    //向list固定位置添加
    void AddMinion(bgm::Minion::ptr minion,size_t pos);

    void DeleteMinion(bgm::Minion::ptr minion);

private:
    static size_t m_size=7;
    list<bgm::Minion::ptr> m_minion_list;
};


}
#endif