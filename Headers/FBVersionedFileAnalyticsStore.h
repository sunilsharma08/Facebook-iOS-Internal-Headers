//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAnalyticsStore-Protocol.h"

@class FBStoreUsageInfo, FBVersionedFileInfo, NSString;

@interface FBVersionedFileAnalyticsStore : NSObject <FBAnalyticsStore>
{
    FBVersionedFileInfo *_fileInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FBStoreUsageInfo *analyticsStoreUsageInfo;
@property(readonly, nonatomic) NSString *analyticsStoreType;
@property(readonly, nonatomic) NSString *analyticsStoreIdentifier;
- (id)initWithFileInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

