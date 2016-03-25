//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBLanguageNameFormat : FBValueObject <NSCopying>
{
    BOOL _shortNameIsFullName;
    NSString *_nameSeparator;
}

@property(readonly, copy, nonatomic) NSString *nameSeparator; // @synthesize nameSeparator=_nameSeparator;
@property(readonly, nonatomic) BOOL shortNameIsFullName; // @synthesize shortNameIsFullName=_shortNameIsFullName;
- (void).cxx_destruct;
- (id)initWithShortNameIsFullName:(BOOL)arg1 nameSeparator:(id)arg2;

@end

