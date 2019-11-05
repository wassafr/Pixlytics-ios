//
//  RecognitionSession.h
//  Pixlytics-SDK
//
//  Created by Bertrand VILLAIN on 28/03/2019.
//  Copyright © 2019 Wassa. All rights reserved.
//

#ifndef RECOGNITIONSTATUS_h
#define RECOGNITIONSTATUS_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "RecognitionResult.h"
#import "LicenseKeyStatus.h"

NS_ASSUME_NONNULL_BEGIN

/**
*   This class allows you to start a session offline to make recognitions.
*   You need to instantiate this class and load the model before you make any recognition
*/
@interface RecognitionSession : NSObject

@property (nonatomic, strong) NSString* sessionName;

- (instancetype)initWith:(NSString *)licenseKey;

/**
 * This method is asynchronous.
 *
 *  - Parameter path: The full path of the model use to perform image recognition
 *  - Parameter completion: Used to return result or error
 *
 *  Instead of return on finish or throw an exception in case of error.
 */
- (void)loadModel:(NSString * _Nullable)path completion:(void(^)(NSError *_Nullable))callback;

/**
 * This method is synchronous.
 *
 *  - Parameter path: The full path of the model use to perform image recognition
 *  - Parameter completion: Used to return result or error
 *
 *  Instead of return on finish or throw an exception in case of error.
 */
- (RecognitionResult* _Nullable)recognizeImage:(UIImage *)image;

/**
 * This method is the asynchronous equivalent of [recognizeImage].
 *
 *  - Parameter image:    The picture on which you want to make a recognition
 *  - Parameter callback: Used to return result, nil if nothing recognized.
 *                        Then you have to map the result from id with your list of ModelItems
 */
- (void)recognizeImage:(UIImage *)image success:(void(^)(RecognitionResult * _Nullable))callback failure:(void(^)(NSError *_Nullable))callbackError;

 /**
 *  Returns the current status of your License Key.
 *  If your license is not valid you can update it with [updateLicense]
 */
- (LicenseKeyStatus)getLicenseStatus;

/**
 *  Changes the current stored license key
 */
- (void)updateLicense:(NSString*) licenseKey;
@end



NS_ASSUME_NONNULL_END

#endif
