//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemDigitalGoodFeedUnitItem, NSIndexPath;

@protocol FBNativeAppFeedSecondaryActionsDelegate <NSObject>
- (void)didSelectLearnMoreForDigitalGood:(FBMemDigitalGoodFeedUnitItem *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)didSelectAdFeedbackForDigitalGood:(FBMemDigitalGoodFeedUnitItem *)arg1 atIndexPath:(NSIndexPath *)arg2 markedUseful:(BOOL)arg3;
- (void)didSelectGetAdInfoForDigitalGood:(FBMemDigitalGoodFeedUnitItem *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)didSelectHideAllDigitalGood:(FBMemDigitalGoodFeedUnitItem *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (void)didSelectHideDigitalGood:(FBMemDigitalGoodFeedUnitItem *)arg1 atIndexPath:(NSIndexPath *)arg2;
@end

