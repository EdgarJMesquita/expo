/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

#import <ABI46_0_0React/ABI46_0_0RCTView.h>

NS_ASSUME_NONNULL_BEGIN

@class ABI46_0_0RCTBridge;

@interface ABI46_0_0RCTSafeAreaView : ABI46_0_0RCTView

- (instancetype)initWithBridge:(ABI46_0_0RCTBridge *)bridge;

@property (nonatomic, assign) BOOL emulateUnlessSupported;

@end

NS_ASSUME_NONNULL_END
