//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "FBMNameFormattingProtocol-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBMImageUrlCollection, FBMUserFetchStatus, FBMUserName, NSString;

@interface FBMUser : FBValueObject <FBMNameFormattingProtocol, NSCopying, NSCoding>
{
    BOOL _hasMessenger;
    BOOL _canInstallMessenger;
    BOOL _isMemorialized;
    BOOL _isPartial;
    NSString *_userId;
    unsigned int _identityType;
    FBMUserName *_name;
    FBMUserName *_phoneticName;
    NSString *_nickname;
    FBMImageUrlCollection *_imageUrls;
    unsigned int _blockedByViewerStatus;
    FBMUserFetchStatus *_fetchStatus;
    double _communicationRank;
}

@property(readonly, copy, nonatomic) FBMUserFetchStatus *fetchStatus; // @synthesize fetchStatus=_fetchStatus;
@property(readonly, nonatomic) unsigned int blockedByViewerStatus; // @synthesize blockedByViewerStatus=_blockedByViewerStatus;
@property(readonly, nonatomic) BOOL isPartial; // @synthesize isPartial=_isPartial;
@property(readonly, nonatomic) BOOL isMemorialized; // @synthesize isMemorialized=_isMemorialized;
@property(readonly, nonatomic) double communicationRank; // @synthesize communicationRank=_communicationRank;
@property(readonly, copy, nonatomic) FBMImageUrlCollection *imageUrls; // @synthesize imageUrls=_imageUrls;
@property(readonly, nonatomic) BOOL canInstallMessenger; // @synthesize canInstallMessenger=_canInstallMessenger;
@property(readonly, nonatomic) BOOL hasMessenger; // @synthesize hasMessenger=_hasMessenger;
@property(readonly, copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly, copy, nonatomic) FBMUserName *phoneticName; // @synthesize phoneticName=_phoneticName;
@property(readonly, copy, nonatomic) FBMUserName *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned int identityType; // @synthesize identityType=_identityType;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)initWithUserId:(id)arg1 identityType:(unsigned int)arg2 name:(id)arg3 phoneticName:(id)arg4 nickname:(id)arg5 hasMessenger:(BOOL)arg6 canInstallMessenger:(BOOL)arg7 imageUrls:(id)arg8 communicationRank:(double)arg9 isMemorialized:(BOOL)arg10 isPartial:(BOOL)arg11 blockedByViewerStatus:(unsigned int)arg12 fetchStatus:(id)arg13;
- (id)shortNameWithFormatter:(id)arg1;
- (id)nameWithFormatter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

