//
//  CCCoreData.h
//  Crypto Cloud Technology Nextcloud
//
//  Created by Marino Faggiana on 02/02/16.
//  Copyright (c) 2014 TWS. All rights reserved.
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

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

#import <Photos/Photos.h>
#import <MagicalRecord/MagicalRecord.h>

#import "OCSharedDto.h"
#import "CCMetadata.h"
#import "CCUtility.h"
#import "CCExifGeo.h"
#import "CCGraphics.h"
#import "OCUserProfile.h"
#import "OCActivity.h"
#import "OCExternalSites.h"

#import "TableAccount+CoreDataClass.h"
#import "TableActivity+CoreDataClass.h"
#import "TableCertificates+CoreDataClass.h"
#import "TableMetadata+CoreDataClass.h"
#import "TableDirectory+CoreDataClass.h"
#import "TableLocalFile+CoreDataClass.h"
#import "TableGPS+CoreDataClass.h"
#import "TableShare+CoreDataClass.h"
#import "TableAutomaticUpload+CoreDataClass.h"
#import "TableExternalSites+CoreDataClass.h"

@interface CCCoreData : NSObject

// ===== Account =====

+ (void)addAccount:(NSString *)account url:(NSString *)url user:(NSString *)user password:(NSString *)password;
+ (void)updateAccount:(NSString *)account withPassword:(NSString *)password;
+ (void)deleteAccount:(NSString *)account;
+ (TableAccount *)setActiveAccount:(NSString *)account;

+ (NSArray *)getAllAccount;
+ (TableAccount *)getTableAccountFromAccount:(NSString *)account;
+ (NSArray *)getAllTableAccount;
+ (TableAccount *)getActiveAccount;

+ (NSString *)getCameraUploadFolderNameActiveAccount:(NSString *)activeAccount;
+ (NSString *)getCameraUploadFolderPathActiveAccount:(NSString *)activeAccount activeUrl:(NSString *)activeUrl;
+ (NSString *)getCameraUploadFolderNamePathActiveAccount:(NSString *)activeAccount activeUrl:(NSString *)activeUrl;

+ (BOOL)getCameraUploadActiveAccount:(NSString *)activeAccount;
+ (BOOL)getCameraUploadBackgroundActiveAccount:(NSString *)activeAccount;
+ (BOOL)getCameraUploadCreateSubfolderActiveAccount:(NSString *)activeAccount;
+ (BOOL)getCameraUploadFullPhotosActiveAccount:(NSString *)activeAccount;
+ (BOOL)getCameraUploadPhotoActiveAccount:(NSString *)activeAccount;
+ (BOOL)getCameraUploadVideoActiveAccount:(NSString *)activeAccount;
+ (NSDate *)getCameraUploadDatePhotoActiveAccount:(NSString *)activeAccount;
+ (NSDate *)getCameraUploadDateVideoActiveAccount:(NSString *)activeAccount;
+ (BOOL)getCameraUploadCryptatedPhotoActiveAccount:(NSString *)activeAccount;
+ (BOOL)getCameraUploadCryptatedVideoActiveAccount:(NSString *)activeAccount;
+ (BOOL)getCameraUploadWWanPhotoActiveAccount:(NSString *)activeAccount;
+ (BOOL)getCameraUploadWWanVideoActiveAccount:(NSString *)activeAccount;
+ (NSInteger)getServerVersionMajorActiveAccount:(NSString *)activeAccount;

+ (void)setCameraUpload:(BOOL)state activeAccount:(NSString *)activeAccount;
+ (void)setCameraUploadBackground:(BOOL)state activeAccount:(NSString *)activeAccount;
+ (void)setCameraUploadCreateSubfolderActiveAccount:(BOOL)state activeAccount:(NSString *)activeAccount;
+ (void)setCameraUploadFullPhotosActiveAccount:(BOOL)state activeAccount:(NSString *)activeAccount;
+ (void)setCameraUploadPhoto:(BOOL)state activeAccount:(NSString *)activeAccount;
+ (void)setCameraUploadVideo:(BOOL)video activeAccount:(NSString *)activeAccount;
+ (void)setCameraUploadDatePhoto:(NSDate *)date;
+ (void)setCameraUploadDateVideo:(NSDate *)date;
+ (void)setCameraUploadDateAssetType:(PHAssetMediaType)assetMediaType assetDate:(NSDate *)assetDate activeAccount:(NSString *)activeAccount;
+ (void)setCameraUploadCryptatedPhoto:(BOOL)cryptated activeAccount:(NSString *)activeAccount;
+ (void)setCameraUploadCryptatedVideo:(BOOL)cryptated activeAccount:(NSString *)activeAccount;
+ (void)setCameraUploadWWanPhoto:(BOOL)wWan activeAccount:(NSString *)activeAccount;
+ (void)setCameraUploadWWanVideo:(BOOL)wWan activeAccount:(NSString *)activeAccount;
+ (void)setCameraUploadFolderName:(NSString *)fileName activeAccount:(NSString *)activeAccount;
+ (void)setCameraUploadFolderPath:(NSString *)pathName activeUrl:(NSString *)activeUrl activeAccount:(NSString *)activeAccount;
+ (void)setCameraUploadSaveAlbum:(BOOL)saveAlbum activeAccount:(NSString *)activeAccount;

