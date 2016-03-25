//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession, NSDictionary, NSString;

@interface FBCrowdsourcingContext : NSObject
{
    FBUserSession *_session;
    NSString *_placeID;
    unsigned int _endpoint;
    unsigned int _entryPoint;
    NSDictionary *_sessionData;
    long long _crowdsourcingSessionID;
    double _lastActionTime;
}

+ (long long)_randomSessionID;
@property(readonly, copy, nonatomic) NSDictionary *sessionData; // @synthesize sessionData=_sessionData;
@property(nonatomic) double lastActionTime; // @synthesize lastActionTime=_lastActionTime;
@property(readonly, nonatomic) long long crowdsourcingSessionID; // @synthesize crowdsourcingSessionID=_crowdsourcingSessionID;
@property(readonly, nonatomic) unsigned int entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) unsigned int endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
- (void).cxx_destruct;
- (void)_generateSessionData;
- (void)setupNewSession;
- (id)initWithSession:(id)arg1 placeID:(id)arg2 entryPoint:(unsigned int)arg3 endpoint:(unsigned int)arg4;

@end

