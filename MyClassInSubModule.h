//
//  MyClassInSubModule.h
//  MySubModule
//
//  Created by Yuen Boon Yee on 15/10/2015.
//
//

#import <Foundation/Foundation.h>

/*!
 @brief  A class in a sub module.
 */
@interface MyClassInSubModule : NSObject

/*!
 @brief  A sample property.
 */
@property (nonatomic, strong) NSString *someString;

/*!
 @brief  A sample function
 @param paramString String parameter.
 */
-(void)someFunction: (NSString *)paramString;
@end
