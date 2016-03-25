//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBRichStoryEntityMetadataProtocol-Protocol.h"

@class NSArray, NSDate, NSString;

@interface FBRichStoryEntityMetadata : NSObject <FBRichStoryEntityMetadataProtocol>
{
    NSArray *_contributors;
    NSDate *_creationDate;
}

+ (id)metadataWithContributors:(id)arg1 creationDate:(id)arg2;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSArray *contributors; // @synthesize contributors=_contributors;
- (void).cxx_destruct;
- (id)initWithContributors:(id)arg1 creationDate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

