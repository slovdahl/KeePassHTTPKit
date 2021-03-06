//
//  KeePassHTTPKit.h
//  KeePassHTTPKit
//
//  Created by Michael Starke on 16/11/15.
//  Copyright © 2015 HicknHack Software GmbH. All rights reserved.
//

#import <Cocoa/Cocoa.h>

//! Project version number for KeePassHTTPKit.
FOUNDATION_EXPORT double KeePassHTTPKitVersionNumber;

//! Project version string for KeePassHTTPKit.
FOUNDATION_EXPORT const unsigned char KeePassHTTPKitVersionString[];


#import "KPHDelegate.h"
#import "KPHServer.h"
#import "KPHResponse.h"

// Embedded JSON Model
#import "JSONModel.h"
#import "JSONModelError.h"
#import "JSONValueTransformer.h"
#import "JSONModelArray.h"
#import "JSONKeyMapper.h"