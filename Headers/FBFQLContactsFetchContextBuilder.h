//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface FBFQLContactsFetchContextBuilder : NSObject
{
    NSDate *_fetchedUpToDate;
    unsigned int _numberOfContactsFetched;
    unsigned int _startFetchAtOffset;
}

+ (id)aContactsFetchContextForFQL;
- (id)withStartFetchAtOffset:(unsigned int)arg1;
- (id)withNumberOfContactsToFetch:(unsigned int)arg1;
- (id)withFetchedUpToDate:(id)arg1;
- (void)dealloc;
- (id)build;

@end

