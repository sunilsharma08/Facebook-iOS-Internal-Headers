//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBMediaContainerProtocol-Protocol.h"

@class FBMemPhoto, NSDate, NSNumber, NSString;
@protocol FBAvatarProtocol;

@interface FBMediaSetTokenMediaContainer : NSObject <FBMediaContainerProtocol>
{
    id <FBAvatarProtocol> _owner;
    NSString *_mediaSetToken;
}

@property(copy, nonatomic) NSString *mediaSetToken; // @synthesize mediaSetToken=_mediaSetToken;
- (void).cxx_destruct;
- (id)titleForContainerForSession:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *size;
@property(readonly, copy, nonatomic) NSString *mediaContainerName;
@property(readonly, nonatomic) FBMemPhoto *mediaContainerCoverPhoto;
@property(readonly, copy, nonatomic) NSString *graphQLID;
- (id)coverPhotoForContainerForSession:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *canViewerEdit;
- (id)initWithMediaSetToken:(id)arg1 owner:(id)arg2;
- (id)initWithMediaSetKey:(id)arg1 fbid:(id)arg2 owner:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSDate *modifiedTime; // @dynamic modifiedTime;
@property(readonly) Class superclass;

@end

