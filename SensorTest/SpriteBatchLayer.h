/********************************************************************
 * File   : SpriteBatchLayer.h
 * Project: Multiple
 *
 ********************************************************************
 * Created on 10/20/13 By Nonlinear Ideas Inc.
 * Copyright (c) 2013 Nonlinear Ideas Inc. All rights reserved.
 ********************************************************************
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any
 * damages arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any
 * purpose, including commercial applications, and to alter it and
 * redistribute it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must
 *    not claim that you wrote the original software. If you use this
 *    software in a product, an acknowledgment in the product
 *    documentation would be appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and
 *    must not be misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source
 *    distribution.
 */

#ifndef __SpriteBatchLayer__
#define __SpriteBatchLayer__

#include "CommonProject.h"
#include "CommonSTL.h"

class SpriteBatchLayer : public CCLayer
{
private:
   CCSpriteBatchNode* _batchNode;   // Weak Ref
   SpriteBatchLayer();
protected:
   bool init(const char* spriteImageFile, const char* spriteDataFile);
   
public:
   static SpriteBatchLayer* create(const char* spriteImageFile, const char* spriteDataFile);
   void AddSprite(CCSprite* sprite);
   void RemoveSprite(uint32 tag);
};

#endif /* defined(__SpriteBatchLayer__) */
