//
//  DIOSFacebookOauth.h
//
// ***** BEGIN LICENSE BLOCK *****
// Version: MPL 1.1/GPL 2.0
//
// The contents of this file are subject to the Mozilla Public License Version
// 1.1 (the "License"); you may not use this file except in compliance with
// the License. You may obtain a copy of the License at
// http://www.mozilla.org/MPL/
//
// Software distributed under the License is distributed on an "AS IS" basis,
// WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
// for the specific language governing rights and limitations under the
// License.
//
// The Original Code is Paulo Carvalho, released April 15, 2013.
//
// The Initial Developer of the Original Code is
// Paulo Carvalho
// http://paulocarvalho.pt
// Portions created by the Initial Developer are Copyright (C) 2013
// the Initial Developer. All Rights Reserved.
//
// Based on Kyle Browning's drupal-ios-sdk implementation.
//
// Contributor(s):
//
// Alternatively, the contents of this file may be used under the terms of
// the GNU General Public License Version 2 or later (the "GPL"), in which
// case the provisions of the GPL are applicable instead of those above. If
// you wish to allow use of your version of this file only under the terms of
// the GPL and not to allow others to use your version of this file under the
// MPL, indicate your decision by deleting the provisions above and replacing
// them with the notice and other provisions required by the GPL. If you do
// not delete the provisions above, a recipient may use your version of this
// file under either the MPL or the GPL.
//
// ***** END LICENSE BLOCK *****

#import "AFHTTPRequestOperation.h"
#define kDiosBaseFacebookOauth @"fboauth"

@interface DIOSFacebookOauth : NSObject

+ (void)authenticateWithAccessToken:(NSDictionary *)params
                            success:(void (^)(AFHTTPRequestOperation *operation, id responseObject)) success
                            failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error)) failure;

@end
