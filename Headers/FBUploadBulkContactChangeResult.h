//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBUploadBulkContactChangeResult : NSObject
{
    int _type;
    int _confidence;
    NSString *_localContactID;
    NSString *_remoteContactID;
}

@property(readonly, nonatomic) NSString *remoteContactID; // @synthesize remoteContactID=_remoteContactID;
@property(readonly, nonatomic) NSString *localContactID; // @synthesize localContactID=_localContactID;
@property(readonly, nonatomic) int confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (BOOL)hasMatched;
- (int)_confidenceLevelFromStr:(id)arg1;
- (int)_updateTypeFromStr:(id)arg1;
- (id)initWithJSON:(id)arg1 localContactID:(id)arg2;
- (id)init;

@end

