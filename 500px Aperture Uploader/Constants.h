//
//  Constants.h
//  500px Aperture Uploader
//
//  Created by Daniel Kennett on 10/03/2012.
//  For license information, see LICENSE.markdown
//

#import <Foundation/Foundation.h>

#define DKLocalizedStringForClass(key) \
[[NSBundle bundleForClass:[self class]] localizedStringForKey:(key) value:@"" table:@"Localizable"]

static void * const k500pxUpdateStoreSizeWarningKVOContext = @"BigPicturesAreAwesome";

// 500px Values

static NSString * const k500pxURLMetadataKey = @"500px URL";
static NSString * const k500pxPhotoURLFormatter = @"http://500px.com/photo/%@";
static NSString * const k500pxProfileURLFormatter = @"http://500px.com/%@";
static NSUInteger const k500pxMinimumSizeForStore = 3600;

// Growl

static NSString * const kGrowlNotificationNameUploadComplete = @"upload";

// Updates

static NSString * const kAutoCheckForUpdatesUserDefaultsKey = @"CheckForUpdates";
static NSString * const kLastAutoCheckDateUserDefaultsKey = @"LastUpdateCheck";
static NSTimeInterval const kAutoCheckMinimumInterval = 60 * 60; // Only auto-check for updates once per hour.

static NSString * const kDKBasicUpdateCheckerNewestBundleVersionKey = @"BundleVersion";
static NSString * const kDKBasicUpdateCheckerNewestVersionStringKey = @"VersionString";
static NSString * const kDKBasicUpdateCheckerMoreInfoURLKey = @"MoreInfoURL";
static NSString * const kDKBasicUpdateCheckerUpdateFileURLInfoPlistKey = @"DKBUCUpdateFileUrl";