//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBRichStoryBlock.h"

@class NSArray;

@interface FBRichStoryEntityGroupBlock : FBRichStoryBlock
{
    NSArray *_entityBlocks;
    int _type;
}

@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSArray *entityBlocks; // @synthesize entityBlocks=_entityBlocks;
- (void).cxx_destruct;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1 entityBlocks:(id)arg2 blockID:(id)arg3 analyticsID:(id)arg4 annotations:(id)arg5;

@end

