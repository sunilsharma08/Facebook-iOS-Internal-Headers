//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMemBookmark, NSArray, NSString;

@interface FBAppBookmarkSection : NSObject
{
    BOOL _expanded;
    BOOL _expandable;
    NSArray *_bookmarks;
    NSString *_header;
    NSString *_sectionID;
    unsigned int _collapsedVisibleCount;
    FBMemBookmark *_navigationTargetBookmark;
}

@property(retain, nonatomic) FBMemBookmark *navigationTargetBookmark; // @synthesize navigationTargetBookmark=_navigationTargetBookmark;
@property(nonatomic) unsigned int collapsedVisibleCount; // @synthesize collapsedVisibleCount=_collapsedVisibleCount;
@property(nonatomic) BOOL expandable; // @synthesize expandable=_expandable;
@property(readonly, copy, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(readonly, copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(copy, nonatomic) NSArray *bookmarks; // @synthesize bookmarks=_bookmarks;
- (void).cxx_destruct;
- (unsigned int)indexForBookmarkWithID:(id)arg1;
- (id)bookmarkAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int currentVisibleCount;
@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) unsigned int aggregatedBadgeCount;
- (id)initWithHeader:(id)arg1 sectionID:(id)arg2 collapsedVisibleCount:(unsigned int)arg3 expandable:(BOOL)arg4;

@end

