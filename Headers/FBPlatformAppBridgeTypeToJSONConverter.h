//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface FBPlatformAppBridgeTypeToJSONConverter : NSObject
{
    NSMutableArray *_createdPasteboardNames;
}

+ (id)appBridgeTypeFromJSON:(id)arg1;
@property(retain, nonatomic) NSMutableArray *createdPasteboardNames; // @synthesize createdPasteboardNames=_createdPasteboardNames;
- (void).cxx_destruct;
- (id)jsonFromData:(id)arg1 tag:(id)arg2 options:(int)arg3;
- (id)convertedArrayFromArray:(id)arg1 options:(int)arg2;
- (id)convertedDictionaryFromDictionary:(id)arg1 options:(int)arg2;
- (id)convertedObjectFromObject:(id)arg1 options:(int)arg2;
- (void)deleteCreatedPasteboards;
- (id)dictionaryWithAppBridgeTypesFromJSONDictionary:(id)arg1;
- (id)jsonDictionaryFromDictionaryWithAppBridgeTypes:(id)arg1 excludeBinaries:(BOOL)arg2;
- (id)init;

@end

