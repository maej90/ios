//
//  CCConstant.h
//  Nextcloud
//
//  Created by Marino Faggiana on 06/03/17.
//  Copyright © 2017 TWS. All rights reserved.
//
//  Author Marino Faggiana <m.faggiana@twsweb.it>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

// Brand
#define k_brand                         @"Nextcloud"
#define k_mailMe                        @"ios@nextcloud.com"
#define k_textCopyright                 @"Nextcloud %@ © 2017 T.W.S. Inc."
#define k_loginBaseUrl                  @"https://cloud.twsweb.it"
#define k_pushNotificationServer        @"https://push-notifications.nextcloud.com"

// Capabilities Group & Service Key Share
#define k_capabilitiesGroups            @"group.it.twsweb.Crypto-Cloud"
#define k_serviceShareKeyChain          @"Crypto Cloud"
#define k_metadataKeyedUnarchiver       @"it.twsweb.Crypto-Cloud.metadata"

// Session
#define k_download_session              @"it.twsweb.Crypto-Cloud.download.session"
#define k_download_session_foreground   @"it.twsweb.Crypto-Cloud.download.sessionforeground"
#define k_download_session_wwan         @"it.twsweb.Crypto-Cloud.download.sessionwwan"
#define k_upload_session                @"it.twsweb.Crypto-Cloud.upload.session"
#define k_upload_session_foreground     @"it.twsweb.Crypto-Cloud.upload.sessionforeground"
#define k_upload_session_wwan           @"it.twsweb.Crypto-Cloud.upload.sessionwwan"

// OperationQueue
#define k_queue                         @"it.twsweb.Crypto-Cloud.queue"
#define k_download_queue                @"it.twsweb.Crypto-Cloud.download.queue"
#define k_download_queuewwan            @"it.twsweb.Crypto-Cloud.download.queuewwan"
#define k_upload_queue                  @"it.twsweb.Crypto-Cloud.upload.queue"
#define k_upload_queuewwan              @"it.twsweb.Crypto-Cloud.upload.queuewwan"

/* Define option compiler */

/*
 #define OPTION_MULTIUSER_DISABLE
 #define OPTION_CRYPTO_CLOUD_SYSTEM_DISABLE
 #define OPTION_OFFLINE_DISABLE
 
 #define OPTION_NOTIFICATION_PUSH_ENABLE
 #define OPTION_AUTOMATIC_UPLOAD_ENABLE
 #define OPTION_DISABLE_INTRO
 
 #define NO_REQUEST_LOGIN_URL
 */

#define OPTION_OFFLINE_DISABLE

// -----------------------------------------------------------------------------------------------------------
// COLOR
// -----------------------------------------------------------------------------------------------------------

#define COLOR_BRAND                     [UIColor colorWithRed:0.0/255.0 green:130.0/255.0 blue:201.0/255.0 alpha:1.0]                   // BLU NC : #0082c9

#define COLOR_SELECT_BACKGROUND         [UIColor colorWithRed:0.0/255.0 green:130.0/255.0 blue:201.0/255.0 alpha:0.1]                   // BLU NC : #0082c9

#define COLOR_TRANSFER_BACKGROUND       [UIColor colorWithRed:178.0/255.0 green:244.0/255.0 blue:258.0/255.0 alpha:0.1]

#define COLOR_GROUPBY_BAR               [UIColor colorWithRed:0.0/255.0 green:130.0/255.0 blue:201.0/255.0 alpha:0.2]                   // BLU NC : #0082c9
#define COLOR_GROUPBY_BAR_NO_BLUR       [UIColor colorWithRed:0.0/255.0 green:130.0/255.0 blue:201.0/255.0 alpha:0.3]                   // BLU NC : #0082c9

#define COLOR_NAVIGATIONBAR             [UIColor colorWithRed:0.0/255.0 green:130.0/255.0 blue:201.0/255.0 alpha:1.0]                   // BLU NC : #0082c9
#define COLOR_NAVIGATIONBAR_TEXT        [UIColor whiteColor]
#define COLOR_NAVIGATIONBAR_PROGRESS    [UIColor whiteColor]
#define COLOR_TABBAR                    [UIColor colorWithRed:247.0/255.0 green:247.0/255.0 blue:247.0/255.0 alpha:1]
#define COLOR_TABBAR_TEXT               [UIColor colorWithRed:0.0/255.0 green:130.0/255.0 blue:201.0/255.0 alpha:1.0]                   // BLU NC : #0082c9

#define COLOR_BACKGROUND_MENU           [UIColor whiteColor]

#define COLOR_BACKGROUND_PAGECONTROL    [UIColor colorWithRed:247.0/255.0 green:247.0/255.0 blue:247.0/255.0 alpha:1.0]
#define COLOR_PAGECONTROL_INDICATOR     [UIColor colorWithRed:0.0/255.0 green:130.0/255.0 blue:201.0/255.0 alpha:1.0]                   // BLU NC : #0082c9

#define COLOR_CRYPTOCLOUD               [UIColor colorWithRed:241.0/255.0 green:90.0/255.0 blue:34.0/255.0 alpha:1.0]

#define COLOR_TEXT_ANTHRACITE           [UIColor colorWithRed:65.0/255.0 green:64.0/255.0 blue:66.0/255.0 alpha:1.0]                    // #414042

#define COLOR_TEXT_NO_CONNECTION        [UIColor colorWithRed:204.0/255.0 green:204.0/255.0 blue:204.0/255.0 alpha:1.0]

#define COLOR_SEPARATOR_TABLE           [UIColor colorWithRed:235.0/255.0 green:235.0/255.0 blue:235.0/255.0 alpha:1.0]                 // iOS 7

#define COLOR_BACKGROUND_MESSAGE_INFO   [UIColor colorWithRed:0.0/255.0 green:130.0/255.0 blue:201.0/255.0 alpha:1.0]                   // BLU NC : #0082c9
#define COLOR_CONTROL_CENTER            [UIColor colorWithRed:0.0/255.0 green:130.0/255.0 blue:201.0/255.0 alpha:1.0]                   // BLU NC : #0082c9
#define COLOR_REFRESH_CONTROL           [UIColor colorWithRed:0.0/255.0 green:130.0/255.0 blue:201.0/255.0 alpha:1.0]                   // BLU NC : #0082c9
#define COLOR_WINDOW_TINTCOLOR          [UIColor colorWithRed:0.0/255.0 green:130.0/255.0 blue:201.0/255.0 alpha:1.0]                   // BLU NC : #0082c9

#define COLOR_PROGRESS_BAR_QUOTA        [UIColor colorWithRed:0.0/255.0 green:130.0/255.0 blue:201.0/255.0 alpha:0.4]                   // BLU NC : #0082c9


