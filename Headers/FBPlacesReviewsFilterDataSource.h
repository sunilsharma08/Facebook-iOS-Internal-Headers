//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMemPage, FBUserSession, NSArray, NSMutableArray, NSString;
@protocol FBPlacesReviewsFilterDataSourceDelegate;

@interface FBPlacesReviewsFilterDataSource : NSObject
{
    NSArray *_sections;
    NSMutableArray *_tailCursors;
    NSString *_pageFBID;
    FBUserSession *_session;
    id _observation;
    NSString *_personProfilePictureUrlString;
    BOOL _hasReviewsToDisplay;
    BOOL _hasViewerReview;
    unsigned int _filterType;
    FBMemPage *_page;
    id <FBPlacesReviewsFilterDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <FBPlacesReviewsFilterDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBMemPage *page; // @synthesize page=_page;
@property(readonly, nonatomic) BOOL hasViewerReview; // @synthesize hasViewerReview=_hasViewerReview;
@property(readonly, nonatomic) BOOL hasReviewsToDisplay; // @synthesize hasReviewsToDisplay=_hasReviewsToDisplay;
@property(nonatomic) unsigned int filterType; // @synthesize filterType=_filterType;
- (void).cxx_destruct;
- (void)downloadAdditionalDataForSimpleInlineRatingViewWithSuccessBlock:(CDUnknownBlockType)arg1;
- (BOOL)_isFriendReviewsSection:(id)arg1;
- (unsigned int)_tailCursorIndexFromIndexPath:(id)arg1;
- (id)_starRatingFromIndexPath:(id)arg1;
- (void)_consistentFieldDidChange:(id)arg1;
- (void)_setupCLCObserverForPage:(id)arg1;
- (void)_handleDownloadResponse:(id)arg1 error:(id)arg2 fromQuery:(id)arg3 withIndexPath:(id)arg4 withSuccessBlock:(CDUnknownBlockType)arg5 withFailureBlock:(CDUnknownBlockType)arg6;
- (id)_graphQLQueryWithNSIndexPath:(id)arg1;
- (void)_loadMoreReviewsWithIndexPath:(id)arg1 fromRecommendationsConnection:(id)arg2;
- (id)_createSectionFromPageRecommendationConnection:(id)arg1 withIndexPath:(id)arg2;
- (id)_getStarRating;
- (id)_getSpotlight;
- (void)_initReviews;
- (BOOL)isAdminOfPage;
- (id)getPersonProfilePictureUrlString;
- (id)getTitleHeaderForSection:(int)arg1;
- (id)getStarRatingFromSection:(int)arg1;
- (void)updateViewerReview;
- (void)deleteViewerReview;
- (BOOL)isSectionEmpty:(int)arg1;
- (int)numberOfSectionsInTableView;
- (int)numberOfRowsInSection:(int)arg1;
- (id)dataForIndexPath:(id)arg1;
- (void)downloadReviewsForIndexPath:(id)arg1 withSuccessBlock:(CDUnknownBlockType)arg2 withFailureBlock:(CDUnknownBlockType)arg3;
- (id)initWithTargetID:(id)arg1 session:(id)arg2;

@end

