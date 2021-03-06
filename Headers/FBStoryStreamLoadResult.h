//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBStreamLoadResult.h"

@class NSString;
@protocol FBFeedSequenceProtocol;

@interface FBStoryStreamLoadResult : FBStreamLoadResult
{
    unsigned int _edgeCount;
    unsigned int _videosCount;
    id <FBFeedSequenceProtocol> _feedSequence;
    NSString *_debugInfo;
    double _networkTime;
}

@property(copy, nonatomic) NSString *debugInfo; // @synthesize debugInfo=_debugInfo;
@property(retain, nonatomic) id <FBFeedSequenceProtocol> feedSequence; // @synthesize feedSequence=_feedSequence;
@property(nonatomic) double networkTime; // @synthesize networkTime=_networkTime;
@property(nonatomic) unsigned int videosCount; // @synthesize videosCount=_videosCount;
@property(nonatomic) unsigned int edgeCount; // @synthesize edgeCount=_edgeCount;
- (void).cxx_destruct;
- (id)description;

@end

