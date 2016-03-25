//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBEntityCardsAnalytics, NSArray;
@protocol FBEntityCardsConfigurationEventListener;

@protocol FBEntityCardViewControllerProtocol <NSObject>
- (void)setIsSelected:(BOOL)arg1;
- (struct CGRect)activityIndicatorViewFrameForCardHeight:(float)arg1;
- (void)updateEntity:(id)arg1 reloadData:(BOOL)arg2 isInitialEntity:(BOOL)arg3 isParentViewAnimating:(BOOL)arg4;
- (void)prefetchImagesForEntities:(NSArray *)arg1;
- (void)setAnalytics:(FBEntityCardsAnalytics *)arg1 cardConfigListener:(id <FBEntityCardsConfigurationEventListener>)arg2;
- (void)prepareForReuse;
@end

