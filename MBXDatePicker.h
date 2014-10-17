//
//  MBXDatePicker.h
//  MonthYearDatePicker
//
//  Created by Igor on 18.03.13.
//  Copyright (c) 2013 Igor. All rights reserved.
//

@interface MBXDatePicker : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource>

@property (nonatomic, assign) NSInteger rowHeight;

@property (nonatomic, strong, readonly) NSDate *date;

-(void)setupMinYear:(NSInteger)minYear maxYear:(NSInteger)maxYear;

-(void)selectToday;

@end
