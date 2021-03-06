#import <Foundation/Foundation.h>
#import "ACRuleEnvelope.h"
#import "ACRuleCreationInfo.h"
#import "ACRuleUpdateInfo.h"
#import "ACApi.h"

/**
* ARTIK Cloud API
* No descripton provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: 2.0.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/


@interface ACRulesApi: NSObject <ACApi>

extern NSString* kACRulesApiErrorDomain;
extern NSInteger kACRulesApiMissingParamErrorCode;

+(instancetype) sharedAPI;

/// Create Rule
/// Create a new Rule
///
/// @param ruleInfo Rule object that needs to be added
/// @param userId User ID
/// 
///  code:0 message:"success"
///
/// @return ACRuleEnvelope*
-(NSNumber*) createRuleWithRuleInfo: (ACRuleCreationInfo*) ruleInfo
    userId: (NSString*) userId
    completionHandler: (void (^)(ACRuleEnvelope* output, NSError* error)) handler;


/// Delete Rule
/// Delete a Rule
///
/// @param ruleId Rule ID.
/// 
///  code:0 message:"success"
///
/// @return ACRuleEnvelope*
-(NSNumber*) deleteRuleWithRuleId: (NSString*) ruleId
    completionHandler: (void (^)(ACRuleEnvelope* output, NSError* error)) handler;


/// Get Rule
/// Get a rule using the Rule ID
///
/// @param ruleId Rule ID.
/// 
///  code:0 message:"success"
///
/// @return ACRuleEnvelope*
-(NSNumber*) getRuleWithRuleId: (NSString*) ruleId
    completionHandler: (void (^)(ACRuleEnvelope* output, NSError* error)) handler;


/// Update Rule
/// Update an existing Rule
///
/// @param ruleId Rule ID.
/// @param ruleInfo Rule object that needs to be updated
/// 
///  code:0 message:"success"
///
/// @return ACRuleEnvelope*
-(NSNumber*) updateRuleWithRuleId: (NSString*) ruleId
    ruleInfo: (ACRuleUpdateInfo*) ruleInfo
    completionHandler: (void (^)(ACRuleEnvelope* output, NSError* error)) handler;



@end
