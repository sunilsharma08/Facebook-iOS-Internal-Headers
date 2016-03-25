//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol FBAssetProtocol;

@interface FBMagicStoryBaseAsset : NSObject
{
    id <FBAssetProtocol> _fbAsset;
    NSString *_cachedUniqueId;
}

+ (id)assetForFbAsset:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)descriptionDictionary;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)composerMediaElementType;
- (struct CGSize)dimensions;
- (void)configureCell:(id)arg1;
- (id)cellReuseIdentifier;
- (id)location;
- (id)creationDate;
- (id)uniqueId;
- (id)fbAssets;
- (id)initWithFbAsset:(id)arg1;
- (id)init;

@end

