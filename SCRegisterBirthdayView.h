//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCDatePickerDelegate.h"
#import "SCRegisterViewProtocol.h"
#import "SCTextViewDelegate.h"
#import "TTTAttributedLabelDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSDate, NSDateFormatter, NSString, SCButton, SCDatePicker, SCTextView, UIScrollView;

@interface SCRegisterBirthdayView : UIView <SCTextViewDelegate, TTTAttributedLabelDelegate, UIScrollViewDelegate, SCDatePickerDelegate, SCRegisterViewProtocol>
{
    _Bool _didEditBirthdayYear;
    _Bool _didEditBirthdayMonth;
    _Bool _didEditBirthdayDay;
    NSDate *_birthday;
    id <SCRegisterBirthdayViewDelegate> _delegate;
    NSDate *_date;
    UIScrollView *_scrollView;
    SCDatePicker *_agePickerView;
    SCTextView *_birthDateTextView;
    SCButton *_enterButton;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) SCButton *enterButton; // @synthesize enterButton=_enterButton;
@property(retain, nonatomic) SCTextView *birthDateTextView; // @synthesize birthDateTextView=_birthDateTextView;
@property(retain, nonatomic) SCDatePicker *agePickerView; // @synthesize agePickerView=_agePickerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool didEditBirthdayDay; // @synthesize didEditBirthdayDay=_didEditBirthdayDay;
@property(nonatomic) _Bool didEditBirthdayMonth; // @synthesize didEditBirthdayMonth=_didEditBirthdayMonth;
@property(nonatomic) _Bool didEditBirthdayYear; // @synthesize didEditBirthdayYear=_didEditBirthdayYear;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) __weak id <SCRegisterBirthdayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
- (void).cxx_destruct;
- (void)showAgePicker;
- (void)setInputEnabled:(_Bool)arg1;
- (_Bool)isInputIncomplete;
- (void)showOrHideEnterButton;
- (void)hideEnterButton;
- (void)showEnterButton;
- (void)birthdayDidChange:(id)arg1;
- (void)dateDidChange;
- (void)dateWheelIsSpinning;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldReturn:(id)arg1;
- (void)updateBirthday;
- (void)initAgePickerView;
- (void)initEnterButton;
- (void)initUserAgreementLabel;
- (void)initAgeTextView;
- (void)becomeFirstResponder;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