+ (void)setUserProfileActiveAccount:(NSString *)activeAccount userProfile:(OCUserProfile *)userProfile;
+ (void)setServerVersionActiveAccount:(NSString *)activeAccount versionMajor:(NSInteger)versionMajor versionMinor:(NSInteger)versionMinor versionMicro:(NSInteger)versionMicro;

// ===== Certificates =====

+ (void)addCertificate:(NSString *)certificateLocation;
+ (NSMutableArray *)getAllCertificatesLocation;

// ===== Metadata =====

+ (void)addMetadata:(CCMetadata *)metadata activeAccount:(NSString *)activeAccount activeUrl:(NSString *)activeUrl context:(NSManagedObjectContext *)context;
+ (void)deleteMetadataWithPredicate:(NSPredicate *)predicate;
+ (void)moveMetadata:(NSString *)fileName directoryID:(NSString *)directoryID directoryIDTo:(NSString *)directoryIDTo activeAccount:(NSString *)activeAccount;
+ (void)updateMetadata:(CCMetadata *)metadata predicate:(NSPredicate *)predicate activeAccount:(NSString *)activeAccount activeUrl:(NSString *)activeUrl context:(NSManagedObjectContext *)context;
+ (void)setMetadataSession:(NSString *)session sessionError:(NSString *)sessionError sessionSelector:(NSString *)sessionSelector sessionSelectorPost:(NSString *)sessionSelectorPost sessionTaskIdentifier:(NSInteger)sessionTaskIdentifier sessionTaskIdentifierPlist:(NSInteger)sessionTaskIdentifierPlist predicate:(NSPredicate *)predicate context:(NSManagedObjectContext *)context;
+ (void)setMetadataFavoriteFileID:(NSString *)fileID favorite:(BOOL)favorite activeAccount:(NSString *)activeAccount context:(NSManagedObjectContext *)context;

+ (TableMetadata *)getTableMetadataWithPreficate:(NSPredicate *)predicate;
+ (NSArray *)getTableMetadataWithPredicate:(NSPredicate *)predicate context:(NSManagedObjectContext *)context;
+ (NSArray *)getTableMetadataWithPredicate:(NSPredicate *)predicate fieldOrder:(NSString *)fieldOrder ascending:(BOOL)ascending;
+ (CCMetadata *)getMetadataWithPreficate:(NSPredicate *)predicate context:(NSManagedObjectContext *)context;
+ (CCMetadata *)getMetadataAtIndex:(NSPredicate *)predicate fieldOrder:(NSString *)fieldOrder ascending:(BOOL)ascending objectAtIndex:(NSUInteger)index;
+ (CCMetadata *)getMetadataFromFileName:(NSString *)fileName directoryID:(NSString *)directoryID activeAccount:(NSString *)activeAccount context:(NSManagedObjectContext *)context;

+ (NSArray *)getTableMetadataDownloadAccount:(NSString *)activeAccount;
+ (NSArray *)getTableMetadataDownloadWWanAccount:(NSString *)activeAccount;
+ (NSArray *)getTableMetadataUploadAccount:(NSString *)activeAccount;
+ (NSArray *)getTableMetadataUploadWWanAccount:(NSString *)activeAccount;

+ (NSArray *)getRecordsTableMetadataPhotosCameraUpload:(NSString *)serverUrl activeAccount:(NSString *)activeAccount;

+ (void)removeOfflineAllFileFromServerUrl:(NSString *)serverUrl activeAccount:(NSString *)activeAccount;

// ===== Directory =====

+ (NSString *)addDirectory:(NSString *)serverUrl permissions:(NSString *)permissions activeAccount:(NSString *)activeAccount;
+ (void)updateDirectoryEtagServerUrl:(NSString *)serverUrl etag:(NSString *)etag activeAccount:(NSString *)activeAccount;
+ (void)deleteDirectoryFromPredicate:(NSPredicate *)predicate;
+ (NSArray *)deleteDirectoryAndSubDirectory:(NSString *)serverUrl activeAccount:(NSString *)activeAccount;
+ (void)renameDirectory:(NSString *)serverUrl serverUrlTo:(NSString *)serverUrlTo activeAccount:(NSString *)activeAccount;

