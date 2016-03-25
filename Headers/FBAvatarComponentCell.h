//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBDetailComponentCell.h"

@class FBKVOController;
@protocol FBEntity;

@interface FBAvatarComponentCell : FBDetailComponentCell
{
    FBKVOController *_KVOController;
    id <FBEntity> _entity;
}

@property(retain, nonatomic) id <FBEntity> entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (void)setupKVOController:(id)arg1;
- (void)reload;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

