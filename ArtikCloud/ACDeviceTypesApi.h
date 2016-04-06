#import <Foundation/Foundation.h>
#import "ACDeviceTypesEnvelope.h"
#import "ACDeviceTypeEnvelope.h"
#import "ACManifestVersionsEnvelope.h"
#import "ACManifestPropertiesEnvelope.h"
#import "ACObject.h"
#import "ACApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface ACDeviceTypesApi: NSObject

@property(nonatomic, assign)ACApiClient *apiClient;

-(instancetype) initWithApiClient:(ACApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(ACDeviceTypesApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(ACDeviceTypesApi*) sharedAPI;
///
///
/// Get Device Types
/// Retrieves Device Types
///
/// @param name Device Type name
/// @param offset Offset for pagination.
/// @param count Desired count of items in the result set
/// @param tags Elements tagged with the list of tags. (comma separated)
/// 
///
/// @return ACDeviceTypesEnvelope*
-(NSNumber*) getDeviceTypesWithName: (NSString*) name
    offset: (NSNumber*) offset
    count: (NSNumber*) count
    tags: (NSString*) tags
    completionHandler: (void (^)(ACDeviceTypesEnvelope* output, NSError* error)) handler;


///
///
/// Get Device Type
/// Retrieves a Device Type
///
/// @param deviceTypeId deviceTypeId
/// 
///
/// @return ACDeviceTypeEnvelope*
-(NSNumber*) getDeviceTypeWithDeviceTypeId: (NSString*) deviceTypeId
    completionHandler: (void (^)(ACDeviceTypeEnvelope* output, NSError* error)) handler;


///
///
/// Get Available Manifest Versions
/// Get a Device Type's available manifest versions
///
/// @param deviceTypeId deviceTypeId
/// 
///
/// @return ACManifestVersionsEnvelope*
-(NSNumber*) getAvailableManifestVersionsWithDeviceTypeId: (NSString*) deviceTypeId
    completionHandler: (void (^)(ACManifestVersionsEnvelope* output, NSError* error)) handler;


///
///
/// Get Latest Manifest Properties
/// Get a Device Type's manifest properties for the latest version.
///
/// @param deviceTypeId Device Type ID.
/// 
///
/// @return ACManifestPropertiesEnvelope*
-(NSNumber*) getLatestManifestPropertiesWithDeviceTypeId: (NSString*) deviceTypeId
    completionHandler: (void (^)(ACManifestPropertiesEnvelope* output, NSError* error)) handler;


///
///
/// Get manifest properties
/// Get a Device Type's manifest properties for a specific version.
///
/// @param deviceTypeId Device Type ID.
/// @param version Manifest Version.
/// 
///
/// @return ACManifestPropertiesEnvelope*
-(NSNumber*) getManifestPropertiesWithDeviceTypeId: (NSString*) deviceTypeId
    version: (NSString*) version
    completionHandler: (void (^)(ACManifestPropertiesEnvelope* output, NSError* error)) handler;



@end