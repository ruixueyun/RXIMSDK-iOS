//
//  JXIMError.h
//  JXIMSdk
//
//  Created by weiyongjian on 2021/12/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JXIMError : NSObject

@property(nonatomic) int32_t code;

@property(nonatomic, nonnull) NSString *developerMessage;

@end

NS_ASSUME_NONNULL_END
