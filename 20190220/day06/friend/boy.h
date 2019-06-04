#ifndef BOY_H
#define BOY_H

class Girl;

class Boy
{
public:
    Boy();
    void getGirlName(Girl &g);
    void getGirlWechat(Girl &g);
private:
    int m_iGirlNum;
};

#endif // BOY_H