+ (void)setDateReadDirectoryID:(NSString *)directoryID activeAccount:(NSString *)activeAccount;
+ (NSDate *)getDateReadDirectoryID:(NSString *)directoryID activeAccount:(NSString *)activeAccount;

+ (void)setDirectoryRev:(NSString *)rev serverUrl:(NSString *)serverUrl activeAccount:(NSString *)activeAccount;
+ (NSString *)getDirectoryRevFromServerUrl:(NSString *)serverUrl activeAccount:(NSString *)activeAccount;

+ (TableDirectory *)getTableDirectoryWithPreficate:(NSPredicate *)predicate;
+ (NSArray *)getDirectoryIDsFromBeginsWithServerUrl:(NSString *)serverUrl activeAccount:(NSString *)activeAccount;
+ (NSString *)getDirectoryIDFromServerUrl:(NSString *)serverUrl activeAccount:(NSString *)activeAccount;
+ (NSString *)getServerUrlFromDirectoryID:(NSString *)directoryID activeAccount:(NSString *)activeAccount;

+ (void)clearDateReadAccount:(NSString *)activeAccount serverUrl:(NSString *)serverUrl directoryID:(NSString *)directoryID;
+ (void)clearAllDateReadDirectory;

+ (BOOL)isDirectoryOutOfDate:(int)numAddDay directoryID:(NSString *)directoryID activeAccount:(NSString *)activeAccount;

+ (void)removeOfflineDirectoryID:(NSString *)directoryID activeAccount:(NSString *)activeAccount;
+ (NSArray *)getOfflineDirectoryActiveAccount:(NSString *)activeAccount;
+ (void)setOfflineDirectoryServerUrl:(NSString *)serverUrl offline:(BOOL)offline activeAccount:(NSString *)activeAccount;
+ (BOOL)isOfflineDirectoryServerUrl:(NSString *)serverUrl activeAccount:(NSString *)activeAccount;

+ (BOOL)setDirectoryLock:(NSString *)serverUrl activeAccount:(NSString *)activeAccount;
+ (BOOL)setDirectoryUnLock:(NSString *)serverUrl activeAccount:(NSString *)activeAccount;
+ (void)setAllDirectoryUnLockForAccount:(NSString *)activeAccount;
+ (BOOL)isDirectoryLock:(NSString *)serverUrl activeAccount:(NSString *)activeAccount;
+ (BOOL)isBlockZone:(NSString *)serverUrl activeAccount:(NSString *)activeAccount;

// ===== LocalFile =====

+ (void)addLocalFile:(CCMetadata *)metadata activeAccount:(NSString *)activeAccount;
+ (void)deleteLocalFileWithPredicate:(NSPredicate *)predicate;

+ (void)renameLocalFileWithFileID:(NSString *)fileID fileNameTo:(NSString *)fileNameTo fileNamePrintTo:(NSString *)fileNamePrintTo activeAccount:(NSString *)activeAccount;
+ (void)updateLocalFileModel:(CCMetadata *)metadata activeAccount:(NSString *)activeAccount;

+ (TableLocalFile *)getLocalFileWithFileID:(NSString *)fileID activeAccount:(NSString *)activeAccount;
+ (NSArray *)getTableLocalFileWithPredicate:(NSPredicate *)predicate;

// ===== Offline LocalFile =====

+ (void)setOfflineLocalFileID:(NSString *)fileID offline:(BOOL)offline activeAccount:(NSString *)activeAccount;
+ (BOOL)isOfflineLocalFileID:(NSString *)fileID activeAccount:(NSString *)activeAccount;
+ (NSArray *)getOfflineLocalFileActiveAccount:(NSString *)activeAccount directoryUser:(NSString *)directoryUser;

// ===== GeoInformation =====

+ (NSArray *)getGeoInformationLocalFromFileID:(NSString *)fileID activeAccount:(NSString *)activeAccount;
+ (void)setGeoInformationLocalFromFileID:(NSString *)fileID exifDate:(NSDate *)exifDate exifLatitude:(NSString *)exifLatitude exifLongitude:(NSString *)exifLongitude activeAccount:(NSString *)activeAccount;
+ (void)setGeoInformationLocalNull;

// ===== Automatic Upload =====

+ (BOOL)addTableAutomaticUpload:(CCMetadataNet *)metadataNet account:(NSString *)account;
+ (CCMetadataNet *)getTableAutomaticUploadForAccount:(NSString *)account selector:(NSString *)selector;
+ (NSArray *)getAllLockTableAutomaticUploadForAccount:(NSString *)account;
+ (void)unlockTableAutomaticUploadForAccount:(NSString *)account assetLocalIdentifier:(NSString *)assetLocalIdentifier;
+ (void)deleteTableAutomaticUploadForAccount:(NSString *)account assetLocalIdentifier:(NSString *)assetLocalIdentifier;
+ (NSUInteger)countTableAutomaticUploadForAccount:(NSString *)account selector:(NSString *)selector;

