//
//  BSPerson.h
//  BSExerciseObjC
//
//  Created by Bi on 8/10/14.
//  Copyright (c) 2014 BiStudio. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BSPerson : NSObject

@property NSString *firstName;
@property NSString *lastName;
@property NSDate *DOB;

-(void) sayHello;
+(void) person;

@end
