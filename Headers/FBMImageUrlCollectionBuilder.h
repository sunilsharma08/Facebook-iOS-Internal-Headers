//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface FBMImageUrlCollectionBuilder : NSObject
{
    NSMutableDictionary *_imageUrlsBySize;
}

+ (id)aImageUrlCollectionWithExistingImageUrlCollection:(id)arg1;
+ (id)aImageUrlCollection;
- (void).cxx_destruct;
- (id)withImageUrl:(id)arg1 forSize:(id)arg2;
- (id)build;
- (id)init;

@end

