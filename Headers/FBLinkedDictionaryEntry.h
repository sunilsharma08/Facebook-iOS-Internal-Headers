//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBLinkedDictionaryEntry : NSObject
{
    FBLinkedDictionaryEntry *_next;
    FBLinkedDictionaryEntry *_previous;
    id _data;
    id _key;
}

@property(readonly, nonatomic) id key; // @synthesize key=_key;
@property(readonly, nonatomic) id data; // @synthesize data=_data;
@property(nonatomic) __weak FBLinkedDictionaryEntry *previous; // @synthesize previous=_previous;
@property(nonatomic) __weak FBLinkedDictionaryEntry *next; // @synthesize next=_next;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 key:(id)arg2;

@end

