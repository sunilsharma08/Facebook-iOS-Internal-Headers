//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBFeedCurationFlowStepComponentState : NSObject
{
    unsigned int _state;
    unsigned int _stepCountForLoadingUndo;
}

+ (id)loadingUndoForStepCount:(unsigned int)arg1;
+ (id)loadingInitialSteps;
+ (id)normal;
@property(readonly, nonatomic) unsigned int stepCountForLoadingUndo; // @synthesize stepCountForLoadingUndo=_stepCountForLoadingUndo;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
- (id)initWithState:(unsigned int)arg1 stepCountForLoadingUndo:(unsigned int)arg2;

@end

