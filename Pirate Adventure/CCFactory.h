//
//  CCFactory.h
//  Pirate Adventure
//
//  Created by Russ on 3/22/14.
//  Copyright (c) 2014 RussellBergman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCCharacter.h"
#import "CCBoss.h"

@interface CCFactory : NSObject

-(NSArray *)tiles;
-(CCCharacter *)character;
-(CCBoss *)boss;

@end
