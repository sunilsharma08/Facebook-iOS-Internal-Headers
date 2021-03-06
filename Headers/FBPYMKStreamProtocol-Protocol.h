//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol FBPYMKStreamListener;

@protocol FBPYMKStreamProtocol <NSObject>
@property(readonly, copy, nonatomic) NSArray *suggestions;
@property(readonly, nonatomic) BOOL hasMoreSuggestions;
- (void)removeListener:(id <FBPYMKStreamListener>)arg1;
- (void)addListener:(id <FBPYMKStreamListener>)arg1;
- (BOOL)loadMoreSuggestions;
- (void)reload;
- (void)reset;
@end

