//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBActivityIconCategory, NSError, NSIndexSet;

@protocol FBPresenceComposerIconCategoryModelControllerListener <NSObject>
- (void)iconCategoryModelControllerDidFailToLoadPage:(unsigned int)arg1 error:(NSError *)arg2 forCategory:(FBActivityIconCategory *)arg3;
- (void)iconCategoryModelControllerDidLoadPage:(unsigned int)arg1 indexes:(NSIndexSet *)arg2 forCategory:(FBActivityIconCategory *)arg3;
- (void)iconCategoryModelControllerDidStartLoadingPage:(unsigned int)arg1 forCategory:(FBActivityIconCategory *)arg2;
@end

