//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBMStickerStoragePathManager;
@protocol OS_dispatch_queue;

@interface FBStickerUpdateStore : NSObject
{
    FBMStickerStoragePathManager *_storagePathManager;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)_filePath;
- (void)getLastUpdateTime:(CDUnknownBlockType)arg1;
- (void)setLastUpdateTime:(id)arg1;
- (id)initWithStoragePathManager:(id)arg1;

@end

