//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAbstractGroupFeedViewController.h"

@interface FBGroupPinnedFeedViewController : FBAbstractGroupFeedViewController
{
}

+ (id)groupPinnedFeedViewControllerWithSession:(id)arg1 groupFBID:(id)arg2;
- (void)_handlerDeleteStoryDidPerformNotification:(id)arg1;
- (void)pinRequestCompleted;
- (id)streamForPTR;
- (int)feedTypeToInvalidateOnPinning;
- (Class)feedEdgeClassToRestore;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithSession:(id)arg1 groupFBID:(id)arg2;
- (id)newHeaderContentView;
- (BOOL)hasVisibleContent;
- (void)dealloc;
- (id)newGroupStreamWithAnalyticsUUID:(id)arg1;

@end

