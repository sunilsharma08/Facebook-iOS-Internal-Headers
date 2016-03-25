//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray;

@interface FBTypedNSArrayOfFBActivityIcon : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>
{
    NSArray *_backingArray;
}

+ (BOOL)supportsSecureCoding;
+ (id)arrayWithContentsOfURL:(id)arg1;
+ (id)arrayWithContentsOfFile:(id)arg1;
+ (id)arrayWithArray:(id)arg1;
+ (id)arrayWithObjects:(id)arg1;
+ (id)arrayWithObject:(id)arg1;
+ (id)array;
- (void).cxx_destruct;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)indexOfObject:(id)arg1 inSortedRange:(struct _NSRange)arg2 options:(unsigned int)arg3 usingComparator:(CDUnknownBlockType)arg4;
- (id)sortedArrayWithOptions:(unsigned int)arg1 usingComparator:(CDUnknownBlockType)arg2;
- (id)sortedArrayUsingComparator:(CDUnknownBlockType)arg1;
- (id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)indexesOfObjectsWithOptions:(unsigned int)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)indexesOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (unsigned int)indexOfObjectAtIndexes:(id)arg1 options:(unsigned int)arg2 passingTest:(CDUnknownBlockType)arg3;
- (unsigned int)indexOfObjectWithOptions:(unsigned int)arg1 passingTest:(CDUnknownBlockType)arg2;
- (unsigned int)indexOfObjectPassingTest:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectAtIndexedSubscript:(unsigned int)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeObjectsPerformSelector:(SEL)arg1;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (id)sortedArrayUsingSelector:(SEL)arg1;
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 hint:(id)arg3;
- (id)sortedArrayUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (id)sortedArrayHint;
- (id)reverseObjectEnumerator;
- (id)objectEnumerator;
- (id)lastObject;
- (id)firstObject;
- (BOOL)isEqualToArray:(id)arg1;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (unsigned int)indexOfObject:(id)arg1;
- (id)firstObjectCommonWithArray:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (id)descriptionWithLocale:(id)arg1;
- (id)description;
- (BOOL)containsObject:(id)arg1;
- (id)componentsJoinedByString:(id)arg1;
- (id)arrayByAddingObjectsFromArray:(id)arg1;
- (id)arrayByAddingObject:(id)arg1;
- (id)toNSArray;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithArray:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithArray:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (id)init;
- (id)initWithBackingArray:(id)arg1;

@end

