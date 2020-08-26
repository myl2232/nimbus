//
// Copyright 2011-2014 NimbusKit
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>

#import "NITableViewModel.h"

@interface NITableViewModel()

@property (nonatomic, strong) NSArray* sections; // Array of NITableViewModelSection
@property (nonatomic, strong) NSArray* sectionIndexTitles;
@property (nonatomic, strong) NSDictionary* sectionPrefixToSectionIndex;

- (void)_resetCompiledData;
- (void)_compileDataWithListArray:(NSArray *)listArray;
- (void)_compileDataWithSectionedArray:(NSArray *)sectionedArray;
- (void)_compileSectionIndex;
- (void)_setSectionsWithArray:(NSArray *)sectionsArray;

@end

@interface NITableViewModelSection : NSObject

+ (id)section;

@property (nonatomic, copy) NSString* headerTitle;
@property (nonatomic, copy) NSString* footerTitle;
@property (nonatomic, strong) NSArray* rows;

@end
