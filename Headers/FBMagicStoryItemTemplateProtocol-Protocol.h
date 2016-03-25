//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol FBMagicStoryItemTemplateProtocol <NSObject>
+ (BOOL)areItemsValidForIndexPaths:(NSArray *)arg1 photoSizes:(NSArray *)arg2;
+ (unsigned int)requiredNumberOfItems;
- (NSString *)verveTemplateName;
- (float)rowHeight;
- (NSArray *)itemAttributes;
- (void)setInterItemSpacing:(float)arg1;
- (void)setSection:(int)arg1;
- (void)setMaxWidth:(float)arg1;
- (void)setPhotoSizes:(NSArray *)arg1;
- (void)setIndexPaths:(NSArray *)arg1;
- (void)setYOffset:(float)arg1;
- (void)setXOffset:(float)arg1;
@end

