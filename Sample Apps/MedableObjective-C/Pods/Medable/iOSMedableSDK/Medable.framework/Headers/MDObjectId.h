//
//  MDObjectId.h
//  iOSMedableSDK
//

//  Copyright (c) 2014 Medable. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Unique identifier of any Medable Object.
 */
@interface MDObjectId : NSObject

/**
 * Obtain a new unique identifier instance from it's string representation.
 *
 * @param objectIdString Unique Identifier string.
 * @return The Object Unique Identifier object identified by this string.
 */
+ (MDObjectId*)objectIdWithString:(NSString*)objectIdString NOTNULL(1);

/**
 * Get the unique identifier string.
 *
 * @return The string that represents this unique identifier.
 */
- (NSString*)stringRepresentation;

@end