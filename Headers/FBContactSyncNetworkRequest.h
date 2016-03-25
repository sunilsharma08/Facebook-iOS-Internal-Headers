//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class FBContactSyncRecord, FBCurrentCountryManager, NSString;

@interface FBContactSyncNetworkRequest : FBNetworkerRequest
{
    FBContactSyncRecord *_insertedRecord;
    FBContactSyncRecord *_removedRecord;
    NSString *_importID;
    int _flow;
    BOOL _isFullUpload;
    FBCurrentCountryManager *_countryManager;
    NSString *_JSONString;
}

- (void).cxx_destruct;
- (id)_paramsForRecordItem:(id)arg1 withModifier:(unsigned int)arg2;
- (id)_contactsJSONString;
- (id)networkRequest;
- (id)initWithCallbackPerformer:(id)arg1 importID:(id)arg2 flow:(int)arg3 insertedRecord:(id)arg4 removedRecord:(id)arg5 isFullUpload:(BOOL)arg6;

@end

