//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBComposerForSaleConfiguration, NSArray, NSString;

@protocol FBGroupSellFeedTapHandler <NSObject>
- (void)didTapPublishStatusButtonNextToSellButton:(id)arg1 forSaleConfiguration:(FBComposerForSaleConfiguration *)arg2;
- (void)didTapSellButton:(id)arg1 forSaleConfiguration:(FBComposerForSaleConfiguration *)arg2 prefilledStatusText:(NSString *)arg3 prefilledAttachments:(NSArray *)arg4;
@end

