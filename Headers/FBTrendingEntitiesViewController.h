//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "FBPullToRefreshViewDelegate-Protocol.h"
#import "FBScrolling-Protocol.h"
#import "FBSegmentedTitleViewDelegate-Protocol.h"
#import "FBTrendingEntitiesRequestParserDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBPullToRefreshView, FBTransientViewStateManager, FBTrendingEntitiesRequestParser, FBUserSession, NSArray, NSString, UIActivityIndicatorView;
@protocol FBQueriedTopicFieldsProtocol;

@interface FBTrendingEntitiesViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, FBTrendingEntitiesRequestParserDelegate, FBPullToRefreshViewDelegate, FBScrolling, FBSegmentedTitleViewDelegate>
{
    FBTransientViewStateManager *_viewStateManager;
    FBPullToRefreshView *_pullToRefreshView;
    BOOL _withProfileImages;
    UIActivityIndicatorView *_initialLoadingIndicatorView;
    NSString *_trendingTopicsQueryID;
    id <FBQueriedTopicFieldsProtocol> _topicToBeHighlighted;
    FBUserSession *_session;
    FBTrendingEntitiesRequestParser *_requestParser;
    NSArray *_trendingEntities;
}

@property(copy, nonatomic) NSArray *trendingEntities; // @synthesize trendingEntities=_trendingEntities;
@property(retain, nonatomic) FBTrendingEntitiesRequestParser *requestParser; // @synthesize requestParser=_requestParser;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (BOOL)isScrolledToTop;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct UIEdgeInsets)contentInset;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)pullToRefreshViewDidTriggerRefresh:(id)arg1;
- (id)analyticsModule;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)getTopicIDFromTrendingItem:(id)arg1;
- (void)trendingEntitiesRequestParser:(id)arg1 didFinishEntitiesRequestWithEntities:(id)arg2 trendingTopicsQueryID:(id)arg3;
- (void)trendingEntitiesRequestParser:(id)arg1 didFailWithError:(id)arg2;
- (void)trendingEntitiesRequestDidFailWithNoConnectionAvailable:(id)arg1;
- (void)trendingEntitiesRequestParserDidStartEntitiesRequest:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)fb_showAuxiliaryViewController;
- (BOOL)fb_enableChatBarButton;
- (BOOL)fb_showBackArrowButton;
- (BOOL)fb_showNavigationJewels;
- (void)dealloc;
- (id)initWithSession:(id)arg1 withProfileImages:(BOOL)arg2 topicToBeHighlighted:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

