//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBContactImporterAddressBookPersonProperty-Protocol.h"

@class NSDate, NSString;

@interface FBContactImporterAddressBookPersonDate : NSObject <FBContactImporterAddressBookPersonProperty>
{
    NSString *_label;
    NSDate *_date;
    NSString *_year;
    NSString *_month;
    NSString *_day;
}

+ (id)propertyFromABLabelRef:(struct __CFString *)arg1 ABValueRef:(void *)arg2;
@property(readonly, copy, nonatomic) NSString *day; // @synthesize day=_day;
@property(readonly, copy, nonatomic) NSString *month; // @synthesize month=_month;
@property(readonly, copy, nonatomic) NSString *year; // @synthesize year=_year;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)_initWithLabel:(id)arg1 date:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)asStrings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