// ===== GPS =====

+ (void)setGeocoderLocation:(NSString *)location placemarkAdministrativeArea:(NSString *)placemarkAdministrativeArea placemarkCountry:(NSString *)placemarkCountry placemarkLocality:(NSString *)placemarkLocality placemarkPostalCode:(NSString *)placemarkPostalCode placemarkThoroughfare:(NSString *)placemarkThoroughfare latitude:(NSString *)latitude longitude:(NSString *)longitude;
+ (NSString *)getLocationFromGeoLatitude:(NSString *)latitude longitude:(NSString *)longitude;

// ===== Share =====

+ (void)setShareLink:(NSString *)share fileName:(NSString *)fileName serverUrl:(NSString *)serverUrl sharesLink:(NSMutableDictionary *)sharesLink activeAccount:(NSString *)activeAccount;
+ (void)setShareUserAndGroup:(NSString *)share fileName:(NSString *)fileName serverUrl:(NSString *)serverUrl sharesUserAndGroup:(NSMutableDictionary *)sharesUserAndGroup activeAccount:(NSString *)activeAccount;
+ (void)unShare:(NSString *)share fileName:(NSString *)fileName serverUrl:(NSString *)serverUrl sharesLink:(NSMutableDictionary *)sharesLink sharesUserAndGroup:(NSMutableDictionary *)sharesUserAndGroup activeAccount:(NSString *)activeAccount;
+ (void)updateShare:(NSDictionary *)items sharesLink:(NSMutableDictionary *)sharesLink sharesUserAndGroup:(NSMutableDictionary *)sharesUserAndGroup activeAccount:(NSString *)activeAccount activeUrl:(NSString *)activeUrl;
+ (void)populateSharesVariableFromDBActiveAccount:(NSString *)activeAccount sharesLink:(NSMutableDictionary *)sharesLink sharesUserAndGroup:(NSMutableDictionary *)sharesUserAndGroup;

// ===== Offline =====

+ (NSArray *)getHomeOfflineActiveAccount:(NSString *)activeAccount directoryUser:(NSString *)directoryUser fieldOrder:(NSString *)fieldOrder ascending:(BOOL)ascending;

// ===== Activity =====

+ (void)addActivityServer:(OCActivity *)activity account:(NSString *)account;
+ (void)addActivityClient:(NSString *)file fileID:(NSString *)fileID action:(NSString *)action selector:(NSString *)selector note:(NSString *)note type:(NSString *)type verbose:(NSInteger)verbose account:(NSString *)account activeUrl:(NSString *)activeUrl;
+ (NSArray *)getAllTableActivityWithPredicate:(NSPredicate *)predicate;

// ===== External Sites =====

+ (void)addExternalSites:(OCExternalSites *)externalSites account:(NSString *)account;
+ (void)deleteAllExternalSitesForAccount:(NSString *)account;
+ (NSArray *)getAllTableExternalSitesWithPredicate:(NSPredicate *)predicate;

// ===== File System =====

+ (BOOL)downloadFile:(CCMetadata *)metadata directoryUser:(NSString *)directoryUser activeAccount:(NSString *)activeAccount;
+ (void)downloadFilePlist:(CCMetadata *)metadata activeAccount:(NSString *)activeAccount activeUrl:(NSString *)activeUrl directoryUser:(NSString *)directoryUser;
+ (void)deleteFile:(CCMetadata *)metadata serverUrl:(NSString *)serverUrl directoryUser:(NSString *)directoryUser activeAccount:(NSString *)activeAccount;

// ===== Metadata <> Entity =====

+ (void)insertMetadataInEntity:(CCMetadata *)metadata recordMetadata:(TableMetadata *)recordMetadata activeAccount:(NSString *)activeAccount activeUrl:(NSString *)activeUrl;
+ (CCMetadata *)insertEntityInMetadata:(TableMetadata *)recordMetadata;

// ===== Utility Database =====

+ (void)moveCoreDataToGroup;
+ (void)moveAllUserToGroup;

//+ (void)verifyVersionCoreData;

+ (void)flushTableActivityAccount:(NSString *)account;
+ (void)flushTableAutomaticUploadAccount:(NSString *)account selector:(NSString *)selector;
+ (void)flushTableDirectoryAccount:(NSString *)account;
+ (void)flushTableLocalFileAccount:(NSString *)account;
+ (void)flushTableMetadataAccount:(NSString *)account;
+ (void)flushTableGPS;

+ (void)flushAllDatabase;
@end
