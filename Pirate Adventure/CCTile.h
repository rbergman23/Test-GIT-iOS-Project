//
//  CCTile.h
//  Pirate Adventure
//
//  Created by Russ on 3/22/14.
//  Copyright (c) 2014 RussellBergman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCWeapon.h"
#import "CCArmor.h"
@interface CCTile : NSObject

@property (strong, nonatomic) NSString *story;
@property (strong, nonatomic) UIImage *backgroundImage;
@property (strong, nonatomic) NSString *actionButtonName;
@property (strong, nonatomic) CCWeapon *weapon;
@property (strong, nonatomic) CCArmor *armor;
@property (nonatomic) int healthEffect;



@end
