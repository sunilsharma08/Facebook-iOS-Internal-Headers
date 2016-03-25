//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBPresenceIconPagingDataSourceListener-Protocol.h"

@class FBActivityIconCategory, FBPresenceIconPagingDataSource, FBScenePath, FBUserSession, NSMutableArray, NSString;
@protocol FBPresenceComposerIconCategoryModelControllerListener;

@interface FBPresenceComposerIconCategoryModelController : NSObject <FBPresenceIconPagingDataSourceListener>
{
    FBActivityIconCategory *_category;
    FBUserSession *_session;
    FBScenePath *_scenePath;
    id <FBPresenceComposerIconCategoryModelControllerListener> _listener;
    float _scale;
    NSMutableArray *_iconsWithImages;
    unsigned int _numberOfLoadedPages;
    unsigned int _pageNeedingLoad;
    FBPresenceIconPagingDataSource *_iconDataSource;
    NSString *_cursor;
    unsigned int _numberOfIconsPerPage;
}

@property(nonatomic) unsigned int numberOfIconsPerPage; // @synthesize numberOfIconsPerPage=_numberOfIconsPerPage;
- (void).cxx_destruct;
- (void)didFailToFetchIconsForCategory:(id)arg1 afterCursor:(id)arg2 error:(id)arg3;
- (void)didFetchIconsAndImages:(id)arg1 forCategory:(id)arg2 afterCursor:(id)arg3 endCursor:(id)arg4;
- (void)loadPageIfNeeded;
- (BOOL)isLoading;
- (void)setNeedsLoadForIconAtIndex:(unsigned int)arg1;
- (id)iconAndImageAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfIconsInPage:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int numberOfPages;
@property(readonly, nonatomic) unsigned int numberOfIcons;
- (id)initWithCategory:(id)arg1 session:(id)arg2 scenePath:(id)arg3 listener:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

