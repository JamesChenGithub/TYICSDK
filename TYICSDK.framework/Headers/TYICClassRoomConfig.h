//
//  TYICClassRoomConfig.h
//  TYICSDK
//
//  Created by AlexiChen on 2020/5/22.
//  Copyright © 2020 AlexiChen. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TYICClassRoomConfig : NSObject

@property (nonatomic, copy, nonnull) NSString *sdkAppId;            //
@property (nonatomic, copy, nonnull) NSString *userId;
@property (nonatomic, copy, nonnull) NSString *token;
@property (nonatomic, copy, nonnull) NSString *userSig;
@property (nonatomic, copy, nonnull) NSString *schoolId;
@property (nonatomic, copy, nonnull) NSString *classRoomId;
@property (nonatomic, strong, nullable) NSDictionary *extEnvInfo;

- (BOOL)isValied;

@end

NS_ASSUME_NONNULL_END
