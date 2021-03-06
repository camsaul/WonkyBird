//
//  GameLayer.m
//  WonkyBird
//
//  Created by Cam Saul on 2/23/14.
//  Copyright (c) 2014 LuckyBird, Inc. All rights reserved.
//

#import "GameLayer.h"

@implementation GameLayer

- (instancetype)initWithTextureAtlasNamed:(NSString *)textureAtlasName {
	if (self = [super init]) {
		_spriteBatchNode = [CCSpriteBatchNode batchNodeWithFile:[textureAtlasName stringByAppendingString:@".png"]];
		[[CCSpriteFrameCache sharedSpriteFrameCache] addSpriteFramesWithFile:[textureAtlasName stringByAppendingString:@".plist"] texture:self.spriteBatchNode.texture];
		[self addChild:self.spriteBatchNode];
	}
	return self;
}

@end
