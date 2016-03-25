//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBAssetMetadata, NSDate, NSString;

@interface FBMediaShareItem : FBValueObject <NSCopying, NSCoding>
{
    NSString *_assetID;
    NSString *_dataSourceID;
    unsigned int _indexHint;
    FBAssetMetadata *_metadata;
    unsigned int _mediaShareItemType;
    unsigned int _quality;
    NSDate *_creationDate;
}

@property(readonly, copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) unsigned int quality; // @synthesize quality=_quality;
@property(readonly, nonatomic) unsigned int mediaShareItemType; // @synthesize mediaShareItemType=_mediaShareItemType;
@property(readonly, copy, nonatomic) FBAssetMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) unsigned int indexHint; // @synthesize indexHint=_indexHint;
@property(readonly, copy, nonatomic) NSString *dataSourceID; // @synthesize dataSourceID=_dataSourceID;
@property(readonly, copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
- (void).cxx_destruct;
- (id)initWithAssetID:(id)arg1 dataSourceID:(id)arg2 indexHint:(unsigned int)arg3 metadata:(id)arg4 mediaShareItemType:(unsigned int)arg5 quality:(unsigned int)arg6 creationDate:(id)arg7;

@end

