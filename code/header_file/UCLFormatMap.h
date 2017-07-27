//
// Created by hp-6380 on 2016/12/5.
//

#ifndef UCL_V0_1_UCLFORMATMAP_H
#define UCL_V0_1_UCLFORMATMAP_H


#include <stdint.h>
#include <string>
#include <map>
#include "UCLFormatV2.h"
#include "UCLXMLConf.h"

using namespace std;

typedef     map<string,   int>   SI_MAP;
typedef    map<string, string> SS_MAP;

/**
 *CODE_NAME记录UCL CODE部分各域在xml文件中的元素名和前缀
 *XXX_NAME为域名
 *XXX_INITIAL为前缀
 *注：-std=gnu++11
 */
const SS_MAP CODE_NAME = {
		{"VERSION_NAME", VERSION_NAME},
		{"VERSION_INITIAL", VERSION_INITIAL},


		//type of Media
		{ "TYPEOFMEDIA_NAME", TYPEOFMEDIA_NAME},
		{ "TYPEOFMEDIA_INITIAL", TYPEOFMEDIA_INITIAL},

		//priority and policy
		{ "PRIOANDPOLI_NAME", PRIOANDPOLI_NAME},
		{ "PRIOANDPOLI_INITIAL", PRIOANDPOLI_INITIAL},

		//flag
		{ "FLAG_NAME", FLAG_NAME},
		{ "FLAG_INITIAL", FLAG_INITIAL},

		//parse rule
		{ "PARSERULE_NAME", PARSERULE_NAME},
		{ "PARSERULE_INITIAL", PARSERULE_INITIAL},

		//source of content
		{ "SOUROFCONT_NAME", SOUROFCONT_NAME },
		{ "SOUROFCONT_INITIAL", SOUROFCONT_INITIAL},

		//category
		{ "CATEGORY_NAME", CATEGORY_NAME},
		{ "CATEGORY_INITIAL", CATEGORY_INITIAL},

		//subcategory
		{ "SUBCATEGORY_NAME", SUBCATEGORY_NAME},
		{ "SUBCATEGORY_INITIAL", SUBCATEGORY_INITIAL},

		//topic
		{ "TOPIC_NAME", TOPIC_NAME},
		{ "TOPIC_INITIAL", TOPIC_INITIAL},

		//copyright and type of content
		{ "COPYANDTYPEOFCONT_NAME", COPYANDTYPEOFCONT_NAME },
		{ "COPYANDTYPEOFCONT_INITIAL", COPYANDTYPEOFCONT_INITIAL},

		//security energy level code
		{ "SECUENERLEVECODE_NAME", SECUENERLEVECODE_NAME },
		{ "SECUENERLEVECODE_INITIAL", SECUENERLEVECODE_INITIAL},

		//language
		{ "LANGUAGE_NAME", LANGUAGE_NAME},
		{ "LANGUAGE_INITIAL", LANGUAGE_INITIAL},

		//size of content
		{ "SIZEOFCONTENT_NAME", SIZEOFCONTENT_NAME },
		{ "SIZEOFCONTENT_INITIAL", SIZEOFCONTENT_INITIAL },

		//time stamp
		{ "TIMESTAMP_NAME", TIMESTAMP_NAME},
		{ "TIMESTAMP_INITIAL", TIMESTAMP_INITIAL},

		//serial number
		{ "SERIALNUMBER_NAME", SERIALNUMBER_NAME},
		{ "SERIALNUMBER_INITIAL", SERIALNUMBER_INITIAL},

		//multiplex bytes
		{"MULTIPLEXBYTES_NAME", MULTIPLEXBYTES_NAME},
		{"MULTIPLEXBYTES_INITIAL" , MULTIPLEXBYTES_INITIAL },


		//code check
		{ "CODECHECK_NAME", CODECHECK_NAME},
		{ "CODECHECK_INITIAL", CODECHECK_INITIAL},
};



/**
 * MBU 记录最小比特单元的起始比特位和比特长度；
 * 可以考虑通过配置文件生成mbu；
 * XXX_START_BYTE 定义xxx域的开始字节（从0开始）；
 * XXX_BIT_LENGTH 定义xxx域的bit位长度；
 * XXX_MBU_N_START_BIT 定义xxx域的第N个MBU的起始比特位；
 * 注：此处N与标准文档一致，从1开始；起始比特从0开始；
 * XXX_MBU_N_BIT_LENGTH 定义xxx域的第N个MBU的比特位数目；
 *
 * 注：-std=gnu++11
 */
