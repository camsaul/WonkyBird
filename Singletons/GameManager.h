//
//  GameManager.h
//  WonkyBird
//
//  Created by Cam Saul on 2/25/14.
//  Copyright (c) 2014 LuckyBird, Inc. All rights reserved.
//

#import <ExpaPlatform/Components/XSingleton.h>
#import "Constants.h"

typedef enum : NSInteger {
	GameRound1,
	GameRound2,
	countGameRound
} GameRound;


@interface GameManager : XSingleton

@property (nonatomic) GameState gameState;

@property (nonatomic) GameRound gameRound;

@property (nonatomic) NSInteger currentRoundScore;

- (NSInteger)scoreForGameRound:(GameRound)gameRound;
- (void)setScore:(NSInteger)score forGameRound:(GameRound)gameRound;

@property (nonatomic, readonly) NSInteger totalScore;

@property (nonatomic, readonly) BOOL reverse;

@property (nonatomic, readonly) NSUInteger bestTotalScore;

@property (nonatomic, readonly) NSUInteger lifetimeTotalPoints;
- (NSUInteger)lifetimePointsForRound:(GameRound)gameRound;

@property (nonatomic, readonly) float gameSpeed;


#pragma mark  - Sharing

- (void)shareToTwitter:(void(^)(BOOL success))completion;
- (void)shareToFB:(void(^)(BOOL success))completion;

@end
