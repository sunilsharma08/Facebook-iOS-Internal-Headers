//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBWebImageSpecifier-Protocol.h"

@class NSString, NSURL, UIImage;

@interface FBWebImageMemorySpecifier : NSObject <FBWebImageSpecifier>
{
    id _logicalIdentifier;
    UIImage *_image;
    unsigned int _imageFlag;
    NSURL *_url;
}

+ (id)type;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) unsigned int imageFlag; // @synthesize imageFlag=_imageFlag;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) id logicalIdentifier; // @synthesize logicalIdentifier=_logicalIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithImage:(id)arg1 imageFlag:(unsigned int)arg2 url:(id)arg3 logicalIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

