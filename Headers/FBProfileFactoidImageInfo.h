//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL;

@interface FBProfileFactoidImageInfo : NSObject
{
    NSURL *_imageUrl;
    unsigned int _placeholderImageType;
}

@property(nonatomic) unsigned int placeholderImageType; // @synthesize placeholderImageType=_placeholderImageType;
@property(retain, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (id)initImageUrl:(id)arg1 placeholderImageType:(unsigned int)arg2;

@end

