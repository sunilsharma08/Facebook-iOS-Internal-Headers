//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (FBEntityCards)
- (id)_entityCardsURLByAppendingDataSourceTypeToURL:(id)arg1 dataSourceType:(id)arg2;
- (id)_titleFromAvatarSequenceDataSource:(id)arg1;
- (id)_sourceFromAvatarSequenceDataSource:(id)arg1;
- (BOOL)_canOpenEntityCardsViewController:(id)arg1 fromParentController:(id)arg2;
- (void)_presentEntityCardsViewController:(id)arg1;
- (id)_createViewControllerFromURL:(id)arg1 title:(id)arg2 whenClosedBlock:(CDUnknownBlockType)arg3 session:(id)arg4;
- (void)postDismissEntityCardsNotificationWithReason:(id)arg1;
- (BOOL)presentEntityCardsForAvatarSequence:(id)arg1 selectedAvatarIndex:(unsigned int)arg2 session:(id)arg3;
- (BOOL)presentEntityCardsWithSource:(id)arg1 sourceId:(id)arg2 entitiesOrIDs:(id)arg3 displayIndex:(unsigned int)arg4 title:(id)arg5 whenClosedBlock:(CDUnknownBlockType)arg6 session:(id)arg7;
@end

