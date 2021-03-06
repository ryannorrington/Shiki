//                                                   
//  kern_resources.hpp                               
//  Shiki                                            
//                                                   
//  Copyright © 2016-2017 vit9696. All rights reserved.   
//                                                   
//  This is an autogenerated file!                   
//  Please avoid any modifications!                  
//                                                   

#include <Headers/kern_user.hpp>                     
#include <stdint.h>                                  

extern UserPatcher::BinaryModInfo ADDPR(binaryMod)[];
extern const size_t ADDPR(binaryModSize);            

extern UserPatcher::ProcInfo ADDPR(procInfo)[];      
extern const size_t ADDPR(procInfoSize);             


// Section list

enum : uint32_t {
	SectionUnused = 0,
	SectionNDRMI = 1,
	SectionNSTREAM = 2,
	SectionFCPUID = 3,
	SectionOFFLINE = 4,
	SectionBGRA = 5,
	SectionNVDA = 6,
	SectionKEGVA = 7,
	SectionBOARDID = 8,
};
