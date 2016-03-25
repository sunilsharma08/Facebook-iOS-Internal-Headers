//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBBookmarkDataSourceListener-Protocol.h"

@class FBBookmarkModelControllerListenerAnnouncer, FBBookmarkSectionizer, FBMemBookmarkStore, FBUserSession, NSArray, NSString;

@interface FBBookmarkModelController : NSObject <FBBookmarkDataSourceListener>
{
    FBBookmarkModelControllerListenerAnnouncer *_announcer;
    FBUserSession *_session;
    FBMemBookmarkStore *_dataSource;
    FBBookmarkSectionizer *_sectionizer;
    NSArray *_sections;
}

@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
- (void)bookmarkDataSource:(id)arg1 didUpdateBookmarks:(id)arg2 withBookmarkIndices:(id)arg3 userSession:(id)arg4;
- (id)indexPathForSectionID:(id)arg1;
- (id)indexPathForBookmark:(id)arg1;
- (id)bookmarkAtIndex:(unsigned int)arg1 inSectionAtIndex:(unsigned int)arg2;
- (id)sectionAtIndex:(unsigned int)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)clearBadgeCountForBookmark:(id)arg1;
- (unsigned int)sectionIndexForSectionID:(id)arg1;
- (id)sectionForSectionID:(id)arg1;
- (void)setExpanded:(BOOL)arg1 forSectionAtIndex:(unsigned int)arg2;
@property(nonatomic) BOOL enabled;
- (id)init;
- (id)initWithSession:(id)arg1 dataSource:(id)arg2 excludedBookmarkIDs:(id)arg3 excludedBookmarkSectionIDs:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

