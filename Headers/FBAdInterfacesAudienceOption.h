//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBAdInterfacesAudienceOption : FBValueObject <NSCopying>
{
    NSString *_code;
    NSString *_title;
}

@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithCode:(id)arg1 title:(id)arg2;

@end

