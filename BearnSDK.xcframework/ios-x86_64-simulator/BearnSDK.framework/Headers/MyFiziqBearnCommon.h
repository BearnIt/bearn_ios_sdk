//
//  MyFiziqBearnCommon.h
//  Bearn
//
//  Created by Iurie Manea on 3/2/20.
//  Copyright © 2020 Mihai Tugui. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MyFiziqSDKCommon/MyFiziqCommon.h>
//#import <MyFiziqSDKInputView/MyFiziqInputCommon.h>
//#import <MyFiziqSDKLoginView/MyFiziqLoginCommon.h>
//#import <MyFiziqSDKOnboardingView/MyFiziqOnboardingCommon.h>
//#import <MyFiziqSDKProfileView/MyFiziqProfileCommon.h>
//#import <MyFiziqSDKTrackingView/MyFiziqTrackSDKCommon.h>


NS_ASSUME_NONNULL_BEGIN

@interface MyFiziqBearnCommon: MyFiziqCommon <MyFiziqCommonProtocol>
// Singleton interface.
+ (instancetype _Nullable)shared;
@end

NS_ASSUME_NONNULL_END
