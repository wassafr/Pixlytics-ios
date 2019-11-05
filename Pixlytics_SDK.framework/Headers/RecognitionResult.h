//
//  RecognitionResult.h
//  testOpenCV
//
//  Created by Bertrand VILLAIN on 27/03/2019.
//  Copyright © 2019 Wassa. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 *  This class is the result found from a capture, it gives the associated item detected and
 *  the corresponding image from the image list contained in this item.
 * 
 */
@interface RecognitionResult : NSObject
///The item id corresponding to a ModelItem
@property (nonatomic, strong) NSNumber* itemId;
///The specific image detected in the list of image contained in the ModelItem
@property (nonatomic, strong) NSNumber* imageId;

- (instancetype)initWithItem:(int)item_ andImage:(int)image_;

@end

NS_ASSUME_NONNULL_END
