//
//  ImageScene.hpp
//  mygame
//
//  Created by -T.c on 2017/5/26.
//  Added by loahao on 2017/6/9
//  The main layer 

#ifndef ImageScene_hpp
#define ImageScene_hpp

#include <stdio.h>
#include "cocos2d.h"
#include "extensions/cocos-ext.h"
#include "Hero.h"
#include "ImageScene.hpp"
#include "cocostudio/CocoStudio.h"


USING_NS_CC;
USING_NS_CC_EXT;

#include "SimpleAudioEngine.h"
using namespace CocosDenshion;

using namespace cocos2d::extension;

class Hero;
class HpAndMp;
class ImageScene:public Layer{
public:
    static Scene* createScene();//��������
    virtual bool init();
	Hero *m_pHero;//Ӣ��

	void attackButtonClick(int nAttackType); //���������������
	//virtual void update(float Delta);


    CREATE_FUNC(ImageScene);
private:
	Sprite* HpAndMpBg; //Ѫ������������
	ProgressTimer* HpBar; //Ѫ��
	ProgressTimer* MpBar; //������
	bool IsRunning;    //�Ƿ���
	bool DirectionX;   //x�᷽��
	bool DirectionY;   //y�᷽��
	std::map<cocos2d::EventKeyboard::KeyCode, bool> keys;  //�洢keycode״̬
};





#endif //ImageScene_hpp