const SI_MAP MBU =
	{

			{"VERSION_START_BYTE", VERSION_START_BYTE},
			{"VERSION_START_BIT", VERSION_START_BIT},
			{"VERSION_MBU_NUMS", VERSION_MBU_NUMS},
			{"VERSION_MBU_1_START_BIT", 0},
			{"VERSION_MBU_1_BIT_LENGTH", 3},

			//type of Media
			{"TYPEOFMEDIA_START_BYTE", TYPEOFMEDIA_START_BYTE},
			{"TYPEOFMEDIA_START_BIT", TYPEOFMEDIA_START_BIT},
			{"TYPEOFMEDIA_MBU_NUMS", TYPEOFMEDIA_MBU_NUMS},
			{"TYPEOFMEDIA_MBU_1_START_BIT", 0},
			{"TYPEOFMEDIA_MBU_1_BIT_LENGTH", 5},

			//PRIOANDPOLI
			{"PRIOANDPOLI_START_BYTE", PRIOANDPOLI_START_BYTE},
			{"PRIOANDPOLI_START_BIT", PRIOANDPOLI_START_BIT},
			{"PRIOANDPOLI_MBU_NUMS", PRIOANDPOLI_MBU_NUMS},
			{"PRIOANDPOLI_MBU_1_START_BIT", 0},
			{"PRIOANDPOLI_MBU_1_BIT_LENGTH", 3},
			{"PRIOANDPOLI_MBU_2_START_BIT", 3},
			{"PRIOANDPOLI_MBU_2_BIT_LENGTH", 1},
			{"PRIOANDPOLI_MBU_3_START_BIT", 4},
			{"PRIOANDPOLI_MBU_3_BIT_LENGTH", 1},
			{"PRIOANDPOLI_MBU_4_START_BIT", 5},
			{"PRIOANDPOLI_MBU_4_BIT_LENGTH", 3},

			//flag
			{"FLAG_START_BYTE", FLAG_START_BYTE},
			{"FLAG_START_BIT", FLAG_START_BIT},
			{"FLAG_MBU_NUMS", FLAG_MBU_NUMS},
			{"FLAG_MBU_1_START_BIT", 0},
			{"FLAG_MBU_1_BIT_LENGTH", 1},
			{"FLAG_MBU_2_START_BIT", 1},
			{"FLAG_MBU_2_BIT_LENGTH", 1},
			{"FLAG_MBU_3_START_BIT", 2},
			{"FLAG_MBU_3_BIT_LENGTH", 1},
			{"FLAG_MBU_4_START_BIT", 3},
			{"FLAG_MBU_4_BIT_LENGTH", 1},
			{"FLAG_MBU_5_START_BIT", 4},
			{"FLAG_MBU_5_BIT_LENGTH", 1},
			{"FLAG_MBU_6_START_BIT", 5},
			{"FLAG_MBU_6_BIT_LENGTH", 1},
			{"FLAG_MBU_7_START_BIT", 6},
			{"FLAG_MBU_7_BIT_LENGTH", 1},
			{"FLAG_MBU_8_START_BIT", 7},
			{"FLAG_MBU_8_BIT_LENGTH", 1},

			//parse rule
			{"PARSERULE_START_BYTE", PARSERULE_START_BYTE},
			{"PARSERULE_START_BIT", PARSERULE_START_BIT},
			{"PARSERULE_MBU_NUMS", PARSERULE_MBU_NUMS},
			{"PARSERULE_MBU_1_START_BIT", 0},
			{"PARSERULE_MBU_1_BIT_LENGTH", 6},
			{"PARSERULE_MBU_2_START_BIT", 6},
			{"PARSERULE_MBU_2_BIT_LENGTH", 6},

			//source of content
			{"SOUROFCONT_START_BYTE", SOUROFCONT_START_BYTE},
			{"SOUROFCONT_START_BIT", SOUROFCONT_START_BIT},
			{"SOUROFCONT_MBU_NUMS", SOUROFCONT_MBU_NUMS},
			{"SOUROFCONT_MBU_1_START_BIT", 0},
			{"SOUROFCONT_MBU_1_BIT_LENGTH", 3},
			{"SOUROFCONT_MBU_2_START_BIT", 3},
			{"SOUROFCONT_MBU_2_BIT_LENGTH", 1},
			{"SOUROFCONT_MBU_3_START_BIT", 4},
			{"SOUROFCONT_MBU_3_BIT_LENGTH", 24},

			//category
			{"CATEGORY_START_BYTE", CATEGORY_START_BYTE},
			{"CATEGORY_START_BIT", CATEGORY_START_BIT},
			{"CATEGORY_MBU_NUMS", CATEGORY_MBU_NUMS},
			{"CATEGORY_MBU_1_START_BIT", 0},
			{"CATEGORY_MBU_1_BIT_LENGTH", 8},

			//subcategory
			{"SUBCATEGORY_START_BYTE", SUBCATEGORY_START_BYTE},
			{"SUBCATEGORY_START_BIT", SUBCATEGORY_START_BIT},
			{"SUBCATEGORY_MBU_NUMS", SUBCATEGORY_MBU_NUMS},
			{"SUBCATEGORY_MBU_1_START_BIT", 0},
			{"SUBCATEGORY_MBU_1_BIT_LENGTH", 8},

			//topic
			{"TOPIC_START_BYTE", TOPIC_START_BYTE},
			{"TOPIC_START_BIT", TOPIC_START_BIT},
			{"TOPIC_MBU_NUMS", TOPIC_MBU_NUMS},
			{"TOPIC_MBU_1_START_BIT", 0},
			{"TOPIC_MBU_1_BIT_LENGTH", 1},
			{"TOPIC_MBU_2_START_BIT", 1},
			{"TOPIC_MBU_2_BIT_LENGTH", 2},
			{"TOPIC_MBU_3_START_BIT", 4},
			{"TOPIC_MBU_3_BIT_LENGTH", 28},

			//copyright and type of content
			{"COPYANDTYPEOFCONT_START_BYTE", COPYANDTYPEOFCONT_START_BYTE},
			{"COPYANDTYPEOFCONT_START_BIT", COPYANDTYPEOFCONT_START_BIT},
			{"COPYANDTYPEOFCONT_MBU_NUMS", COPYANDTYPEOFCONT_MBU_NUMS},
			{"COPYANDTYPEOFCONT_MBU_1_START_BIT", 0},
			{"COPYANDTYPEOFCONT_MBU_1_BIT_LENGTH", 1},
			{"COPYANDTYPEOFCONT_MBU_2_START_BIT", 1},
			{"COPYANDTYPEOFCONT_MBU_2_BIT_LENGTH", 1},
			{"COPYANDTYPEOFCONT_MBU_3_START_BIT", 2},
			{"COPYANDTYPEOFCONT_MBU_3_BIT_LENGTH", 1},
			{"COPYANDTYPEOFCONT_MBU_4_START_BIT", 3},
			{"COPYANDTYPEOFCONT_MBU_4_BIT_LENGTH", 1},
			{"COPYANDTYPEOFCONT_MBU_5_START_BIT", 4},
			{"COPYANDTYPEOFCONT_MBU_5_BIT_LENGTH", 4},

			//security energy level code
			{"SECUENERLEVECODE_START_BYTE", SECUENERLEVECODE_START_BYTE},
			{"SECUENERLEVECODE_START_BIT", SECUENERLEVECODE_START_BIT},
			{"SECUENERLEVECODE_MBU_NUMS", SECUENERLEVECODE_MBU_NUMS},
			{"SECUENERLEVECODE_MBU_1_START_BIT", 0},
			{"SECUENERLEVECODE_MBU_1_BIT_LENGTH", 2},
			{"SECUENERLEVECODE_MBU_2_START_BIT", 2},
			{"SECUENERLEVECODE_MBU_2_BIT_LENGTH", 3},
			{"SECUENERLEVECODE_MBU_3_START_BIT", 5},
			{"SECUENERLEVECODE_MBU_3_BIT_LENGTH", 3},

			//language
			{"LANGUAGE_START_BYTE", LANGUAGE_START_BYTE},
			{"LANGUAGE_START_BIT", LANGUAGE_START_BIT},
			{"LANGUAGE_MBU_NUMS", LANGUAGE_MBU_NUMS},
			{"LANGUAGE_MBU_1_START_BIT", 0},
			{"LANGUAGE_MBU_1_BIT_LENGTH", 6},
			{"LANGUAGE_MBU_2_START_BIT", 6},
			{"LANGUAGE_MBU_2_BIT_LENGTH", 2},

			//size of content
			{"SIZEOFCONTENT_START_BYTE", SIZEOFCONTENT_START_BYTE},
			{"SIZEOFCONTENT_START_BIT", SIZEOFCONTENT_START_BIT},
			{"SIZEOFCONTENT_MBU_NUMS", SIZEOFCONTENT_MBU_NUMS},
			{"SIZEOFCONTENT_MBU_1_START_BIT", 0},
			{"SIZEOFCONTENT_MBU_1_BIT_LENGTH", 3},
			{"SIZEOFCONTENT_MBU_2_START_BIT", 3},
			{"SIZEOFCONTENT_MBU_2_BIT_LENGTH", 2},

			//time stamp
			//Undefined
//			{"TIMESTAMP_START_BYTE", TIMESTAMP_START_BYTE},
//			{"TIMESTAMP_START_BIT", TIMESTAMP_START_BIT},
//			{"TIMESTAMP_MBU_NUMS", TIMESTAMP_MBU_NUMS},
//			{"TIMESTAMP_MBU_1_START_BIT", 0},
//			{"TIMESTAMP_MBU_1_BIT_LENGTH", 33},
//			{"TIMESTAMP_MBU_2_START_BIT", 33},
//			{"TIMESTAMP_MBU_2_BIT_LENGTH", 10},

			//serial number
			//Undefined

			//multiplex bytes
			//Undefined

			//code check
			//Undefined


	};

#endif //UCL_V0_1_UCLFORMATMAP_H