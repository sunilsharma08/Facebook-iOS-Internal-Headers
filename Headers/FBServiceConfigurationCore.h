//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBServiceConfigurationCoring-Protocol.h"

@class FBScenePath, NSString;
@protocol FBCallPath;

@interface FBServiceConfigurationCore : NSObject <FBServiceConfigurationCoring>
{
    FBScenePath *_scenePath;
    NSString *_logNamespace;
    NSString *_logName;
    id <FBCallPath> _callPath;
}

@property(retain, nonatomic) id <FBCallPath> callPath; // @synthesize callPath=_callPath;
@property(copy, nonatomic) NSString *logName; // @synthesize logName=_logName;
@property(copy, nonatomic) NSString *logNamespace; // @synthesize logNamespace=_logNamespace;
@property(retain, nonatomic) FBScenePath *scenePath; // @synthesize scenePath=_scenePath;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

