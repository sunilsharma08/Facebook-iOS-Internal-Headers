//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFacepileExpandableViewDataSource-Protocol.h"
#import "FBFacepileExpandableViewDelegate-Protocol.h"

@class FBFacepileExpandableView, FBFacepileExpandableViewMetrics, FBMemPagedDownloadController, FBUserSession, NSArray, NSString;
@protocol FBFacepileExpandableViewControllerDelegate;

@interface FBFacepileExpandableViewController : NSObject <FBFacepileExpandableViewDelegate, FBFacepileExpandableViewDataSource>
{
    FBUserSession *_session;
    FBFacepileExpandableView *_expandableView;
    FBMemPagedDownloadController *_downloadController;
    id <FBFacepileExpandableViewControllerDelegate> _delegate;
    NSArray *_avatarEdges;
    FBFacepileExpandableViewMetrics *_metrics;
}

@property(readonly, nonatomic) FBFacepileExpandableViewMetrics *metrics; // @synthesize metrics=_metrics;
@property(copy, nonatomic) NSArray *avatarEdges; // @synthesize avatarEdges=_avatarEdges;
@property(nonatomic) __weak id <FBFacepileExpandableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) FBUserSession *session;
- (id)downloadController;
- (void)_loadCompletionHelperWithEdges:(id)arg1 error:(id)arg2;
- (void)loadMore;
- (unsigned int)_incrementalLoadCountForVisibleFaces;
- (void)handleIntent:(id)arg1;
- (void)facepileExpandableView:(id)arg1 shouldScrollToTopWithCompletion:(CDUnknownBlockType)arg2;
- (void)facepileExpandableView:(id)arg1 effectiveHeightDidChange:(float)arg2;
- (id)facepileExpandableView:(id)arg1 faceModelAtIndex:(unsigned int)arg2;
- (unsigned int)facepileExpandableViewNumberOfFaces:(id)arg1;
@property(readonly, nonatomic) FBFacepileExpandableView *expandableView;
- (id)initWithSession:(id)arg1 metrics:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

