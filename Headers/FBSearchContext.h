//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol FBAvatarProtocol;

@interface FBSearchContext : NSObject
{
    id <FBAvatarProtocol> _singleStateEntity;
    NSString *_searchEntryPoint;
    NSString *_defaultQueryString;
    unsigned int _keywordMode;
}

@property(readonly, nonatomic) unsigned int keywordMode; // @synthesize keywordMode=_keywordMode;
@property(readonly, copy, nonatomic) NSString *defaultQueryString; // @synthesize defaultQueryString=_defaultQueryString;
@property(readonly, copy, nonatomic) NSString *searchEntryPoint; // @synthesize searchEntryPoint=_searchEntryPoint;
@property(readonly, nonatomic) id <FBAvatarProtocol> singleStateEntity; // @synthesize singleStateEntity=_singleStateEntity;
- (void).cxx_destruct;
- (id)initWithSingleStateEntity:(id)arg1 defaultQueryString:(id)arg2 keywordMode:(unsigned int)arg3 searchEntryPoint:(id)arg4;
- (id)initWithDefaultQueryString:(id)arg1;
- (id)initWithSingleStateEntity:(id)arg1;

@end

