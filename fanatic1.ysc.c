#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	vector3 vLocal_22 = { 0f, 0f, 0f };
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	int iLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	struct<4> Local_38[10];
	bool bLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	struct<61> Local_54 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	var uLocal_72 = 0;
	struct<2> Local_73 = { 0, 0 } ;
	struct<2> Local_74 = { 0, 0 } ;
	struct<2> Local_75 = { 0, 0 } ;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 16;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	float fLocal_250 = 0f;
	float fLocal_251 = 0f;
	float fLocal_252 = 0f;
	float fLocal_253 = 0f;
	float fLocal_254 = 0f;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	char* sLocal_263[2] = { NULL, NULL };
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	char* sLocal_266[3] = { NULL, NULL, NULL };
	struct<2> Local_267 = { 0, 0 } ;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	struct<2> Local_270 = { 0, 0 } ;
	var uLocal_271 = -1;
	struct<2> Local_272 = { 0, 0 } ;
	var uLocal_273 = -1;
	struct<2> Local_274 = { 0, 0 } ;
	var uLocal_275 = -1;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	struct<5> Local_284[3];
	struct<5> Local_285 = { 0, 0, 0, 0, -1 } ;
	vector3 vLocal_286 = { 0f, 0f, 0f };
	var uLocal_287 = 0;
	var uLocal_288 = -1;
	vector3 vLocal_289 = { 0f, 0f, 0f };
	var uLocal_290 = 0;
	var uLocal_291 = -1;
	vector3 vLocal_292 = { 0f, 0f, 0f };
	var uLocal_293 = 0;
	var uLocal_294 = -1;
	vector3 vLocal_295 = { 0f, 0f, 0f };
	var uLocal_296 = 0;
	var uLocal_297 = -1;
	vector3 vLocal_298 = { 0f, 0f, 0f };
	var uLocal_299 = 0;
	var uLocal_300 = -1;
	vector3 vLocal_301 = { 0f, 0f, 0f };
	var uLocal_302 = 0;
	var uLocal_303 = -1;
	int iLocal_304 = 0;
	vector3 vLocal_305 = { 0f, 0f, 0f };
	float fLocal_306 = 0f;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	char* sLocal_311 = NULL;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	struct<21> Local_314 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0 } ;
	var uLocal_315 = 0;
	struct<21> Local_316 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0 } ;
	var uLocal_317 = 0;
	struct<21> Local_318 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0 } ;
	var uLocal_319 = 0;
	struct<21> Local_320 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0 } ;
	var uLocal_321 = 0;
	struct<13> Local_322 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_323 = 0;
	struct<13> Local_324 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_325[4];
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	vector3 vLocal_333 = { 0f, 0f, 0f };
	vector3 vLocal_334 = { 0f, 0f, 0f };
	vector3 vLocal_335 = { 0f, 0f, 0f };
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	vector3 vLocal_345 = { 0f, 0f, 0f };
	float fLocal_346 = 0f;
	int iLocal_347 = 0;
	char* sLocal_348 = NULL;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	vector3 vLocal_353 = { 0f, 0f, 0f };
	vector3 vLocal_354 = { 0f, 0f, 0f };
	vector3 vLocal_355 = { 0f, 0f, 0f };
	vector3 vLocal_356 = { 0f, 0f, 0f };
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	vector3 vLocal_363[10] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	float fLocal_373 = 0f;
	float fLocal_374 = 0f;
	float fLocal_375 = 0f;
	float fLocal_376 = 0f;
	float fLocal_377 = 0f;
	int iLocal_378 = 0;
	var uLocal_379 = 0;
	struct<61> Local_380 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_33 = 3;
	iLocal_43 = 1;
	iLocal_44 = 65;
	iLocal_45 = 49;
	iLocal_46 = 64;
	uLocal_50 = unk_0xAD1355DD1E5D2D9B();
	iLocal_51 = unk_0x817B3657F78A517A();
	uLocal_53 = func_488(61);
	iLocal_65 = 1;
	iLocal_67 = 1;
	iLocal_248 = 1800;
	iLocal_249 = 4500;
	fLocal_250 = 1.025f;
	fLocal_251 = fLocal_250;
	fLocal_252 = 3f;
	fLocal_253 = fLocal_252;
	fLocal_254 = -1f;
	vLocal_305 = { -2002.52f, -503.53f, 11.27f };
	fLocal_306 = 0.13f;
	iLocal_307 = joaat("scorcher");
	iLocal_326 = joaat("a_f_y_fitness_01");
	vLocal_333 = { -1818.96f, -751.5f, 7.99f };
	iLocal_338 = -1;
	iLocal_339 = -1;
	vLocal_345 = { -1957.213f, -555.2614f, 11.08383f };
	fLocal_346 = -87.35699f;
	sLocal_348 = "Fanatic1MaryAnn";
	vLocal_356 = { -2005.65f, -508.08f, 10.76f };
	iLocal_365 = 1;
	fLocal_373 = 40f;
	fLocal_374 = 0.35f;
	fLocal_375 = 0f;
	fLocal_376 = -0.8f;
	fLocal_377 = -0.05f;
	Local_54 = { ScriptParam_380 };
	func_486(&Local_54);
	unk_0x7798376279BB5369(1);
	if (unk_0x2EBF608FFE6CA406(19))
	{
		func_485("Force cleanup [TERMINATING]");
		unk_0xC92DB9682A650680("RC6A_FAIL");
		func_466(1);
		func_454();
	}
	if (func_453() || func_452(0))
	{
		Global_76867 = 1;
		iLocal_52 = 0;
		while (!func_444(&Local_54))
		{
			wait(0);
		}
		Global_76867 = 0;
	}
	func_443(2, 1);
	iLocal_244 = Local_54.f_28[0];
	uLocal_72 = func_442(0);
	unk_0x9CBC55A05A07FC47(0);
	if (func_453() || func_452(0))
	{
		func_441(&Local_54, 0, 1);
		if (func_440(iLocal_244))
		{
			unk_0xAA6B3A4292417750(iLocal_244, false, false, false, false, false, 0, 0, 0);
		}
		func_439(-1878.234f, -439.6985f, 45.0299f, 241.0468f, 1, 0);
		func_437();
		if (!func_452(0))
		{
			switch (func_436())
			{
				case 0:
					func_421(1);
					break;
			}
		}
		else if (func_453())
		{
			switch (func_436())
			{
				case 0:
					func_421(1);
					break;
			}
		}
		else
		{
			func_421(0);
		}
	}
	while (true)
	{
		unk_0x1A6DFFFEEC27BF4F("SF_EDM", 0);
		wait(0);
		func_405(Local_54.f_9, 1, 0, 0, 0, 0);
		func_398();
		func_380();
		func_379();
		if (((iLocal_56 != 0 && iLocal_56 != 1) && iLocal_56 != 10) && iLocal_56 != 9)
		{
			if (iLocal_56 != 8)
			{
				func_378();
			}
			func_365();
			func_363();
		}
		else if (iLocal_56 == 0)
		{
			func_361();
		}
		else if (iLocal_56 == 1)
		{
			if (func_440(iLocal_244))
			{
				unk_0xCAF7AE54F764D5AA(iLocal_244, 2.3f);
			}
		}
		switch (iLocal_56)
		{
			case 0:
				func_360();
				break;
			
			case 1:
				func_349();
				break;
			
			case 2:
				func_345();
				break;
			
			case 3:
				func_339();
				break;
			
			case 4:
				func_332();
				break;
			
			case 5:
				func_318();
				break;
			
			case 6:
				func_315();
				break;
			
			case 7:
				func_314();
				break;
			
			case 8:
				func_43();
				break;
			
			case 9:
				func_41();
				break;
			
			case 10:
				func_1();
				break;
		}
	}
}

void func_1()
{
	char* sVar0;
	
	switch (iLocal_55)
	{
		case 0:
			unk_0x790015DC92C918E2();
			unk_0xA37A90C62806D848(1);
			if (iLocal_58 != 2)
			{
				if (func_40())
				{
					func_39("Killing conversation in fail state");
					func_37();
				}
			}
			else if (!func_40())
			{
				if (func_17(&uLocal_78, "FAN1AU", "FAN1_AGGRO", 9, 0, 0, 0))
				{
					func_39("Playing aggro convo with subs");
				}
			}
			else
			{
				func_39("Convo already active when failing for scaring Mary Ann - playing without subs asap?");
				func_15();
				func_13(&uLocal_78, "FAN1AU", "FAN1_AGGRO", 8, 0, 0);
			}
			func_12(&iLocal_245);
			func_12(&iLocal_357);
			func_12(&iLocal_358);
			unk_0xE223EB8FE6F8CC15(iLocal_359);
			if ((iLocal_58 == 1 || iLocal_58 == 0) || iLocal_58 == 2)
			{
				if (func_440(iLocal_244))
				{
					unk_0xF3268524E9BE6D6E(iLocal_244, unk_0x16F2683693E537C9(), 80f, -1, 0, 0);
				}
			}
			switch (iLocal_58)
			{
				case 0:
					sVar0 = "FATIC1_F8";
					break;
				
				case 2:
					sVar0 = "FATIC1_F2";
					break;
				
				case 1:
					sVar0 = "FATIC1_F1";
					break;
				
				case 3:
					sVar0 = "FATIC1_F5";
					break;
				
				case 4:
					sVar0 = "FATIC1_F3";
					break;
				
				case 5:
					sVar0 = "FATIC1_F7";
					break;
				
				case 6:
					sVar0 = "FATIC1_F6";
					break;
				
				default:
					break;
			}
			if (!unk_0xEA6BC48857E0AC4C(sVar0))
			{
				func_10(sVar0, 1);
			}
			else
			{
				func_466(1);
			}
			iLocal_55 = 1;
			break;
		
		case 1:
			if (func_9())
			{
				func_5();
				func_4(1);
				func_2(0, uLocal_72);
				func_454();
			}
			break;
	}
}

void func_2(int iParam0, var uParam1)
{
	if (!func_3(iParam0))
	{
		return;
	}
	Global_111638.f_2358.f_539.f_2332[iParam0] = uParam1;
}

bool func_3(int iParam0)
{
	return iParam0 < 3;
}

void func_4(int iParam0)
{
	if (iLocal_65 != iParam0)
	{
		unk_0xB5376EA942202450(-1708.314f, -574.0266f, 36.87338f, -2044.766f, -370.9167f, 9.152167f, 27.25f, 0, iParam0, 1);
		iLocal_65 = iParam0;
	}
}

void func_5()
{
	if (unk_0x562F77A7F33D2E46("FANATIC_MIX_SCENE"))
	{
		unk_0x06FF977AA95DCCE3(iLocal_244, 0);
	}
	func_8(&iLocal_244);
	func_8(&iLocal_328);
	func_8(&iLocal_330);
	func_8(&iLocal_331);
	func_8(&iLocal_329);
	func_8(&iLocal_344);
	func_8(&(Local_325[0 /*12*/]));
	func_8(&(Local_325[1 /*12*/]));
	func_8(&(Local_325[2 /*12*/]));
	func_8(&(Local_325[3 /*12*/]));
	func_8(&Local_322);
	func_8(&(Local_322.f_1));
	func_8(&Local_324);
	func_8(&(Local_324.f_1));
	func_6(&(Local_322.f_2));
	func_6(&(Local_324.f_2));
	func_6(&iLocal_332);
	func_6(&iLocal_304);
}

void func_6(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, true, 0);
		}
		if (func_7(*iParam0))
		{
			if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 1))
			{
				if (func_440(unk_0x16F2683693E537C9()))
				{
					if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0))
					{
						unk_0x046C362CF15F1935(iParam0);
						return;
					}
				}
				unk_0xA954465BA6FDEFE2(iParam0);
			}
		}
		else
		{
			if (func_440(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), *iParam0, 0))
				{
					unk_0x046C362CF15F1935(iParam0);
					return;
				}
			}
			unk_0xA954465BA6FDEFE2(iParam0);
		}
	}
}

int func_7(int iParam0)
{
	if (func_440(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (!unk_0x4E861BC5B1EDA7BD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_8(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0x437347B10A200C4B(*iParam0, 0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0, 1);
		}
		if (!unk_0xAF6690C489CC6203(*iParam0))
		{
			unk_0x73270B3C9CC833FD(*iParam0, true, 0);
		}
		unk_0xEBA53F35D0085654(iParam0);
	}
}

int func_9()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_98744 == 7 || Global_98744 == 8)
	{
		return 1;
	}
	return 0;
}

void func_10(char* sParam0, bool bParam1)
{
	func_11(sParam0);
	func_466(bParam1);
}

void func_11(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
		if (unk_0x4880526EC51D1C27(sParam0) <= 16)
		{
			StringCopy(&Global_76854, sParam0, 16);
			StringCopy(&Global_76858, "", 16);
			if (unk_0x192DA571D9133D23())
			{
				unk_0x32BB9995E509E19B();
			}
		}
	}
}

void func_12(int iParam0)
{
	if (unk_0xE4EDC4B0E92C078B(*iParam0))
	{
		unk_0x661342B9651D16E2(*iParam0, false);
		unk_0x142CC44DB769B57E(iParam0);
	}
}

void func_13(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	func_14(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	unk_0x5D96D8530B3D0904(&Global_19671, 0);
	Global_20808 = iParam3;
	StringCopy(&Global_20795, sParam2, 24);
}

void func_14(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

void func_15()
{
	Global_19671 = 0;
	func_16();
}

void func_16()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if ((unk_0x1EE04CEA36EF313B() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

bool func_17(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_14(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_18(sParam2, iParam3, 0);
}

int func_18(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x5CEB4DB888A62073(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_16();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_35();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x0674E58A79778E99(&Global_7356, 20);
			unk_0x0674E58A79778E99(&Global_7357, 17);
			unk_0x0674E58A79778E99(&Global_7358, 0);
			if (bParam2)
			{
				func_28();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (unk_0xCE8BF704469FA7EF(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x989FD1982F631EA3(unk_0x16F2683693E537C9(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
					{
						return 0;
					}
					if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
					{
						return 0;
					}
					if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
					{
						return 0;
					}
				}
			}
			if (func_26())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0xEAE0D21A50E6C7F4(Global_7356, 9))
				{
					return 0;
				}
			}
			func_25();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_24();
		func_19();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_16();
	}
	return 0;
}

void func_19()
{
	if (!func_20())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703108.f_1), {Global_20424}, 4);
		Global_1703108 = Global_6671;
		Global_1703108.f_6 = Global_20815;
	}
}

int func_20()
{
	if (!Global_262145.f_28086)
	{
		return 0;
	}
	if (!Global_76622)
	{
		return 0;
	}
	if (unk_0xD803B885F5E47A62() == func_23())
	{
		return 0;
	}
	if (func_21(unk_0xD803B885F5E47A62()))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_1628237[unk_0xD803B885F5E47A62() /*615*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA14BB9332558B949())
	{
		return 0;
	}
	return 1;
}

bool func_21(int iParam0)
{
	return func_22(iParam0, 20);
}

bool func_22(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1628237[iParam0 /*615*/].f_11.f_4, iParam1);
}

int func_23()
{
	return -1;
}

void func_24()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x5CEB4DB888A62073(false);
	Global_20805 = 1;
}

void func_25()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x0674E58A79778E99(&Global_7357, 16);
}

int func_26()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	if (Global_76622)
	{
		iVar0 = 0;
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar1, 1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5ED715849883FAFF() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x24129324CD7C13D0(unk_0x16F2683693E537C9(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_28()
{
	if (func_34(14))
	{
		if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
		{
			if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()) == Global_111638.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_29();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76622)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

int func_29()
{
	func_30();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_30()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_32(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_31(unk_0x16F2683693E537C9());
			if (func_3(iVar0) && (!func_34(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_3(Global_111638.f_2358.f_539.f_4321))
				{
					Global_111638.f_2358.f_539.f_4322 = Global_111638.f_2358.f_539.f_4321;
				}
				Global_111638.f_2358.f_539.f_4323 = iVar0;
				Global_111638.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111638.f_2358.f_539.f_4321 != 145)
			{
				Global_111638.f_2358.f_539.f_4323 = Global_111638.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111638.f_2358.f_539.f_4321 = 145;
}

int func_31(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_32(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_32(int iParam0)
{
	if (func_3(iParam0))
	{
		return func_33(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_33(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_34(int iParam0)
{
	return Global_41431 == iParam0;
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_36(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377170.f_203[iParam1];
			}
			break;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_1377170.f_1048, iParam0);
}

void func_37()
{
	Global_19671 = 0;
	func_38();
}

void func_38()
{
	unk_0x8BD0DC8EEFDC56D8();
	Global_21816 = 0;
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
		Global_20805 = 6;
	}
}

void func_39(char* sParam0)
{
	sParam0 = sParam0;
}

int func_40()
{
	if (Global_20805 != 0 || unk_0x25037C66EB32B076())
	{
		return 1;
	}
	return 0;
}

void func_41()
{
	int iVar0;
	
	switch (iLocal_55)
	{
		case 0:
			func_39("In setup for Lost Race");
			func_12(&iLocal_245);
			func_12(&iLocal_357);
			func_12(&iLocal_358);
			unk_0xE223EB8FE6F8CC15(iLocal_359);
			iVar0 = func_42();
			if (iLocal_243 == 0)
			{
				if (iVar0 == 1)
				{
					func_17(&uLocal_78, "FAN1AU", "FAN1_LOSE", 8, 0, 0, 0);
					func_39("Doing 'FAN1_LOSE'");
				}
				else
				{
					func_17(&uLocal_78, "FAN1AU", "FAN1_LOSE2", 8, 0, 0, 0);
					func_39("Doing 'FAN1_LOSE2'");
				}
			}
			unk_0xDD353D0E9C789D0E(&uLocal_77);
			unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
			unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1celebrate", "celebrate", 4f, -16f, -1, 286720, 0, 0, 0, 0);
			unk_0xC6EB89C59F2AF6B8(0, "move_f@runner", "idle", 16f, -4f, -1, 270337, 0, 0, 0, 0);
			unk_0x75ABDC5F81978924(uLocal_77);
			unk_0x78ADC381772E3D54(iLocal_244, uLocal_77);
			unk_0xF82EA857DA10E0CD(&uLocal_77);
			func_39("Going into loop for Lost Race");
			iLocal_55 = 1;
			break;
		
		case 1:
			if (!func_40())
			{
				func_39("No conversation going in Lost Race, failing properly now");
				unk_0xC92DB9682A650680("RC6A_FAIL");
				iLocal_58 = 5;
				iLocal_55 = 0;
				iLocal_56 = 10;
			}
			break;
	}
}

int func_42()
{
	if (unk_0xEAE0D21A50E6C7F4(unk_0x09AC81E49EA267F7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_43()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iLocal_360 != 0)
	{
		func_39("Fade previous CP");
		iLocal_361 = (iLocal_361 - 25);
		if (iLocal_361 > 0)
		{
			unk_0xA402F6C87C08815C(1, &iVar0, &iVar1, &iVar2, &uVar3);
			unk_0xF0B0A50DF3EA0E70(iLocal_360, iVar0, iVar1, iVar2, iLocal_361);
			unk_0xF08C5AE8AC5C7427(iLocal_360, iVar0, iVar1, iVar2, iLocal_361);
		}
		else
		{
			unk_0xE223EB8FE6F8CC15(iLocal_360);
		}
	}
	switch (iLocal_55)
	{
		case 0:
			func_12(&iLocal_357);
			unk_0xE223EB8FE6F8CC15(iLocal_359);
			if (func_313(iLocal_344))
			{
				unk_0xA3BF0AA5A2608191(iLocal_344);
				unk_0xF3268524E9BE6D6E(iLocal_344, unk_0x16F2683693E537C9(), 40f, -1, 0, 0);
			}
			if (func_40())
			{
				func_39("stop scripted conversation at END_CUTSCENE");
				func_37();
			}
			if (func_440(iLocal_244))
			{
				unk_0xE8832A9E16A57A1F(iLocal_244, 1, 1);
				unk_0x545E1397F38D9D5A(iLocal_244, 1);
			}
			iLocal_63 = 0;
			unk_0xC92DB9682A650680("RC6A_FINISH");
			unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar4, 0);
			if (iVar4 != joaat("weapon_unarmed"))
			{
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), true);
			}
			if (bLocal_68)
			{
				unk_0x745CE398A4B0A3C6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 30f, 0);
				func_304(-2010.693f, -504.882f, 9.529695f, -1995.947f, -517.2494f, 13.76466f, 10f, -2008.54f, -494.1f, 11.04f, 48.19f, func_312(), 1, 1, 1, 0, 0);
				func_300(vLocal_356, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1);
				func_299();
				if (func_298(unk_0x16F2683693E537C9(), iLocal_244) > 32f)
				{
					unk_0xA47B46945FF6DE74(iLocal_244, -1986.2f, -526.22f, 11f, 1, false, 0, 1);
					unk_0xD8F6A53F4799FAFE(iLocal_244, 58.26f);
					unk_0xDD353D0E9C789D0E(&uLocal_77);
					unk_0xF44B0E19CAC31C33(0, sLocal_348, func_295(), 1040, -1);
					unk_0xC6EB89C59F2AF6B8(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(uLocal_77);
					unk_0x78ADC381772E3D54(iLocal_244, uLocal_77);
					unk_0xF82EA857DA10E0CD(&uLocal_77);
					unk_0xBD453909DC26A85D(iLocal_244, -530524, 1, 1, 0);
				}
				unk_0x0C8C0C840C2D1AD2(iLocal_244, unk_0x16F2683693E537C9(), -1, 0, 2);
				unk_0xDD353D0E9C789D0E(&uLocal_77);
				unk_0x96167B03C5A77156(0, vLocal_356, 1f, 20000, 0.5f, 0, 1193033728);
				unk_0x75ABDC5F81978924(uLocal_77);
				unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), uLocal_77);
				unk_0xF82EA857DA10E0CD(&uLocal_77);
				unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -530524, 1, 0, 0);
				unk_0x3F423BF5B8125A50("rcmfanatic1out_of_breath");
				while (!unk_0xB4AE0788C1587752("rcmfanatic1out_of_breath"))
				{
					func_39("Loading ANIMS");
					wait(0);
				}
				iLocal_310 = 0;
				unk_0xBC03DF6093E8E71F(unk_0xD803B885F5E47A62(), 1);
			}
			else
			{
				unk_0x3F423BF5B8125A50("rcmfanatic1out_of_breath");
				while (!unk_0xB4AE0788C1587752("rcmfanatic1out_of_breath"))
				{
					func_39("Loading ANIMS");
					wait(0);
				}
			}
			if (!unk_0xC844350D5D58C99A(iLocal_304))
			{
				unk_0x523BCC9DC80CD82F(iLocal_307);
				while (!unk_0xB87F6CF6E5628C67(iLocal_307))
				{
					func_39("Loading MARYSBIKE MODEL");
					wait(0);
				}
				iLocal_304 = unk_0x122AAB0B1D6F55AD(iLocal_307, vLocal_305, fLocal_306, 1, 1, 0);
				unk_0x71199B01895C6202(iLocal_307);
			}
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				if (func_313(Local_325[iVar5 /*12*/]))
				{
					if ((unk_0x65851B2C8786EE74(Local_325[iVar5 /*12*/]) || unk_0xFEABCECA098C0A91(Local_325[iVar5 /*12*/], 55)) || unk_0xFEABCECA098C0A91(Local_325[iVar5 /*12*/], 42))
					{
						unk_0xA3BF0AA5A2608191(Local_325[iVar5 /*12*/]);
						unk_0xDD353D0E9C789D0E(&uLocal_77);
						unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
						unk_0x78A77CDD64392938(0, 2000);
						unk_0x01E4BB5190DF7317(0, 1193033728, 0);
						unk_0x75ABDC5F81978924(uLocal_77);
						unk_0x78ADC381772E3D54(Local_325[iVar5 /*12*/], uLocal_77);
						unk_0xF82EA857DA10E0CD(&uLocal_77);
						func_294(&(Local_325[iVar5 /*12*/]), 1, 0, 1);
					}
				}
				iVar5++;
			}
			iLocal_309 = 0;
			iLocal_55 = 1;
			break;
		
		case 1:
			func_293();
			func_292();
			func_286(0);
			unk_0x38C3A68D7861DCFD(0, 44, 1);
			switch (iLocal_308)
			{
				case 1:
					if (bLocal_68)
					{
						if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 242628503) == 7)
						{
							if (iLocal_310 == 0)
							{
								unk_0xDD353D0E9C789D0E(&uLocal_77);
								unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1out_of_breath", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
								unk_0x75ABDC5F81978924(uLocal_77);
								unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), uLocal_77);
								unk_0xF82EA857DA10E0CD(&uLocal_77);
								iLocal_310 = 1;
							}
						}
						if (unk_0x5A91F08DF773C39D(iLocal_244, vLocal_356, 5f, 5f, 3f, false, true, 0) && iLocal_310 == 1)
						{
							if (iLocal_59 == 0)
							{
								sLocal_311 = "FAN1_DONE_2";
							}
							else if (iLocal_59 == 1)
							{
								sLocal_311 = "FAN1_DONE_3";
							}
							if (func_283(&uLocal_78, "FAN1AU", "FAN1_DONE", "FAN1_DONE_1", "FAN1_DONE", sLocal_311, "FAN1_DONE", "FAN1_DONE_4", "FAN1_DONE", "FAN1_DONE_5", 7, 0, 0))
							{
								iLocal_308 = 2;
							}
						}
					}
					else
					{
						func_282();
						if (func_440(iLocal_244))
						{
							unk_0x9414396734E14897(sLocal_348, unk_0x68F4C0EC296D3901(iLocal_244, true), &iVar6);
							if (iVar6 >= 125)
							{
								unk_0xDD353D0E9C789D0E(&uLocal_77);
								unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "jogging_up", 8f, -16f, -1, 262144, 0, 0, 0, 0);
								unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "jogging_on_spot", 16f, -4f, -1, 262145, 0, 0, 0, 0);
								unk_0x75ABDC5F81978924(uLocal_77);
								unk_0x78ADC381772E3D54(iLocal_244, uLocal_77);
								unk_0x0C8C0C840C2D1AD2(iLocal_244, unk_0x16F2683693E537C9(), -1, 0, 2);
								if (iLocal_59 == 0)
								{
									sLocal_311 = "FAN1_DONE_2";
								}
								else if (iLocal_59 == 1)
								{
									sLocal_311 = "FAN1_DONE_3";
								}
								if (func_283(&uLocal_78, "FAN1AU", "FAN1_DONE", "FAN1_DONE_1", "FAN1_DONE", sLocal_311, "FAN1_DONE", "FAN1_DONE_4", "FAN1_DONE", "FAN1_DONE_5", 7, 0, 0))
								{
									unk_0x8B4C4CA774181102(10f, 10f, 1);
									iLocal_308 = 2;
									unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_244, 4000, 0, 2);
									iLocal_308 = 2;
								}
							}
						}
					}
					break;
				
				case 2:
					if (bLocal_68)
					{
						switch (iLocal_309)
						{
							case 0:
								if (unk_0x40EFDB96B3112BA7() > 2)
								{
									unk_0xE03C71FA3398174A(iLocal_312);
									unk_0x70D5C5F31B79F27C(iLocal_312);
									unk_0x86F44313DFA8F00C(iLocal_312, -2008.226f, -508.2978f, 12.2798f, -9.0657f, 0f, -70.473f, 50f, 0, 1, 1, 2);
									iLocal_309 = 1;
								}
								break;
							
							case 1:
								if (func_7(iLocal_304))
								{
									unk_0xDD353D0E9C789D0E(&uLocal_77);
									unk_0x0C8C0C840C2D1AD2(0, iLocal_304, -1, 0, 2);
									unk_0x96167B03C5A77156(0, -2003.36f, -503.77f, 10.48f, 2f, 20000, 1f, 10241, 1193033728);
									unk_0x5B1D360B9C6F0A09(0, iLocal_304, 20000, -1, 1f, 1, 0);
									unk_0xBC43ED9FE28DB191(0);
									unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), 2000, 0, 2);
									unk_0xE9362E4D600DD12A(0, iLocal_304, -2014.96f, -455.47f, 10.48f, 10f, 0, iLocal_307, 8, 3f, 50f);
									unk_0xE072601B4380E9DF(0, iLocal_304, 10f, 786599);
									unk_0x75ABDC5F81978924(uLocal_77);
									unk_0x78ADC381772E3D54(iLocal_244, uLocal_77);
									unk_0xF82EA857DA10E0CD(&uLocal_77);
									unk_0xFADC0A217229F6B5(iLocal_244, true);
									unk_0xE60F2E9D36E0518D(unk_0x16F2683693E537C9(), 0, 0, 0);
									unk_0xDD353D0E9C789D0E(&uLocal_77);
									unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1out_of_breath", "base", 8f, -8f, -1, 0, 0, 0, 0, 0);
									unk_0x0C8C0C840C2D1AD2(0, iLocal_244, -1, 0, 2);
									unk_0x796BDF31572BB055(0, -2000.81f, -496.56f, 10.56f, 0);
									unk_0x75ABDC5F81978924(uLocal_77);
									unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), uLocal_77);
									unk_0xF82EA857DA10E0CD(&uLocal_77);
								}
								iLocal_308 = 3;
								break;
						}
					}
					else
					{
						func_282();
						func_280();
						if (unk_0x40EFDB96B3112BA7() > 2)
						{
							if (!bLocal_69)
							{
								if (func_7(iLocal_304))
								{
									unk_0xDD353D0E9C789D0E(&uLocal_77);
									unk_0xBC43ED9FE28DB191(0);
									unk_0x0C8C0C840C2D1AD2(0, iLocal_304, -1, 0, 2);
									unk_0x96167B03C5A77156(0, -2003.36f, -503.77f, 10.48f, 2f, 20000, 1f, 2049, 1193033728);
									unk_0x5B1D360B9C6F0A09(0, iLocal_304, 20000, -1, 2f, 1, 0);
									unk_0xBC43ED9FE28DB191(0);
									unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), 2000, 0, 2);
									unk_0xE9362E4D600DD12A(0, iLocal_304, -2018.17f, -461f, 10.56f, 10f, 0, iLocal_307, 8, 3f, 50f);
									unk_0xE9362E4D600DD12A(0, iLocal_304, -2014.96f, -455.47f, 10.48f, 10f, 0, iLocal_307, 8, 3f, 50f);
									unk_0xE072601B4380E9DF(0, iLocal_304, 10f, 786599);
									unk_0x75ABDC5F81978924(uLocal_77);
									unk_0x78ADC381772E3D54(iLocal_244, uLocal_77);
									unk_0xF82EA857DA10E0CD(&uLocal_77);
									unk_0xFADC0A217229F6B5(iLocal_244, true);
								}
							}
							else
							{
								unk_0xDD353D0E9C789D0E(&uLocal_77);
								unk_0xBC43ED9FE28DB191(0);
								unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), 2000, 0, 2);
								unk_0x96167B03C5A77156(0, -1954.1f, -450.9f, 16.77f, 2f, 20000, 1048576000, 0, 1193033728);
								unk_0x01E4BB5190DF7317(0, 1193033728, 0);
								unk_0x75ABDC5F81978924(uLocal_77);
								unk_0x78ADC381772E3D54(iLocal_244, uLocal_77);
								unk_0xF82EA857DA10E0CD(&uLocal_77);
								unk_0xFADC0A217229F6B5(iLocal_244, true);
							}
							unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_244, 6000, 0, 2);
							iLocal_308 = 3;
						}
					}
					break;
				
				case 3:
					if (bLocal_68)
					{
						if (!func_40())
						{
							if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_244, 5f, 5f, 3f, 0, 1, 0))
							{
								iLocal_308 = 4;
							}
						}
					}
					else
					{
						func_282();
						if (bLocal_69)
						{
							if (!iLocal_70)
							{
								if (func_440(iLocal_244))
								{
									unk_0xA3BF0AA5A2608191(iLocal_244);
									unk_0xDD353D0E9C789D0E(&uLocal_77);
									unk_0xBC43ED9FE28DB191(0);
									unk_0x96167B03C5A77156(0, -1954.1f, -450.9f, 16.77f, 2f, 20000, 1048576000, 0, 1193033728);
									unk_0x01E4BB5190DF7317(0, 1193033728, 0);
									unk_0x75ABDC5F81978924(uLocal_77);
									unk_0x78ADC381772E3D54(iLocal_244, uLocal_77);
									unk_0xF82EA857DA10E0CD(&uLocal_77);
									unk_0xFADC0A217229F6B5(iLocal_244, true);
									iLocal_70 = 1;
								}
							}
						}
						if (!func_40())
						{
							if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_244, 5f, 5f, 3f, 0, 1, 0))
							{
								iLocal_308 = 4;
							}
						}
					}
					break;
				
				case 4:
					if (bLocal_68)
					{
						if (!func_40())
						{
							if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_244, 5f, 5f, 3f, 0, 1, 0))
							{
								unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
								unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
								unk_0x2FB9A57162E54BAB(0f);
								unk_0xB3A1B75CB59FEB56(false, true, 3000, 1, 0, 0);
								func_271(1, 1, 1, 1);
								func_69();
							}
						}
					}
					else if (!func_40())
					{
						if (!unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iLocal_244, 5f, 5f, 3f, 0, 1, 0))
						{
							unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
							unk_0xC6EB89C59F2AF6B8(unk_0x16F2683693E537C9(), "rcmfanatic1out_of_breath", "p_zero_tired_exit", 1000f, -2f, -1, 48, 0, 0, 0, 0);
							unk_0xF895E10BF4C72645(unk_0x16F2683693E537C9(), 0, 0);
							func_69();
						}
					}
					break;
			}
			if (bLocal_68)
			{
				if (func_67(1000))
				{
					unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
					unk_0xBC43ED9FE28DB191(unk_0x16F2683693E537C9());
					unk_0x2FB9A57162E54BAB(0f);
					unk_0xB3A1B75CB59FEB56(false, false, 3000, 1, 0, 0);
					func_271(1, 1, 1, 1);
					unk_0x58EA425DFE77472C();
					func_69();
				}
			}
			else if (func_440(iLocal_244))
			{
				func_57();
				func_45();
				if (iLocal_308 > 1)
				{
					if (func_40())
					{
						if (func_44(unk_0x16F2683693E537C9(), iLocal_244, 1) > 15f)
						{
							if (!bLocal_69)
							{
								if (!unk_0x405E212DDE472467(iLocal_244, 1))
								{
									if (iLocal_308 <= 2)
									{
										if (func_7(iLocal_304))
										{
											unk_0xDD353D0E9C789D0E(&uLocal_77);
											unk_0x0C8C0C840C2D1AD2(0, iLocal_304, -1, 0, 2);
											unk_0x5B1D360B9C6F0A09(0, iLocal_304, 20000, -1, 1f, 1, 0);
											unk_0xBC43ED9FE28DB191(0);
											unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), 2000, 0, 2);
											unk_0xE9362E4D600DD12A(0, iLocal_304, -2018.17f, -461f, 10.56f, 10f, 0, iLocal_307, 8, 3f, 50f);
											unk_0xE9362E4D600DD12A(0, iLocal_304, -2024.98f, -479.55f, 10.57f, 10f, 0, iLocal_307, 8, 3f, 50f);
											unk_0xE072601B4380E9DF(0, iLocal_304, 10f, 786599);
											unk_0x75ABDC5F81978924(uLocal_77);
											unk_0x78ADC381772E3D54(iLocal_244, uLocal_77);
											unk_0xF82EA857DA10E0CD(&uLocal_77);
											unk_0xFADC0A217229F6B5(iLocal_244, true);
										}
									}
								}
							}
							else if (!iLocal_70)
							{
								if (func_440(iLocal_244))
								{
									unk_0xA3BF0AA5A2608191(iLocal_244);
									unk_0xDD353D0E9C789D0E(&uLocal_77);
									unk_0xBC43ED9FE28DB191(0);
									unk_0x96167B03C5A77156(0, -1954.1f, -450.9f, 16.77f, 2f, 20000, 1048576000, 0, 1193033728);
									unk_0x01E4BB5190DF7317(0, 1193033728, 0);
									unk_0x75ABDC5F81978924(uLocal_77);
									unk_0x78ADC381772E3D54(iLocal_244, uLocal_77);
									unk_0xF82EA857DA10E0CD(&uLocal_77);
									unk_0xFADC0A217229F6B5(iLocal_244, true);
									iLocal_70 = 1;
								}
							}
							func_15();
							iLocal_308 = 4;
						}
					}
				}
			}
			break;
	}
}

float func_44(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	if (!unk_0x437347B10A200C4B(iParam1, 0))
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, true) };
	}
	else
	{
		vVar1 = { unk_0x68F4C0EC296D3901(iParam1, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vVar1, bParam2);
}

void func_45()
{
	if ((((iLocal_56 != 7 && iLocal_56 != 10) && iLocal_56 != 8) && iLocal_56 != 10) && iLocal_56 != 9)
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (Local_75.f_1 == 0)
			{
				func_56(Local_75, -1);
				Local_75.f_1 = 1;
			}
			if (func_46(iLocal_244, 1126825984) || func_298(unk_0x16F2683693E537C9(), iLocal_244) < 7f)
			{
				iLocal_57 = iLocal_56;
				iLocal_55 = 0;
				iLocal_56 = 7;
			}
		}
	}
	else if (iLocal_56 == 8)
	{
		if (iLocal_308 != 4)
		{
			if (func_7(iLocal_304))
			{
				if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_304, 0))
				{
					bLocal_69 = true;
				}
			}
		}
	}
}

bool func_46(int iParam0, float fParam1)
{
	return func_47(iParam0, unk_0x16F2683693E537C9(), fParam1, 1, 250, 7);
}

bool func_47(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = func_55(iParam0, iParam1);
	if (!func_440(iParam0) || !func_440(iParam1))
	{
		if (iVar2 != -1)
		{
			func_54(&(Local_38[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_51(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_50();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_38[iVar2 /*4*/].f_1 = iParam0;
		Local_38[iVar2 /*4*/].f_2 = iParam1;
	}
	vVar1 = { unk_0x64430C979F516F7A(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_48(&(Local_38[iVar2 /*4*/]), vVar1, iParam1, &(Local_38[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x1C0640BA9A7327B3() - Local_38[iVar2 /*4*/].f_3) < iParam4);
}

int func_48(var uParam0, vector3 vParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_440(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		vVar1 = { func_49(iParam2, iParam5) };
		*uParam0 = unk_0xCD02F8660C47B801(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0x1EC301670B54C6DE(*uParam0, &uVar0, &vVar1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0xEC560E589DF8370E(iVar3))
	{
		func_440(iVar3);
		if (unk_0x940C1429253D3B1B(iVar3) == iParam2)
		{
			if (bLocal_39)
			{
				unk_0xBA5BBB3ADDA49094(vParam1, unk_0x68F4C0EC296D3901(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x1C0640BA9A7327B3();
			return 1;
		}
		return 0;
	}
	if (unk_0xE2F1E99DD161A861(iVar3))
	{
		func_440(iVar3);
		if (unk_0x405E212DDE472467(iParam2, 0))
		{
			if (unk_0x96A5FE5834B81CE7(iVar3) == unk_0x6937EA2286828455(iParam2, 0))
			{
				if (bLocal_39)
				{
					unk_0xBA5BBB3ADDA49094(vParam1, unk_0x68F4C0EC296D3901(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x1C0640BA9A7327B3();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_49(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x09AC81E49EA267F7(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x68F4C0EC296D3901(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return unk_0x64430C979F516F7A(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x64430C979F516F7A(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x64430C979F516F7A(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x64430C979F516F7A(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x64430C979F516F7A(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x64430C979F516F7A(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x68F4C0EC296D3901(iParam0, true);
}

int func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if ((Local_38[iVar0 /*4*/] == 0 && Local_38[iVar0 /*4*/].f_1 == 0) && Local_38[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_51(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_53(unk_0x68F4C0EC296D3901(iParam1, true) - unk_0x68F4C0EC296D3901(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar1 = { func_53(unk_0x64430C979F516F7A(iParam0, 31086, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_52(vVar1, vVar0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_52(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_53(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_54(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_55(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38)
	{
		if (Local_38[iVar0 /*4*/].f_1 == iParam0 && Local_38[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_56(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

void func_57()
{
	if (unk_0x437347B10A200C4B(iLocal_244, 0))
	{
		if (func_40())
		{
			func_39("stop scripted conversation at CHECK_IF_MARY_ANN_IS_INJURED_KILLED_OR_SCARED 1");
			func_37();
		}
		func_39("Mary Ann killed");
		unk_0xC92DB9682A650680("RC6A_FAIL");
		iLocal_58 = 0;
		iLocal_55 = 0;
		iLocal_56 = 10;
	}
	else
	{
		if (unk_0xB87D13D0C064E9D1(iLocal_244, unk_0x16F2683693E537C9(), 1))
		{
			if (func_40())
			{
				func_39("stop scripted conversation at CHECK_IF_MARY_ANN_IS_INJURED_KILLED_OR_SCARED 2");
				func_37();
			}
			func_39("Mary Ann injured by player");
			unk_0xC92DB9682A650680("RC6A_FAIL");
			iLocal_58 = 1;
			iLocal_55 = 0;
			iLocal_56 = 10;
		}
		if (unk_0x0361981EE62202D8(iLocal_244, 0, 2))
		{
			if (func_40())
			{
				func_39("stop scripted conversation at CHECK_IF_MARY_ANN_IS_INJURED_KILLED_OR_SCARED 3");
				func_37();
			}
			func_39("Mary Ann injured by some form of weapon");
			unk_0xC92DB9682A650680("RC6A_FAIL");
			iLocal_58 = 1;
			iLocal_55 = 0;
			iLocal_56 = 10;
		}
	}
	if (iLocal_258 == 1)
	{
		func_39("Mary Ann scared");
		if (func_440(iLocal_244))
		{
			unk_0xA3BF0AA5A2608191(iLocal_244);
		}
		unk_0xC92DB9682A650680("RC6A_FAIL");
		iLocal_58 = 2;
		iLocal_55 = 0;
		iLocal_56 = 10;
	}
	else if (func_440(iLocal_244))
	{
		if ((func_62(iLocal_244, 1, 0, 0, 0) || func_58(iLocal_244, 1, 1116471296, 1126825984, 0, 0, 0, 0)) || unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iLocal_244, true), 10f, 0))
		{
			if (func_40())
			{
				func_39("Killing any convo before scared convo");
				func_37();
			}
			iLocal_258 = 1;
		}
	}
}

int func_58(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	vector3 vVar0;
	
	if (func_440(unk_0x16F2683693E537C9()) && func_440(iParam0))
	{
		if (unk_0xB87D13D0C064E9D1(iParam0, unk_0x16F2683693E537C9(), 1))
		{
			return 1;
		}
		if (func_62(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
		{
			if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
			{
				vVar0 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) - unk_0x68F4C0EC296D3901(iParam0, true) };
				if ((((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) + (vVar0.z * vVar0.z)) <= 5f)
				{
					return func_61(unk_0x16F2683693E537C9(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_59(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_59(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_440(unk_0x16F2683693E537C9()) && func_440(iParam0))
	{
		if (func_60(iParam0) || unk_0x292E02BF8ABF889C(unk_0xD803B885F5E47A62(), iParam0))
		{
			if (unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_46(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	if (unk_0xD3AB958FFC730661(unk_0xD803B885F5E47A62(), iParam0) && unk_0x03A10A5707B2BB1F(unk_0x16F2683693E537C9(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_61(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x08D89CE2E20AE305(iParam0) };
	vVar1 = { unk_0x68F4C0EC296D3901(iParam1, true) - unk_0x68F4C0EC296D3901(iParam0, true) };
	return (((vVar0.x * vVar1.x) + (vVar0.y * vVar1.y)) / vdist(vVar1, 0f, 0f, 0f)) > cos(fParam2);
}

int func_62(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_440(unk_0x16F2683693E537C9()) && func_440(iParam0))
	{
		unk_0xCAE036C45E7FC720(unk_0x16F2683693E537C9(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_66(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_63(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x52AE17073D025311(unk_0x16F2683693E537C9()))
			{
				if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
				{
					if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, true), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_66(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_63(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_63(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	vVar1 = { vVar0 };
	vVar0.x = (vVar0.x - fParam1);
	vVar0.y = (vVar0.y - fParam1);
	vVar0.z = (vVar0.z - fParam1);
	vVar1.x = (vVar1.x + fParam1);
	vVar1.y = (vVar1.y + fParam1);
	vVar1.z = (vVar1.z + fParam1);
	if (bParam2)
	{
		if (((unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, true), joaat("weapon_grenade"), fParam1, 1) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, true), joaat("weapon_molotov"), fParam1, 1)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, true), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x0A4F3CD1EDAEF9D0(unk_0x68F4C0EC296D3901(iParam0, true), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_64(iParam0, fParam1))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_64(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x723EE7F83DF1497D(vVar0, vVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_64(int iParam0, float fParam1)
{
	var uVar0;
	vector3 vVar1;
	
	if ((((unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || unk_0x68E45B0EC23881A7(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_65(iParam0, vVar1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0, vector3 vParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	vVar0 = { func_53(vParam1 - unk_0x68F4C0EC296D3901(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		vVar1 = { unk_0x08D89CE2E20AE305(iParam0) };
	}
	else
	{
		vVar1 = { func_53(unk_0x64430C979F516F7A(iParam0, 31086, 0f, 5f, 0f) - unk_0x64430C979F516F7A(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_52(vVar1, vVar0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_66(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
		{
			if (unk_0x12DE711B1C681E9E(unk_0x16F2683693E537C9(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xD3DCEC81D13AAFB1(unk_0x68F4C0EC296D3901(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_67(int iParam0)
{
	if (unk_0x0F1CCD77290EE12F())
	{
		if ((unk_0x1C0640BA9A7327B3() - Global_28) > iParam0)
		{
			Global_27 = unk_0x1C0640BA9A7327B3();
		}
		Global_28 = unk_0x1C0640BA9A7327B3();
		if ((unk_0x1C0640BA9A7327B3() - Global_27) > iParam0)
		{
			if (func_68())
			{
				Global_27 = unk_0x1C0640BA9A7327B3();
				return 1;
			}
		}
	}
	return 0;
}

int func_68()
{
	if (unk_0x798A3F1296751F46())
	{
		return 0;
	}
	if (unk_0xBFC0798A6E3417F9(0, 18) || unk_0xBFC0798A6E3417F9(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_69()
{
	if (unk_0x25037C66EB32B076())
	{
		func_39("Stopping scripted convo at script_passed");
		func_37();
	}
	if (iLocal_59 != 1)
	{
		func_270(763);
	}
	unk_0x790015DC92C918E2();
	func_263(61, 0, 1);
	func_70(85, 1);
	func_454();
}

void func_70(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_261();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_110725[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_110725[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_110725[iVar0 /*10*/].f_6)
	{
		return;
	}
	func_232(iVar0, 0);
	unk_0x5D96D8530B3D0904(&Global_76870, 1);
	if (Global_110725[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		func_231(&(Global_110725[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
			unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			unk_0x2DA3D7F5B74119E5(5000);
		}
	}
	func_219(iVar0, 1, 0, 0);
	func_218(0, 0);
	MemCopy(&sVar1, {func_216(iVar0)}, 4);
	func_214(&sVar1, func_215());
	func_97();
	if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_10011.f_25, 3))
	{
		func_96();
	}
	func_78();
	if (iParam0 == 210 || iParam0 == 211)
	{
		func_72(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		func_72(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		func_72(iParam0, 0, 0);
	}
	func_71();
}

int func_71()
{
	if (func_452(0))
	{
		return 0;
	}
	if (Global_98783.f_8)
	{
		if (Global_98783.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98783.f_10 > 1)
	{
		return 0;
	}
	Global_98783.f_10++;
	return 1;
}

void func_72(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_76((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111638.f_10189[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111638.f_10189[iParam0 /*12*/].f_6 == 11 || Global_111638.f_10189[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111638.f_10189[iParam0 /*12*/].f_5 = 1;
		Global_111638.f_10189[iParam0 /*12*/].f_10 = iParam1;
		Global_111638.f_10189[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE7B2B6A56C007908(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_73();
	}
}

void func_73()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_111374 = 0;
	Global_111375 = 0;
	Global_111376 = 0;
	Global_111377 = 0;
	Global_111378 = 0;
	Global_111379 = 0;
	Global_111380 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111638.f_10189.f_3853;
	Global_111638.f_10189.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111638.f_10189[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111638.f_10189[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111374++;
					fVar1 = (fVar1 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111375++;
					fVar2 = (fVar2 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111376++;
					fVar3 = (fVar3 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111377++;
					fVar4 = (fVar4 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111378++;
					fVar5 = (fVar5 + (Global_111638.f_10189[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111379++;
					fVar6 = (fVar6 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111380++;
					fVar7 = (fVar7 + Global_111638.f_10189[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111357 > 0)
	{
		if (Global_111374 == Global_111357)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111358 > 0)
	{
		if (Global_111375 == Global_111358)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111359 > 0)
	{
		if (Global_111376 == Global_111359)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111360 > 0)
	{
		if (Global_111377 == Global_111360)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111361 > 0)
	{
		if (((Global_111378 == Global_111361 || (Global_111361 * 10 / Global_111378) < 41) || Global_111378 > Global_111364) || Global_111378 == Global_111364)
		{
			if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_10189.f_3856, 14))
			{
				if (Global_111378 == Global_111361)
				{
					unk_0xE7B2B6A56C007908(joaat("num_rndevents_completed"), Global_111361, 0);
					unk_0x5D96D8530B3D0904(&(Global_111638.f_10189.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111362 > 0)
	{
		if (Global_111379 == Global_111362)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111363 > 0)
	{
		if (Global_111380 == Global_111363)
		{
			fVar7 = 5f;
		}
	}
	Global_111638.f_10189.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111378 > Global_111364 || Global_111378 == Global_111364)
	{
		iVar9 = Global_111364;
	}
	else
	{
		iVar9 = Global_111378;
	}
	unk_0xCDC520E5E48E63D9(joaat("num_missions_completed"), Global_111374, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_missions_available"), Global_111357, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_completed"), Global_111375, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_minigames_available"), Global_111358, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_completed"), Global_111376, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_oddjobs_available"), Global_111359, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_completed"), Global_111377, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndpeople_available"), Global_111360, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_rndevents_available"), Global_111364, 1);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_completed"), (Global_111380 + Global_111379), 1);
	unk_0xCDC520E5E48E63D9(joaat("num_misc_available"), (Global_111363 + Global_111362), 1);
	Global_111381 = (Global_111374 * 100 / Global_111357);
	Global_111383 = ((Global_111376 + Global_111375) * 100 / (Global_111359 + Global_111358));
	Global_111382 = ((Global_111377 + iVar9) * 100 / (Global_111360 + Global_111364));
	Global_111384 = ((Global_111379 + Global_111380) * 100 / (Global_111362 + Global_111363));
	unk_0x11F69E56D7B5F3C7(joaat("total_progress_made"), Global_111638.f_10189.f_3853, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_story_missions"), Global_111381, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_ambient_missions"), Global_111382, 1);
	unk_0xCDC520E5E48E63D9(joaat("percent_oddjobs"), Global_111383, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_111638.f_10189.f_3853))
	{
		func_75(13, floor(Global_111638.f_10189.f_3853));
	}
	if (!unk_0xBA972B2C9F1D30C1())
	{
		if (!Global_76622)
		{
			if (func_74() == 2 == 0 && !unk_0x8CD06866876216F2())
			{
				if (unk_0xE6725CC0C55B6CA1())
				{
					Global_111372 = 0;
				}
				if (!Global_61512)
				{
					func_71();
				}
			}
		}
	}
}

int func_74()
{
	return Global_30768;
}

int func_75(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xBD47F720AB99D749(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x12ABC45272B87562(iParam0, iParam1);
	}
	return 0;
}

int func_76(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	if (iParam2 == -1)
	{
		iParam2 = func_77();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x04D746E8DA20611E((iParam0 - 0)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x04D746E8DA20611E((iParam0 - 192)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x04D746E8DA20611E((iParam0 - 513)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xF2BABBC2CEBE4CE7((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x04D746E8DA20611E((iParam0 - 705)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61B9EF786FB4440A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x04D746E8DA20611E((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61B9EF786FB4440A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x04D746E8DA20611E((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x5748837B16D6E66B((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x04D746E8DA20611E((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x5748837B16D6E66B((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x04D746E8DA20611E((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x5748837B16D6E66B((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x04D746E8DA20611E((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x5748837B16D6E66B((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x04D746E8DA20611E((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x5748837B16D6E66B((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x04D746E8DA20611E((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x5748837B16D6E66B((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x04D746E8DA20611E((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x5748837B16D6E66B((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x04D746E8DA20611E((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x5748837B16D6E66B((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x04D746E8DA20611E((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x5748837B16D6E66B((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x04D746E8DA20611E((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x5748837B16D6E66B((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x04D746E8DA20611E((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x5748837B16D6E66B((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x04D746E8DA20611E((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x5748837B16D6E66B((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x04D746E8DA20611E((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x5748837B16D6E66B((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x04D746E8DA20611E((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x5748837B16D6E66B((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x04D746E8DA20611E((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x5748837B16D6E66B((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x04D746E8DA20611E((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x5748837B16D6E66B((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x04D746E8DA20611E((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x5748837B16D6E66B((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x04D746E8DA20611E((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC5640EC0413ECC40(iVar24, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_77()
{
	return Global_1312745;
}

void func_78()
{
	func_95();
	func_87();
	func_83();
	func_82();
	func_81();
	func_80();
	Global_98781 = 0;
	Global_92919 = -1;
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 17);
	Global_98779 = 0;
	unk_0x65C5EBCA17A891FC(0);
	unk_0x4DB69487E1A9EE2A(0);
	unk_0x67E5ECB8FD7F5018(1);
	unk_0xD99B71B9E48EB0E6(1);
	unk_0x2C84016B4A95F6BA(1);
	func_79(0);
}

void func_79(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_98744.f_20), 13);
	}
}

void func_80()
{
	Global_76862 = { 0f, 0f, 0f };
	Global_76865 = 0f;
	Global_98744.f_21 = 145;
}

void func_81()
{
	StringCopy(&Global_76854, "", 16);
	StringCopy(&Global_76858, "", 16);
}

void func_82()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_98744.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_83()
{
	Global_98744 = 13;
	Global_98744.f_1 = -1;
	Global_98744.f_2 = 0;
	Global_98744.f_30 = 0f;
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 25);
	Global_98778 = 0;
	func_86(0);
	func_85();
	func_84();
	Global_98744.f_18 = -1;
	Global_98744.f_19 = -1;
}

void func_84()
{
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 22);
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 8);
}

void func_85()
{
	if (Global_98744.f_16 != 0)
	{
		unk_0xE17FDF9E3068281B(&(Global_98744.f_16));
		Global_98744.f_16 = 0;
	}
	if (Global_98744.f_17 != 0)
	{
		unk_0xE17FDF9E3068281B(&(Global_98744.f_17));
		Global_98744.f_17 = 0;
	}
}

void func_86(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_41980 = 1;
	}
	else
	{
		Global_41980 = 0;
	}
}

void func_87()
{
	func_88(&Global_105187);
}

void func_88(var uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 145;
	func_94(&(uParam0->f_1));
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_9[iVar1] = -1;
		uParam0->f_13[iVar1] = 0;
		uParam0->f_17[iVar1] = 0;
		uParam0->f_21[iVar1] = 0;
		func_93(&(uParam0->f_25[0 /*295*/][iVar1 /*98*/]));
		func_93(&(uParam0->f_25[1 /*295*/][iVar1 /*98*/]));
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_616[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_26[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_616[iVar1 /*65*/].f_59 = 0;
		uParam0->f_616[iVar1 /*65*/].f_60 = -99;
		uParam0->f_616[iVar1 /*65*/].f_61 = 2;
		uParam0->f_616[iVar1 /*65*/].f_62 = 0;
		uParam0->f_616[iVar1 /*65*/].f_63 = -99;
		uParam0->f_616[iVar1 /*65*/].f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_1 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_2 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_3 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/].f_4 = 0;
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_1 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_2 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_3 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/].f_4 = 0;
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_2244[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			uParam0->f_2244[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_2244[iVar1 /*32*/].f_16[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_2341[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = 0;
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_92(&(uParam0->f_2884));
	func_90(&(uParam0->f_2890));
	func_89(&(uParam0->f_2980));
}

void func_89(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_90(var uParam0)
{
	func_91(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

void func_91(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_92(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_93(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		uParam0->f_11[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_27), "", 16);
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		uParam0->f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_81[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
}

void func_94(var uParam0)
{
	*uParam0 = -15;
}

void func_95()
{
	StringCopy(&Global_102195, "", 32);
	func_88(&Global_102203);
}

void func_96()
{
	if (Global_8161[0 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_8161[0 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_8161[1 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_8161[1 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_8161[2 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_8161[2 /*2811*/][0 /*281*/].f_259 = 2;
	}
	unk_0x5D96D8530B3D0904(&Global_7356, 25);
	unk_0x5D96D8530B3D0904(&Global_7357, 11);
}

void func_97()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_96113[iVar0];
		if (unk_0xC844350D5D58C99A(iVar1) && !unk_0xEB6A8945D1AC98A1(iVar1))
		{
			iVar3 = func_31(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_213(iVar1, 14, iVar2))
				{
					func_98(iVar1, 14, iVar2);
				}
				if (Global_111638.f_2358.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_111638.f_2358.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_98(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (unk_0xEB6A8945D1AC98A1(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	Global_76434[1 /*14*/] = { func_149(iVar0, iParam1, iParam2, -1) };
	if (!unk_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_213(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { func_145(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_98(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar5 = { func_142(iVar0, iParam2) };
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			if (!func_98(iParam0, 14, uVar5[iVar3]))
			{
				iVar4 = 0;
			}
			iVar3++;
		}
		return iVar4;
	}
	else if (iParam1 == 14)
	{
		unk_0x3BFC3B9ADD2EE7B7(iParam0, Global_76434[1 /*14*/].f_12);
	}
	else
	{
		uVar6 = { func_145(iVar0, 0) };
		Global_76434[1 /*14*/] = { func_149(iVar0, iParam1, uVar6[iParam1], -1) };
		if (unk_0xD2C792E5A65B6BF1(iParam0, func_141(iParam1)) > 0 && unk_0x0F84621831DD8D8A(iParam0, func_141(iParam1), Global_76434[1 /*14*/].f_3) > 0)
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_141(iParam1), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, 0);
		}
	}
	if (func_140(iParam0, iVar0, &iVar7, 0))
	{
		func_101(iParam0, 2, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_99(iParam0, iVar0, &iVar7))
	{
		func_101(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_99(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_100(iParam1);
	if (Global_111638.f_2358.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_213(iParam0, Global_111638.f_2358.f_539[iVar0 /*65*/].f_64, Global_111638.f_2358.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_62;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_63 = -99;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

int func_101(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	
	if (unk_0xEB6A8945D1AC98A1(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_76432++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x134B62B726CEC8E6(iParam0);
	if (iParam5 == 0)
	{
		Global_76434[1 /*14*/] = { func_149(iVar10, iParam1, iParam2, -1) };
		if (!func_139(iParam3))
		{
			Global_76432 = (Global_76432 - 1);
			return 0;
		}
		func_132(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_130(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_130(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_129(iParam0, 1);
			if (!func_128(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_129(iParam0, 0);
			if (!func_127(iVar10, 14, iVar8, -1) && !func_126(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_129(iParam0, 2);
			}
		}
		unk_0xFFE16595F5CF81E9(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_76477 };
		}
		else
		{
			uVar11 = { func_145(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_76434[1 /*14*/] = { func_149(iVar10, iVar0, uVar11[iVar0], -1) };
				if (unk_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar12 = 9;
						if (iParam5 == 1)
						{
							uVar12 = { Global_76494 };
						}
						else
						{
							uVar12 = { func_142(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_76434[1 /*14*/] = { func_149(iVar10, 14, uVar12[iVar1], -1) };
							func_117(iParam0, Global_76434[1 /*14*/].f_12, Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4);
							func_132(14);
							if (Global_76432 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_109(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_101(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_108(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x64F9F278AB9DCA2C(iParam0, func_141(iVar0), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, unk_0xAA973E78065E07A0(iParam0, func_141(iVar0)));
						}
						else
						{
							unk_0x64F9F278AB9DCA2C(iParam0, func_141(iVar0), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, iParam4);
						}
						func_132(iVar0);
						if (Global_76432 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_109(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_101(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76434[1 /*14*/] = { func_149(iVar10, iVar0, func_107(iParam0, iVar0, -1), -1) };
				if (unk_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_140(iParam0, iVar10, &iVar4, 1))
							{
								func_101(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { func_145(iVar10, 0) };
						func_101(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_149(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (func_105(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_101(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_149(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (func_105(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_101(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_149(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (func_105(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_101(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_149(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (func_105(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_101(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { func_149(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (func_105(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_101(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { func_142(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76434[1 /*14*/] = { func_149(iVar10, 14, uVar15[iVar1], -1) };
			func_117(iParam0, Global_76434[1 /*14*/].f_12, Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4);
			func_132(14);
			if (Global_76432 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_109(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_101(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_117(iParam0, Global_76434[1 /*14*/].f_12, Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4);
		func_132(iParam1);
		if (Global_76432 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_109(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_101(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_141(iParam1), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, unk_0xAA973E78065E07A0(iParam0, func_141(iParam1)));
		}
		else
		{
			unk_0x64F9F278AB9DCA2C(iParam0, func_141(iParam1), Global_76434[1 /*14*/].f_3, Global_76434[1 /*14*/].f_4, iParam4);
		}
		if (Global_76432 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_109(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_101(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_102(iVar10, iParam1, iParam2);
		}
	}
	if (Global_76432 == 1)
	{
		if (func_140(iParam0, iVar10, &iVar4, 0))
		{
			func_101(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_99(iParam0, iVar10, &iVar4))
		{
			func_101(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_76432 = (Global_76432 - 1);
	return 1;
}

void func_102(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_104(iParam0, 12, iVar0))
	{
		if (func_103(iParam0, iParam1, iParam2))
		{
			iVar1 = func_100(iParam0);
			if (iParam1 == 3)
			{
				Global_111638.f_2358.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_111638.f_2358.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_103(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_104(int iParam0, int iParam1, int iParam2)
{
	Global_76434[1 /*14*/] = { func_149(iParam0, iParam1, iParam2, -1) };
	return unk_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 2);
}

int func_105(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_142(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_106(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_128(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_127(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_126(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_128(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_127(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_126(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_128(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_127(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_126(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_107(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xEB6A8945D1AC98A1(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_213(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_213(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_129(iParam0, iParam2);
			}
		}
		else
		{
			return func_130(iParam0, iParam1);
		}
	}
	return -99;
}

int func_108(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_100(iParam0);
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_130(iParam0, 1);
				iVar0 = func_116(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_130(iParam0, 2);
				iVar0 = func_116(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_108(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_115(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_114(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_113(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_113(iParam0, 3, 135, 150))
									{
										iVar0 = func_112(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case 79:
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_113(iParam0, 3, 209, 222))
									{
										iVar0 = func_112(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_113(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_112(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_112(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_112(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_112(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_113(iParam0, 3, 176, 191) && !func_113(iParam0, 3, 227, 242))
									{
										iVar0 = func_112(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_130(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_130(iParam0, 11);
								iVar5 = func_111(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_130(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_110(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_130(iParam0, 8);
								iVar8 = func_130(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_111(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_111(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_130(iParam0, 11);
								iVar0 = func_111(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_110(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_111(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_112(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_112(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_112(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_104(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_113(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_130(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_114(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_115(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_100(iParam0);
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_111638.f_2358.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_116(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_117(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0x3BFC3B9ADD2EE7B7(iParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0x4E885A246A9D983A(iParam0, 34, false);
			unk_0x4E885A246A9D983A(iParam0, 36, false);
		}
	}
	else
	{
		unk_0x9A28E8CB86CD4694(iParam0, iParam1, iParam2, iParam3, unk_0x8CD06866876216F2());
		if (iParam1 == 0)
		{
			iVar0 = func_122(iParam0, iParam2, iParam3, iParam1);
			if (func_118(unk_0x134B62B726CEC8E6(iParam0), 14, iVar0, unk_0xD1BC07002824FE76(iParam0, 0, iParam2, iParam3)))
			{
				unk_0x4E885A246A9D983A(iParam0, 34, true);
				unk_0x4E885A246A9D983A(iParam0, 36, true);
			}
			else
			{
				unk_0x4E885A246A9D983A(iParam0, 34, false);
				unk_0x4E885A246A9D983A(iParam0, 36, false);
			}
		}
	}
}

int func_118(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_119(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x1A5A491D253EA7BA(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_119(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x1A5A491D253EA7BA(iParam3, -1033433901, 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_119(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar2 = 0;
		iVar3 = (iParam1 - func_121(iParam0));
		if (iVar3 < 0)
		{
			return -1;
		}
		iVar4 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			unk_0x4F79808059300187(iVar1, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var5);
		iVar7 = 0;
		iVar8 = (iParam1 - func_120(iParam0, func_141(iParam2)));
		if (iVar8 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76556.f_26[iParam2] && iParam1 == Global_76556[iParam2]) && Global_76556.f_13[iParam2] != 0)
		{
			return Global_76556.f_13[iParam2];
		}
		iVar9 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 0, -1, func_141(iParam2));
		iVar6 = 0;
		while (iVar6 < iVar9)
		{
			unk_0xC578687D5A643830(iVar6, &Var5);
			if (!unk_0x232048AB4B0E0259(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_76556.f_13[iParam2] = Var5.f_1;
					Global_76556[iParam2] = iParam1;
					Global_76556.f_26[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return -1;
}

int func_120(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_122(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_125(iParam3);
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	iVar1 = unk_0xD1BC07002824FE76(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_124(unk_0x134B62B726CEC8E6(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_124(unk_0x134B62B726CEC8E6(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xB0D40A53430D217C(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0xFEDCD54A497F3495(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_123(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_125(iParam3);
}

int func_123(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_124(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var0);
		iVar2 = 0;
		iVar3 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			unk_0x4F79808059300187(iVar1, &Var0);
			if (!unk_0x232048AB4B0E0259(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_121(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var4);
		iVar6 = 0;
		iVar7 = unk_0xF6900DA2D9CD7BC5(iParam3, 7, -1, 0, -1, func_141(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			unk_0xC578687D5A643830(iVar5, &Var4);
			if (!unk_0x232048AB4B0E0259(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_120(iParam0, func_141(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_126(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_119(iParam0, iParam2, 14, 3);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 1) || unk_0x1A5A491D253EA7BA(func_119(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_119(iParam0, iParam2, 1, 3);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(func_119(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_119(iParam0, iParam2, 14, 4);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 1) || unk_0x1A5A491D253EA7BA(func_119(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_119(iParam0, iParam2, 1, 4);
						}
						return (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(func_119(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_127(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_119(iParam0, iParam2, 1, 3);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_119(iParam0, iParam2, 1, 4);
					}
					if (unk_0x1A5A491D253EA7BA(iParam3, -1757550583, 0) || unk_0x1A5A491D253EA7BA(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_128(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_119(iParam0, iParam2, 14, 3);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 97230661, 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_119(iParam0, iParam2, 14, 4);
					}
					return unk_0x1A5A491D253EA7BA(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_129(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x98F1B512A2CC07C5(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_125(iParam1);
	}
	iVar1 = unk_0x22286A85EDEAEC56(iParam0, iParam1);
	return func_122(iParam0, iVar0, iVar1, iParam1);
}

int func_130(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return -99;
	}
	iVar0 = func_141(iParam1);
	iVar1 = unk_0x36C584991B4C183F(iParam0, iVar0);
	iVar2 = unk_0xDADA8E1DD0D0D9D9(iParam0, iVar0);
	return func_131(iParam0, iVar1, iVar2, iParam1);
}

int func_131(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_141(iParam3);
	iVar1 = unk_0xD2C792E5A65B6BF1(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x0F84621831DD8D8A(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

void func_132(int iParam0)
{
	if (unk_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 1) && !unk_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 6))
	{
		func_138(iParam0, Global_76434[1 /*14*/].f_5, Global_76434[1 /*14*/].f_2, 2, Global_76434[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 1) && unk_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_133(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_133(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_133(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_133(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_137(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_136(iVar2, iVar0, 0);
		unk_0x5D96D8530B3D0904(&iVar3, iVar1);
		func_134(iVar2, iVar3, iVar0, 1, 0);
	}
}

void func_134(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_135(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_135(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_77();
		if (iVar1 > -1)
		{
			Global_2548146 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2548146 = 1;
		}
	}
	return iVar0;
}

int func_136(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_135(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_137(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 11511;
	if ((bParam4 && Global_4267094) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4267094)
		{
			iVar0 = unk_0xFAB100617491B764(iParam0);
		}
		else
		{
			iVar0 = unk_0xCE50BA51F0598785(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0xFAB100617491B764(iParam0);
	}
	else
	{
		iVar0 = unk_0xCE50BA51F0598785(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2451;
					break;
				
				case 42:
					*uParam2 = 2452;
					break;
				
				case 43:
					*uParam2 = 2453;
					break;
				
				case 44:
					*uParam2 = 2454;
					break;
				
				case 45:
					*uParam2 = 2455;
					break;
				
				case 46:
					*uParam2 = 2456;
					break;
				
				case 47:
					*uParam2 = 2457;
					break;
				
				case 48:
					*uParam2 = 2458;
					break;
				
				case 49:
					*uParam2 = 2459;
					break;
				
				case 50:
					*uParam2 = 2460;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3196;
					break;
				
				case 63:
					*uParam2 = 3197;
					break;
				
				case 64:
					*uParam2 = 3198;
					break;
				
				case 65:
					*uParam2 = 3199;
					break;
				
				case 66:
					*uParam2 = 3200;
					break;
				
				case 67:
					*uParam2 = 3201;
					break;
				
				case 68:
					*uParam2 = 3669;
					break;
				
				case 69:
					*uParam2 = 3670;
					break;
				
				case 70:
					*uParam2 = 3671;
					break;
				
				case 71:
					*uParam2 = 3672;
					break;
				
				case 72:
					*uParam2 = 3673;
					break;
				
				case 73:
					*uParam2 = 3674;
					break;
				
				case 74:
					*uParam2 = 3675;
					break;
				
				case 75:
					*uParam2 = 3676;
					break;
				
				case 76:
					*uParam2 = 3677;
					break;
				
				case 77:
					*uParam2 = 3678;
					break;
				
				case 78:
					*uParam2 = 3792;
					break;
				
				case 79:
					*uParam2 = 3793;
					break;
				
				case 80:
					*uParam2 = 3794;
					break;
				
				case 81:
					*uParam2 = 3795;
					break;
				
				case 82:
					*uParam2 = 3796;
					break;
				
				case 83:
					*uParam2 = 3797;
					break;
				
				case 84:
					*uParam2 = 3798;
					break;
				
				case 85:
					*uParam2 = 3799;
					break;
				
				case 86:
					*uParam2 = 3902;
					break;
				
				case 87:
					*uParam2 = 3903;
					break;
				
				case 88:
					*uParam2 = 3904;
					break;
				
				case 89:
					*uParam2 = 5337;
					break;
				
				case 90:
					*uParam2 = 5338;
					break;
				
				case 91:
					*uParam2 = 5339;
					break;
				
				case 92:
					*uParam2 = 5340;
					break;
				
				case 93:
					*uParam2 = 5341;
					break;
				
				case 94:
					*uParam2 = 5342;
					break;
				
				case 95:
					*uParam2 = 5343;
					break;
				
				case 96:
					*uParam2 = 5344;
					break;
				
				case 97:
					*uParam2 = 5345;
					break;
				
				case 98:
					*uParam2 = 5346;
					break;
				
				case 99:
					*uParam2 = 5347;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5348;
					break;
				
				case 101:
					*uParam2 = 5394;
					break;
				
				case 102:
					*uParam2 = 5395;
					break;
				
				case 103:
					*uParam2 = 5396;
					break;
				
				case 104:
					*uParam2 = 5397;
					break;
				
				case 105:
					*uParam2 = 5398;
					break;
				
				case 106:
					*uParam2 = 5399;
					break;
				
				case 107:
					*uParam2 = 5400;
					break;
				
				case 108:
					*uParam2 = 5401;
					break;
				
				case 109:
					*uParam2 = 5402;
					break;
				
				case 110:
					*uParam2 = 5403;
					break;
				
				case 111:
					*uParam2 = 5404;
					break;
				
				case 112:
					*uParam2 = 5405;
					break;
				
				case 113:
					*uParam2 = 5406;
					break;
				
				case 114:
					*uParam2 = 5407;
					break;
				
				case 115:
					*uParam2 = 5408;
					break;
				
				case 116:
					*uParam2 = 5409;
					break;
				
				case 117:
					*uParam2 = 5410;
					break;
				
				case 118:
					*uParam2 = 5411;
					break;
				
				case 119:
					*uParam2 = 5412;
					break;
				
				case 120:
					*uParam2 = 5413;
					break;
				
				case 121:
					*uParam2 = 5414;
					break;
				
				case 122:
					*uParam2 = 5415;
					break;
				
				case 123:
					*uParam2 = 5416;
					break;
				
				case 124:
					*uParam2 = 6122;
					break;
				
				case 125:
					*uParam2 = 6123;
					break;
				
				case 126:
					*uParam2 = 6124;
					break;
				
				case 127:
					*uParam2 = 6125;
					break;
				
				case 128:
					*uParam2 = 6126;
					break;
				
				case 129:
					*uParam2 = 6127;
					break;
				
				case 130:
					*uParam2 = 6128;
					break;
				
				case 131:
					*uParam2 = 6129;
					break;
				
				case 132:
					*uParam2 = 6130;
					break;
				
				case 133:
					*uParam2 = 6131;
					break;
				
				case 134:
					*uParam2 = 6132;
					break;
				
				case 135:
					*uParam2 = 6133;
					break;
				
				case 136:
					*uParam2 = 6134;
					break;
				
				case 137:
					*uParam2 = 6135;
					break;
				
				case 138:
					*uParam2 = 6136;
					break;
				
				case 139:
					*uParam2 = 6435;
					break;
				
				case 140:
					*uParam2 = 6436;
					break;
				
				case 141:
					*uParam2 = 6437;
					break;
				
				case 142:
					*uParam2 = 6438;
					break;
				
				case 143:
					*uParam2 = 6439;
					break;
				
				case 144:
					*uParam2 = 6440;
					break;
				
				case 145:
					*uParam2 = 6441;
					break;
				
				case 146:
					*uParam2 = 6442;
					break;
				
				case 147:
					*uParam2 = 6443;
					break;
				
				case 148:
					*uParam2 = 6444;
					break;
				
				case 149:
					*uParam2 = 6445;
					break;
				
				case 150:
					*uParam2 = 6446;
					break;
				
				case 151:
					*uParam2 = 6447;
					break;
				
				case 152:
					*uParam2 = 6448;
					break;
				
				case 153:
					*uParam2 = 6449;
					break;
				
				case 154:
					*uParam2 = 7266;
					break;
				
				case 155:
					*uParam2 = 7267;
					break;
				
				case 156:
					*uParam2 = 7268;
					break;
				
				case 157:
					*uParam2 = 7269;
					break;
				
				case 158:
					*uParam2 = 7270;
					break;
				
				case 159:
					*uParam2 = 7271;
					break;
				
				case 160:
					*uParam2 = 7272;
					break;
				
				case 161:
					*uParam2 = 7879;
					break;
				
				case 162:
					*uParam2 = 7880;
					break;
				
				case 163:
					*uParam2 = 7881;
					break;
				
				case 164:
					*uParam2 = 7882;
					break;
				
				case 165:
					*uParam2 = 7883;
					break;
				
				case 166:
					*uParam2 = 7884;
					break;
				
				case 167:
					*uParam2 = 7885;
					break;
				
				case 168:
					*uParam2 = 7886;
					break;
				
				case 169:
					*uParam2 = 7887;
					break;
				
				case 170:
					*uParam2 = 7888;
					break;
				
				case 171:
					*uParam2 = 7889;
					break;
				
				case 172:
					*uParam2 = 7890;
					break;
				
				case 173:
					*uParam2 = 7891;
					break;
				
				case 174:
					*uParam2 = 7892;
					break;
				
				case 175:
					*uParam2 = 7893;
					break;
				
				case 176:
					*uParam2 = 8299;
					break;
				
				case 177:
					*uParam2 = 8300;
					break;
				
				case 178:
					*uParam2 = 8301;
					break;
				
				case 179:
					*uParam2 = 8302;
					break;
				
				case 180:
					*uParam2 = 8303;
					break;
				
				case 181:
					*uParam2 = 8304;
					break;
				
				case 182:
					*uParam2 = 8305;
					break;
				
				case 183:
					*uParam2 = 8306;
					break;
				
				case 184:
					*uParam2 = 8307;
					break;
				
				case 185:
					*uParam2 = 8308;
					break;
				
				case 186:
					*uParam2 = 8309;
					break;
				
				case 187:
					*uParam2 = 8310;
					break;
				
				case 188:
					*uParam2 = 8311;
					break;
				
				case 189:
					*uParam2 = 8312;
					break;
				
				case 190:
					*uParam2 = 8313;
					break;
				
				case 191:
					*uParam2 = 8314;
					break;
				
				case 192:
					*uParam2 = 8315;
					break;
				
				case 193:
					*uParam2 = 8316;
					break;
				
				case 194:
					*uParam2 = 8317;
					break;
				
				case 195:
					*uParam2 = 8318;
					break;
				
				case 196:
					*uParam2 = 8319;
					break;
				
				case 197:
					*uParam2 = 8320;
					break;
				
				case 198:
					*uParam2 = 8321;
					break;
				
				case 199:
					*uParam2 = 8322;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8323;
					break;
				
				case 201:
					*uParam2 = 8936;
					break;
				
				case 202:
					*uParam2 = 8937;
					break;
				
				case 203:
					*uParam2 = 8938;
					break;
				
				case 204:
					*uParam2 = 8939;
					break;
				
				case 205:
					*uParam2 = 8940;
					break;
				
				case 206:
					*uParam2 = 9419;
					break;
				
				case 207:
					*uParam2 = 9420;
					break;
				
				case 208:
					*uParam2 = 9421;
					break;
				
				case 209:
					*uParam2 = 9422;
					break;
				
				case 210:
					*uParam2 = 9423;
					break;
				
				case 211:
					*uParam2 = 9424;
					break;
				
				case 212:
					*uParam2 = 9425;
					break;
				
				case 213:
					*uParam2 = 9426;
					break;
				
				case 214:
					*uParam2 = 9427;
					break;
				
				case 215:
					*uParam2 = 9428;
					break;
				
				case 216:
					*uParam2 = 9429;
					break;
				
				case 217:
					*uParam2 = 9430;
					break;
				
				case 218:
					*uParam2 = 9431;
					break;
				
				case 219:
					*uParam2 = 9432;
					break;
				
				case 220:
					*uParam2 = 9433;
					break;
				
				case 221:
					*uParam2 = 9434;
					break;
				
				case 222:
					*uParam2 = 9435;
					break;
				
				case 223:
					*uParam2 = 9436;
					break;
				
				case 224:
					*uParam2 = 9437;
					break;
				
				case 225:
					*uParam2 = 9438;
					break;
				
				case 226:
					*uParam2 = 9439;
					break;
				
				case 227:
					*uParam2 = 9440;
					break;
				
				case 228:
					*uParam2 = 9441;
					break;
				
				case 229:
					*uParam2 = 9442;
					break;
				
				case 230:
					*uParam2 = 9443;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2393;
					break;
				
				case 38:
					*uParam2 = 2394;
					break;
				
				case 39:
					*uParam2 = 2395;
					break;
				
				case 40:
					*uParam2 = 2396;
					break;
				
				case 41:
					*uParam2 = 2461;
					break;
				
				case 42:
					*uParam2 = 2462;
					break;
				
				case 43:
					*uParam2 = 2463;
					break;
				
				case 44:
					*uParam2 = 2464;
					break;
				
				case 45:
					*uParam2 = 2465;
					break;
				
				case 46:
					*uParam2 = 2466;
					break;
				
				case 47:
					*uParam2 = 2467;
					break;
				
				case 48:
					*uParam2 = 2468;
					break;
				
				case 49:
					*uParam2 = 2469;
					break;
				
				case 50:
					*uParam2 = 2470;
					break;
				
				case 51:
					*uParam2 = 2600;
					break;
				
				case 52:
					*uParam2 = 2601;
					break;
				
				case 53:
					*uParam2 = 2602;
					break;
				
				case 54:
					*uParam2 = 2603;
					break;
				
				case 55:
					*uParam2 = 2604;
					break;
				
				case 56:
					*uParam2 = 2605;
					break;
				
				case 57:
					*uParam2 = 2606;
					break;
				
				case 58:
					*uParam2 = 2607;
					break;
				
				case 59:
					*uParam2 = 2608;
					break;
				
				case 60:
					*uParam2 = 2609;
					break;
				
				case 61:
					*uParam2 = 2610;
					break;
				
				case 62:
					*uParam2 = 3202;
					break;
				
				case 63:
					*uParam2 = 3203;
					break;
				
				case 64:
					*uParam2 = 3204;
					break;
				
				case 65:
					*uParam2 = 3205;
					break;
				
				case 66:
					*uParam2 = 3206;
					break;
				
				case 67:
					*uParam2 = 3207;
					break;
				
				case 68:
					*uParam2 = 3679;
					break;
				
				case 69:
					*uParam2 = 3680;
					break;
				
				case 70:
					*uParam2 = 3681;
					break;
				
				case 71:
					*uParam2 = 3682;
					break;
				
				case 72:
					*uParam2 = 3683;
					break;
				
				case 73:
					*uParam2 = 3684;
					break;
				
				case 74:
					*uParam2 = 3685;
					break;
				
				case 75:
					*uParam2 = 3686;
					break;
				
				case 76:
					*uParam2 = 3687;
					break;
				
				case 77:
					*uParam2 = 3688;
					break;
				
				case 78:
					*uParam2 = 3800;
					break;
				
				case 79:
					*uParam2 = 3801;
					break;
				
				case 80:
					*uParam2 = 3802;
					break;
				
				case 81:
					*uParam2 = 3803;
					break;
				
				case 82:
					*uParam2 = 3804;
					break;
				
				case 83:
					*uParam2 = 3805;
					break;
				
				case 84:
					*uParam2 = 3806;
					break;
				
				case 85:
					*uParam2 = 3807;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5349;
					break;
				
				case 90:
					*uParam2 = 5350;
					break;
				
				case 91:
					*uParam2 = 5351;
					break;
				
				case 92:
					*uParam2 = 5352;
					break;
				
				case 93:
					*uParam2 = 5353;
					break;
				
				case 94:
					*uParam2 = 5354;
					break;
				
				case 95:
					*uParam2 = 5355;
					break;
				
				case 96:
					*uParam2 = 5356;
					break;
				
				case 97:
					*uParam2 = 5357;
					break;
				
				case 98:
					*uParam2 = 5358;
					break;
				
				case 99:
					*uParam2 = 5359;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5360;
					break;
				
				case 101:
					*uParam2 = 5417;
					break;
				
				case 102:
					*uParam2 = 5418;
					break;
				
				case 103:
					*uParam2 = 5419;
					break;
				
				case 104:
					*uParam2 = 5420;
					break;
				
				case 105:
					*uParam2 = 5421;
					break;
				
				case 106:
					*uParam2 = 5422;
					break;
				
				case 107:
					*uParam2 = 5423;
					break;
				
				case 108:
					*uParam2 = 5424;
					break;
				
				case 109:
					*uParam2 = 5425;
					break;
				
				case 110:
					*uParam2 = 5426;
					break;
				
				case 111:
					*uParam2 = 5427;
					break;
				
				case 112:
					*uParam2 = 5428;
					break;
				
				case 113:
					*uParam2 = 5429;
					break;
				
				case 114:
					*uParam2 = 5430;
					break;
				
				case 115:
					*uParam2 = 5431;
					break;
				
				case 116:
					*uParam2 = 5432;
					break;
				
				case 117:
					*uParam2 = 5433;
					break;
				
				case 118:
					*uParam2 = 5434;
					break;
				
				case 119:
					*uParam2 = 5435;
					break;
				
				case 120:
					*uParam2 = 5436;
					break;
				
				case 121:
					*uParam2 = 5437;
					break;
				
				case 122:
					*uParam2 = 5438;
					break;
				
				case 123:
					*uParam2 = 5439;
					break;
				
				case 124:
					*uParam2 = 6137;
					break;
				
				case 125:
					*uParam2 = 6138;
					break;
				
				case 126:
					*uParam2 = 6139;
					break;
				
				case 127:
					*uParam2 = 6140;
					break;
				
				case 128:
					*uParam2 = 6141;
					break;
				
				case 129:
					*uParam2 = 6142;
					break;
				
				case 130:
					*uParam2 = 6143;
					break;
				
				case 131:
					*uParam2 = 6144;
					break;
				
				case 132:
					*uParam2 = 6145;
					break;
				
				case 133:
					*uParam2 = 6146;
					break;
				
				case 134:
					*uParam2 = 6147;
					break;
				
				case 135:
					*uParam2 = 6148;
					break;
				
				case 136:
					*uParam2 = 6149;
					break;
				
				case 137:
					*uParam2 = 6150;
					break;
				
				case 138:
					*uParam2 = 6151;
					break;
				
				case 139:
					*uParam2 = 6450;
					break;
				
				case 140:
					*uParam2 = 6451;
					break;
				
				case 141:
					*uParam2 = 6452;
					break;
				
				case 142:
					*uParam2 = 6453;
					break;
				
				case 143:
					*uParam2 = 6454;
					break;
				
				case 144:
					*uParam2 = 6455;
					break;
				
				case 145:
					*uParam2 = 6456;
					break;
				
				case 146:
					*uParam2 = 6457;
					break;
				
				case 147:
					*uParam2 = 6458;
					break;
				
				case 148:
					*uParam2 = 6459;
					break;
				
				case 149:
					*uParam2 = 6460;
					break;
				
				case 150:
					*uParam2 = 6461;
					break;
				
				case 151:
					*uParam2 = 6462;
					break;
				
				case 152:
					*uParam2 = 6463;
					break;
				
				case 153:
					*uParam2 = 6464;
					break;
				
				case 154:
					*uParam2 = 7273;
					break;
				
				case 155:
					*uParam2 = 7274;
					break;
				
				case 156:
					*uParam2 = 7275;
					break;
				
				case 157:
					*uParam2 = 7276;
					break;
				
				case 158:
					*uParam2 = 7277;
					break;
				
				case 159:
					*uParam2 = 7278;
					break;
				
				case 160:
					*uParam2 = 7279;
					break;
				
				case 161:
					*uParam2 = 7894;
					break;
				
				case 162:
					*uParam2 = 7895;
					break;
				
				case 163:
					*uParam2 = 7896;
					break;
				
				case 164:
					*uParam2 = 7897;
					break;
				
				case 165:
					*uParam2 = 7898;
					break;
				
				case 166:
					*uParam2 = 7899;
					break;
				
				case 167:
					*uParam2 = 7900;
					break;
				
				case 168:
					*uParam2 = 7901;
					break;
				
				case 169:
					*uParam2 = 7902;
					break;
				
				case 170:
					*uParam2 = 7903;
					break;
				
				case 171:
					*uParam2 = 7904;
					break;
				
				case 172:
					*uParam2 = 7905;
					break;
				
				case 173:
					*uParam2 = 7906;
					break;
				
				case 174:
					*uParam2 = 7907;
					break;
				
				case 175:
					*uParam2 = 7908;
					break;
				
				case 176:
					*uParam2 = 8324;
					break;
				
				case 177:
					*uParam2 = 8325;
					break;
				
				case 178:
					*uParam2 = 8326;
					break;
				
				case 179:
					*uParam2 = 8327;
					break;
				
				case 180:
					*uParam2 = 8328;
					break;
				
				case 181:
					*uParam2 = 8329;
					break;
				
				case 182:
					*uParam2 = 8330;
					break;
				
				case 183:
					*uParam2 = 8331;
					break;
				
				case 184:
					*uParam2 = 8332;
					break;
				
				case 185:
					*uParam2 = 8333;
					break;
				
				case 186:
					*uParam2 = 8334;
					break;
				
				case 187:
					*uParam2 = 8335;
					break;
				
				case 188:
					*uParam2 = 8336;
					break;
				
				case 189:
					*uParam2 = 8337;
					break;
				
				case 190:
					*uParam2 = 8338;
					break;
				
				case 191:
					*uParam2 = 8339;
					break;
				
				case 192:
					*uParam2 = 8340;
					break;
				
				case 193:
					*uParam2 = 8341;
					break;
				
				case 194:
					*uParam2 = 8342;
					break;
				
				case 195:
					*uParam2 = 8343;
					break;
				
				case 196:
					*uParam2 = 8344;
					break;
				
				case 197:
					*uParam2 = 8345;
					break;
				
				case 198:
					*uParam2 = 8346;
					break;
				
				case 199:
					*uParam2 = 8347;
					break;
			}
			switch (floor((to_float(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8348;
					break;
				
				case 201:
					*uParam2 = 8941;
					break;
				
				case 202:
					*uParam2 = 8942;
					break;
				
				case 203:
					*uParam2 = 8943;
					break;
				
				case 204:
					*uParam2 = 8944;
					break;
				
				case 205:
					*uParam2 = 8945;
					break;
				
				case 206:
					*uParam2 = 9444;
					break;
				
				case 207:
					*uParam2 = 9445;
					break;
				
				case 208:
					*uParam2 = 9446;
					break;
				
				case 209:
					*uParam2 = 9447;
					break;
				
				case 210:
					*uParam2 = 9448;
					break;
				
				case 211:
					*uParam2 = 9449;
					break;
				
				case 212:
					*uParam2 = 9450;
					break;
				
				case 213:
					*uParam2 = 9451;
					break;
				
				case 214:
					*uParam2 = 9452;
					break;
				
				case 215:
					*uParam2 = 9453;
					break;
				
				case 216:
					*uParam2 = 9454;
					break;
				
				case 217:
					*uParam2 = 9455;
					break;
				
				case 218:
					*uParam2 = 9456;
					break;
				
				case 219:
					*uParam2 = 9457;
					break;
				
				case 220:
					*uParam2 = 9458;
					break;
				
				case 221:
					*uParam2 = 9459;
					break;
				
				case 222:
					*uParam2 = 9460;
					break;
				
				case 223:
					*uParam2 = 9461;
					break;
				
				case 224:
					*uParam2 = 9462;
					break;
				
				case 225:
					*uParam2 = 9463;
					break;
				
				case 226:
					*uParam2 = 9464;
					break;
				
				case 227:
					*uParam2 = 9465;
					break;
				
				case 228:
					*uParam2 = 9466;
					break;
				
				case 229:
					*uParam2 = 9467;
					break;
				
				case 230:
					*uParam2 = 9468;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 11511;
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x5D96D8530B3D0904(&(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x0674E58A79778E99(&(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xEAE0D21A50E6C7F4(Global_111638.f_2358[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	if (!unk_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_140(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_100(iParam1);
	if (Global_111638.f_2358.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_213(iParam0, Global_111638.f_2358.f_539[iVar0 /*65*/].f_61, Global_111638.f_2358.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_111638.f_2358.f_539[iVar0 /*65*/].f_59;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_60 = -99;
			Global_111638.f_2358.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

struct<10> func_142(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_144(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_144(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_144(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_144(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_144(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_144(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_144(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_144(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_144(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_144(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_144(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_143(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_144(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_144(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_144(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_144(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_144(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_144(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_144(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_144(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_144(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_144(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_143(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_144(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_144(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_144(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_144(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_144(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_144(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_144(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_144(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_144(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_144(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_143(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_144(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_144(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_144(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_144(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_144(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_144(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_144(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_144(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_144(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_144(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_144(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_144(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_144(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_144(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_144(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_144(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_144(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_144(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_144(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_144(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_144(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_144(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_144(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_144(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_144(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_144(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_143(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_144(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_144(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_144(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_144(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_144(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_144(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_144(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_144(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_144(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_144(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_144(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_144(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_144(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_144(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_144(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_144(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_144(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_144(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_144(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_144(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_144(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_144(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_144(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_144(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_144(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_143(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_143(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0xEF5FB5FCF95E0C4D(iParam2, &Var1);
		if (!unk_0x232048AB4B0E0259(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (unk_0x5D149814CB08088A(Var1.f_1, iVar3, &vVar2) && vVar2.z != -1)
				{
					if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
					{
						(*iParam0)[vVar2.z] = func_124(iParam1, vVar2.x, 14, iVar0);
					}
					else if (vVar2.y != -1)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_144(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_145(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_111638.f_9080.f_99.f_58[120])
					{
						func_148(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_148(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_148(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_148(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_148(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_148(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_148(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[0], Global_111638.f_2358.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_148(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_148(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_148(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_148(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_148(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_148(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_148(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_148(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_148(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_148(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_148(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_148(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_148(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_148(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_148(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_148(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_148(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_148(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_148(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_148(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_148(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_148(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_148(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_148(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_148(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_148(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_148(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_148(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_148(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_148(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_148(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_148(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_148(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_148(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_148(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_148(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_148(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_148(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_148(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_148(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_148(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_148(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_148(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_148(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_148(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_148(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_148(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_146(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_148(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_148(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_148(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[1], Global_111638.f_2358.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_148(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_148(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_148(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_148(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_148(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_148(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_148(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_148(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_148(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_148(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_148(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_148(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_148(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_148(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_148(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_148(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_148(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_148(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_148(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_148(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_148(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_148(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_148(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_148(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_148(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_148(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_148(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_148(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_148(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_148(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_148(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_148(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_148(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_148(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_148(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_148(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_148(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_148(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_148(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_148(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_148(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_148(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_148(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_148(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_146(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_148(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_148(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_148(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_148(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_148(&Var1, -99, -99, Global_111638.f_2358.f_539.f_196[2], Global_111638.f_2358.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_148(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_148(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_148(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_148(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_148(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_148(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_148(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_148(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_148(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_148(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_148(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_148(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_148(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_148(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_148(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_148(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_148(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_148(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_148(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_148(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_148(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_148(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_148(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_148(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_148(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_148(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_148(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_148(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_148(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_148(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_148(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_148(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_148(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_148(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_148(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_148(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_148(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_148(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_148(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_148(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_148(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_148(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_148(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_146(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_148(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_148(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_148(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_148(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_148(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_148(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_148(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_148(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_148(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_148(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_148(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_148(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_148(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_148(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_148(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_148(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_148(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_148(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_148(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_148(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_148(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_148(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_148(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_148(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_148(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_148(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_146(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_148(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_148(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_148(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_148(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_148(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_148(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_148(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_148(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_148(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_148(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_148(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_148(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_148(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_148(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_148(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_148(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_148(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_148(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_148(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_148(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_148(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_148(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_148(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_148(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_148(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_148(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_148(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_148(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_146(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_146(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x84997C8C8A5848DD(iVar0, 0);
	unk_0xA69F810DF7EA02E6((iParam2 - iParam3), &Var1);
	if (!unk_0x232048AB4B0E0259(Var1))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (unk_0xD00B813D5424DD2E(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
				{
					if (vVar2.z == 10)
					{
						unk_0x65C0659496B1CC14(&Var3);
						unk_0xFDEBA3FD0BF0D4AC(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar2.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_147(vVar2.z)] = vVar2.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_147(vVar2.z)] = func_124(iParam1, vVar2.x, func_147(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != -1)
				{
					(*uParam0)[func_147(vVar2.z)] = vVar2.y;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_147(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_148(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

struct<14> func_149(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_212();
	if (iParam0 == joaat("player_zero"))
	{
		func_194(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_175(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_150(iParam1, iParam2);
	}
	return Global_76434[0 /*14*/];
}

void func_150(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_174(iParam1);
			break;
		
		case 2:
			func_173(iParam1);
			break;
		
		case 3:
			func_170(iParam1);
			break;
		
		case 4:
			func_169(iParam1);
			break;
		
		case 6:
			func_168(iParam1);
			break;
		
		case 5:
			func_167(iParam1);
			break;
		
		case 8:
			func_166(iParam1);
			break;
		
		case 9:
			func_165(iParam1);
			break;
		
		case 10:
			func_164(iParam1);
			break;
		
		case 1:
			func_163(iParam1);
			break;
		
		case 7:
			func_162(iParam1);
			break;
		
		case 11:
			func_161(iParam1);
			break;
		
		case 12:
			func_160(iParam1);
			break;
		
		case 13:
			func_159(iParam1);
			break;
		
		case 14:
			func_151(iParam1);
			break;
	}
}

void func_151(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 155, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_152(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_157(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x12AB0310C2281427(sParam3) != unk_0x12AB0310C2281427("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		}
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 6);
		if (func_34(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x1A5A491D253EA7BA(Global_2621444, 1827025211, 0))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_156(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_156(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_156(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_156(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_156(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x0674E58A79778E99(&(uParam0->f_6), 2);
			}
			if (!func_156(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 5);
		if (func_138(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
		}
		if (func_138(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
		if (!func_138(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x5D96D8530B3D0904(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_34(14))
			{
				return;
			}
			iVar0 = func_136(func_155(iParam1, uParam0->f_2), Global_76431, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			}
			iVar0 = func_136(func_154(iParam1, uParam0->f_2), Global_76431, 0);
			if (unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
			{
				unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
			}
			if (func_153(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_136(iVar1, Global_76431, 0);
				if (!unk_0xEAE0D21A50E6C7F4(iVar0, uParam0->f_1))
				{
					unk_0x5D96D8530B3D0904(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 1);
			unk_0x5D96D8530B3D0904(&(uParam0->f_6), 2);
		}
	}
}

bool func_153(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

int func_154(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_155(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_156(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_76431;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_137(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_136(iVar2, iVar0, 0);
		return unk_0xEAE0D21A50E6C7F4(iVar3, iVar1);
	}
	return 0;
}

int func_157(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_158(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_76434[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar4 = 0;
		iVar5 = unk_0x84997C8C8A5848DD(iVar1, 0);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			unk_0xA69F810DF7EA02E6(iVar3, &Var2);
			if (!unk_0x232048AB4B0E0259(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_152(&(Global_76434[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_152(&(Global_76434[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x30BBA34DD235D7FE(&Var6);
		iVar9 = 0;
		iVar10 = unk_0xF6900DA2D9CD7BC5(iVar1, 7, -1, 1, -1, -1);
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			unk_0x4F79808059300187(iVar8, &Var6);
			if (!unk_0x232048AB4B0E0259(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0)
					{
						iVar7 = 9;
					}
					else if (Var6.f_6 == 1)
					{
						iVar7 = 10;
					}
					else if (Var6.f_6 == 2)
					{
						iVar7 = 2;
					}
					else if (Var6.f_6 == 3)
					{
						iVar7 = 3;
					}
					else if (Var6.f_6 == 4)
					{
						iVar7 = 4;
					}
					else if (Var6.f_6 == 5)
					{
						iVar7 = 5;
					}
					else if (Var6.f_6 == 6)
					{
						iVar7 = 6;
					}
					else if (Var6.f_6 == 7)
					{
						iVar7 = 7;
					}
					else if (Var6.f_6 == 8)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = -1;
					}
					Global_2621444 = Var6.f_1;
					Global_2621445 = Var6;
					func_152(&(Global_76434[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, unk_0x1A5A491D253EA7BA(Var6.f_1, -2050632586, 0), iVar7, 2, Var6.f_1 != 0);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		unk_0x65C0659496B1CC14(&Var11);
		if (iParam3 != -1 && Global_76603)
		{
			unk_0xFDEBA3FD0BF0D4AC(iParam3, &Var11);
			Global_2621444 = Var11.f_1;
			Global_2621445 = Var11;
			func_152(&(Global_76434[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x1A5A491D253EA7BA(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
			return;
		}
		iVar13 = 0;
		iVar14 = unk_0xF6900DA2D9CD7BC5(iVar1, 7, -1, 0, -1, func_141(iParam0));
		iVar12 = 0;
		while (iVar12 < iVar14)
		{
			unk_0xC578687D5A643830(iVar12, &Var11);
			if (!unk_0x232048AB4B0E0259(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_2621444 = Var11.f_1;
					Global_2621445 = Var11;
					func_152(&(Global_76434[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, unk_0x1A5A491D253EA7BA(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_159(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_158(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_160(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_161(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_162(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_163(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_164(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_158(iVar7, iParam0, 33, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_165(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_158(iVar7, iParam0, 17, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_166(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_158(iVar7, iParam0, 18, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_167(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_158(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_168(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_158(iVar7, iParam0, 84, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_169(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_158(iVar7, iParam0, 104, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_170(int iParam0)
{
	if (iParam0 < 136)
	{
		func_172(iParam0);
	}
	else
	{
		func_171(iParam0);
	}
	if (Global_76434[0 /*14*/].f_2 == -1)
	{
		func_158(3, iParam0, 242, -1);
	}
}

void func_171(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_172(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_173(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_174(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_76434[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_158(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_175(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_193(iParam1);
			break;
		
		case 2:
			func_192(iParam1);
			break;
		
		case 3:
			func_188(iParam1);
			break;
		
		case 4:
			func_187(iParam1);
			break;
		
		case 6:
			func_186(iParam1);
			break;
		
		case 5:
			func_185(iParam1);
			break;
		
		case 8:
			func_184(iParam1);
			break;
		
		case 9:
			func_183(iParam1);
			break;
		
		case 10:
			func_182(iParam1);
			break;
		
		case 1:
			func_181(iParam1);
			break;
		
		case 7:
			func_180(iParam1);
			break;
		
		case 11:
			func_179(iParam1);
			break;
		
		case 12:
			func_178(iParam1);
			break;
		
		case 13:
			func_177(iParam1);
			break;
		
		case 14:
			func_176(iParam1);
			break;
	}
}

void func_176(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 175, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_177(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_178(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 47, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_179(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_158(iVar7, iParam0, 63, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_180(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_181(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_182(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_183(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 12, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_184(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 77, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_185(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_158(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_186(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_158(iVar7, iParam0, 134, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_187(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_158(iVar7, iParam0, 117, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_188(int iParam0)
{
	if (iParam0 < 107)
	{
		func_191(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_190(iParam0);
	}
	else
	{
		func_189(iParam0);
	}
	if (Global_76434[0 /*14*/].f_2 == -1)
	{
		func_158(3, iParam0, 318, -1);
	}
}

void func_189(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_190(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_191(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_192(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_158(iVar7, iParam0, 21, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_193(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_76434[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_158(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_194(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_211(iParam1);
			break;
		
		case 2:
			func_210(iParam1);
			break;
		
		case 3:
			func_207(iParam1);
			break;
		
		case 4:
			func_206(iParam1);
			break;
		
		case 6:
			func_205(iParam1);
			break;
		
		case 5:
			func_204(iParam1);
			break;
		
		case 8:
			func_203(iParam1);
			break;
		
		case 9:
			func_202(iParam1);
			break;
		
		case 10:
			func_201(iParam1);
			break;
		
		case 1:
			func_200(iParam1);
			break;
		
		case 7:
			func_199(iParam1);
			break;
		
		case 11:
			func_198(iParam1);
			break;
		
		case 12:
			func_197(iParam1);
			break;
		
		case 13:
			func_196(iParam1);
			break;
		
		case 14:
			func_195(iParam1);
			break;
	}
}

void func_195(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_158(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_196(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_158(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_197(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_198(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 45, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_199(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_200(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_201(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_158(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_202(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_158(iVar7, iParam0, 20, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_203(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_158(iVar7, iParam0, 24, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_204(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_158(iVar7, iParam0, 14, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_205(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_158(iVar7, iParam0, 99, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_206(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_207(int iParam0)
{
	if (iParam0 < 60)
	{
		func_209(iParam0);
	}
	else
	{
		func_208(iParam0);
	}
	if (Global_76434[0 /*14*/].f_2 == -1)
	{
		func_158(3, iParam0, 181, -1);
	}
}

void func_208(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_209(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_210(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_158(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_211(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_76434[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_158(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_152(&(Global_76434[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_212()
{
	Global_76434[0 /*14*/].f_1 = -1;
	Global_76434[0 /*14*/].f_2 = -1;
	Global_76434[0 /*14*/].f_5 = -1;
	Global_76434[0 /*14*/].f_3 = -1;
	Global_76434[0 /*14*/].f_4 = -1;
	Global_76434[0 /*14*/].f_7 = 0;
	Global_76434[0 /*14*/].f_6 = 0;
	Global_76434[0 /*14*/].f_13 = -1;
	Global_76434[0 /*14*/].f_12 = 0;
	Global_76434[0 /*14*/] = 0;
	StringCopy(&(Global_76434[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_213(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (unk_0xEB6A8945D1AC98A1(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x134B62B726CEC8E6(iParam0);
	Global_76434[1 /*14*/] = { func_149(iVar0, iParam1, iParam2, -1) };
	if (!unk_0xEAE0D21A50E6C7F4(Global_76434[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_145(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_213(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_142(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_213(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_76434[2 /*14*/] = { func_149(iVar0, 14, iVar4, -1) };
									if (Global_76434[2 /*14*/].f_12 == iVar3)
									{
										if (func_213(iParam0, 14, iVar4))
										{
											if (!func_105(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_76434[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_130(iParam0, iVar2);
						Global_76434[2 /*14*/] = { func_149(iVar0, iVar2, iVar1, -1) };
						if (!func_105(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_76434[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { func_142(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_213(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x98F1B512A2CC07C5(iParam0, Global_76434[1 /*14*/].f_12) == Global_76434[1 /*14*/].f_3 && (unk_0x22286A85EDEAEC56(iParam0, Global_76434[1 /*14*/].f_12) == Global_76434[1 /*14*/].f_4 || Global_76434[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_76434[1 /*14*/].f_3 == unk_0x36C584991B4C183F(iParam0, func_141(iParam1)) && Global_76434[1 /*14*/].f_4 == unk_0xDADA8E1DD0D0D9D9(iParam0, func_141(iParam1)))
	{
		return 1;
	}
	return 0;
}

void func_214(char* sParam0, int iParam1)
{
	unk_0x46A12CC6D0BDFFD8(joaat("sp_last_mission_name"), sParam0, 1);
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 0))
	{
		unk_0x46A12CC6D0BDFFD8(joaat("sp0_last_mission_name"), sParam0, 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 1))
	{
		unk_0x46A12CC6D0BDFFD8(joaat("sp1_last_mission_name"), sParam0, 1);
	}
	if (unk_0xEAE0D21A50E6C7F4(iParam1, 2))
	{
		unk_0x46A12CC6D0BDFFD8(joaat("sp2_last_mission_name"), sParam0, 1);
	}
}

int func_215()
{
	func_30();
	switch (Global_111638.f_2358.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

struct<2> func_216(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_217(iParam0) };
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_217(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_218(int iParam0, int iParam1)
{
	Global_76890 = iParam1;
	if (Global_61506)
	{
		return;
	}
	if (Global_61533)
	{
		Global_61533 = 0;
		return;
	}
	if (unk_0x8A22C4C08282BF26(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_61506)
		{
		}
		Global_61532 = iParam0;
		Global_61506 = 1;
		Global_61517 = 1;
	}
}

void func_219(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 32, true);
		unk_0x4E885A246A9D983A(unk_0x16F2683693E537C9(), 250, true);
	}
	unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	unk_0x51B096AAC60548C1(1f);
	unk_0x34D79252800B23FF(5);
	unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
	unk_0x5BF70D3A674F3E1C(unk_0xD803B885F5E47A62(), 1f);
	unk_0x7EADCF510F11328E(unk_0xD803B885F5E47A62(), 1f);
	unk_0x8BCB70EB440DED83(true);
	unk_0xBFE31971E49FA500(true);
	unk_0x5413873D3F67BF93(false, 0);
	unk_0x9A82EEAF6CA12AEE(1f);
	func_230();
	func_229(1, 1);
	func_228();
	func_226();
	func_225(30000);
	if (iParam1 == 1)
	{
		func_220(iParam0, iParam2, iParam3);
	}
	unk_0x974531784BE14213(0, 0);
}

void func_220(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	char* sVar1;
	
	if (iParam0 != -1)
	{
		func_222(iParam0, &Var0);
		MemCopy(&sVar1, {func_217(iParam0)}, 4);
		unk_0x353729B0A07DC11A(&sVar1, 0, Global_98781, 0);
		func_221(&sVar1, Var0.f_3, Global_98781, iParam1, iParam2);
	}
}

void func_221(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (unk_0xEA6BC48857E0AC4C(&Global_95814))
	{
		return;
	}
	if (unk_0xF166B8FB0B765CF2(sParam0, &Global_95814, 0, -1) != 0)
	{
		return;
	}
	unk_0x73B08BBDEAC9B885(sParam0, iParam1, iParam2, iParam3, iParam4, Global_92921);
	StringCopy(&Global_95814, "", 64);
}

void func_222(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_223(uParam1, "Abigail1", func_216(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_224(iParam0), 1, 0);
			break;
		
		case 1:
			func_223(uParam1, "Abigail2", func_216(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_224(iParam0), 1, 0);
			break;
		
		case 2:
			func_223(uParam1, "Barry1", func_216(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_224(iParam0), 1, 0);
			break;
		
		case 3:
			func_223(uParam1, "Barry2", func_216(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_224(iParam0), 1, 1);
			break;
		
		case 4:
			func_223(uParam1, "Barry3", func_216(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_224(iParam0), 0, 0);
			break;
		
		case 5:
			func_223(uParam1, "Barry3A", func_216(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 6:
			func_223(uParam1, "Barry3C", func_216(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 7:
			func_223(uParam1, "Barry4", func_216(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_224(iParam0), 0, 0);
			break;
		
		case 8:
			func_223(uParam1, "Dreyfuss1", func_216(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_224(iParam0), 0, 0);
			break;
		
		case 9:
			func_223(uParam1, "Epsilon1", func_216(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_224(iParam0), 0, 0);
			break;
		
		case 10:
			func_223(uParam1, "Epsilon2", func_216(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_224(iParam0), 1, 0);
			break;
		
		case 11:
			func_223(uParam1, "Epsilon3", func_216(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_224(iParam0), 0, 0);
			break;
		
		case 12:
			func_223(uParam1, "Epsilon4", func_216(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_224(iParam0), 0, 0);
			break;
		
		case 13:
			func_223(uParam1, "Epsilon5", func_216(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_224(iParam0), 1, 0);
			break;
		
		case 14:
			func_223(uParam1, "Epsilon6", func_216(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 15:
			func_223(uParam1, "Epsilon7", func_216(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_224(iParam0), 0, 0);
			break;
		
		case 16:
			func_223(uParam1, "Epsilon8", func_216(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_224(iParam0), 1, 0);
			break;
		
		case 17:
			func_223(uParam1, "Extreme1", func_216(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 18:
			func_223(uParam1, "Extreme2", func_216(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 19:
			func_223(uParam1, "Extreme3", func_216(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 20:
			func_223(uParam1, "Extreme4", func_216(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_224(iParam0), 0, 0);
			break;
		
		case 21:
			func_223(uParam1, "Fanatic1", func_216(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_224(iParam0), 1, 0);
			break;
		
		case 22:
			func_223(uParam1, "Fanatic2", func_216(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_224(iParam0), 1, 0);
			break;
		
		case 23:
			func_223(uParam1, "Fanatic3", func_216(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_224(iParam0), 0, 1);
			break;
		
		case 24:
			func_223(uParam1, "Hao1", func_216(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_224(iParam0), 0, 1);
			break;
		
		case 25:
			func_223(uParam1, "Hunting1", func_216(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 26:
			func_223(uParam1, "Hunting2", func_216(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 27:
			func_223(uParam1, "Josh1", func_216(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_224(iParam0), 1, 0);
			break;
		
		case 28:
			func_223(uParam1, "Josh2", func_216(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_224(iParam0), 1, 1);
			break;
		
		case 29:
			func_223(uParam1, "Josh3", func_216(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_224(iParam0), 1, 1);
			break;
		
		case 30:
			func_223(uParam1, "Josh4", func_216(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_224(iParam0), 1, 0);
			break;
		
		case 31:
			func_223(uParam1, "Maude1", func_216(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 32:
			func_223(uParam1, "Minute1", func_216(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 33:
			func_223(uParam1, "Minute2", func_216(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 34:
			func_223(uParam1, "Minute3", func_216(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 35:
			func_223(uParam1, "MrsPhilips1", func_216(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_224(iParam0), 0, 0);
			break;
		
		case 36:
			func_223(uParam1, "MrsPhilips2", func_216(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_224(iParam0), 0, 0);
			break;
		
		case 37:
			func_223(uParam1, "Nigel1", func_216(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_224(iParam0), 1, 0);
			break;
		
		case 38:
			func_223(uParam1, "Nigel1A", func_216(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_224(iParam0), 1, 1);
			break;
		
		case 39:
			func_223(uParam1, "Nigel1B", func_216(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_224(iParam0), 1, 1);
			break;
		
		case 40:
			func_223(uParam1, "Nigel1C", func_216(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_224(iParam0), 1, 1);
			break;
		
		case 41:
			func_223(uParam1, "Nigel1D", func_216(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_224(iParam0), 1, 1);
			break;
		
		case 42:
			func_223(uParam1, "Nigel2", func_216(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_224(iParam0), 1, 1);
			break;
		
		case 43:
			func_223(uParam1, "Nigel3", func_216(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_224(iParam0), 1, 1);
			break;
		
		case 44:
			func_223(uParam1, "Omega1", func_216(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_224(iParam0), 0, 0);
			break;
		
		case 45:
			func_223(uParam1, "Omega2", func_216(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_224(iParam0), 0, 0);
			break;
		
		case 46:
			func_223(uParam1, "Paparazzo1", func_216(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 47:
			func_223(uParam1, "Paparazzo2", func_216(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 48:
			func_223(uParam1, "Paparazzo3", func_216(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_224(iParam0), 0, 0);
			break;
		
		case 49:
			func_223(uParam1, "Paparazzo3A", func_216(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 50:
			func_223(uParam1, "Paparazzo3B", func_216(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 51:
			func_223(uParam1, "Paparazzo4", func_216(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_224(iParam0), 0, 0);
			break;
		
		case 52:
			func_223(uParam1, "Rampage1", func_216(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_224(iParam0), 0, 0);
			break;
		
		case 54:
			func_223(uParam1, "Rampage3", func_216(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_224(iParam0), 1, 0);
			break;
		
		case 55:
			func_223(uParam1, "Rampage4", func_216(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_224(iParam0), 1, 0);
			break;
		
		case 56:
			func_223(uParam1, "Rampage5", func_216(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_224(iParam0), 0, 0);
			break;
		
		case 53:
			func_223(uParam1, "Rampage2", func_216(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_224(iParam0), 1, 0);
			break;
		
		case 57:
			func_223(uParam1, "TheLastOne", func_216(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 58:
			func_223(uParam1, "Tonya1", func_216(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 59:
			func_223(uParam1, "Tonya2", func_216(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 60:
			func_223(uParam1, "Tonya3", func_216(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 61:
			func_223(uParam1, "Tonya4", func_216(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		case 62:
			func_223(uParam1, "Tonya5", func_216(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_224(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_223(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_225(int iParam0)
{
	Global_41982 = (unk_0x1C0640BA9A7327B3() + iParam0);
}

void func_226()
{
	if (Global_96056)
	{
		func_30();
		unk_0x9BF51DDC898CF6FE(func_227(Global_111638.f_2358.f_539.f_4321));
	}
	else
	{
		unk_0x9BF51DDC898CF6FE("");
	}
}

char* func_227(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

void func_228()
{
	vector3 vVar0[24];
	
	if (unk_0xA3F916BCE430ED26() || unk_0xDC30EF462887322E())
	{
		unk_0x3CFFF3C8EACD8DC1(StackVal, 0, 0, 0);
	}
	else if (unk_0xBA301E03A078FA59() || unk_0x33A494591F2C1975())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x8DECFDD6715449E4(0, &cVar0);
	}
}

void func_229(int iParam0, int iParam1)
{
	Global_96051 = iParam0;
	Global_96052 = iParam1;
}

void func_230()
{
	if (Global_76876 != 6)
	{
	}
	if (Global_76881)
	{
		unk_0xA5E3ADAAA4CD5D6C(15);
		Global_76881 = 0;
		Global_22350.f_8417 = 0;
	}
	Global_76876 = 6;
	Global_76878 = -1;
	Global_76877 = -1;
}

void func_231(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41393)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41392 = 0;
	Global_41394 = 0;
	Global_41431 = 15;
	Global_61509 = 0;
	Global_61510 = 0;
}

void func_232(int iParam0, bool bParam1)
{
	struct<26> Var0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<6> Var4;
	int iVar5;
	int iVar6;
	struct<6> Var7;
	int iVar8;
	int iVar9;
	
	func_222(iParam0, &Var0);
	if (!unk_0x7F8A39872A07D2CE(&(Var0.f_16), ""))
	{
		while (!func_260(&(Var0.f_16)))
		{
			wait(0);
		}
	}
	if (Var0.f_22 != 0)
	{
		func_259(Var0.f_22, 0);
	}
	func_250(iParam0, Global_76891);
	if (!bParam1)
	{
		iVar1 = func_249(iParam0);
		if (iVar1 != 0)
		{
			if (!unk_0x80E3DD53ACE2E0B0(iVar1))
			{
				unk_0x63D66B3917B1F596(iVar1);
			}
		}
	}
	if (Var0.f_24 != -1)
	{
		bVar2 = true;
		if (Var0.f_5 != 4)
		{
			iVar3 = 0;
			while (iVar3 < 63)
			{
				iVar5 = iVar3;
				if (iVar5 != iParam0)
				{
					func_222(iVar5, &Var4);
					if (Var4.f_5 == Var0.f_5)
					{
						if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar5 /*6*/], 3))
						{
							bVar2 = false;
						}
						if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iVar5 /*6*/], 0))
						{
							func_237(iVar5);
						}
					}
				}
				iVar3++;
			}
		}
		if (bVar2)
		{
			func_237(Var0.f_24);
		}
	}
	else if (Var0.f_25 != 4)
	{
		iVar6 = 0;
		while (iVar6 < 63)
		{
			iVar8 = iVar6;
			if (iVar8 != iParam0)
			{
				func_222(iVar8, &Var7);
				if (Var7.f_5 == Var0.f_25)
				{
					func_237(iVar8);
				}
			}
			iVar6++;
		}
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569[iParam0 /*6*/], 3))
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_18569[iParam0 /*6*/]), 3);
		Global_110725[iParam0 /*10*/].f_5 = 1;
		func_234(iParam0);
		iVar9 = func_233(iParam0);
		if (iVar9 != 322)
		{
			func_72(iVar9, 0, 0);
		}
	}
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 109;
			break;
		
		case 1:
			return 322;
			break;
		
		case 2:
			return 69;
			break;
		
		case 3:
			return 70;
			break;
		
		case 4:
			return 322;
			break;
		
		case 5:
			return 71;
			break;
		
		case 6:
			return 71;
			break;
		
		case 7:
			return 72;
			break;
		
		case 8:
			return 68;
			break;
		
		case 9:
			return 73;
			break;
		
		case 10:
			return 74;
			break;
		
		case 11:
			return 75;
			break;
		
		case 12:
			return 76;
			break;
		
		case 13:
			return 77;
			break;
		
		case 14:
			return 78;
			break;
		
		case 15:
			return 79;
			break;
		
		case 16:
			return 80;
			break;
		
		case 17:
			return 81;
			break;
		
		case 18:
			return 82;
			break;
		
		case 19:
			return 83;
			break;
		
		case 20:
			return 84;
			break;
		
		case 21:
			return 85;
			break;
		
		case 22:
			return 86;
			break;
		
		case 23:
			return 87;
			break;
		
		case 24:
			return 106;
			break;
		
		case 25:
			return 178;
			break;
		
		case 26:
			return 179;
			break;
		
		case 27:
			return 88;
			break;
		
		case 28:
			return 89;
			break;
		
		case 29:
			return 90;
			break;
		
		case 30:
			return 91;
			break;
		
		case 31:
			return 107;
			break;
		
		case 32:
			return 92;
			break;
		
		case 33:
			return 93;
			break;
		
		case 34:
			return 94;
			break;
		
		case 35:
			return 110;
			break;
		
		case 36:
			return 111;
			break;
		
		case 37:
			return 95;
			break;
		
		case 38:
			return 96;
			break;
		
		case 39:
			return 97;
			break;
		
		case 40:
			return 98;
			break;
		
		case 41:
			return 99;
			break;
		
		case 42:
			return 100;
			break;
		
		case 43:
			return 101;
			break;
		
		case 44:
			return 66;
			break;
		
		case 45:
			return 67;
			break;
		
		case 46:
			return 102;
			break;
		
		case 47:
			return 103;
			break;
		
		case 48:
			return 322;
			break;
		
		case 49:
			return 104;
			break;
		
		case 50:
			return 104;
			break;
		
		case 51:
			return 105;
			break;
		
		case 52:
			return 194;
			break;
		
		case 53:
			return 195;
			break;
		
		case 54:
			return 196;
			break;
		
		case 55:
			return 197;
			break;
		
		case 56:
			return 198;
			break;
		
		case 57:
			return 108;
			break;
		
		case 58:
			return 208;
			break;
		
		case 59:
			return 209;
			break;
		
		case 60:
			return 210;
			break;
		
		case 61:
			return 211;
			break;
		
		case 62:
			return 212;
			break;
	}
	return 322;
}

void func_234(int iParam0)
{
	func_236(iParam0, 1);
	Global_111638.f_18569[iParam0 /*6*/].f_3 = func_235();
	Global_111638.f_18569.f_380++;
}

int func_235()
{
	return (Global_111638.f_10011.f_21 + Global_111638.f_18569.f_380);
}

void func_236(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 55;
	if (bParam1)
	{
		iVar1 = uParam0;
		if (iVar1 == 46)
		{
			iVar0 = 35;
		}
		else if (iVar1 == 49)
		{
			iVar0 = 36;
		}
		else if (iVar1 == 50)
		{
			iVar0 = 37;
		}
		else if (iVar1 == 8)
		{
			iVar0 = 38;
		}
		else if (iVar1 == 16)
		{
			iVar0 = 39;
		}
		else if (iVar1 == 38)
		{
			iVar0 = 40;
		}
		else if (iVar1 == 39)
		{
			iVar0 = 41;
		}
		else if (iVar1 == 40)
		{
			iVar0 = 42;
		}
		else if (iVar1 == 41)
		{
			iVar0 = 43;
		}
		else if (iVar1 == 42)
		{
			iVar0 = 44;
		}
		else if (iVar1 == 43)
		{
			iVar0 = 45;
		}
		else if (iVar1 == 20)
		{
			iVar0 = 46;
		}
	}
	else
	{
		iVar2 = uParam0;
		if (iVar2 == 53)
		{
			iVar0 = 0;
		}
		else if (iVar2 == 1)
		{
			iVar0 = 1;
		}
		else if (iVar2 == 2)
		{
			iVar0 = 2;
		}
		else if (iVar2 == 17)
		{
			iVar0 = 3;
		}
		else if (iVar2 == 19)
		{
			iVar0 = 4;
		}
		else if (iVar2 == 43)
		{
			iVar0 = 5;
		}
		else if (iVar2 == 44)
		{
			iVar0 = 6;
		}
		else if (iVar2 == 63)
		{
			iVar0 = 8;
		}
		else if (iVar2 == 12)
		{
			iVar0 = 9;
		}
		else if (iVar2 == 13)
		{
			iVar0 = 10;
		}
		else if (iVar2 == 64)
		{
			iVar0 = 11;
		}
		else if (iVar2 == 20)
		{
			iVar0 = 12;
		}
		else if (iVar2 == 30)
		{
			iVar0 = 13;
		}
		else if (iVar2 == 31)
		{
			iVar0 = 14;
		}
		else if (iVar2 == 41)
		{
			iVar0 = 15;
		}
		else if (iVar2 == 38)
		{
			iVar0 = 16;
		}
		else if (iVar2 == 9)
		{
			iVar0 = 18;
		}
		else if (iVar2 == 59)
		{
			iVar0 = 19;
		}
		else if (iVar2 == 45)
		{
			iVar0 = 20;
		}
		else if (iVar2 == 10)
		{
			iVar0 = 21;
		}
		else if (iVar2 == 14)
		{
			iVar0 = 22;
		}
		else if (iVar2 == 16)
		{
			iVar0 = 24;
		}
		else if (iVar2 == 39)
		{
			iVar0 = 25;
		}
		else if (iVar2 == 46)
		{
			iVar0 = 26;
		}
		else if (iVar2 == 60)
		{
			iVar0 = 27;
		}
		else if (iVar2 == 22)
		{
			iVar0 = 28;
		}
		else if (iVar2 == 48)
		{
			iVar0 = 30;
		}
		else if (iVar2 == 61)
		{
			iVar0 = 31;
		}
		else if (iVar2 == 49)
		{
			iVar0 = 32;
		}
		else if (iVar2 == 27)
		{
			iVar0 = 34;
		}
		else if (iVar2 == 3)
		{
			iVar0 = 47;
		}
		else if (iVar2 == 4)
		{
			iVar0 = 48;
		}
		else if (iVar2 == 5)
		{
			iVar0 = 49;
		}
		else if (iVar2 == 6)
		{
			iVar0 = 50;
		}
		else if (iVar2 == 7)
		{
			iVar0 = 51;
		}
		else if (iVar2 == 58)
		{
			iVar0 = 53;
		}
		else if (iVar2 == 90)
		{
			iVar0 = 7;
		}
		else if (iVar2 == 74 || iVar2 == 75)
		{
			iVar0 = 17;
		}
		else if (iVar2 == 93)
		{
			iVar0 = 23;
		}
		else if (iVar2 == 69 || iVar2 == 70)
		{
			iVar0 = 29;
		}
		else if (iVar2 == 84 || iVar2 == 85)
		{
			iVar0 = 33;
		}
	}
	if (iVar0 != 55)
	{
		Global_111638.f_20559.f_472 = iVar0;
	}
}

void func_237(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return;
	}
	func_238(iParam0);
	unk_0x5D96D8530B3D0904(&(Global_111638.f_18569[iParam0 /*6*/]), 0);
}

void func_238(int iParam0)
{
	switch (iParam0)
	{
		case 30:
			func_242(22, 1, 0, 1, 0);
			break;
		
		case 15:
			func_239(37, 0);
			break;
		
		default:
			break;
	}
}

void func_239(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_241(iParam0, 0))
		{
			func_240(iParam0, 1, 0);
			func_240(iParam0, 2, 0);
			func_240(iParam0, 3, 0);
			func_240(iParam0, 4, 0);
			func_240(iParam0, 0, 1);
			Global_75441[iParam0] = 1;
		}
	}
	else
	{
		func_240(iParam0, 0, 0);
	}
}

void func_240(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x5D96D8530B3D0904(&(Global_111638.f_32744[iParam0]), iParam1);
	}
	else
	{
		unk_0x0674E58A79778E99(&(Global_111638.f_32744[iParam0]), iParam1);
	}
}

bool func_241(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_111638.f_32744[iParam0], iParam1);
}

void func_242(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_76622)
		{
			Global_2439138.f_75.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_111638.f_7256.f_227[iParam0] = iParam1;
		}
		Global_38398[iParam0] = iParam2;
		Global_38597[iParam0] = 1;
		func_245(iParam0, bParam3, iParam4, 0);
		func_243(iParam0, iParam1);
	}
}

void func_243(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0xECA6285B6CB268BA("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_244(0, 0);
			}
			else
			{
				func_244(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0xE108118042391BB3("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0x250BB9A851121D75("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x837C600ECEE8ABA2("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_244(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_110276, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_110276, iParam0);
	}
	Global_110275 = 1;
}

bool func_245(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_1652615 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_248(&Var3, iParam0);
	if (func_246())
	{
		iVar1 = Global_111638.f_7256.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2439138.f_75.f_227[iParam0];
	}
	iVar2 = Global_38796[iParam0];
	if (unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !bParam3)
	{
		Global_1652615 = 1;
	}
	else
	{
		bVar5 = true;
		if (unk_0x12AB0310C2281427(unk_0xBB0808A181D4745C()) != unk_0x12AB0310C2281427("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_38398[iParam0] && unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), Var3, true) < 200f)
				{
					bVar5 = false;
					Global_1652615 = 1;
				}
				if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()) || unk_0x946BFA82EB988C81(unk_0x16F2683693E537C9()))
				{
					if (!unk_0x757EF87A33649210())
					{
						bVar5 = false;
						Global_1652615 = 1;
					}
				}
			}
		}
		if (unk_0xEB880D98B5988D0C() && (!unk_0x991B1F0980C62628() || unk_0x00A15D69BCAA5267() != 5))
		{
			bVar5 = false;
			Global_1652615 = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0x77ADAEFF81EAE1E4(Var3, 10f, Var3.f_4[iVar1], false);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0x3124890FDA752DE4(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_39992[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[1 /*8*/]));
								Global_1652615 = 1;
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[2 /*8*/]));
								Global_1652615 = 1;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[0 /*8*/]));
								Global_1652615 = 1;
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_34)) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_34)))
							{
								unk_0x2404539258C5376B(&(Var3.f_34));
								Global_1652615 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_34)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_34)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_34));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427(""))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_34)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_34)))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_34));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0xBCFF5481C5F58C19(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x81CF20E10AAD5FD5(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
						{
							if (!unk_0xBCFF5481C5F58C19(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x2404539258C5376B(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_39793[iParam0] = 1;
					Global_39992[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = unk_0x0D1736C2E221BCEA(Var3, &(Var3.f_42));
					if (iVar6 != 0)
					{
						if (unk_0x12AB0310C2281427(&(Var3.f_50)) != unk_0x12AB0310C2281427(""))
						{
							if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_50)))
							{
								unk_0xFE3926923F5430AD(iVar6, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES")) && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x12AB0310C2281427(&(Var3.f_8[0 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[1 /*8*/])) != unk_0x12AB0310C2281427(""))
							{
								if (unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xFE3926923F5430AD(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("") && unk_0x12AB0310C2281427(&(Var3.f_8[2 /*8*/])) != unk_0x12AB0310C2281427("REMOVE_ALL_STATES"))
							{
								if (!unk_0xC30A04502B3FE8A8(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x8A12C90BAA1275CC(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xF1ABF0D4BF2D0A54(iVar6);
						}
					}
					Global_39992[iParam0] = 1;
					Global_39793[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x0EB28750412C3A5A(Var3, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), false), true) < 250f)
					{
						uVar4 = unk_0x57651D42225429CC(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0xB39672D8C1F6BB48(uVar4))
						{
							if (iVar1 == 0)
							{
								unk_0xCADC8175C61F28E5(uVar4, 3);
								Global_39992[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0xD92EF3526CDA283F(uVar4) != 6 && unk_0xD92EF3526CDA283F(uVar4) != 7) && unk_0xD92EF3526CDA283F(uVar4) != 8)
								{
									unk_0xCADC8175C61F28E5(uVar4, 10);
									Global_39992[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0x9E5FA221FDB148CD(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0x0674E58A79778E99(&(Global_38144[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x2192A5725EC5808C(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0x5D96D8530B3D0904(&(Global_38144[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_38597[iParam0] = 0;
				Global_38796[iParam0] = iVar1;
				if (!func_246())
				{
					if (!Global_39393[iParam0])
					{
						Global_39393[iParam0] = 1;
						Global_39592++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_246()
{
	if ((func_74() == -1 || func_74() == 999) && !func_247() == 0)
	{
		return 1;
	}
	return 0;
}

int func_247()
{
	return Global_30769;
}

int func_248(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -186270611;
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 46:
			return 42;
			break;
		
		case 47:
			return 43;
			break;
		
		case 49:
			return 44;
			break;
		
		case 50:
			return 45;
			break;
		
		case 8:
			if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_18569.f_382, 0))
			{
				return 46;
			}
			break;
		
		case 16:
			return 47;
			break;
		
		case 38:
			return 48;
			break;
		
		case 39:
			return 49;
			break;
		
		case 40:
			return 50;
			break;
		
		case 41:
			return 51;
			break;
		
		case 42:
			return 52;
			break;
		
		case 43:
			if (Global_111638.f_9080.f_99.f_58[101])
			{
				return 53;
			}
			else
			{
				return 54;
			}
			break;
		
		case 20:
			return 55;
			break;
	}
	return 0;
}

void func_250(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 46:
			func_251(4, bParam1);
			break;
		
		case 16:
			func_251(6, bParam1);
			break;
		
		case 37:
			func_251(17, bParam1);
			break;
		
		case 31:
			func_251(16, bParam1);
			break;
	}
}

void func_251(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_258(iParam0))
		{
			unk_0x5D96D8530B3D0904(&(Global_111638.f_26429), iVar0);
			if (!bParam1)
			{
				func_256(func_257(iParam0));
				if (!func_255(68))
				{
					func_252("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

void func_252(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_253(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_253(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x7F8A39872A07D2CE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0x7F8A39872A07D2CE(&(Global_111638.f_20405[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111638.f_20405.f_145 < 9)
	{
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_4), sParam1, 16);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_8 = (unk_0x1C0640BA9A7327B3() + iParam3);
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_9 = iParam5;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_11 = iParam6;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_12 = uParam2;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_13 = iParam7;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_14 = iParam8;
		Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = ((unk_0x1C0640BA9A7327B3() + iParam3) + iParam4);
		}
		else
		{
			Global_111638.f_20405[Global_111638.f_20405.f_145 /*16*/].f_10 = -1;
		}
		Global_111638.f_20405.f_145++;
		func_254();
	}
}

void func_254()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111638.f_20405.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111638.f_20405.f_145)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[0])
			{
				Global_111638.f_20405.f_146[0] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[1])
			{
				Global_111638.f_20405.f_146[1] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111638.f_20405[iVar0 /*16*/].f_12 > Global_111638.f_20405.f_146[2])
			{
				Global_111638.f_20405.f_146[2] = Global_111638.f_20405[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_255(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_20405.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_256(var uParam0)
{
	unk_0x1E64CE678ED5F61E("");
	unk_0x49E52B24E5A757B3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", uParam0);
}

char* func_257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_STOMIC";
			break;
		
		case 1:
			return "CM_STOFRA";
			break;
		
		case 2:
			return "CM_STOTRE";
			break;
		
		case 3:
			return "CM_STOAMA";
			break;
		
		case 4:
			return "CM_STOBEV";
			break;
		
		case 5:
			return "CM_STOBRA";
			break;
		
		case 6:
			return "CM_STOCHR";
			break;
		
		case 7:
			return "CM_STODAV";
			break;
		
		case 8:
			return "CM_STODEV";
			break;
		
		case 9:
			return "CM_STODRF";
			break;
		
		case 10:
			return "CM_STOFAB";
			break;
		
		case 11:
			return "CM_STOFLO";
			break;
		
		case 12:
			return "CM_STOJIM";
			break;
		
		case 13:
			return "CM_STOLAM";
			break;
		
		case 14:
			return "CM_STOLAZ";
			break;
		
		case 15:
			return "CM_STOLES";
			break;
		
		case 16:
			return "CM_STOMAU";
			break;
		
		case 17:
			return "CM_STOTHO";
			break;
		
		case 18:
			return "CM_STONER";
			break;
		
		case 19:
			return "CM_STOPAT";
			break;
		
		case 20:
			return "CM_STOSIM";
			break;
		
		case 21:
			return "CM_STOSOL";
			break;
		
		case 22:
			return "CM_STOSTE";
			break;
		
		case 23:
			return "CM_STOSTR";
			break;
		
		case 24:
			return "CM_STOTAN";
			break;
		
		case 25:
			return "CM_STOTAO";
			break;
		
		case 26:
			return "CM_STOTRA";
			break;
		
		case 27:
			return "CM_STOWAD";
			break;
	}
	return "ERROR!";
}

int func_258(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 28)
	{
		return unk_0xEAE0D21A50E6C7F4(Global_111638.f_26429, iParam0);
	}
	return 0;
}

void func_259(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_111638.f_8608[iParam0] = 1;
	Global_111638.f_8608.f_236[iParam0] = (unk_0x1C0640BA9A7327B3() + iParam1);
}

int func_260(char* sParam0)
{
	int iVar0;
	
	iVar0 = 1424;
	if (!unk_0x59F00CC3C33B17AD(sParam0))
	{
		return 1;
	}
	if (unk_0x7F8A39872A07D2CE(sParam0, "controller_Races"))
	{
		if (unk_0x8A22C4C08282BF26(joaat("controller_races")) > 0)
		{
			return 1;
		}
		iVar0 = 128;
	}
	unk_0x92DCE5C81176D2B4(sParam0);
	if (unk_0x1FBF08B001C4788A(sParam0))
	{
		start_new_script(sParam0, iVar0);
		unk_0x5E8C29AE121DF1C7(sParam0);
		return 1;
	}
	return 0;
}

int func_261()
{
	return func_262(unk_0xBB0808A181D4745C(), 0);
}

int func_262(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = unk_0x12AB0310C2281427(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_222(iVar0, &sVar1);
		if (unk_0x12AB0310C2281427(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_263(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8042 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 150)
	{
		func_28();
		if (iParam1 == 4)
		{
			func_269(iParam0, 0, 1);
			func_269(iParam0, 1, 1);
			func_269(iParam0, 2, 1);
			func_268(iParam0, 0, 1);
			func_268(iParam0, 1, 1);
			func_268(iParam0, 2, 1);
		}
		else
		{
			if (func_267(iParam0, iParam1) == 1 && func_266(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_269(iParam0, iVar0, 1);
			func_268(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76622)
			{
				if (iParam1 != 4)
				{
					if (Global_19486 != iParam1)
					{
						Global_8015[iParam1 /*4*/] = { func_265(iParam0) };
						Global_8032[iParam1] = 1;
						Global_8037[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19486)
					{
					}
					else
					{
						Global_7966[1 /*6*/] = { func_265(iParam0) };
						Global_7966[1 /*6*/].f_5 = iParam1;
						func_264();
					}
				}
				else
				{
					Global_7966[1 /*6*/] = { func_265(iParam0) };
					Global_7966[1 /*6*/].f_5 = iParam1;
					func_264();
				}
			}
			else
			{
				Global_7966[1 /*6*/] = { func_265(iParam0) };
				Global_7966[1 /*6*/].f_5 = iParam1;
				func_264();
			}
		}
	}
}

void func_264()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, unk_0x19C9F30A7697B43C(&(Global_1798[Global_8042 /*29*/].f_7)), 64);
	if (Global_8061 == 0)
	{
		unk_0x1E64CE678ED5F61E("");
		StringCopy(&cVar1, unk_0x19C9F30A7697B43C(&(Global_7966[1 /*6*/])), 64);
		sVar2 = unk_0x19C9F30A7697B43C("CELL_253");
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		unk_0x1E64CE678ED5F61E("CELL_255");
		unk_0x6B012227B3921E18(&(Global_7966[1 /*6*/]));
		unk_0x1AEA174B291A9906(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x0674E58A79778E99(&Global_7356, 0);
}

struct<4> func_265(int iParam0)
{
	return Global_1798[iParam0 /*29*/].f_3;
}

int func_266(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_24[iParam1];
}

int func_267(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1798[iParam0 /*29*/].f_12[iParam1];
}

void func_268(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_269(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1798[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111638.f_28045[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_270(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_61513 = 0;
	if (!Global_61737[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_73607)
	{
		if (Global_73608[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_73608[iVar1 /*9*/].f_1 = 1;
			Global_73608[iVar1 /*9*/].f_2 = 0f;
			if (Global_73608[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

void func_271(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xA30EC016B12C03E4();
	unk_0xBC03DF6093E8E71F(iVar0, 0);
	unk_0x98E4DC66A651C9FA(iVar0, bParam3, 0);
	func_272(0, 1, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		unk_0xBFE31971E49FA500(true);
		unk_0x8BCB70EB440DED83(true);
	}
	unk_0xA37A90C62806D848(1);
	if (iParam0 == 1)
	{
		unk_0x5413873D3F67BF93(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_37 != 0 && iLocal_37 != joaat("object")) && iLocal_37 != joaat("gadget_parachute"))
		{
			if (func_440(unk_0x16F2683693E537C9()))
			{
				if (unk_0x440C646F2F11A2A1(unk_0x16F2683693E537C9(), iLocal_37, 0))
				{
					unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), iLocal_37, false);
				}
			}
		}
	}
	if (func_313(unk_0x16F2683693E537C9()))
	{
		unk_0x6E8BDA9057564534(unk_0x16F2683693E537C9(), 0, 0);
	}
}

void func_272(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x4BC328AFC301140F(unk_0xD803B885F5E47A62(), 0);
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 1);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 1);
		func_279(1);
		unk_0xC60408C24B32AAC4();
		unk_0x56FCE5C6DA4AA600();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x1EE04CEA36EF313B())
			{
				unk_0x5CEB4DB888A62073(false);
			}
			if (!func_26())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_278(1, iParam3, iParam2, 0);
		Global_61518 = 1;
		Global_73828 = 1;
		Global_76620 = 1;
	}
	else
	{
		func_279(0);
		unk_0x17D339215F817B98();
		Global_61518 = 0;
		if (bParam1)
		{
			unk_0xF8041E6992430151();
		}
		unk_0xA2057B8C3D410B46(unk_0xD803B885F5E47A62(), 0);
		unk_0xC30A9983B09988FE(unk_0xD803B885F5E47A62(), 0);
		func_278(0, iParam3, iParam2, 0);
		if (unk_0x8CD06866876216F2())
		{
			if (((((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_276(unk_0xD803B885F5E47A62())) && !func_274(unk_0xD803B885F5E47A62(), 0)) && !func_273()) && !bParam4) && !bParam5)
			{
				unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
			}
		}
		else if (((!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !func_276(unk_0xD803B885F5E47A62())) && !bParam4) && !bParam5)
		{
			unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), false);
		}
		Global_76620 = 0;
	}
}

bool func_273()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[unk_0xD803B885F5E47A62() /*876*/].f_39.f_18, 14);
}

bool func_274(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_275(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590535[iParam0 /*876*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x40B8C182D63932FC(iParam0))
		{
			bVar0 = unk_0x08067D4957B73C02(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_275(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_77();
	}
	if (Global_1312857[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_276(int iParam0)
{
	if (func_274(iParam0, 0))
	{
		return 1;
	}
	if (func_277())
	{
		if (iParam0 == unk_0xD803B885F5E47A62())
		{
			return 1;
		}
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_2425662[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_277()
{
	return unk_0xEAE0D21A50E6C7F4(Global_2359302, 3);
}

int func_278(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x0EFF6B4415DAF4A1())
	{
		if (unk_0xFA2492ED90D43443() != iParam0 && uParam2)
		{
			unk_0xF3B6BD1C0DC44D29(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_279(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, 13);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7356, 13);
	}
}

void func_280()
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (func_440(iLocal_244))
	{
		if (unk_0xB4ECF989E2C1DAC8(iLocal_244, "rcmfanatic1", "jogging_on_spot", 3))
		{
			vVar1 = { func_53(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) - unk_0x68F4C0EC296D3901(iLocal_244, true)) };
			vVar2 = { unk_0x08D89CE2E20AE305(iLocal_244) };
			fVar3 = 0.25f;
			vVar0 = { vVar2 + vVar1 - vVar2 * Vector(fVar3, fVar3, fVar3) };
			unk_0xD8F6A53F4799FAFE(iLocal_244, func_281(0f, 0f, 0f, vVar0, 1));
		}
	}
}

float func_281(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param2 - Param0);
	fVar2 = (Param2.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x5D8ABF6396A76564(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam4 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_282()
{
	struct<20> Var0;
	
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	if (iLocal_63 == 0)
	{
		if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 242628503) != 1 && unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), 242628503) != 0)
		{
			unk_0xDD353D0E9C789D0E(&uLocal_379);
			unk_0x20E1DF68CAB023FF(0, &Local_314, &Var0, &Var0, 1040187392, 1040187392);
			unk_0x20E1DF68CAB023FF(0, &Local_316, &Var0, &Var0, 1040187392, 1040187392);
			unk_0x20E1DF68CAB023FF(0, &Local_318, &Var0, &Var0, 1040187392, 1040187392);
			unk_0x20E1DF68CAB023FF(0, &Local_320, &Var0, &Var0, 1040187392, 1040187392);
			unk_0x75ABDC5F81978924(uLocal_379);
			unk_0x78ADC381772E3D54(unk_0x16F2683693E537C9(), uLocal_379);
			func_39("Starting out of breath anim loop");
			iLocal_63 = 1;
			unk_0xF82EA857DA10E0CD(&uLocal_379);
		}
	}
	else if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iLocal_304, 1))
	{
		if ((unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "rcmfanatic1out_of_breath", "p_zero_tired_enter", 3) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "rcmfanatic1out_of_breath", "p_zero_tired_01", 3)) || unk_0xB4ECF989E2C1DAC8(unk_0x16F2683693E537C9(), "rcmfanatic1out_of_breath", "p_zero_tired_02", 3))
		{
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
		}
	}
}

bool func_283(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	var uVar0;
	var uVar1;
	
	func_14(uParam0, 145, sParam1, iParam11, iParam12, 0);
	if (iParam10 > 7)
	{
		if (iParam10 < 12)
		{
			iParam10 = 7;
		}
	}
	uVar0 = 10;
	uVar1 = 10;
	func_285(4, &uVar0, &uVar1, sParam2, sParam3, sParam4, sParam5, sParam6, sParam7, sParam8, sParam9, 0, 0, 0, 0, 0, 0);
	return func_284(&uVar0, &uVar1, iParam10, 0);
}

int func_284(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam2 > Global_20807)
			{
				if (bParam3 == 0)
				{
					unk_0x5CEB4DB888A62073(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
				}
				else
				{
					func_16();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x25037C66EB32B076())
		{
			return 0;
		}
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_35();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21801 = Global_21802;
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20424.f_370 = Global_21794;
		Global_20801 = Global_20802;
		Global_20803 = Global_20804;
		if (Global_21063 == 0)
		{
			Global_20959[0 /*6*/] = { Global_20985[0 /*6*/] };
			Global_20959[1 /*6*/] = { Global_20985[1 /*6*/] };
			Global_21011[0 /*6*/] = { Global_21037[0 /*6*/] };
			Global_21011[1 /*6*/] = { Global_21037[1 /*6*/] };
			Global_20972[0 /*6*/] = { Global_20998[0 /*6*/] };
			Global_20972[1 /*6*/] = { Global_20998[1 /*6*/] };
			Global_21024[0 /*6*/] = { Global_21050[0 /*6*/] };
			Global_21024[1 /*6*/] = { Global_21050[1 /*6*/] };
		}
		if (Global_20811)
		{
			unk_0x0674E58A79778E99(&Global_7356, 20);
			unk_0x0674E58A79778E99(&Global_7357, 17);
			unk_0x0674E58A79778E99(&Global_7358, 0);
			if (bParam3)
			{
				func_28();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam2 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				if (unk_0x65851B2C8786EE74(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (unk_0x869EFD0BC0868856(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x6438374572DE9B51(unk_0x16F2683693E537C9()))
				{
					return 0;
				}
				if (unk_0x989FD1982F631EA3(unk_0x16F2683693E537C9(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76622)
				{
					if (Global_21063 == 0)
					{
						if (unk_0x70EED0761B82965E(unk_0x16F2683693E537C9()))
						{
							return 0;
						}
						if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
						{
							return 0;
						}
						if (unk_0xFB275CE013F3A38C(unk_0x16F2683693E537C9()))
						{
							return 0;
						}
						if (unk_0x3114787DB5A129EF(unk_0xD803B885F5E47A62(), 0))
						{
							return 0;
						}
					}
				}
			}
			if (func_26())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
					}
			}
			func_25();
			Global_20815 = bParam3;
		}
		Global_20807 = iParam2;
		if (Global_20801 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_20801)
			{
				StringCopy(&(Global_20424.f_6[iVar0 /*6*/]), (*uParam0)[iVar0], 24);
				StringCopy(&(Global_20424.f_187[iVar0 /*6*/]), (*uParam1)[iVar0], 24);
				iVar0++;
			}
		}
		Global_19671 = 0;
		func_24();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam2 < Global_20807 || iParam2 == Global_20807)
	{
		return 0;
	}
	if (iParam2 == 2)
	{
	}
	else
	{
		func_16();
	}
	return 0;
}

void func_285(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	Global_20802 = iParam0;
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	(*uParam1)[0] = uParam3;
	(*uParam2)[0] = uParam4;
	(*uParam1)[1] = uParam5;
	(*uParam2)[1] = uParam6;
	(*uParam1)[2] = uParam7;
	(*uParam2)[2] = uParam8;
	(*uParam1)[3] = uParam9;
	(*uParam2)[3] = uParam10;
	(*uParam1)[4] = iParam11;
	(*uParam2)[4] = iParam12;
	(*uParam1)[5] = iParam13;
	(*uParam2)[5] = iParam14;
	(*uParam1)[6] = iParam15;
	(*uParam2)[6] = iParam16;
}

void func_286(int iParam0)
{
	if (func_291())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_290(0))
		{
			func_287(iParam0);
		}
		unk_0x5D96D8530B3D0904(&Global_7357, 2);
	}
}

void func_287(int iParam0)
{
	if (func_291())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_289())
		{
			func_288(1, 1);
		}
		else
		{
			func_288(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0x5D96D8530B3D0904(&Global_7357, 16);
	}
	if (unk_0x1EE04CEA36EF313B())
	{
		unk_0x5CEB4DB888A62073(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0x5D96D8530B3D0904(&Global_7356, 30);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_7356, 30);
	}
	if (!func_26())
	{
		Global_19486.f_1 = 3;
	}
}

void func_288(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_290(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0x1CFAC524932A967E(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			unk_0x39F06A2B18483C68(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			unk_0x39F06A2B18483C68(Global_19423);
		}
		else
		{
			unk_0x39F06A2B18483C68(Global_19414);
		}
	}
}

bool func_289()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

int func_290(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xEAE0D21A50E6C7F4(Global_7356, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x8A22C4C08282BF26(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_291()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

void func_292()
{
	unk_0x38C3A68D7861DCFD(0, 21, 1);
	unk_0x38C3A68D7861DCFD(0, 37, 1);
	unk_0x38C3A68D7861DCFD(0, 25, 1);
	unk_0x38C3A68D7861DCFD(0, 141, 1);
	unk_0x38C3A68D7861DCFD(0, 140, 1);
	unk_0x38C3A68D7861DCFD(0, 24, 1);
	unk_0x38C3A68D7861DCFD(0, 257, 1);
	unk_0x38C3A68D7861DCFD(0, 22, 1);
	unk_0x38C3A68D7861DCFD(0, 23, 1);
}

void func_293()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_313(Local_325[iVar0 /*12*/]) && unk_0x869EFD0BC0868856(Local_325[iVar0 /*12*/]))
		{
			unk_0xA3BF0AA5A2608191(Local_325[iVar0 /*12*/]);
			unk_0xDD353D0E9C789D0E(&uLocal_77);
			if (func_44(Local_325[iVar0 /*12*/], unk_0x16F2683693E537C9(), 1) < func_44(Local_325[iVar0 /*12*/], iLocal_244, 1))
			{
				unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
			}
			else
			{
				unk_0x0C8C0C840C2D1AD2(0, iLocal_244, -1, 0, 2);
				unk_0xF96A174EE26D7588(0, iLocal_244, 0);
			}
			unk_0x78A77CDD64392938(0, 3000);
			unk_0x96167B03C5A77156(0, Local_325[iVar0 /*12*/].f_8, 0.7f, 20000, 1f, 1, 1193033728);
			unk_0x75ABDC5F81978924(uLocal_77);
			unk_0x78ADC381772E3D54(Local_325[iVar0 /*12*/], uLocal_77);
			unk_0xF82EA857DA10E0CD(&uLocal_77);
		}
		if (func_440(Local_325[iVar0 /*12*/]))
		{
			if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), Local_325[iVar0 /*12*/]))
			{
				unk_0xA3BF0AA5A2608191(Local_325[iVar0 /*12*/]);
				unk_0xF3268524E9BE6D6E(Local_325[iVar0 /*12*/], unk_0x16F2683693E537C9(), 200f, -1, 1, 0);
				func_294(&(Local_325[iVar0 /*12*/]), 1, 0, 1);
			}
		}
		iVar0++;
	}
	if (iLocal_327 == 0)
	{
		if (iLocal_351 > 114)
		{
			if (func_313(Local_325[2 /*12*/]) && func_313(Local_325[3 /*12*/]))
			{
				iVar1 = 2;
				while (iVar1 <= 3)
				{
					unk_0xDD353D0E9C789D0E(&uLocal_77);
					unk_0x96167B03C5A77156(0, Local_325[iVar1 /*12*/].f_5, 0.7f, 20000, 1f, 1, 1193033728);
					unk_0x96167B03C5A77156(0, Local_325[iVar1 /*12*/].f_8, 0.7f, 20000, 1f, 1, 1193033728);
					unk_0x75ABDC5F81978924(uLocal_77);
					unk_0x78ADC381772E3D54(Local_325[iVar1 /*12*/], uLocal_77);
					unk_0xF82EA857DA10E0CD(&uLocal_77);
					iVar1++;
				}
				unk_0x0C8C0C840C2D1AD2(Local_325[2 /*12*/], Local_325[3 /*12*/], -1, 0, 2);
				unk_0x0C8C0C840C2D1AD2(Local_325[3 /*12*/], Local_325[2 /*12*/], -1, 0, 2);
			}
			if (func_313(iLocal_344))
			{
				unk_0xA3BF0AA5A2608191(iLocal_344);
			}
			iLocal_327 = 1;
		}
	}
	else
	{
		iVar2 = 2;
		while (iVar2 <= 3)
		{
			if (func_313(Local_325[iVar2 /*12*/]) && unk_0x869EFD0BC0868856(Local_325[iVar2 /*12*/]))
			{
				unk_0xA3BF0AA5A2608191(Local_325[iVar2 /*12*/]);
				unk_0xDD353D0E9C789D0E(&uLocal_77);
				if (func_44(Local_325[iVar2 /*12*/], unk_0x16F2683693E537C9(), 1) < func_44(Local_325[iVar2 /*12*/], iLocal_244, 1))
				{
					unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
					unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
				}
				else
				{
					unk_0x0C8C0C840C2D1AD2(0, iLocal_244, -1, 0, 2);
					unk_0xF96A174EE26D7588(0, iLocal_244, 0);
				}
				unk_0x78A77CDD64392938(0, 3000);
				unk_0x96167B03C5A77156(0, Local_325[iVar2 /*12*/].f_8, 0.7f, 20000, 1f, 1, 1193033728);
				unk_0x75ABDC5F81978924(uLocal_77);
				unk_0x78ADC381772E3D54(Local_325[iVar2 /*12*/], uLocal_77);
				unk_0xF82EA857DA10E0CD(&uLocal_77);
			}
			if (func_440(Local_325[iVar2 /*12*/]))
			{
				if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), Local_325[iVar2 /*12*/]))
				{
					unk_0xA3BF0AA5A2608191(Local_325[iVar2 /*12*/]);
					unk_0xF3268524E9BE6D6E(Local_325[iVar2 /*12*/], unk_0x16F2683693E537C9(), 200f, -1, 1, 0);
					func_294(&(Local_325[iVar2 /*12*/]), 1, 0, 1);
				}
			}
			iVar2++;
		}
	}
}

void func_294(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(*iParam0))
		{
			unk_0xE8832A9E16A57A1F(*iParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0x8FB4E06C94958F84(*iParam0);
			}
			unk_0xFADC0A217229F6B5(*iParam0, bParam1);
			if (iParam2 == 1)
			{
				unk_0x11AD11297DC58CC7(*iParam0, 0);
			}
		}
		unk_0x6DAD7906B73F064D(iParam0);
	}
}

var func_295()
{
	var uVar0;
	
	unk_0x9414396734E14897(sLocal_348, func_296(), &uVar0);
	return uVar0;
}

Vector3 func_296()
{
	vector3 vVar0;
	
	func_297();
	if (iLocal_352 < (iLocal_350 - 1))
	{
		unk_0xEF8F639897C675D5(sLocal_348, iLocal_352 + 1, &vVar0);
	}
	else
	{
		unk_0xEF8F639897C675D5(sLocal_348, (iLocal_350 - 1), &vVar0);
	}
	return vVar0;
}

void func_297()
{
	if (unk_0x1C2E18E9C63BEB77(sLocal_348))
	{
		unk_0x9414396734E14897(sLocal_348, unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), &iLocal_351);
		unk_0x9414396734E14897(sLocal_348, unk_0x68F4C0EC296D3901(iLocal_244, true), &iLocal_352);
		if (iLocal_364 < iLocal_362)
		{
			unk_0xEF8F639897C675D5(sLocal_348, iLocal_351, &vLocal_353);
		}
	}
}

float func_298(int iParam0, int iParam1)
{
	return func_44(iParam0, iParam1, 1);
}

void func_299()
{
	iLocal_312 = unk_0x0D032838710EE57D("DEFAULT_SCRIPTED_CAMERA", true);
	unk_0x86F44313DFA8F00C(iLocal_312, -2006.404f, -505.1258f, 12.1679f, -8.411f, 0f, -152.3152f, 50f, 0, 1, 1, 2);
	unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
	unk_0xE3BB8E05FCEB3FBE(iLocal_312, true);
}

void func_300(vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = unk_0xA30EC016B12C03E4();
	if (unk_0xE1DBBD6CE209517C(iVar0))
	{
		func_303(0);
		if (bParam7)
		{
			unk_0x26E2E2345FB3D358(unk_0xA30EC016B12C03E4(), 1);
		}
		if (bParam6)
		{
			switch (func_29())
			{
				case 0:
					if (func_213(unk_0x16F2683693E537C9(), 8, 15))
					{
						func_101(unk_0x16F2683693E537C9(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_213(unk_0x16F2683693E537C9(), 9, 6))
					{
						func_101(unk_0x16F2683693E537C9(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 1:
					if (func_213(unk_0x16F2683693E537C9(), 8, 1) || func_213(unk_0x16F2683693E537C9(), 8, 10))
					{
						func_101(unk_0x16F2683693E537C9(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 2:
					if (func_213(unk_0x16F2683693E537C9(), 8, 4))
					{
						func_101(unk_0x16F2683693E537C9(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam4 == 1)
		{
			unk_0x745CE398A4B0A3C6(func_302(unk_0xA30EC016B12C03E4()), 50f, 0);
		}
		if (iParam5 == 1)
		{
			unk_0x75CFD6AD66ADFDD1(vParam0, 30f, 0);
		}
		if (bParam8)
		{
			unk_0x7800CEC090C01D4D(vParam0, 30f);
		}
		unk_0x679C321F8CAA2CFA(vParam0, 30f, 0);
		unk_0x67F91979413C5D76(iVar0, 0, 0);
		unk_0x56EA5D248F36A081(iVar0, 0);
		unk_0xBC03DF6093E8E71F(iVar0, 1);
		if (bParam10)
		{
			unk_0xBFE31971E49FA500(false);
			unk_0x8BCB70EB440DED83(false);
		}
		unk_0x790015DC92C918E2();
		if (iParam9 == 1)
		{
			unk_0xA37A90C62806D848(1);
		}
		if (iParam1 == 1)
		{
			unk_0x5413873D3F67BF93(true, 0);
		}
		if (iParam2 == 1)
		{
			iLocal_37 = 0;
			if (func_440(unk_0x16F2683693E537C9()))
			{
				iLocal_37 = unk_0x78CE7F4A02231950(unk_0x16F2683693E537C9());
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), true);
			}
		}
		if (iParam3 == 1)
		{
			func_301(500, 0);
		}
	}
}

void func_301(int iParam0, bool bParam1)
{
	if (unk_0x757EF87A33649210() || unk_0xD0BB2359EC70FC37())
	{
		if (!unk_0x7BCE0E6DD4A1F749())
		{
			unk_0x82E51BCA72537B6C(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x0F1CCD77290EE12F())
		{
			wait(0);
		}
	}
}

Vector3 func_302(int iParam0)
{
	return unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(iParam0), false);
}

void func_303(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA30EC016B12C03E4();
	if (!unk_0x131F22FE6F47A65D(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0x98E4DC66A651C9FA(iVar0, bParam0, 16);
		unk_0x98E4DC66A651C9FA(iVar0, bParam0, 32);
	}
	func_272(1, 1, 0, 0, 0, 0);
}

void func_304(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	func_305(vParam0, vParam1, fParam2, vParam3, fParam4, vParam5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_305(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, float fParam4, vector3 vParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0x728870EB733D12A1();
	if (unk_0xC844350D5D58C99A(iVar0))
	{
		if (!unk_0xAF6690C489CC6203(iVar0))
		{
			unk_0x73270B3C9CC833FD(iVar0, true, 0);
			iVar3 = 1;
		}
		if (unk_0xDF1306B443CD3D15(iVar0, 0))
		{
			if (bParam10)
			{
				func_311(iVar0);
			}
			if (unk_0x3D1053F9EB43B7AD(iVar0, vParam0, vParam1, fParam2, 0, true, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar6 = { unk_0x68F4C0EC296D3901(iVar0, true) };
				if ((vVar6.z > vParam0.z && vVar6.z < vParam1.z) || (vVar6.z > vParam1.z && vVar6.z < vParam0.z))
				{
					if (func_309(iVar0, vParam0, vParam1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0xDF1306B443CD3D15(iVar0, 0))
			{
				if (unk_0x4906F8A34E9F4814(iVar0, joaat("taxi")))
				{
					if (unk_0xA30B8362589C124A(iVar0, -1, 0) != unk_0x16F2683693E537C9() && unk_0xA30B8362589C124A(iVar0, -1, 0) != 0)
					{
						if (unk_0x0EB28750412C3A5A(vParam0 + vParam1 / Vector(2f, 2f, 2f), unk_0x68F4C0EC296D3901(iVar0, true), true) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_307(iVar0, func_29(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_306(vParam5))
				{
					if (unk_0xDF1306B443CD3D15(iVar0, 0))
					{
						iVar7 = unk_0x134B62B726CEC8E6(iVar0);
						unk_0x064C1B2FD84B6ED5(iVar0, &vVar4, &vVar5);
						if (unk_0xAFB8495D36825275(iVar7))
						{
							vParam5.x = (vParam5.x + 3f);
							vParam5.y = (vParam5.y + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							vParam5 = { vParam5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							vParam5 = { vParam5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar5.x - vVar4.x) > vParam5.x)
						{
							bVar2 = false;
						}
						else if ((vVar5.y - vVar4.y) > vParam5.y)
						{
							bVar2 = false;
						}
						else if ((vVar5.z - vVar4.z) > vParam5.z)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0xDF1306B443CD3D15(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x28F5E4DA506AC0CA(vParam3, 5f, 0, 0, 0, 0, false, 0);
						unk_0xD8F6A53F4799FAFE(iVar0, fParam4);
						unk_0xA47B46945FF6DE74(iVar0, vParam3, 1, false, 0, 1);
						unk_0xB9FD7450C0DAB575(iVar0, 1084227584);
						if (bParam9)
						{
							unk_0x56FDC9ADE35F7DB0(iVar0, false, 1, 0);
							unk_0x05CA0E7946B27A19(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0xAF6690C489CC6203(iVar0) || !unk_0x9C77D2D0559097F0(iVar0, 1))
						{
							unk_0x73270B3C9CC833FD(iVar0, true, 1);
						}
						if (unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iVar0, 0))
						{
							unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(iVar0, true), 1, false, 0, 1);
						}
						unk_0xA954465BA6FDEFE2(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				unk_0x10F452EDECF82313(vParam0, vParam1, fParam2, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0xC844350D5D58C99A(iVar0))
				{
					if (unk_0xAF6690C489CC6203(iVar0))
					{
						unk_0x046C362CF15F1935(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xAF6690C489CC6203(iVar0))
			{
				unk_0x73270B3C9CC833FD(iVar0, true, 0);
			}
			iVar8 = unk_0xA30B8362589C124A(iVar0, -1, 0);
			if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
			{
				unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, true), 1, false, 0, 1);
			}
			iVar9 = unk_0x7087E053058E9F6C(unk_0x134B62B726CEC8E6(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = unk_0xA30B8362589C124A(iVar0, 0, 0);
				if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
				{
					unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, true), 1, false, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = unk_0xA30B8362589C124A(iVar0, 1, 0);
				if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
				{
					unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, true), 1, false, 0, 1);
				}
				iVar8 = unk_0xA30B8362589C124A(iVar0, 2, 0);
				if (unk_0xC844350D5D58C99A(iVar8) && !unk_0xEB6A8945D1AC98A1(iVar8))
				{
					unk_0xA47B46945FF6DE74(iVar8, unk_0x68F4C0EC296D3901(iVar8, true), 1, false, 0, 1);
				}
			}
			unk_0xA954465BA6FDEFE2(&iVar0);
		}
	}
}

int func_306(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_307(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xC844350D5D58C99A(iParam0) || !unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_308(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xEAE0D21A50E6C7F4(Global_111638.f_7224[iVar2], 0))
		{
			if (unk_0x5B6BEDD9A86023B7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_308(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_309(int iParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (unk_0xDF1306B443CD3D15(iParam0, 0))
	{
		vParam1.z = vParam2.z;
		vVar0 = { func_53(vParam1 - vParam2) };
		vVar1 = { vVar0 };
		vVar0.x = -vVar1.y;
		vVar0.y = vVar1.x;
		vVar0.z = 0f;
		vVar2 = { vParam1 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar3 = { vParam1 + vVar0 * FtoV((fParam3 / 2f)) };
		vVar4 = { vParam2 - vVar0 * FtoV((fParam3 / 2f)) };
		vVar5 = { vParam2 + vVar0 * FtoV((fParam3 / 2f)) };
		unk_0xA6B02C1DB14DDA13(unk_0x134B62B726CEC8E6(iParam0), &Var7, &Var8);
		vVar6[0 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var7, Var7.f_1, 0f) };
		vVar6[1 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var7, Var8.f_1, 0f) };
		vVar6[2 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var8, Var7.f_1, 0f) };
		vVar6[3 /*3*/] = { unk_0x68E4ADDDDCD7BDDE(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_310(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar3) || func_310(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar3, vVar5)) || func_310(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar4, vVar5)) || func_310(vVar6[0 /*3*/], vVar6[1 /*3*/], vVar2, vVar4)) || func_310(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar3)) || func_310(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar3, vVar5)) || func_310(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar4, vVar5)) || func_310(vVar6[1 /*3*/], vVar6[3 /*3*/], vVar2, vVar4)) || func_310(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar3)) || func_310(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar3, vVar5)) || func_310(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar4, vVar5)) || func_310(vVar6[3 /*3*/], vVar6[2 /*3*/], vVar2, vVar4)) || func_310(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar3)) || func_310(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar3, vVar5)) || func_310(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar4, vVar5)) || func_310(vVar6[2 /*3*/], vVar6[0 /*3*/], vVar2, vVar4))
		{
			return 1;
		}
	}
	return 0;
}

int func_310(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

void func_311(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (unk_0xDF1306B443CD3D15(iParam0, 0))
		{
			if (unk_0x6EE94F60DA2A2273(iParam0) <= 200f)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 500f);
			}
			if (unk_0xD96C5EC6FCB061BA(iParam0) <= 700f)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 900f);
			}
			if (unk_0x7F6DC62EA9922664(iParam0) < 200)
			{
				unk_0x5DAB50E08C3C504A(iParam0, 500f);
			}
		}
	}
}

Vector3 func_312()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_313(int iParam0)
{
	if (func_440(iParam0))
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_314()
{
	switch (iLocal_55)
	{
		case 0:
			func_39("SETUP PLAYER IN VEHICLE STATE");
			if (unk_0x25037C66EB32B076())
			{
				unk_0xFD81FDD5AE805B89(0);
			}
			if (unk_0xE4EDC4B0E92C078B(iLocal_357))
			{
				unk_0x7F010F50CE03A8AF(iLocal_357, 0);
			}
			unk_0x790015DC92C918E2();
			if (unk_0xB72E131222E66495(iLocal_244))
			{
				unk_0xF2332141D3B90CF2(iLocal_244, 1, 0);
			}
			unk_0xA8CC11FF8D2962D4(iLocal_244, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 3f, -1, 3f, 1);
			iLocal_370 = unk_0x1C0640BA9A7327B3();
			if (func_40())
			{
				func_39("stop scripted conversation at STAGE_PLAYER_IN_VEHICLE");
				func_37();
			}
			iLocal_257 = 1;
			func_39("STARTING PLAYER IN VEHICLE LOOP");
			iLocal_55 = 1;
			break;
		
		case 1:
			if (iLocal_257)
			{
				if (func_298(unk_0x16F2683693E537C9(), iLocal_244) < 4f)
				{
					unk_0xA3BF0AA5A2608191(iLocal_244);
					unk_0xF96A174EE26D7588(iLocal_244, unk_0x16F2683693E537C9(), -1);
					iLocal_257 = 0;
				}
			}
			else if (func_298(unk_0x16F2683693E537C9(), iLocal_244) > 5f)
			{
				unk_0xA3BF0AA5A2608191(iLocal_244);
				unk_0xA8CC11FF8D2962D4(iLocal_244, unk_0x16F2683693E537C9(), 0f, 0f, 0f, 3f, -1, 3f, 1);
				iLocal_257 = 1;
			}
			if ((unk_0x1C0640BA9A7327B3() - iLocal_370) > 4000)
			{
				unk_0xC92DB9682A650680("RC6A_FAIL");
				iLocal_58 = 3;
				iLocal_55 = 0;
				iLocal_56 = 10;
			}
			if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				unk_0x790015DC92C918E2();
				if (!unk_0x2EBF5002C6B6A06C(sLocal_348))
				{
					if (unk_0x1C2E18E9C63BEB77(sLocal_348))
					{
						unk_0xDD353D0E9C789D0E(&uLocal_77);
						unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
						unk_0x96167B03C5A77156(0, func_296(), 3f, 20000, 1048576000, 0, 1193033728);
						unk_0xF44B0E19CAC31C33(0, sLocal_348, func_295(), 1040, -1);
						unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
						unk_0xC6EB89C59F2AF6B8(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
						unk_0x75ABDC5F81978924(uLocal_77);
						unk_0x78ADC381772E3D54(iLocal_244, uLocal_77);
						unk_0xF82EA857DA10E0CD(&uLocal_77);
					}
				}
				iLocal_55 = 1;
				iLocal_56 = iLocal_57;
				if (unk_0xE4EDC4B0E92C078B(iLocal_357))
				{
					unk_0x7F010F50CE03A8AF(iLocal_357, 255);
				}
				unk_0x8BD0DC8EEFDC56D8();
			}
			break;
	}
}

void func_315()
{
	switch (iLocal_55)
	{
		case 0:
			if (!unk_0xE4EDC4B0E92C078B(iLocal_245))
			{
				iLocal_245 = func_317(iLocal_244, 1, 1, 5);
				unk_0x321E019A46034F39(iLocal_245, true);
			}
			iLocal_55 = 1;
			break;
		
		case 1:
			func_316();
			func_293();
			break;
	}
}

void func_316()
{
	if (!func_7(iLocal_304))
	{
		unk_0x523BCC9DC80CD82F(iLocal_307);
		if (unk_0xB87F6CF6E5628C67(iLocal_307))
		{
			iLocal_304 = unk_0x122AAB0B1D6F55AD(iLocal_307, vLocal_305, fLocal_306, 1, 1, 0);
			unk_0x71199B01895C6202(iLocal_307);
		}
	}
}

int func_317(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = true;
	if (bVar1)
	{
		if (func_440(iParam0))
		{
			iVar0 = unk_0x5C3B41825F6AC5A0(iParam0);
			unk_0x321E019A46034F39(iVar0, bParam2);
			unk_0x2A065371C9D96655(iVar0, iParam3);
			unk_0x516E63E474722206(iVar0, 0.7f);
			if (!bParam1)
			{
				unk_0x516E63E474722206(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

void func_318()
{
	var uVar0;
	
	switch (iLocal_55)
	{
		case 0:
			func_39("SETUP SPRINT_TO_FINISH");
			if (!unk_0xE4EDC4B0E92C078B(iLocal_245))
			{
				iLocal_245 = func_317(iLocal_244, 1, 1, 5);
				unk_0x321E019A46034F39(iLocal_245, true);
			}
			iLocal_347 = 0;
			iLocal_55 = 1;
			func_39("GOING INTO SPRINT_TO_FINISH MAIN LOOP");
			break;
		
		case 1:
			unk_0x6A36BC55C7F6D023(0.5f);
			if (vLocal_292.z == 0 && iLocal_352 < 105)
			{
				if (func_331() && func_298(unk_0x16F2683693E537C9(), iLocal_244) < 25f)
				{
					if (func_17(&uLocal_78, "FAN1AU", vLocal_292.x, 7, 0, 0, 0))
					{
						vLocal_292.z = 1;
						unk_0xC6EB89C59F2AF6B8(iLocal_244, "rcmfanatic1yell", "yell_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
					}
				}
			}
			if (func_329(vLocal_292.x))
			{
				if (func_298(unk_0x16F2683693E537C9(), iLocal_244) > 30f)
				{
					func_15();
				}
			}
			func_327();
			func_316();
			func_325();
			func_321();
			func_293();
			if ((iLocal_265 < 3 && iLocal_352 < 117) && iLocal_351 < 117)
			{
				if (!func_40())
				{
					if ((unk_0x1C0640BA9A7327B3() - iLocal_368) > 3000)
					{
						if (func_319("FAN1_FAST", sLocal_266[iLocal_265], 0, &uVar0))
						{
							iLocal_265++;
						}
					}
				}
				else
				{
					iLocal_368 = unk_0x1C0640BA9A7327B3();
				}
			}
			break;
	}
}

int func_319(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (iLocal_243 == 0 && !unk_0xD17F06053799A7CA())
	{
		if (bParam2)
		{
			if (unk_0x25037C66EB32B076())
			{
				*uParam3 = unk_0x40EFDB96B3112BA7();
				func_39("Stopping scripted convo at can Mary Ann say single line");
				func_37();
				unk_0x790015DC92C918E2();
			}
			if (func_320(&uLocal_78, "FAN1AU", sParam0, sParam1, 7, 0, 0))
			{
				return 1;
			}
		}
		else if (!func_40())
		{
			if (func_320(&uLocal_78, "FAN1AU", sParam0, sParam1, 7, 0, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_320(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_14(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 1;
	Global_21798 = 0;
	Global_21802 = 0;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_18(sParam2, iParam4, 0);
}

void func_321()
{
	switch (iLocal_378)
	{
		case 0:
			if (func_324())
			{
				func_39("CPR scene resources loaded - progressing");
				func_323(1);
				iLocal_378 = 1;
			}
			break;
		
		case 1:
			if (iLocal_364 >= 7)
			{
				if (func_7(iLocal_332))
				{
					if (func_313(iLocal_328) && func_313(iLocal_329))
					{
						unk_0xDD353D0E9C789D0E(&uLocal_77);
						unk_0x1B901F542DF070CF(0, iLocal_332, "Fanatic1Quad", 16, 14, 0, -1, -1f, 0, 1073741824);
						unk_0x45F014B3D0466974(0, iLocal_332, 0);
						unk_0x0C8C0C840C2D1AD2(0, iLocal_329, -1, 0, 2);
						unk_0x80AA372E04ED318D(0, unk_0x68F4C0EC296D3901(iLocal_329, true), 1.8f, 20000, 1193033728, 1056964608);
						unk_0x75ABDC5F81978924(uLocal_77);
						unk_0x78ADC381772E3D54(iLocal_328, uLocal_77);
						unk_0xF82EA857DA10E0CD(&uLocal_77);
						unk_0x1AEF7184B203A58D(iLocal_332, 5f);
						unk_0x046C362CF15F1935(&iLocal_332);
						iLocal_378 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (func_313(iLocal_328) && func_313(iLocal_329))
			{
				if (unk_0x869EFD0BC0868856(iLocal_329))
				{
					iLocal_378 = 6;
				}
				if (func_44(iLocal_329, iLocal_328, 1) < 2f)
				{
					unk_0x11AD11297DC58CC7(iLocal_328, 1);
					iLocal_336 = unk_0xE9744DB7B8CA6965(vLocal_334, vLocal_335, 2);
					unk_0x915804B434753CBD(iLocal_328, iLocal_336, "mini@cpr@char_a@cpr_def", "cpr_intro", 4f, -8f, 1, 0, 4f, 0);
					unk_0x915804B434753CBD(iLocal_329, iLocal_336, "mini@cpr@char_b@cpr_def", "cpr_intro", 8f, -8f, 4, 0, 1148846080, 0);
					iLocal_378 = 3;
				}
			}
			break;
		
		case 3:
			if (func_313(iLocal_328) && func_313(iLocal_329))
			{
				if (unk_0x869EFD0BC0868856(iLocal_328) || unk_0x869EFD0BC0868856(iLocal_329))
				{
					iLocal_378 = 6;
				}
				else if (unk_0xA45992A6CE82FB43(iLocal_336) > 0.99f)
				{
					iLocal_336 = unk_0xE9744DB7B8CA6965(vLocal_334, vLocal_335, 2);
					unk_0x915804B434753CBD(iLocal_328, iLocal_336, "mini@cpr@char_a@cpr_str", "cpr_pumpchest", 8f, -8f, 1, 0, 1148846080, 0);
					unk_0x915804B434753CBD(iLocal_329, iLocal_336, "mini@cpr@char_b@cpr_str", "cpr_pumpchest", 8f, -8f, 4, 0, 1148846080, 0);
					unk_0xC90224D9E95E5E3A(iLocal_336, 1);
					iLocal_378 = 4;
				}
				if (func_322())
				{
					if (unk_0xA45992A6CE82FB43(iLocal_336) > 0.23f)
					{
						iLocal_378 = 5;
					}
					else
					{
						unk_0xDD353D0E9C789D0E(&uLocal_77);
						unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
						unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 80f, -1, 0, 0);
						unk_0x75ABDC5F81978924(uLocal_77);
						unk_0x78ADC381772E3D54(iLocal_328, uLocal_77);
						unk_0xF82EA857DA10E0CD(&uLocal_77);
						if (func_313(iLocal_330))
						{
							unk_0xDD353D0E9C789D0E(&uLocal_77);
							unk_0x78A77CDD64392938(0, 200);
							unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 80f, -1, 0, 0);
							unk_0x75ABDC5F81978924(uLocal_77);
							unk_0x78ADC381772E3D54(iLocal_330, uLocal_77);
							unk_0xF82EA857DA10E0CD(&uLocal_77);
						}
						if (func_313(iLocal_331))
						{
							unk_0xDD353D0E9C789D0E(&uLocal_77);
							unk_0x78A77CDD64392938(0, 500);
							unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 80f, -1, 0, 0);
							unk_0x75ABDC5F81978924(uLocal_77);
							unk_0x78ADC381772E3D54(iLocal_331, uLocal_77);
							unk_0xF82EA857DA10E0CD(&uLocal_77);
						}
						iLocal_378 = 8;
					}
				}
			}
			break;
		
		case 4:
			if (func_313(iLocal_328) && func_313(iLocal_329))
			{
				if (unk_0x869EFD0BC0868856(iLocal_328) || unk_0x869EFD0BC0868856(iLocal_329))
				{
					iLocal_378 = 6;
				}
				else if (func_322())
				{
					iLocal_378 = 5;
				}
			}
			break;
		
		case 5:
			if (func_313(iLocal_328) && !unk_0xE9FDA1035CFEA94F(iLocal_328))
			{
				unk_0xDD353D0E9C789D0E(&uLocal_77);
				unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
				unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "KNEEL_EXIT", 4f, -8f, -1, 8192, 0, 0, 0, 0);
				unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 80f, -1, 0, 0);
				unk_0x75ABDC5F81978924(uLocal_77);
				unk_0x78ADC381772E3D54(iLocal_328, uLocal_77);
				unk_0xF82EA857DA10E0CD(&uLocal_77);
			}
			if (func_313(iLocal_330) && !unk_0xE9FDA1035CFEA94F(iLocal_330))
			{
				unk_0xDD353D0E9C789D0E(&uLocal_77);
				unk_0x78A77CDD64392938(0, 200);
				unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 80f, -1, 0, 0);
				unk_0x75ABDC5F81978924(uLocal_77);
				unk_0x78ADC381772E3D54(iLocal_330, uLocal_77);
				unk_0xF82EA857DA10E0CD(&uLocal_77);
			}
			if (func_313(iLocal_331) && !unk_0xE9FDA1035CFEA94F(iLocal_331))
			{
				unk_0xDD353D0E9C789D0E(&uLocal_77);
				unk_0x78A77CDD64392938(0, 500);
				unk_0xF3268524E9BE6D6E(0, unk_0x16F2683693E537C9(), 80f, -1, 0, 0);
				unk_0x75ABDC5F81978924(uLocal_77);
				unk_0x78ADC381772E3D54(iLocal_331, uLocal_77);
				unk_0xF82EA857DA10E0CD(&uLocal_77);
			}
			if (func_313(iLocal_329))
			{
				unk_0xD458AC1C1D29C3B4(iLocal_329, 0, 0);
			}
			iLocal_378 = 8;
			break;
		
		case 6:
			if (func_313(iLocal_328))
			{
				unk_0x11AD11297DC58CC7(iLocal_328, 0);
				unk_0xDD353D0E9C789D0E(&uLocal_77);
				if (!unk_0x869EFD0BC0868856(iLocal_328))
				{
					unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "KNEEL_EXIT", 4f, -8f, -1, 8192, 0, 0, 0, 0);
				}
				unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
				unk_0x0C8C0C840C2D1AD2(0, iLocal_329, -1, 0, 2);
				if (func_44(iLocal_328, iLocal_329, 1) > 2f)
				{
					unk_0x96167B03C5A77156(0, unk_0x68F4C0EC296D3901(iLocal_329, true), 1f, 20000, 1.5f, 0, 1193033728);
				}
				unk_0xF96A174EE26D7588(0, iLocal_329, 0);
				unk_0x1DC614CBE22FFB4F(0, 10000);
				unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
				unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), -1);
				unk_0x75ABDC5F81978924(uLocal_77);
				unk_0x78ADC381772E3D54(iLocal_328, uLocal_77);
				unk_0xF82EA857DA10E0CD(&uLocal_77);
			}
			if (func_313(iLocal_330))
			{
				unk_0x5B8BE59CB25E8968(iLocal_330, 0, 0);
				unk_0x0C8C0C840C2D1AD2(iLocal_330, iLocal_329, 2000, 0, 2);
				unk_0xF96A174EE26D7588(iLocal_330, iLocal_329, 0);
				func_294(&iLocal_330, 1, 0, 1);
			}
			if (func_313(iLocal_331))
			{
				unk_0x5B8BE59CB25E8968(iLocal_331, 0, 0);
				unk_0x0C8C0C840C2D1AD2(iLocal_331, iLocal_329, 2000, 0, 2);
				unk_0xF96A174EE26D7588(iLocal_331, iLocal_329, 0);
				func_294(&iLocal_331, 1, 0, 1);
			}
			if (func_313(iLocal_329))
			{
				unk_0xD458AC1C1D29C3B4(iLocal_329, 0, 0);
			}
			iLocal_378 = 7;
			break;
		
		case 7:
			if (func_313(iLocal_328))
			{
				if ((unk_0xD1960163A3042274(iLocal_328, 490823532) != 1 && unk_0xD1960163A3042274(iLocal_328, 490823532) != 0) && unk_0x869EFD0BC0868856(iLocal_328))
				{
					unk_0xDD353D0E9C789D0E(&uLocal_77);
					unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
					unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), 0);
					unk_0x0C8C0C840C2D1AD2(0, iLocal_329, -1, 0, 2);
					if (func_44(iLocal_328, iLocal_329, 1) > 2f)
					{
						unk_0x96167B03C5A77156(0, unk_0x68F4C0EC296D3901(iLocal_329, true), 1f, 20000, 1.5f, 0, 1193033728);
					}
					unk_0xF96A174EE26D7588(0, iLocal_329, 0);
					unk_0x1DC614CBE22FFB4F(0, 10000);
					unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
					unk_0xF96A174EE26D7588(0, unk_0x16F2683693E537C9(), -1);
					unk_0x75ABDC5F81978924(uLocal_77);
					unk_0x78ADC381772E3D54(iLocal_328, uLocal_77);
					unk_0xF82EA857DA10E0CD(&uLocal_77);
				}
			}
			if (func_322())
			{
				if (func_313(iLocal_328) && !unk_0xE9FDA1035CFEA94F(iLocal_328))
				{
					unk_0xF3268524E9BE6D6E(iLocal_328, unk_0x16F2683693E537C9(), 80f, -1, 0, 0);
				}
				if (func_313(iLocal_330) && !unk_0xE9FDA1035CFEA94F(iLocal_330))
				{
					unk_0xF3268524E9BE6D6E(iLocal_330, unk_0x16F2683693E537C9(), 80f, -1, 0, 0);
				}
				if (func_313(iLocal_331) && !unk_0xE9FDA1035CFEA94F(iLocal_331))
				{
					unk_0xF3268524E9BE6D6E(iLocal_331, unk_0x16F2683693E537C9(), 80f, -1, 0, 0);
				}
				iLocal_378 = 8;
			}
			break;
		
		case 8:
			break;
	}
	if (func_313(iLocal_330) && !unk_0xE9FDA1035CFEA94F(iLocal_330))
	{
		if (unk_0x869EFD0BC0868856(iLocal_330))
		{
			unk_0xA3BF0AA5A2608191(iLocal_330);
			func_294(&iLocal_330, 1, 0, 1);
		}
	}
	if (func_313(iLocal_331) && !unk_0xE9FDA1035CFEA94F(iLocal_331))
	{
		if (unk_0x869EFD0BC0868856(iLocal_331))
		{
			unk_0xA3BF0AA5A2608191(iLocal_331);
			func_294(&iLocal_331, 1, 0, 1);
		}
	}
	if (func_313(iLocal_329))
	{
		unk_0x0952F7603629A4C0(84, iLocal_329, 1f);
	}
}

int func_322()
{
	if (((func_58(iLocal_328, 1, 1116471296, 1126825984, 0, 0, 0, 0) || func_58(iLocal_329, 1, 1116471296, 1126825984, 0, 0, 0, 0)) || func_58(iLocal_330, 1, 1116471296, 1126825984, 0, 0, 0, 0)) || func_58(iLocal_331, 1, 1116471296, 1126825984, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_323(bool bParam0)
{
	if (!func_7(iLocal_332))
	{
		unk_0x17E8C6920A1E386F(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, 0, 0);
		unk_0x51EA29724CE5BF82(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, 1);
		if (iLocal_338 > -1)
		{
			unk_0xDDABC98CFF1A4C60(iLocal_338);
			iLocal_338 = -1;
		}
		iLocal_338 = unk_0x544B74C043CE9948(-1870.54f, -628.1f, 10.09f, 4f, 4f, 4f, 0f, 0, 7);
		if (iLocal_338 == -1)
		{
		}
		iLocal_329 = unk_0x36F2404464202779(4, joaat("a_m_m_beach_01"), -1870.54f, -628.1f, 10.09f, 80f, 1, true);
		unk_0xE8832A9E16A57A1F(iLocal_329, 1, 1);
		unk_0x327AAEE25F323797(iLocal_329);
		unk_0x6D80F1AEBA734886(iLocal_329, 0);
		unk_0x11AD11297DC58CC7(iLocal_329, 1);
		unk_0x25C5402CC10F76CD(iLocal_329, false);
		vLocal_334 = { unk_0x68F4C0EC296D3901(iLocal_329, true) };
		unk_0xE82754C349C7B581(unk_0x68F4C0EC296D3901(iLocal_329, true), &(vLocal_334.f_2), 0, 0);
		vLocal_335 = { unk_0x835730A2D89F6093(iLocal_329, 2) };
		iLocal_337 = unk_0xE9744DB7B8CA6965(vLocal_334, vLocal_335, 2);
		unk_0x915804B434753CBD(iLocal_329, iLocal_337, "mini@cpr@char_b@cpr_def", "cpr_intro", 8f, -8f, 0, 16, 1148846080, 0);
		unk_0x5E4E98C6D98C9C57(iLocal_337, 0f);
		iLocal_330 = unk_0x36F2404464202779(5, joaat("a_f_y_beach_01"), -1869.76f, -627.7f, 10.1f, 0f, 1, true);
		unk_0xAFF39FB306F8E232(iLocal_330, 17, true);
		unk_0xDD353D0E9C789D0E(&uLocal_77);
		unk_0xF96A174EE26D7588(0, iLocal_329, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "idle_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "idle_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x25644C31B4B6E9F3(uLocal_77, 1);
		unk_0x75ABDC5F81978924(uLocal_77);
		unk_0x78ADC381772E3D54(iLocal_330, uLocal_77);
		unk_0xF82EA857DA10E0CD(&uLocal_77);
		iLocal_331 = unk_0x36F2404464202779(5, joaat("a_f_y_beach_01"), -1873.61f, -628.88f, 11.16f, 0f, 1, true);
		unk_0xAFF39FB306F8E232(iLocal_331, 17, true);
		unk_0xDD353D0E9C789D0E(&uLocal_77);
		unk_0xF96A174EE26D7588(0, iLocal_329, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "base", 4f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "idle_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "idle_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "idle_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0xC6EB89C59F2AF6B8(0, "rcmfanatic1", "base", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x25644C31B4B6E9F3(uLocal_77, 1);
		unk_0x75ABDC5F81978924(uLocal_77);
		unk_0x78ADC381772E3D54(iLocal_331, uLocal_77);
		unk_0xF82EA857DA10E0CD(&uLocal_77);
		if (bParam0)
		{
			iLocal_332 = unk_0x122AAB0B1D6F55AD(joaat("blazer2"), vLocal_333, 36.64f, 1, 1, 0);
			unk_0xB9FD7450C0DAB575(iLocal_332, 1084227584);
			unk_0xE8832A9E16A57A1F(iLocal_332, 1, 1);
			iLocal_328 = unk_0x852A19533F896693(iLocal_332, 20, joaat("s_m_y_baywatch_01"), -1, 1, true);
			iLocal_378 = 1;
		}
		else
		{
			iLocal_332 = unk_0x122AAB0B1D6F55AD(joaat("blazer2"), -1871.55f, -640.01f, 10.65f, 297.76f, 1, 1, 0);
			unk_0xB9FD7450C0DAB575(iLocal_332, 1084227584);
			unk_0xE8832A9E16A57A1F(iLocal_332, 1, 1);
			iLocal_328 = unk_0x852A19533F896693(iLocal_332, 4, joaat("s_m_y_baywatch_01"), -1, 1, true);
			unk_0xDD353D0E9C789D0E(&uLocal_77);
			unk_0x0C8C0C840C2D1AD2(0, iLocal_329, -1, 0, 2);
			unk_0x45F014B3D0466974(0, iLocal_332, 0);
			unk_0x96167B03C5A77156(0, unk_0x68F4C0EC296D3901(iLocal_329, true), 1.8f, 20000, 1048576000, 0, 1193033728);
			unk_0x75ABDC5F81978924(uLocal_77);
			unk_0x78ADC381772E3D54(iLocal_328, uLocal_77);
			unk_0xF82EA857DA10E0CD(&uLocal_77);
			iLocal_378 = 2;
		}
		unk_0xAFF39FB306F8E232(iLocal_328, 17, true);
		unk_0xE8832A9E16A57A1F(iLocal_328, 1, 1);
		unk_0xFADC0A217229F6B5(iLocal_329, true);
	}
	unk_0x71199B01895C6202(joaat("blazer2"));
	unk_0x71199B01895C6202(joaat("a_f_y_beach_01"));
	unk_0x71199B01895C6202(joaat("s_m_y_baywatch_01"));
	unk_0x71199B01895C6202(joaat("a_m_m_beach_01"));
}

int func_324()
{
	unk_0x3F423BF5B8125A50("mini@cpr@char_a@cpr_def");
	unk_0x3F423BF5B8125A50("mini@cpr@char_b@cpr_def");
	unk_0x3F423BF5B8125A50("mini@cpr@char_a@cpr_str");
	unk_0x3F423BF5B8125A50("mini@cpr@char_b@cpr_str");
	unk_0x3F423BF5B8125A50("rcmfanatic1");
	unk_0x29398344B9E5B8A7("Fanatic1Quad");
	unk_0x523BCC9DC80CD82F(joaat("blazer2"));
	unk_0x523BCC9DC80CD82F(joaat("a_f_y_beach_01"));
	unk_0x523BCC9DC80CD82F(joaat("s_m_y_baywatch_01"));
	unk_0x523BCC9DC80CD82F(joaat("a_m_m_beach_01"));
	if (((((((((unk_0xB4AE0788C1587752("mini@cpr@char_a@cpr_def") && unk_0xB4AE0788C1587752("mini@cpr@char_b@cpr_def")) && unk_0xB4AE0788C1587752("mini@cpr@char_a@cpr_str")) && unk_0xB4AE0788C1587752("mini@cpr@char_b@cpr_str")) && unk_0xB4AE0788C1587752("rcmfanatic1")) && unk_0x1C2E18E9C63BEB77("Fanatic1Quad")) && unk_0xB87F6CF6E5628C67(joaat("a_f_y_beach_01"))) && unk_0xB87F6CF6E5628C67(joaat("s_m_y_baywatch_01"))) && unk_0xB87F6CF6E5628C67(joaat("a_m_m_beach_01"))) && unk_0xB87F6CF6E5628C67(joaat("blazer2")))
	{
		return 1;
	}
	return 0;
}

void func_325()
{
	if (func_313(iLocal_344))
	{
		switch (iLocal_347)
		{
			case 0:
				if (func_326())
				{
					if (!func_440(iLocal_344))
					{
						iLocal_344 = unk_0x36F2404464202779(26, joaat("a_c_rottweiler"), vLocal_345, fLocal_346, 1, true);
						unk_0x46CB381A452EF99D(iLocal_344, 1);
					}
					unk_0x71199B01895C6202(joaat("a_c_rottweiler"));
					func_39("Loaded and created dog - progressing");
					iLocal_347 = 1;
				}
				break;
			
			case 1:
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if (iLocal_351 == 109)
					{
						unk_0xA8CC11FF8D2962D4(iLocal_344, unk_0x16F2683693E537C9(), -2f, 2f, 0f, 2.5f, -1, 0.2f, 1);
						iLocal_347 = 2;
					}
				}
				break;
			}
	}
}

int func_326()
{
	unk_0x523BCC9DC80CD82F(joaat("a_c_rottweiler"));
	if (unk_0xB87F6CF6E5628C67(joaat("a_c_rottweiler")))
	{
		return 1;
	}
	return 0;
}

void func_327()
{
	if (!func_440(Local_325[0 /*12*/]))
	{
		unk_0x523BCC9DC80CD82F(iLocal_326);
		unk_0x523BCC9DC80CD82F(joaat("a_m_y_beach_01"));
		unk_0x523BCC9DC80CD82F(joaat("a_f_y_beach_01"));
		if ((unk_0xB87F6CF6E5628C67(iLocal_326) && unk_0xB87F6CF6E5628C67(joaat("a_m_y_beach_01"))) && unk_0xB87F6CF6E5628C67(joaat("a_f_y_beach_01")))
		{
			if (!unk_0xC844350D5D58C99A(Local_325[0 /*12*/]))
			{
				Local_325[0 /*12*/].f_2 = { -1951.48f, -556.16f, 11.71f };
				Local_325[0 /*12*/].f_11 = -121.42f;
				Local_325[0 /*12*/].f_5 = { -1910.1f, -591.56f, 10.67f };
				Local_325[0 /*12*/].f_8 = { -1843.73f, -649.16f, 9.53f };
				Local_325[0 /*12*/].f_1 = iLocal_326;
				Local_325[0 /*12*/] = unk_0x36F2404464202779(5, Local_325[0 /*12*/].f_1, Local_325[0 /*12*/].f_2, Local_325[0 /*12*/].f_11, 1, true);
				unk_0x3CC33E4E9CE523F4(Local_325[0 /*12*/], 3);
				unk_0xAFF39FB306F8E232(Local_325[0 /*12*/], 17, true);
				func_328(Local_325[0 /*12*/]);
				if (func_313(Local_325[0 /*12*/]))
				{
					unk_0xDD353D0E9C789D0E(&uLocal_77);
					unk_0x96167B03C5A77156(0, Local_325[0 /*12*/].f_5, 2f, 20000, 1048576000, 0, 1193033728);
					unk_0x96167B03C5A77156(0, Local_325[0 /*12*/].f_8, 2f, 20000, 1048576000, 0, 1193033728);
					unk_0x75ABDC5F81978924(uLocal_77);
					unk_0x78ADC381772E3D54(Local_325[0 /*12*/], uLocal_77);
					unk_0xF82EA857DA10E0CD(&uLocal_77);
				}
			}
			if (!unk_0xC844350D5D58C99A(Local_325[1 /*12*/]))
			{
				Local_325[1 /*12*/].f_2 = { -1953.85f, -555.66f, 11f };
				Local_325[1 /*12*/].f_11 = -121.42f;
				Local_325[1 /*12*/].f_5 = { -1911.54f, -591.7f, 10.61f };
				Local_325[1 /*12*/].f_8 = { -1839.87f, -651.49f, 9.53f };
				Local_325[1 /*12*/].f_1 = iLocal_326;
				Local_325[1 /*12*/] = unk_0x36F2404464202779(5, Local_325[1 /*12*/].f_1, Local_325[1 /*12*/].f_2, Local_325[1 /*12*/].f_11, 1, true);
				unk_0x3CC33E4E9CE523F4(Local_325[1 /*12*/], 3);
				unk_0xAFF39FB306F8E232(Local_325[1 /*12*/], 17, true);
				if (func_313(Local_325[1 /*12*/]))
				{
					unk_0xDD353D0E9C789D0E(&uLocal_77);
					unk_0x96167B03C5A77156(0, Local_325[1 /*12*/].f_5, 2.05f, 20000, 1048576000, 0, 1193033728);
					unk_0x96167B03C5A77156(0, Local_325[1 /*12*/].f_8, 2.05f, 20000, 1048576000, 0, 1193033728);
					unk_0x75ABDC5F81978924(uLocal_77);
					unk_0x78ADC381772E3D54(Local_325[1 /*12*/], uLocal_77);
					unk_0xF82EA857DA10E0CD(&uLocal_77);
				}
			}
			if (!unk_0xC844350D5D58C99A(Local_325[2 /*12*/]))
			{
				Local_325[2 /*12*/].f_2 = { -1999.4f, -508.02f, 11f };
				Local_325[2 /*12*/].f_11 = 167.3f;
				Local_325[2 /*12*/].f_5 = { -1997.21f, -517.17f, 10.73f };
				Local_325[2 /*12*/].f_8 = { -1961.31f, -547.96f, 10.7f };
				Local_325[2 /*12*/].f_1 = joaat("a_f_y_beach_01");
				Local_325[2 /*12*/] = unk_0x36F2404464202779(5, Local_325[2 /*12*/].f_1, Local_325[2 /*12*/].f_2, Local_325[2 /*12*/].f_11, 1, true);
				unk_0x3CC33E4E9CE523F4(Local_325[2 /*12*/], 3);
				unk_0xAFF39FB306F8E232(Local_325[2 /*12*/], 17, true);
				func_328(Local_325[2 /*12*/]);
			}
			else if (func_313(Local_325[2 /*12*/]))
			{
				unk_0x327AAEE25F323797(Local_325[2 /*12*/]);
				unk_0xA47B46945FF6DE74(Local_325[2 /*12*/], Local_325[2 /*12*/].f_2, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(Local_325[2 /*12*/], Local_325[2 /*12*/].f_11);
				func_328(Local_325[2 /*12*/]);
			}
			if (!unk_0xC844350D5D58C99A(Local_325[3 /*12*/]))
			{
				Local_325[3 /*12*/].f_2 = { -2000.19f, -507.37f, 11f };
				Local_325[3 /*12*/].f_11 = 83.65f;
				Local_325[3 /*12*/].f_5 = { -1998.27f, -517.46f, 10.67f };
				Local_325[3 /*12*/].f_8 = { -1962.75f, -549.56f, 10.62f };
				Local_325[3 /*12*/].f_1 = joaat("a_m_y_beach_01");
				Local_325[3 /*12*/] = unk_0x36F2404464202779(4, Local_325[3 /*12*/].f_1, Local_325[3 /*12*/].f_2, Local_325[3 /*12*/].f_11, 1, true);
				unk_0x3CC33E4E9CE523F4(Local_325[3 /*12*/], 3);
				unk_0xAFF39FB306F8E232(Local_325[3 /*12*/], 17, true);
				func_328(Local_325[3 /*12*/]);
			}
			else if (func_313(Local_325[3 /*12*/]))
			{
				unk_0x327AAEE25F323797(Local_325[3 /*12*/]);
				unk_0xA47B46945FF6DE74(Local_325[3 /*12*/], Local_325[3 /*12*/].f_2, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(Local_325[3 /*12*/], Local_325[3 /*12*/].f_11);
				func_328(Local_325[3 /*12*/]);
			}
			unk_0x71199B01895C6202(joaat("a_f_y_beach_01"));
			unk_0x71199B01895C6202(joaat("a_m_y_beach_01"));
			unk_0x71199B01895C6202(iLocal_326);
		}
	}
}

void func_328(int iParam0)
{
	vector3 vVar0;
	float fVar1;
	
	if (func_313(iParam0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
		unk_0xE82754C349C7B581(vVar0, &fVar1, 0, 0);
		unk_0xA47B46945FF6DE74(iParam0, vVar0.x, vVar0.y, fVar1, 1, false, 0, 1);
	}
}

int func_329(char* sParam0)
{
	struct<6> Var0;
	
	Var0 = { func_330() };
	if (unk_0x7F8A39872A07D2CE(&Var0, sParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_330()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_20805 == 4)
	{
		return Global_20424;
	}
	return Var0;
}

int func_331()
{
	if ((iLocal_243 == 0 && !unk_0xD17F06053799A7CA()) && !func_40())
	{
		return 1;
	}
	return 0;
}

void func_332()
{
	switch (iLocal_55)
	{
		case 0:
			func_39("STEPS DOWN SETUP");
			if (!unk_0xE4EDC4B0E92C078B(iLocal_245))
			{
				iLocal_245 = func_317(iLocal_244, 1, 1, 5);
				unk_0x321E019A46034F39(iLocal_245, true);
			}
			unk_0x10F3BFFADF2CE3DA(-1865.76f, -617.48f, 10.58f, -1820.57f, -552.41f, 17.4f);
			unk_0x17E8C6920A1E386F(-1865.76f, -617.48f, 10.58f, -1820.57f, -552.41f, 17.4f, 0, 0);
			if (func_313(Local_322))
			{
				unk_0xA3BF0AA5A2608191(Local_322);
				func_294(&Local_322, 1, 0, 1);
			}
			if (func_7(Local_322.f_2))
			{
				func_338(&(Local_322.f_2));
			}
			func_39("GOING INTO STEPS_DOWN MAIN LOOP");
			iLocal_55 = 1;
			break;
		
		case 1:
			func_321();
			func_335();
			unk_0x6A36BC55C7F6D023(0.5f);
			if (iLocal_66 == 0)
			{
				func_334();
			}
			if (func_333(vLocal_355))
			{
				fLocal_251 = 1.15f;
				iLocal_55 = 0;
				iLocal_56 = 5;
			}
			break;
	}
}

int func_333(vector3 vParam0)
{
	if (unk_0x5A91F08DF773C39D(iLocal_244, vParam0, 3f, 3f, 2f, false, true, 0))
	{
		return 1;
	}
	return 0;
}

void func_334()
{
	if (iLocal_66 == 0)
	{
		if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1827.53f, -538.1213f, 21.83124f, -1805.926f, -555.6239f, 31.77323f, 2f, 0, true, 0))
		{
			if (iLocal_243 == 0)
			{
				if (unk_0x25037C66EB32B076())
				{
					func_39("Stopping scripted convo at check if player jumps off cliff");
					func_15();
					unk_0x790015DC92C918E2();
				}
				if (func_17(&uLocal_78, "FAN1AU", "FAN1_5", 7, 0, 0, 0))
				{
					iLocal_59 = 1;
					iLocal_66 = 1;
				}
			}
			Global_111638.f_18569.f_386 = 1;
		}
	}
}

void func_335()
{
	if ((unk_0x1C0640BA9A7327B3() - iLocal_281) > 10000)
	{
		switch (iLocal_280)
		{
			case 0:
				func_337();
				break;
			
			case 1:
				func_336();
				break;
			
			case 2:
				func_337();
				break;
			
			case 3:
				func_336();
				break;
			
			case 4:
				func_337();
				break;
			
			case 5:
				func_336();
				break;
			
			case 6:
				func_337();
				break;
			
			case 7:
				func_336();
				break;
			
			case 8:
				func_337();
				break;
			
			case 9:
				func_336();
				break;
			
			default:
				break;
			}
	}
}

void func_336()
{
	if ((!func_40() && iLocal_243 == 0) && !unk_0xD17F06053799A7CA())
	{
		if (func_17(&uLocal_78, "FAN1AU", "FAN1_ONELIN", 7, 0, 0, 0))
		{
			iLocal_280++;
			iLocal_281 = unk_0x1C0640BA9A7327B3();
		}
	}
}

void func_337()
{
	if (iLocal_349 == 2)
	{
		if ((!func_40() && iLocal_243 == 0) && !unk_0xD17F06053799A7CA())
		{
			if (func_17(&uLocal_78, "FAN1AU", "FAN1_TAUNT", 7, 0, 0, 0))
			{
				iLocal_280++;
				iLocal_281 = unk_0x1C0640BA9A7327B3();
			}
		}
	}
}

void func_338(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		unk_0x437347B10A200C4B(*iParam0, 0);
		if (unk_0xAF6690C489CC6203(*iParam0) && unk_0x9C77D2D0559097F0(*iParam0, 1))
		{
			unk_0x046C362CF15F1935(iParam0);
		}
	}
}

void func_339()
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	switch (iLocal_55)
	{
		case 0:
			func_39("SETUP ROAD_RUNNING_SECTION");
			if (!unk_0xE4EDC4B0E92C078B(iLocal_245))
			{
				iLocal_245 = func_317(iLocal_244, 1, 1, 5);
				unk_0x321E019A46034F39(iLocal_245, true);
			}
			if (iLocal_65 == 1)
			{
				func_4(0);
			}
			iLocal_66 = 0;
			iLocal_283 = unk_0x1C0640BA9A7327B3();
			if (func_40())
			{
				func_39("stop scripted conversation at ROAD_RUNNING_SECTION");
				func_15();
			}
			if (func_7(Local_324.f_2) && func_313(Local_324))
			{
				unk_0xA47B46945FF6DE74(Local_324.f_2, -1934.15f, -438.19f, 19.6f, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(Local_324.f_2, 237.78f);
				unk_0xB9FD7450C0DAB575(Local_324.f_2, 1084227584);
				unk_0x132B85BCE016BCA0(Local_324, Local_324.f_2, Local_324.f_8, 4, Local_324.f_12, 786599, 3f, 3f, 1);
				unk_0xE8832A9E16A57A1F(Local_324, 1, 1);
			}
			func_39("GOING INTO ROAD_RUNNING_SECTION LOOP");
			iLocal_323 = 1;
			iLocal_55 = 1;
			break;
		
		case 1:
			unk_0x6A36BC55C7F6D023(0.5f);
			if (func_331())
			{
				if (vLocal_286.z == 0)
				{
					if (func_440(iLocal_244))
					{
						unk_0x9414396734E14897(sLocal_348, unk_0x68F4C0EC296D3901(iLocal_244, true), &iVar0);
					}
					if (iVar0 <= 52)
					{
						if ((vLocal_298.z == 0 && vLocal_295.z == 0) && iLocal_349 == 2)
						{
							func_17(&uLocal_78, "FAN1AU", vLocal_286.x, 7, 0, 0, 0);
						}
						else
						{
							func_344(&uLocal_78, "FAN1AU", vLocal_286.x, "FAN1_RD1_3", 7, 0, 0);
						}
						vLocal_286.z = 1;
					}
				}
			}
			if (iLocal_323 == 1)
			{
				if (iLocal_352 > 41)
				{
					iLocal_323 = 2;
				}
			}
			if (vLocal_286.z == 1 && vLocal_289.z == 1)
			{
				if (func_440(iLocal_244))
				{
					vVar1 = { unk_0x68E4ADDDDCD7BDDE(iLocal_244, 0f, 6f, 0f) };
					iVar2 = unk_0x83C1D4B63BBD91F6(vVar1, 8f, 0, 2);
					if (iVar2 != 0)
					{
						if ((iLocal_243 == 0 && iLocal_283 > 2000) && iLocal_282 < 5)
						{
							if (!func_40())
							{
								if (func_17(&uLocal_78, "FAN1AU", "FAN1_RD3", 7, 0, 0, 0))
								{
									iLocal_282++;
									iLocal_283 = unk_0x1C0640BA9A7327B3();
								}
							}
						}
					}
					else
					{
						iVar2 = unk_0x83C1D4B63BBD91F6(vVar1, 8f, 0, 4);
						if (iVar2 != 0)
						{
							if ((iLocal_243 == 0 && iLocal_283 > 2000) && iLocal_282 < 5)
							{
								if (!func_40())
								{
									if (func_17(&uLocal_78, "FAN1AU", "FAN1_RD3", 7, 0, 0, 0))
									{
										iLocal_282++;
										iLocal_283 = unk_0x1C0640BA9A7327B3();
									}
								}
							}
						}
					}
				}
				func_335();
			}
			func_334();
			func_340();
			if (iLocal_352 > 61)
			{
				iLocal_55 = 0;
				iLocal_56 = 4;
			}
			break;
	}
}

void func_340()
{
	if ((func_313(Local_322.f_1) && func_7(Local_322.f_2)) && func_313(Local_322))
	{
		switch (iLocal_323)
		{
			case 0:
				if (func_343())
				{
					func_39("Driveby scene resources loaded - progressing");
					iLocal_323 = 1;
				}
				break;
			
			case 1:
				break;
			
			case 2:
				unk_0xDD353D0E9C789D0E(&uLocal_77);
				unk_0x78A77CDD64392938(0, 1500);
				unk_0xE9362E4D600DD12A(0, Local_322.f_2, Local_322.f_8, Local_322.f_12, 0, Local_322.f_4, 16, 10f, 10f);
				unk_0x75ABDC5F81978924(uLocal_77);
				unk_0x78ADC381772E3D54(Local_322, uLocal_77);
				unk_0xF82EA857DA10E0CD(&uLocal_77);
				iLocal_71 = 0;
				iLocal_323 = 3;
				break;
			
			case 3:
				if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(Local_322.f_2, true), unk_0x68F4C0EC296D3901(iLocal_244, true), true) <= 45f)
				{
					if (func_40())
					{
						func_341();
					}
					if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(Local_322.f_2, true), unk_0x68F4C0EC296D3901(iLocal_244, true), true) <= 20f)
					{
						if (iLocal_71 == 0)
						{
							unk_0x67B9E919FADF78E0(Local_322.f_2, 4500, 0, 0);
							if (func_313(iLocal_244))
							{
								unk_0x0C8C0C840C2D1AD2(iLocal_244, Local_322.f_2, 3000, 1072, 2);
							}
							iLocal_71 = 1;
						}
						if (iLocal_243 == 0)
						{
							if (!unk_0xD17F06053799A7CA())
							{
								if (func_17(&uLocal_78, "FAN1AU", vLocal_289.x, 9, 0, 0, 0))
								{
									vLocal_289.z = 1;
									func_39("Doing Mary Ann's anim...");
									unk_0xC6EB89C59F2AF6B8(iLocal_244, "rcmfanatic1yell", "yell_d", 8f, -8f, -1, 48, 0, 0, 0, 0);
									iLocal_323 = 4;
									iLocal_243 = 0;
									if (iLocal_246 == 1)
									{
										iLocal_246 = 2;
									}
								}
							}
						}
						else if (func_17(&uLocal_78, "FAN1AU", vLocal_289.x, 9, 1, 0, 0))
						{
							vLocal_289.z = 1;
							func_39("Doing Mary Ann's anim...");
							unk_0xC6EB89C59F2AF6B8(iLocal_244, "rcmfanatic1yell", "yell_d", 8f, -8f, -1, 48, 0, 0, 0, 0);
							iLocal_323 = 4;
							iLocal_243 = 1;
							if (iLocal_246 == 1)
							{
								iLocal_246 = 2;
							}
						}
					}
				}
				break;
			
			case 4:
				unk_0xA3BF0AA5A2608191(Local_322);
				unk_0xDD353D0E9C789D0E(&uLocal_77);
				unk_0xE072601B4380E9DF(0, Local_322.f_2, 6f, 16);
				unk_0x75ABDC5F81978924(uLocal_77);
				unk_0x78ADC381772E3D54(Local_322, uLocal_77);
				unk_0xF82EA857DA10E0CD(&uLocal_77);
				unk_0xFFDDE8CC59EB6D40(Local_322.f_1, iLocal_244, 0, 0f, 0f, 0f, 25f, 100, 0, -957453492);
				iLocal_281 = (unk_0x1C0640BA9A7327B3() - 3000);
				iLocal_323 = 5;
				break;
			
			case 5:
				if (unk_0xB4ECF989E2C1DAC8(iLocal_244, "rcmfanatic1yell", "yell_d", 3))
				{
					if (unk_0x8CA9406E01C7EE58(iLocal_244, "rcmfanatic1yell", "yell_d") > 0.44f)
					{
						unk_0x8FB4E06C94958F84(iLocal_244);
						iLocal_369 = unk_0x1C0640BA9A7327B3();
						iLocal_323 = 6;
						func_4(1);
					}
				}
				else
				{
					iLocal_369 = unk_0x1C0640BA9A7327B3();
					iLocal_323 = 6;
					func_4(1);
				}
				break;
			
			case 6:
				if ((unk_0x1C0640BA9A7327B3() - iLocal_369) > 3000)
				{
					if (func_313(Local_322))
					{
						if (func_7(Local_322.f_2))
						{
							unk_0xA3BF0AA5A2608191(Local_322);
							unk_0x8FB4E06C94958F84(Local_322);
							unk_0xE072601B4380E9DF(Local_322, Local_322.f_2, 15f, 786613);
							unk_0xFADC0A217229F6B5(Local_322, true);
							func_294(&Local_322, 1, 0, 1);
							func_338(&(Local_322.f_2));
						}
					}
					func_294(&(Local_322.f_1), 1, 0, 1);
					func_294(&Local_324, 1, 0, 1);
					if (func_313(Local_324.f_1))
					{
						func_39("*** Clearing driveby task and releasing");
						unk_0xA3BF0AA5A2608191(Local_324.f_1);
						func_294(&(Local_324.f_1), 1, 0, 1);
					}
					func_338(&(Local_324.f_2));
				}
				break;
			}
	}
}

void func_341()
{
	Global_19671 = 0;
	func_342();
}

void func_342()
{
	if (unk_0x25037C66EB32B076())
	{
		unk_0x8BD0DC8EEFDC56D8();
		Global_21816 = 0;
		unk_0x5CEB4DB888A62073(true);
		Global_20805 = 6;
		return;
	}
}

int func_343()
{
	unk_0x523BCC9DC80CD82F(joaat("g_m_y_salvagoon_01"));
	unk_0x523BCC9DC80CD82F(joaat("banshee"));
	if (unk_0xB87F6CF6E5628C67(joaat("g_m_y_salvagoon_01")) && unk_0xB87F6CF6E5628C67(joaat("banshee")))
	{
		return 1;
	}
	return 0;
}

bool func_344(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_14(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_20812 = 0;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 1;
	StringCopy(&Global_21809, sParam3, 24);
	Global_2621441 = 0;
	return func_18(sParam2, iParam4, 0);
}

void func_345()
{
	var uVar0;
	
	switch (iLocal_55)
	{
		case 0:
			func_39("Setup START_RUNNING");
			unk_0x21688103CC7F9B19(-1835.53f, -518.7238f, 25.11678f, -1822.431f, -513.8933f, 30.38676f, 0);
			unk_0xE342F209E49C5314(-1835.53f, -518.7238f, 25.11678f, -1822.431f, -513.8933f, 30.38676f, false, 1);
			if (!unk_0x562F77A7F33D2E46("FANATIC_MIX_SCENE"))
			{
				unk_0x8BC9595FD2792B5D("FANATIC_MIX_SCENE");
				if (func_440(iLocal_244))
				{
					unk_0x2E1E5367A885F9B7(iLocal_244, "FANATIC_MIX_MARY_ANNE", 0);
				}
			}
			if (!iLocal_62)
			{
				if (unk_0xC92DB9682A650680("RC6A_START"))
				{
					func_39("Starting music - start_running() init");
					iLocal_62 = 1;
				}
			}
			func_348(&uLocal_78, 3, iLocal_244, "MARYANN", 0, 1);
			func_271(1, 0, 1, 1);
			func_441(&Local_54, 0, 1);
			if (func_440(iLocal_244))
			{
				unk_0xAA6B3A4292417750(iLocal_244, false, false, false, false, false, 0, 0, 0);
			}
			iLocal_366 = unk_0x1C0640BA9A7327B3();
			if (!unk_0xE4EDC4B0E92C078B(iLocal_245))
			{
				iLocal_245 = func_317(iLocal_244, 1, 1, 5);
				unk_0x321E019A46034F39(iLocal_245, true);
			}
			if (func_313(iLocal_244))
			{
				unk_0xF4CB0B98F8F79D8D(iLocal_244, 0);
			}
			iLocal_246 = 3;
			iLocal_247 = unk_0x1C0640BA9A7327B3();
			if (unk_0x1C2E18E9C63BEB77("Fanatic1RollingStart"))
			{
				func_39("*** Using assisted movement...");
				unk_0xA19A5ADE229B4734("Fanatic1RollingStart", 1, 2f, 0.7f);
			}
			iLocal_67 = 1;
			iLocal_367 = unk_0x1C0640BA9A7327B3();
			iLocal_368 = unk_0x1C0640BA9A7327B3();
			func_39("GOING INTO START_RUNNING LOOP");
			unk_0x8B4C4CA774181102(0f, 10f, 1);
			iLocal_55 = 1;
			break;
		
		case 1:
			if (!Global_111638.f_18569.f_384)
			{
				if (!unk_0xFEBC1E4EC9E001F0())
				{
					func_56("FAN_HELP", -1);
					Global_111638.f_18569.f_384 = 1;
				}
			}
			if (iLocal_67 == 1)
			{
				if ((unk_0x1C0640BA9A7327B3() - iLocal_367) < 5000)
				{
					if ((unk_0x1C0640BA9A7327B3() - iLocal_367) > 1000)
					{
						if (unk_0x757EF87A33649210())
						{
							func_39("FADING IN NOW");
							func_301(500, 0);
							func_271(1, 0, 1, 1);
						}
					}
				}
				else
				{
					iLocal_67 = 0;
					func_39("TURNING OFF ASSISTED ROUTE");
					unk_0xA19A5ADE229B4734("Fanatic1RollingStart", 0, 1f, 0.5f);
					unk_0x2F3540C2227116A3("Fanatic1RollingStart");
				}
			}
			if (func_440(iLocal_244))
			{
				if (unk_0xD1960163A3042274(iLocal_244, 242628503) != 1)
				{
					func_39("Re-set Mary Ann's task post-cutscene");
					unk_0xDD353D0E9C789D0E(&uLocal_77);
					unk_0xD93EE6549113F9E1(0, 1);
					unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
					unk_0xF44B0E19CAC31C33(0, sLocal_348, 1, 1052, -1);
					unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
					unk_0xC6EB89C59F2AF6B8(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
					unk_0x75ABDC5F81978924(uLocal_77);
					unk_0x78ADC381772E3D54(iLocal_244, uLocal_77);
					unk_0xF82EA857DA10E0CD(&uLocal_77);
				}
			}
			if (vLocal_298.z == 0)
			{
				if (iLocal_352 < 17)
				{
					if (unk_0x2EEF020781C7E77A(unk_0xD803B885F5E47A62()))
					{
						if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1799.071f, -468.6591f, 40.07401f, -1820.119f, -492.4139f, 41.74369f, 18.25f, 0, true, 0))
						{
							if (!unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1798.076f, -468.2297f, 39.02536f, -1816.664f, -484.317f, 43.64211f, 12.5f, 0, true, 0))
							{
								if (func_40())
								{
									func_15();
								}
								if (func_319(vLocal_298.x, vLocal_298.y, 0, &(Local_285.f_4)))
								{
									if (Local_285.f_4 != -1)
									{
										Local_285.f_3 = 1;
										func_39("*** startRunConversation interrupted!");
										func_347("*** startRunConversation will restart on line: ", Local_285.f_4);
									}
									iLocal_59 = 1;
									iLocal_64 = 1;
									vLocal_298.z = 1;
									Global_111638.f_18569.f_386 = 1;
								}
								else
								{
									func_39("*** Waiting for prior conversation to end before can play cheated line!");
								}
							}
						}
					}
				}
			}
			if (vLocal_295.z == 0)
			{
				if (unk_0x3D1053F9EB43B7AD(unk_0x16F2683693E537C9(), -1772.762f, -532.9971f, 35.58929f, -1797.246f, -492.1292f, 39.2704f, 26f, 0, true, 0) || func_346(unk_0x16F2683693E537C9(), -1812.91f, -468.5253f, 41.32029f, 1) < 10f)
				{
					if (func_40())
					{
						func_15();
					}
					if (func_319(vLocal_295.x, vLocal_295.y, 0, &(Local_285.f_4)))
					{
						if (Local_285.f_4 != -1)
						{
							Local_285.f_3 = 1;
							func_39("*** startRunConversation interrupted!");
							func_347("*** startRunConversation will restart on line: ", Local_285.f_4);
						}
						iLocal_59 = 1;
						iLocal_64 = 1;
						vLocal_295.z = 1;
						Global_111638.f_18569.f_386 = 1;
					}
					else
					{
						func_39("*** Waiting for prior conversation to end before can play cheated line!");
					}
				}
			}
			if (iLocal_64 == 1)
			{
				if (vLocal_301.z == 0)
				{
					if (func_298(unk_0x16F2683693E537C9(), iLocal_244) < 10f)
					{
						if (func_319(vLocal_301.x, vLocal_301.y, 0, &uVar0))
						{
							vLocal_301.z = 1;
							iLocal_64 = 0;
							iLocal_281 = unk_0x1C0640BA9A7327B3();
						}
					}
				}
			}
			if (func_331())
			{
				if (Local_285.f_2 == 0 && (unk_0x1C0640BA9A7327B3() - iLocal_368) > 3500)
				{
					func_17(&uLocal_78, "FAN1AU", Local_285, 7, 0, 0, 0);
					func_39("SETTING UP THE CONVERSATION");
					Local_285.f_2 = 1;
					iLocal_281 = unk_0x1C0640BA9A7327B3();
				}
				else if (Local_285.f_3 == 1)
				{
					if (vLocal_301.z == 1)
					{
						StringCopy(&Local_267, Local_285, 16);
						StringConCat(&Local_267, "_", 16);
						StringIntConCat(&Local_267, Local_285.f_4, 16);
						if (func_344(&uLocal_78, "FAN1AU", Local_285, &Local_267, 7, 0, 0))
						{
							Local_285.f_3 = 0;
						}
					}
				}
			}
			if (Local_285.f_2)
			{
				func_335();
			}
			if (func_333(vLocal_354))
			{
				fLocal_251 = 1.15f;
				iLocal_55 = 0;
				iLocal_56 = 3;
			}
			break;
	}
}

float func_346(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x68F4C0EC296D3901(iParam0, false) };
	}
	return unk_0x0EB28750412C3A5A(vVar0, vParam1, bParam2);
}

void func_347(char* sParam0, int iParam1)
{
	sParam0 = sParam0;
	iParam1 = iParam1;
}

void func_348(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76622)
	{
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA245D14CC59CDD36(iParam2, 0);
			}
			else
			{
				unk_0xA245D14CC59CDD36(iParam2, 1);
			}
		}
		if (!unk_0xEB6A8945D1AC98A1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971EF1DE410C56CF(iParam2, 0);
			}
			else
			{
				unk_0x971EF1DE410C56CF(iParam2, 1);
			}
		}
	}
}

void func_349()
{
	switch (iLocal_55)
	{
		case 0:
			func_39("Intro Cutscene");
			func_359("ef_1_rcm", 1);
			if (unk_0x75EECC9B0572F772())
			{
				func_39("Trying to set Mary Ann component variation");
				unk_0xA0A8D79ACBBD1CB8("Mary_Ann", iLocal_244, joaat("cs_maryann"));
			}
			iLocal_313 = 0;
			iLocal_62 = 0;
			if (iLocal_339 == -1)
			{
				iLocal_339 = unk_0x544B74C043CE9948(-1877.3f, -439.7f, 45.05f, 4f, 6f, 2f, 45f, 0, 7);
			}
			if (func_354(1, 1093140480, 0))
			{
				if (func_440(iLocal_244))
				{
					unk_0x29E8331978B73E7F(iLocal_244, "Mary_Ann", 0, joaat("ig_maryann"), 0);
					func_39("Registered Mary Ann");
				}
				if (func_440(unk_0x16F2683693E537C9()))
				{
					unk_0x29E8331978B73E7F(unk_0x16F2683693E537C9(), "Michael", 0, 0, 0);
					func_39("Registered Michael");
				}
				iLocal_340 = unk_0x7D6CA5F52B3748BF(-1926.654f, -387.8897f, 46.7354f, -1897.322f, -374.5802f, 51.0241f, 0, 1, 1, 1);
				func_353();
				unk_0x324CFDE7809E2EC2(unk_0xD803B885F5E47A62());
				unk_0x29D5132FBDCF2B1E(0);
				unk_0x420FE818E70BB523(1);
				unk_0x4C902758BEA97C68(0);
				wait(0);
				func_301(500, 0);
				func_304(-1873.526f, -441.6211f, 44.69363f, -1882.03f, -436.9917f, 47.48379f, 7f, -1875.09f, -431.08f, 45.21f, 236.42f, func_312(), 1, 1, 1, 0, 0);
				func_304(-1875.815f, -443.1191f, 49.13515f, -1808.561f, -491.7887f, 36.58029f, 11f, -1875.09f, -431.08f, 45.21f, 236.42f, func_312(), 1, 1, 1, 0, 0);
				func_300(-1877.23f, -440.46f, 45.07f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				func_437();
				unk_0x10F452EDECF82313(-1799.513f, -467.6459f, 43.13879f, -1789.603f, -476.6616f, 36.83729f, 7.5f, 0, 0, 0, 0, 0, 0);
				bLocal_61 = false;
				func_39("Going into cutscene main loop now");
				iLocal_55 = 1;
			}
			else
			{
				func_39("Waiting for cutscene to be OK to start...");
			}
			break;
		
		case 1:
			if (iLocal_313 == 0)
			{
				if (unk_0x8F677B1F58B4741C() >= 31000)
				{
					if (!iLocal_62)
					{
						if (unk_0xC92DB9682A650680("RC6A_START"))
						{
							func_39("Starting music");
							iLocal_62 = 1;
						}
					}
				}
				unk_0xEF6276132B396452(0f, 1065353216);
				unk_0x2FB9A57162E54BAB(0f);
				if (unk_0xEAD40E09B5AA81FC())
				{
					func_39("*** Cutscene skip detected");
					func_39("*** Cam exit state pitch/heading on skip");
					unk_0xEF6276132B396452(0f, 1065353216);
					unk_0x2FB9A57162E54BAB(0f);
					if (func_440(iLocal_244))
					{
						unk_0xA47B46945FF6DE74(iLocal_244, -1869.24f, -444.99f, 45.17f, 1, false, 0, 1);
						unk_0xD8F6A53F4799FAFE(iLocal_244, -143.87f);
					}
					bLocal_61 = true;
					iLocal_313 = 1;
				}
				if (func_352())
				{
					iLocal_313 = 1;
				}
				func_350();
			}
			else if (iLocal_313 == 1)
			{
				if (unk_0x8F677B1F58B4741C() >= 31000)
				{
					if (!iLocal_62)
					{
						if (unk_0xC92DB9682A650680("RC6A_START"))
						{
							func_39("Starting music");
							iLocal_62 = 1;
						}
					}
				}
				if (unk_0xEAD40E09B5AA81FC())
				{
					func_39("*** Cutscene skip detected");
					func_39("*** Cam exit state pitch/heading on skip");
					unk_0xEF6276132B396452(0f, 1065353216);
					unk_0x2FB9A57162E54BAB(0f);
					if (func_440(iLocal_244))
					{
						unk_0xA47B46945FF6DE74(iLocal_244, -1869.24f, -444.99f, 45.17f, 1, false, 0, 1);
						unk_0xD8F6A53F4799FAFE(iLocal_244, -143.87f);
					}
					if (!iLocal_62)
					{
						if (unk_0xC92DB9682A650680("RC6A_START"))
						{
							func_39("Starting music from skip");
							iLocal_62 = 1;
						}
					}
				}
				func_350();
				func_352();
				if (!unk_0x39B7A3CCD2467CAB())
				{
					unk_0xBF40D896CA4BDBE7();
					unk_0xDDABC98CFF1A4C60(iLocal_339);
					iLocal_339 = -1;
					unk_0x2952D66A502EA873(iLocal_340, 0);
					iLocal_276 = unk_0x1C0640BA9A7327B3();
					iLocal_55 = 0;
					iLocal_56 = 2;
				}
			}
			break;
	}
}

void func_350()
{
	if (func_440(iLocal_244))
	{
		if (unk_0x3148AE92ED70DC30("Mary_Ann", joaat("ig_maryann")))
		{
			func_39("*** Forcing Mary Ann's move state");
			func_39("SET MARY ANNS TASK");
			if (bLocal_61)
			{
				func_351(iLocal_244, -1867.64f, -446.01f, 45.16f, 229.3557f, 0, 1);
			}
			unk_0xDD353D0E9C789D0E(&uLocal_77);
			unk_0xD93EE6549113F9E1(0, 1);
			unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
			unk_0xF44B0E19CAC31C33(0, sLocal_348, 1, 1052, -1);
			unk_0xC6EB89C59F2AF6B8(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
			unk_0x75ABDC5F81978924(uLocal_77);
			unk_0x78ADC381772E3D54(iLocal_244, uLocal_77);
			unk_0xF82EA857DA10E0CD(&uLocal_77);
			unk_0xBD453909DC26A85D(iLocal_244, -530524, 0, 1, 0);
		}
	}
}

int func_351(int iParam0, vector3 vParam1, float fParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_440(iParam0))
	{
		if (bParam3 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0xE82754C349C7B581(vParam1, &fVar1, 0, 0);
			if (bVar0)
			{
				vParam1.z = fVar1;
			}
		}
		unk_0xA47B46945FF6DE74(iParam0, vParam1, 1, false, 0, iParam4);
		unk_0xD8F6A53F4799FAFE(iParam0, fParam2);
		if (bParam3)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

int func_352()
{
	if (func_440(unk_0x16F2683693E537C9()))
	{
		if (unk_0x3148AE92ED70DC30("Michael", 0))
		{
			func_39("*** Forcing Michael's move state");
			unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -530524, 0, 1, 0);
			unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 2f, 5000, 0, 1, 0);
			return 1;
		}
	}
	return 0;
}

void func_353()
{
	int iVar0;
	
	iVar0 = func_261();
	if (iVar0 == -1)
	{
		return;
	}
	Global_110725[iVar0 /*10*/] = 1;
}

int func_354(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
	{
		if ((!unk_0x398B22FA3FCBDFA9(unk_0x16F2683693E537C9()) && !unk_0xC8676198F2355F9F(unk_0x16F2683693E537C9())) && !unk_0x5EDB8AD1D9CB1AC8(unk_0x16F2683693E537C9()))
		{
			if (!func_357(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), fParam1, 1, 1056964608, 0, 1, 0))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!func_356(unk_0x16F2683693E537C9(), -828834893))
				{
					unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0, 0);
				}
			}
			if (unk_0xE934758D273C899A(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	func_292();
	if (func_40())
	{
		func_15();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!func_355())
		{
			return 0;
		}
	}
	if (unk_0x25037C66EB32B076())
	{
		unk_0x5CEB4DB888A62073(false);
	}
	return 1;
}

bool func_355()
{
	bool bVar0;
	
	bVar0 = unk_0x62A1F4500E8F07E0();
	if (!Global_76621)
	{
		if (!bVar0)
		{
			Global_76621 = 1;
		}
	}
	return bVar0;
}

int func_356(int iParam0, int iParam1)
{
	if (func_313(iParam0))
	{
		if (unk_0xD1960163A3042274(iParam0, iParam1) == 1 || unk_0xD1960163A3042274(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_357(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x38C3A68D7861DCFD(0, 71, 1);
	unk_0x38C3A68D7861DCFD(0, 72, 1);
	unk_0x38C3A68D7861DCFD(0, 76, 1);
	unk_0x38C3A68D7861DCFD(0, 73, 1);
	unk_0x38C3A68D7861DCFD(0, 59, 1);
	unk_0x38C3A68D7861DCFD(0, 60, 1);
	if (bParam5)
	{
		unk_0x38C3A68D7861DCFD(0, 75, 1);
	}
	unk_0x38C3A68D7861DCFD(0, 80, 1);
	if (!bParam6)
	{
		unk_0x38C3A68D7861DCFD(0, 69, 1);
		unk_0x38C3A68D7861DCFD(0, 70, 1);
		unk_0x38C3A68D7861DCFD(0, 68, 1);
	}
	unk_0x38C3A68D7861DCFD(0, 74, 1);
	unk_0x38C3A68D7861DCFD(0, 86, 1);
	unk_0x38C3A68D7861DCFD(0, 81, 1);
	unk_0x38C3A68D7861DCFD(0, 82, 1);
	unk_0x38C3A68D7861DCFD(0, 138, 1);
	unk_0x38C3A68D7861DCFD(0, 136, 1);
	unk_0x38C3A68D7861DCFD(0, 114, 1);
	unk_0x38C3A68D7861DCFD(0, 107, 1);
	unk_0x38C3A68D7861DCFD(0, 110, 1);
	unk_0x38C3A68D7861DCFD(0, 89, 1);
	unk_0x38C3A68D7861DCFD(0, 89, 1);
	unk_0x38C3A68D7861DCFD(0, 87, 1);
	unk_0x38C3A68D7861DCFD(0, 88, 1);
	unk_0x38C3A68D7861DCFD(0, 113, 1);
	unk_0x38C3A68D7861DCFD(0, 115, 1);
	unk_0x38C3A68D7861DCFD(0, 116, 1);
	unk_0x38C3A68D7861DCFD(0, 117, 1);
	unk_0x38C3A68D7861DCFD(0, 118, 1);
	unk_0x38C3A68D7861DCFD(0, 119, 1);
	unk_0x38C3A68D7861DCFD(0, 352, 1);
	unk_0x38C3A68D7861DCFD(0, 131, 1);
	unk_0x38C3A68D7861DCFD(0, 132, 1);
	unk_0x38C3A68D7861DCFD(0, 123, 1);
	unk_0x38C3A68D7861DCFD(0, 126, 1);
	unk_0x38C3A68D7861DCFD(0, 129, 1);
	unk_0x38C3A68D7861DCFD(0, 130, 1);
	unk_0x38C3A68D7861DCFD(0, 133, 1);
	unk_0x38C3A68D7861DCFD(0, 134, 1);
	unk_0xCFAE3195DD6AE715();
	func_358(iParam0);
	if ((unk_0x1C0640BA9A7327B3() - Global_29) > 500)
	{
		unk_0xE0C0351D5B931E37(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x1C0640BA9A7327B3();
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x755FF954DAE327E1(unk_0x9C66D99E63E8E24C(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_358(int iParam0)
{
	if (!unk_0x437347B10A200C4B(iParam0, 0))
	{
		if (unk_0x2668265160B1C0E5(iParam0))
		{
			if (unk_0x08D499BC1F863857(iParam0))
			{
				unk_0xF356D74F6AE75D16(iParam0, 0);
			}
		}
	}
}

void func_359(char* sParam0, bool bParam1)
{
	func_303(bParam1);
	unk_0xAE1670DD12E839C3(sParam0, 8);
}

void func_360()
{
	func_361();
	switch (iLocal_55)
	{
		case 0:
			if (!func_453())
			{
				if (func_44(unk_0x16F2683693E537C9(), iLocal_244, 1) <= 1.2f)
				{
					if (func_40())
					{
						func_37();
					}
					func_39("Player too close to Mary Ann, starting cutscene early");
					iLocal_55 = 0;
					iLocal_56 = 1;
				}
				if (!unk_0x8C74DE122769E1BF())
				{
					unk_0xC0B0B9E466C0ED17(iLocal_244, 0f, 0f, 0f, 1, 30000, 2000, 2000, 0);
					unk_0xF0B0E93CF50F0322(fLocal_373);
					unk_0x908430F113C0DC6D(fLocal_374);
					unk_0xDA9C58A3CC25952B(fLocal_375);
					unk_0x4BF9B75F44D4B6CE(fLocal_376);
					unk_0x910A71FBA7D16B6B(fLocal_377);
					unk_0x4F4B34F617B087DF(1);
				}
				else
				{
					unk_0x308C55E6C40CF474(1);
				}
				unk_0x3F423BF5B8125A50("rcmfanatic1");
				if (unk_0xB4AE0788C1587752("rcmfanatic1") && iLocal_56 == 0)
				{
					if (func_440(iLocal_244))
					{
						if (unk_0xB4ECF989E2C1DAC8(iLocal_244, "rcmfanatic1", "ef_1_rcm_mary_ann_streching_base", 3))
						{
							if (unk_0x8CA9406E01C7EE58(iLocal_244, "rcmfanatic1", "ef_1_rcm_mary_ann_streching_base") < 0.1f)
							{
								unk_0x1E9649458B15960F(iLocal_244, false);
								func_348(&uLocal_78, 3, iLocal_244, "MARYANN", 0, 1);
								func_348(&uLocal_78, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
								unk_0x3E8E48829F3C7624(iLocal_244, "rcmfanatic1", "ef_1_rcm_mary_ann_leadin", -1878.223f, -440.5181f, 46.03983f, 0f, 0f, 159.97f, 8f, -8f, -1, 262154, 0, 2, 0);
								func_39("Done Mary Ann leadin anim");
								iLocal_55 = 1;
							}
							else
							{
								func_39("Waiting to blend the lead-in...");
							}
						}
					}
				}
			}
			else
			{
				func_39("Replay in progress or in wrong area - skipping to intro");
				iLocal_56 = 1;
			}
			break;
		
		case 1:
			if (func_313(iLocal_244))
			{
				if (!unk_0x8C74DE122769E1BF())
				{
					unk_0xC0B0B9E466C0ED17(iLocal_244, 0f, 0f, 0f, 1, 30000, 2000, 2000, 0);
					unk_0xF0B0E93CF50F0322(fLocal_373);
					unk_0x908430F113C0DC6D(fLocal_374);
					unk_0xDA9C58A3CC25952B(fLocal_375);
					unk_0x4BF9B75F44D4B6CE(fLocal_376);
					unk_0x910A71FBA7D16B6B(fLocal_377);
					unk_0x4F4B34F617B087DF(1);
				}
				else
				{
					unk_0x308C55E6C40CF474(1);
				}
				if (unk_0xB4ECF989E2C1DAC8(iLocal_244, "rcmfanatic1", "ef_1_rcm_mary_ann_leadin", 3))
				{
					if (iLocal_60 == 0)
					{
						if (func_17(&uLocal_78, "FAN1AU", "FAN1_LDI", 8, 0, 0, 0))
						{
							func_39("Done Mary Ann leadin conv");
							iLocal_60 = 1;
						}
					}
					else if (!func_40())
					{
						func_39("Mary Ann leadin conv over");
						wait(250);
						iLocal_55 = 0;
						iLocal_56 = 1;
					}
				}
				else
				{
					func_39("Mary Ann not playing leadin anim anymore - skip to cutscene for safety");
					iLocal_55 = 0;
					iLocal_56 = 1;
				}
				if (func_44(unk_0x16F2683693E537C9(), iLocal_244, 1) <= 4f)
				{
					unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
					if (!func_356(unk_0x16F2683693E537C9(), -875674219))
					{
						unk_0xF96A174EE26D7588(unk_0x16F2683693E537C9(), iLocal_244, 0);
						unk_0x0C8C0C840C2D1AD2(unk_0x16F2683693E537C9(), iLocal_244, -1, 0, 2);
					}
				}
			}
			break;
	}
}

void func_361()
{
	func_286(0);
	func_292();
	func_362();
}

void func_362()
{
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
		{
			if (func_357(unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (unk_0xD1960163A3042274(unk_0x16F2683693E537C9(), -828834893) != 1)
				{
					unk_0x75CDA8644CD3B5F5(unk_0x16F2683693E537C9(), 0, 0);
				}
			}
		}
	}
}

void func_363()
{
	if (iLocal_277 == 1 && (unk_0x1C0640BA9A7327B3() - iLocal_276) < 1500)
	{
		if (!func_40())
		{
			if (Local_274.f_1 <= 3)
			{
				if (iLocal_278 == 0)
				{
					if (func_364(Local_274))
					{
						func_347("Said OvertakeLines #", Local_274.f_1);
						Local_274.f_1++;
						iLocal_277 = 0;
						iLocal_278 = 1;
						iLocal_276 = unk_0x1C0640BA9A7327B3();
					}
				}
				else
				{
					iLocal_278 = 0;
					iLocal_277 = 0;
					iLocal_276 = unk_0x1C0640BA9A7327B3();
				}
			}
			else
			{
				iLocal_277 = 0;
				iLocal_276 = unk_0x1C0640BA9A7327B3();
			}
		}
		else
		{
			iLocal_277 = 0;
			iLocal_276 = unk_0x1C0640BA9A7327B3();
		}
	}
	else if (iLocal_277 == 1)
	{
		iLocal_277 = 0;
		iLocal_276 = unk_0x1C0640BA9A7327B3();
	}
}

int func_364(char* sParam0)
{
	if (iLocal_243 == 0 && !unk_0xD17F06053799A7CA())
	{
		if (func_17(&uLocal_78, "FAN1AU", sParam0, 7, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_365()
{
	if (func_313(iLocal_244))
	{
		if (iLocal_56 != 8)
		{
			func_377();
		}
		else if (iLocal_308 >= 3)
		{
			if (!func_356(iLocal_244, 242628503) && !bLocal_69)
			{
				if (func_7(iLocal_304))
				{
					unk_0xDD353D0E9C789D0E(&uLocal_77);
					unk_0x5B1D360B9C6F0A09(0, iLocal_304, 20000, -1, 2f, 1, 0);
					unk_0xBC43ED9FE28DB191(0);
					unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), 2000, 0, 2);
					unk_0xE9362E4D600DD12A(0, iLocal_304, -2018.17f, -461f, 10.56f, 10f, 0, iLocal_307, 8, 3f, 50f);
					unk_0xE9362E4D600DD12A(0, iLocal_304, -2014.96f, -455.47f, 10.48f, 10f, 0, iLocal_307, 8, 3f, 50f);
					unk_0xE072601B4380E9DF(0, iLocal_304, 10f, 786599);
					unk_0x75ABDC5F81978924(uLocal_77);
					unk_0x78ADC381772E3D54(iLocal_244, uLocal_77);
					unk_0xF82EA857DA10E0CD(&uLocal_77);
					unk_0xFADC0A217229F6B5(iLocal_244, true);
					func_39("Emergency retasked Mary Ann!");
				}
			}
		}
		func_376();
		if (func_298(unk_0x16F2683693E537C9(), iLocal_244) > 80f)
		{
			if (iLocal_256 == 0)
			{
				unk_0xE8832A9E16A57A1F(iLocal_244, 1, 1);
				iLocal_256 = 1;
			}
		}
		else if (iLocal_256 == 1)
		{
			unk_0xE8832A9E16A57A1F(iLocal_244, 0, 1);
			iLocal_256 = 0;
		}
		if ((iLocal_56 != 8 && iLocal_56 != 7) && iLocal_56 != 9)
		{
			if (iLocal_243 != 1)
			{
				if (func_298(unk_0x16F2683693E537C9(), iLocal_244) > 25f)
				{
					func_375(1);
				}
			}
		}
		if (iLocal_243 != 0)
		{
			if (func_298(unk_0x16F2683693E537C9(), iLocal_244) < 24f)
			{
				func_375(0);
			}
		}
		func_369();
		if ((iLocal_56 != 8 && iLocal_56 != 1) && iLocal_56 != 9)
		{
			if (!unk_0x3D1053F9EB43B7AD(iLocal_244, -1809.173f, -549.0106f, 14.03168f, -1841.729f, -529.4575f, 33.6412f, 21.75f, 0, true, 0))
			{
				if (iLocal_255 == 0)
				{
					unk_0x7B97190AACA7600D(iLocal_244, 1);
					iLocal_255 = 1;
					func_39("Set Mary Ann to steer round peds");
				}
			}
			else if (iLocal_255 == 1)
			{
				unk_0x7B97190AACA7600D(iLocal_244, 0);
				iLocal_255 = 0;
				func_39("Unset Mary Ann to steer round peds");
			}
			func_366();
		}
	}
}

void func_366()
{
	int iVar0;
	
	switch (iLocal_259)
	{
		case 0:
			iLocal_261 = iLocal_352;
			iLocal_260 = unk_0x1C0640BA9A7327B3();
			iLocal_259 = 1;
			break;
		
		case 1:
			if (iLocal_261 == iLocal_352)
			{
				if ((unk_0x1C0640BA9A7327B3() - iLocal_260) > 20000)
				{
					func_39("Mary Ann got stuck!");
					iLocal_259 = 2;
				}
			}
			else
			{
				iLocal_259 = 0;
			}
			break;
		
		case 2:
			unk_0x51FE1B68F2818389(sLocal_348, &iVar0);
			if (iLocal_261 + 4 > iVar0)
			{
				func_368((iVar0 - 1));
			}
			else
			{
				func_368(iLocal_261 + 4);
			}
			func_367(iLocal_56, 0);
			iLocal_259 = 0;
			break;
	}
}

void func_367(int iParam0, int iParam1)
{
	if (func_313(iLocal_244))
	{
		if (!unk_0x2EBF5002C6B6A06C(sLocal_348))
		{
			if (unk_0x1C2E18E9C63BEB77(sLocal_348))
			{
				unk_0xDD353D0E9C789D0E(&uLocal_77);
				unk_0xD93EE6549113F9E1(0, 1);
				unk_0xF44B0E19CAC31C33(0, sLocal_348, func_295(), 1052, -1);
				unk_0x0C8C0C840C2D1AD2(0, unk_0x16F2683693E537C9(), -1, 0, 2);
				unk_0xC6EB89C59F2AF6B8(0, "move_f@runner", "idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
				unk_0x75ABDC5F81978924(uLocal_77);
				unk_0x78ADC381772E3D54(iLocal_244, uLocal_77);
				unk_0xF82EA857DA10E0CD(&uLocal_77);
			}
		}
		func_39("Keep Running used");
		unk_0xF4CB0B98F8F79D8D(iLocal_244, 0);
		if (iParam1 == 1)
		{
			iLocal_55 = 0;
			iLocal_56 = iParam0;
		}
	}
}

void func_368(int iParam0)
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	
	unk_0xEF8F639897C675D5(sLocal_348, iParam0, &vVar0);
	unk_0xEF8F639897C675D5(sLocal_348, iParam0 + 1, &vVar2);
	fVar1 = func_281(vVar0, vVar2, 1);
	func_351(iLocal_244, vVar0, fVar1, 1, 1);
	if (iParam0 < 6)
	{
		iLocal_365 = 1;
	}
	else if (iParam0 < 30)
	{
		iLocal_365 = 1;
	}
	else if (iParam0 < 36)
	{
		iLocal_365 = 2;
	}
	else if (iParam0 < 48)
	{
		iLocal_365 = 3;
	}
	else if (iParam0 < 62)
	{
		iLocal_365 = 4;
	}
	else if (iParam0 < 81)
	{
		iLocal_365 = 5;
	}
	else if (iParam0 < 95)
	{
		iLocal_365 = 6;
	}
	else if (iParam0 < 106)
	{
		iLocal_365 = 7;
	}
	else
	{
		iLocal_365 = 8;
	}
}

void func_369()
{
	if (iLocal_56 != 8)
	{
		if (iLocal_56 == 5)
		{
			iLocal_246 = 3;
			func_374();
		}
		else
		{
			if (iLocal_246 != 2)
			{
				func_371();
			}
			else if (iLocal_349 == 1)
			{
				func_371();
			}
			func_370();
		}
		if (unk_0xB72E131222E66495(iLocal_244))
		{
			if (iLocal_246 == 1)
			{
				unk_0xFD2107656FB54C9D(iLocal_244, fLocal_254, 0);
			}
			else
			{
				unk_0xFD2107656FB54C9D(iLocal_244, fLocal_253, 0);
			}
		}
		unk_0xDEAC6BC509D10068(iLocal_244, (fLocal_253 - 0.5f));
		unk_0x20CD641B34794F65(iLocal_244, fLocal_251);
	}
}

void func_370()
{
	switch (iLocal_246)
	{
		case 0:
			if (func_440(iLocal_244))
			{
				if (!unk_0x3D1053F9EB43B7AD(iLocal_244, -1809.173f, -549.0106f, 14.03168f, -1841.729f, -529.4575f, 33.6412f, 21.75f, 0, true, 0))
				{
					if (fLocal_253 >= 2.5f)
					{
						if (func_440(iLocal_244))
						{
							unk_0x0C8C0C840C2D1AD2(iLocal_244, unk_0x16F2683693E537C9(), 1500, 3120, 4);
						}
						fLocal_254 = fLocal_253;
						iLocal_246 = 1;
						iLocal_247 = unk_0x1C0640BA9A7327B3();
					}
				}
			}
			break;
		
		case 1:
			if ((unk_0x1C0640BA9A7327B3() - iLocal_247) < iLocal_248)
			{
				if (fLocal_254 < fLocal_253)
				{
					fLocal_254 = fLocal_253;
				}
			}
			else
			{
				fLocal_253 = fLocal_254;
				iLocal_246 = 2;
			}
			break;
		
		case 2:
			if (iLocal_349 == 2)
			{
				if (fLocal_253 > 2.49f)
				{
					fLocal_253 = (fLocal_253 - 0.002f);
				}
				else
				{
					iLocal_246 = 3;
					iLocal_247 = unk_0x1C0640BA9A7327B3();
				}
			}
			break;
		
		case 3:
			if ((unk_0x1C0640BA9A7327B3() - iLocal_247) > iLocal_249)
			{
				func_39("*** SPRINT BOOST WAITING");
				iLocal_246 = 0;
			}
			break;
	}
}

void func_371()
{
	vector3 vVar0;
	
	if (iLocal_351 == iLocal_352)
	{
		unk_0xEF8F639897C675D5(sLocal_348, iLocal_352 + 1, &vVar0);
		if (func_346(unk_0x16F2683693E537C9(), vVar0, 1) < func_346(iLocal_244, vVar0, 1))
		{
			func_373();
		}
		else
		{
			func_372();
		}
	}
	else if (iLocal_351 > iLocal_352)
	{
		func_373();
	}
	else
	{
		func_372();
	}
}

void func_372()
{
	float fVar0;
	
	if (fLocal_251 > 1f)
	{
		fLocal_251 = (fLocal_251 - 0.02f);
	}
	else
	{
		fLocal_251 = 1f;
	}
	if (fLocal_251 > fLocal_250)
	{
		fLocal_251 = fLocal_250;
	}
	fVar0 = (4.5f - (func_298(unk_0x16F2683693E537C9(), iLocal_244) / 2f));
	if (fVar0 < 1.8f)
	{
		fVar0 = 1.8f;
	}
	else if (fVar0 > fLocal_252)
	{
		fVar0 = fLocal_252;
	}
	if (fLocal_253 > fVar0)
	{
		fLocal_253 = (fLocal_253 - 0.01f);
	}
	else
	{
		fLocal_253 = fVar0;
	}
}

void func_373()
{
	fLocal_251 = (fLocal_251 + (unk_0x6117725E0134737F() / 20f));
	if (fLocal_251 > fLocal_250)
	{
		fLocal_251 = fLocal_250;
	}
	fLocal_253 = (fLocal_253 + 0.02f);
	if (fLocal_253 > fLocal_252)
	{
		fLocal_253 = fLocal_252;
	}
}

void func_374()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (func_440(iLocal_244))
	{
		if (iLocal_349 == 2)
		{
			fVar0 = func_44(unk_0x16F2683693E537C9(), iLocal_244, 1);
			if (fVar0 < 15f)
			{
				fVar1 = (fVar0 / 100f);
				if (fLocal_253 > 2.42f)
				{
					fLocal_253 = (fLocal_253 - fVar1);
				}
			}
			else if (fLocal_253 < 2.52f)
			{
				fLocal_253 = (fLocal_253 + 0.002f);
			}
		}
		else
		{
			fVar2 = func_44(unk_0x16F2683693E537C9(), iLocal_244, 1);
			fVar3 = (fVar2 / 300f);
			if (fVar2 < 10f)
			{
				if (fLocal_253 < 2.487f)
				{
					fLocal_253 = (fLocal_253 + 0.002f);
				}
				else if (fLocal_253 > 2.492f)
				{
					fLocal_253 = (fLocal_253 - 0.002f);
				}
			}
			else
			{
				if (fLocal_253 < 2.55f)
				{
					fLocal_253 = (fLocal_253 + fVar3);
				}
				else if (fLocal_253 > 2.55f)
				{
					fLocal_253 = (fLocal_253 - fVar3);
				}
				if (fLocal_253 > 3f)
				{
					fLocal_253 = 3f;
				}
			}
		}
	}
}

void func_375(int iParam0)
{
	if (iLocal_243 != iParam0)
	{
		switch (iLocal_243)
		{
			case 0:
				if (iParam0 == 1)
				{
					if (func_40())
					{
						func_15();
					}
					func_39("MA Dialogue: Kill convo, switch to MA_OUT_OF_TALKING_RANGE, trying keep up line if possible");
					iLocal_243 = 2;
				}
				break;
			
			case 1:
				if (iParam0 == 0)
				{
					if (func_40())
					{
						func_15();
					}
					func_39("MA Dialogue: Kill convo, switch to MA_WITHIN_TALKING_RANGE, trying you caught up line if possible");
					iLocal_243 = 3;
				}
				break;
			}
	}
}

void func_376()
{
	if (iLocal_243 == 2)
	{
		if (iLocal_262 < 2)
		{
			if ((vLocal_295.z || vLocal_298.z) && iLocal_56 == 2)
			{
				iLocal_243 = 1;
				func_39("MA Dialogue: Now in MA_OUT_OF_TALKING_RANGE");
			}
			else if (iLocal_349 == 2)
			{
				if (func_320(&uLocal_78, "FAN1AU", "FAN1_FALLB", sLocal_263[iLocal_262], 8, 0, 0))
				{
					iLocal_262++;
					iLocal_243 = 1;
					func_39("MA Dialogue: Played keep up line, now in MA_OUT_OF_TALKING_RANGE");
				}
			}
			else
			{
				iLocal_243 = 1;
				func_39("MA Dialogue: Player in 1st place so no need for keep up line, now in MA_OUT_OF_TALKING_RANGE");
			}
		}
		else
		{
			func_39("MA Dialogue: Said all keep up lines, now in MA_OUT_OF_TALKING_RANGE");
			iLocal_243 = 1;
		}
	}
	else if (iLocal_243 == 3)
	{
		if (iLocal_264 < 2)
		{
			if ((vLocal_295.z || vLocal_298.z) && iLocal_56 == 2)
			{
				if (iLocal_279 == 0)
				{
					if (func_17(&uLocal_78, "FAN1AU", "FAN1_CATCHC", 8, 0, 0, 0))
					{
						iLocal_279 = 1;
						iLocal_64 = 0;
					}
				}
				iLocal_243 = 0;
				func_39("MA Dialogue: Now in MA_WITHIN_TALKING_RANGE");
			}
			else if (iLocal_349 == 2)
			{
				if (func_364("FAN1_CATCHU"))
				{
					iLocal_264++;
					iLocal_243 = 0;
					func_39("MA Dialogue: Played catchup line, now in MA_WITHIN_TALKING_RANGE");
				}
			}
			else
			{
				iLocal_243 = 0;
				func_39("MA Dialogue: Player in 1st place so no need for catchup line, now in MA_WITHIN_TALKING_RANGE");
			}
		}
	}
}

void func_377()
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (unk_0xE608C809F9416F00(iLocal_244))
	{
		unk_0xE51E576EA6B739AC(unk_0x68F4C0EC296D3901(iLocal_244, true), 0.75f, 1, 1, &iVar0, 0, 0, -1);
		if (unk_0xC844350D5D58C99A(iVar0) && !unk_0x437347B10A200C4B(iVar0, 0))
		{
			if (!unk_0x869EFD0BC0868856(iVar0) && unk_0x1B3D109B39CC2C89(iLocal_244, iVar0))
			{
				unk_0xA3BF0AA5A2608191(iVar0);
				unk_0x64B1AD81046CB800(iVar0, 800, 1500, 2, 1, 1, 0);
				vVar1 = { -unk_0x5293C88BD2F4DE13(iLocal_244, unk_0x68F4C0EC296D3901(iVar0, true)) };
				unk_0xDFC6BA855748EB10(iVar0, 1, vVar1, 0f, 0f, 0f, unk_0x2FE7944BC1CBE5A2(iVar0, 7), 0, 0, 1, 0, 1);
				if (!func_40())
				{
					if (unk_0x37C93F8F542F7FEF(iVar0, 4))
					{
						if (Local_284[2 /*5*/].f_2 == 0)
						{
							if (func_319("FAN1_PUSH", Local_284[2 /*5*/].f_1, 0, &uVar2))
							{
								Local_284[2 /*5*/].f_2 = 1;
							}
						}
						else if (Local_284[0 /*5*/].f_2 == 0)
						{
							if (func_319("FAN1_PUSH", Local_284[0 /*5*/].f_1, 0, &uVar3))
							{
								Local_284[0 /*5*/].f_2 = 1;
							}
						}
					}
					else if (Local_284[1 /*5*/].f_2 == 0)
					{
						if (func_319("FAN1_PUSH", Local_284[1 /*5*/].f_1, 0, &uVar4))
						{
							Local_284[1 /*5*/].f_2 = 1;
						}
					}
					else if (Local_284[0 /*5*/].f_2 == 0)
					{
						if (func_319("FAN1_PUSH", Local_284[0 /*5*/].f_1, 0, &uVar5))
						{
							Local_284[0 /*5*/].f_2 = 1;
						}
					}
				}
			}
		}
	}
}

void func_378()
{
	var uVar0[32];
	vector3 vVar1;
	
	if (unk_0xE608C809F9416F00(unk_0x16F2683693E537C9()))
	{
		if (unk_0x263615A674FCA6E9(unk_0x16F2683693E537C9(), &uVar0, -1) > 0)
		{
			if (unk_0xC844350D5D58C99A(uVar0[0]) && !unk_0x437347B10A200C4B(uVar0[0], 0))
			{
				if (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), uVar0[0]))
				{
					if (uVar0[0] == iLocal_244)
					{
						func_39("Player touched Mary Ann!");
						if (!func_40())
						{
							if (Local_270.f_1 <= 3)
							{
								if (func_364(Local_270))
								{
									func_347("Saying MikePushMALine #", Local_270.f_1);
									Local_270.f_1++;
								}
							}
						}
					}
					else
					{
						func_39("Player touched a civ!");
						if (!unk_0x405E212DDE472467(uVar0[0], 0))
						{
							if (!unk_0x869EFD0BC0868856(uVar0[0]))
							{
								unk_0xA3BF0AA5A2608191(uVar0[0]);
								unk_0x64B1AD81046CB800(uVar0[0], 800, 1500, 2, 1, 1, 0);
								vVar1 = { -unk_0x5293C88BD2F4DE13(unk_0x16F2683693E537C9(), unk_0x68F4C0EC296D3901(uVar0[0], true)) };
								unk_0xDFC6BA855748EB10(uVar0[0], 1, vVar1, 0f, 0f, 0f, unk_0x2FE7944BC1CBE5A2(uVar0[0], 7), 0, 0, 1, 0, 1);
							}
							if (!func_40())
							{
								if (Local_272.f_1 <= 3)
								{
									if (func_364(Local_272))
									{
										func_347("Said MikePushPedLine #", Local_272.f_1);
										Local_272.f_1++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_379()
{
	if (!Global_111638.f_18569.f_385)
	{
		if (unk_0x1DAD67F1BBB978BA(unk_0xD803B885F5E47A62()) <= 5f)
		{
			if (!unk_0xFEBC1E4EC9E001F0())
			{
				func_56("AM_H_NOSTAM", -1);
				Global_111638.f_18569.f_385 = 1;
			}
		}
	}
}

void func_380()
{
	if (func_313(iLocal_244))
	{
		if (iLocal_56 < 8 && iLocal_56 > 1)
		{
			func_395();
			func_394(iLocal_245, iLocal_244, 70f, 0.72f, 0);
			if (iLocal_351 > iLocal_352)
			{
				if (iLocal_349 != 1)
				{
					iLocal_349 = 1;
					if ((unk_0x1C0640BA9A7327B3() - iLocal_276) > 3000)
					{
						func_39("Trying an overtake line...");
						iLocal_277 = 1;
						iLocal_276 = unk_0x1C0640BA9A7327B3();
					}
					else
					{
						func_347("Can't do overtake line, overtake timer is = ", (unk_0x1C0640BA9A7327B3() - iLocal_276));
					}
				}
			}
			else if (iLocal_351 < iLocal_352)
			{
				if (iLocal_349 != 2)
				{
					iLocal_349 = 2;
				}
			}
			else if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(iLocal_244, true), vLocal_363[func_393() /*3*/], true) < unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_363[func_393() /*3*/], true))
			{
				if (iLocal_349 != 2)
				{
					iLocal_349 = 2;
				}
			}
			else if (iLocal_349 != 1)
			{
				iLocal_349 = 1;
				if ((unk_0x1C0640BA9A7327B3() - iLocal_276) > 3000)
				{
					func_39("Trying an overtake line...");
					iLocal_277 = 1;
					iLocal_276 = unk_0x1C0640BA9A7327B3();
				}
				else
				{
					func_347("Can't do overtake line, overtake timer is = ", (unk_0x1C0640BA9A7327B3() - iLocal_276));
				}
			}
			func_392();
			func_381((unk_0x1C0640BA9A7327B3() - iLocal_366), "", -1, -1, "", iLocal_349, 2, "", 0, 1, -1, -1, 0, 12, -1, -1, 0, 6, -1, 0, 0, 1, -1, 0, -1082130432, 1, 1);
		}
	}
}

void func_381(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, bool bParam21, int iParam22, char* sParam23, float fParam24, int iParam25, int iParam26)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	
	if (fParam24 > -1f)
	{
		func_389(0, "", iParam22, iParam25, 9, 0, sParam23, 1, fParam24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam14 > -1)
	{
		sVar0 = iParam16;
		if (func_388(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		func_387(iParam14, iParam15, sVar0, iParam17, iParam22, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1);
	}
	if (iParam10 > -1)
	{
		sVar1 = iParam12;
		if (func_388(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		iParam13 = iParam13;
		iParam11 = iParam11;
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (func_388(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		func_386(iParam5, iParam6, sVar2, iParam9, iParam22, 9, 0, 0, 0, 1, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (func_388(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
		func_385(iParam2, iParam3, sVar3, iParam22, 1, 8, 0, 0, 0, 0, 0, 1, 1, 0, 255, 0);
	}
	if (iParam18 > -1)
	{
		sVar4 = iParam19;
		if (func_388(sVar4))
		{
			sVar4 = "TIMER_BESLAP";
		}
		iParam26 = iParam26;
		iParam20 = iParam20;
	}
	sVar5 = sParam1;
	if (func_388(sVar5))
	{
		sVar5 = "TIMER_TIME_RCE";
	}
	if (bParam21)
	{
		iVar6 = 1;
	}
	else
	{
		iVar6 = 0;
	}
	func_382(iParam0, sVar5, iParam8, iVar6, iParam22, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

void func_382(var uParam0, char* sParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_384(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_383(7, iVar0);
		Global_1378678.f_4562[iVar0] = uParam0;
		StringCopy(&(Global_1378678.f_4562.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_4562.f_172[iVar0] = uParam2;
		Global_1378678.f_4562.f_216[iVar0] = iParam3;
		Global_1378678.f_4562.f_183[iVar0] = uParam4;
		Global_1378678.f_4562.f_194[iVar0] = iParam5;
		Global_1378678.f_4562.f_249[iVar0] = iParam6;
		Global_1378678.f_4562.f_260[iVar0] = iParam7;
		Global_1378678.f_4562.f_205[iVar0] = iParam8;
		Global_1378678.f_4562.f_314[iVar0] = iParam9;
		Global_1378678.f_4562.f_325[iVar0] = iParam10;
		Global_1378678.f_4562.f_357[iVar0] = iParam11;
		Global_1378678.f_4562.f_238[iVar0] = iParam12;
		Global_1378678.f_4562.f_271[iVar0] = iParam13;
		Global_1378678.f_4562.f_368[iVar0] = iParam14;
		Global_1378678.f_4562.f_379[iVar0] = iParam15;
		Global_1378678.f_4562.f_390[iVar0] = iParam16;
		Global_1378678.f_4562.f_227[iVar0] = iParam17;
	}
}

void func_383(int iParam0, int iParam1)
{
	unk_0x5D96D8530B3D0904(&(Global_1378678.f_6293[iParam0]), iParam1);
}

bool func_384(int iParam0, int iParam1)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1378678.f_6293[iParam0], iParam1);
}

void func_385(int iParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_384(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_383(4, iVar0);
		Global_1378678.f_3272[iVar0] = iParam0;
		Global_1378678.f_3272.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1378678.f_3272.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1378678.f_3272.f_183[iVar0] = uParam3;
		Global_1378678.f_3272.f_216[iVar0] = iParam5;
		Global_1378678.f_3272.f_194[iVar0] = iParam4;
		Global_1378678.f_3272.f_227[iVar0] = iParam6;
		Global_1378678.f_3272.f_270[iVar0] = iParam7;
		Global_1378678.f_3272.f_281[iVar0] = iParam8;
		Global_1378678.f_3272.f_292[iVar0] = iParam9;
		Global_1378678.f_3272.f_303[iVar0] = iParam10;
		Global_1378678.f_3272.f_314[iVar0] = iParam11;
		Global_1378678.f_3272.f_325[iVar0] = iParam13;
		Global_1378678.f_3272.f_336[iVar0] = iParam14;
		Global_1378678.f_3272.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0x0EFF6B4415DAF4A1()) && iParam12)
		{
			Global_1378678.f_1130 = 1;
		}
	}
}

void func_386(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_384(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_383(5, iVar0);
		Global_1378678.f_3630[iVar0] = iParam0;
		Global_1378678.f_3630.f_172[iVar0] = uParam1;
		StringCopy(&(Global_1378678.f_3630.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1378678.f_3630.f_194[iVar0] = uParam3;
		Global_1378678.f_3630.f_183[iVar0] = uParam4;
		Global_1378678.f_3630.f_216[iVar0] = iParam5;
		Global_1378678.f_3630.f_227[iVar0] = iParam6;
		Global_1378678.f_3630.f_270[iVar0] = iParam7;
		Global_1378678.f_3630.f_281[iVar0] = iParam8;
		Global_1378678.f_3630.f_292[iVar0] = iParam9;
		Global_1378678.f_3630.f_303[iVar0] = iParam10;
	}
}

void func_387(int iParam0, var uParam1, char* sParam2, var uParam3, var uParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_384(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_383(0, iVar0);
		Global_1378678.f_1135[iVar0] = iParam0;
		Global_1378678.f_1135.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1378678.f_1135.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1378678.f_1135.f_194[iVar0] = uParam3;
		Global_1378678.f_1135.f_183[iVar0] = uParam4;
		Global_1378678.f_1135.f_216[iVar0] = iParam5;
		Global_1378678.f_1135.f_227[iVar0 /*3*/] = fParam6;
		Global_1378678.f_1135.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1378678.f_1135.f_258[iVar0] = iParam8;
		Global_1378678.f_1135.f_269[iVar0] = iParam9;
		Global_1378678.f_1135.f_312[iVar0] = iParam10;
		Global_1378678.f_1135.f_323[iVar0] = iParam11;
		Global_1378678.f_1135.f_334[iVar0] = iParam12;
		Global_1378678.f_1135.f_345[iVar0] = iParam13;
		Global_1378678.f_1130 = 1;
		Global_1378678.f_1135.f_356[iVar0] = iParam14;
		Global_1378678.f_1135.f_367[iVar0] = iParam15;
		Global_1378678.f_1135.f_378[iVar0] = iParam16;
		Global_1378678.f_1135.f_389[iVar0] = iParam17;
		Global_1378678.f_1135.f_400[iVar0] = iParam18;
		Global_1378678.f_1135.f_411[iVar0] = iParam19;
		Global_1378678.f_1135.f_422[iVar0] = iParam20;
		Global_1378678.f_1135.f_433[iVar0] = iParam21;
		Global_1378678.f_1135.f_444[iVar0] = iParam22;
		Global_1378678.f_1135.f_455[iVar0] = iParam23;
		Global_1378678.f_1135.f_466[iVar0] = iParam24;
		Global_1378678.f_1135.f_205[iVar0] = iParam25;
		Global_1378678.f_1135.f_477[iVar0] = iParam26;
		Global_1378678.f_1135.f_488[iVar0] = iParam27;
		Global_1378678.f_1135.f_499[iVar0] = iParam28;
		Global_1378678.f_1135.f_510[iVar0] = iParam29;
		Global_1378678.f_1135.f_521[iVar0] = iParam30;
		Global_1378678.f_1135.f_532[iVar0] = iParam31;
		Global_1378678.f_1135.f_543[iVar0] = iParam32;
		Global_1378678.f_1135.f_554[iVar0] = iParam33;
	}
}

int func_388(char* sParam0)
{
	if (unk_0x2EBF5002C6B6A06C(sParam0))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE(sParam0, "") || unk_0x7F8A39872A07D2CE(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_389(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_384(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378678.f_1 = 1;
		func_383(6, iVar0);
		Global_1378678.f_3944[iVar0] = iParam0;
		StringCopy(&(Global_1378678.f_3944.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378678.f_3944.f_183[iVar0] = uParam3;
		Global_1378678.f_3944.f_172[iVar0] = uParam2;
		Global_1378678.f_3944.f_260[iVar0] = iParam4;
		Global_1378678.f_3944.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378678.f_3944.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1378678.f_3944.f_443[iVar0] = iParam7;
		Global_1378678.f_3944.f_454[iVar0] = fParam8;
		Global_1378678.f_3944.f_497[iVar0] = iParam9;
		Global_1378678.f_3944.f_508[iVar0] = iParam10;
		Global_1378678.f_3944.f_205[iVar0] = iParam11;
		Global_1378678.f_3944.f_216[iVar0] = iParam12;
		Global_1378678.f_3944.f_227[iVar0] = iParam13;
		Global_1378678.f_3944.f_238[iVar0] = iParam14;
		Global_1378678.f_3944.f_249[iVar0] = iParam15;
		Global_1378678.f_3944.f_519[iVar0] = iParam16;
		Global_1378678.f_3944.f_530[iVar0] = iParam17;
		Global_1378678.f_3944.f_541[iVar0] = iParam18;
		Global_1378678.f_3944.f_552[iVar0] = iParam19;
		Global_1378678.f_3944.f_563[iVar0] = iParam20;
		Global_1378678.f_3944.f_574[iVar0] = iParam21;
		Global_1378678.f_3944.f_585[iVar0] = iParam22;
		Global_1378678.f_3944.f_596[iVar0] = iParam23;
		Global_1378678.f_3944.f_607[iVar0] = iParam24;
		Global_1378678.f_3944.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_391())
		{
			Global_1378678.f_1130 = 1;
		}
		if (unk_0x0EFF6B4415DAF4A1())
		{
			iVar2 = 0;
			unk_0xE5AC5CA7914F5BAE(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1378678.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1378678.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378678.f_1130 = 1;
			}
			if (func_390())
			{
				Global_1378678.f_1134 = 1;
			}
		}
	}
}

int func_390()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x0EFF6B4415DAF4A1())
	{
		unk_0xE5AC5CA7914F5BAE(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_391()
{
	if (((unk_0xB3260A60545D3F11() == 8 || unk_0xB3260A60545D3F11() == 9) || unk_0xB3260A60545D3F11() == 10) || unk_0xB3260A60545D3F11() == 12)
	{
		return 1;
	}
	return 0;
}

void func_392()
{
	Global_1378678.f_1130 = 1;
}

int func_393()
{
	if (iLocal_364 > iLocal_365)
	{
		if (iLocal_364 >= 10)
		{
			return 9;
		}
		else
		{
			return iLocal_364;
		}
	}
	if (iLocal_365 >= 10)
	{
		return 9;
	}
	return iLocal_365;
}

void func_394(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xE4EDC4B0E92C078B(iParam0))
	{
		if ((unk_0xC844350D5D58C99A(iParam1) && unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9())) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0xE2F1E99DD161A861(iParam1))
			{
				if (unk_0xDF1306B443CD3D15(unk_0x96A5FE5834B81CE7(iParam1), 0))
				{
					fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xF412DD40DE84CE72(iParam0, 1);
						unk_0x7F010F50CE03A8AF(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xF412DD40DE84CE72(iParam0, 0);
						unk_0x7F010F50CE03A8AF(iParam0, 255);
					}
				}
			}
			else if (unk_0xEC560E589DF8370E(iParam1))
			{
				if (!unk_0xEB6A8945D1AC98A1(unk_0x940C1429253D3B1B(iParam1)))
				{
					fVar1 = unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = round(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0xF412DD40DE84CE72(iParam0, 1);
						unk_0x7F010F50CE03A8AF(iParam0, (255 - iVar0));
					}
					else
					{
						unk_0xF412DD40DE84CE72(iParam0, 0);
						unk_0x7F010F50CE03A8AF(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_395()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (iLocal_364 < iLocal_362)
	{
		if (iLocal_364 < (iLocal_362 - 1))
		{
			if (unk_0x5A91F08DF773C39D(unk_0x16F2683693E537C9(), vLocal_363[iLocal_364 /*3*/], 4f, 4f, 3f, false, true, 0) || !unk_0xE4EDC4B0E92C078B(iLocal_357))
			{
				func_12(&iLocal_357);
				func_12(&iLocal_358);
				if (iLocal_359 != 0)
				{
					func_39("Create prev CP");
					iLocal_361 = 180;
					iVar0 = 1;
					unk_0xA402F6C87C08815C(iVar0, &iVar5, &iVar6, &iVar7, &iLocal_361);
					iLocal_360 = unk_0x1B26E47E3E30075B(func_397(iLocal_364), vLocal_363[iLocal_364 /*3*/] + Vector(2f, 0f, 0f), vLocal_363[iLocal_364 + 1 /*3*/], 3.2f, iVar5, iVar6, iVar7, iLocal_361, 0);
					unk_0xF0B0A50DF3EA0E70(iLocal_360, iVar5, iVar6, iVar7, iLocal_361);
					unk_0xF08C5AE8AC5C7427(iLocal_360, iVar5, iVar6, iVar7, iLocal_361);
				}
				unk_0xE223EB8FE6F8CC15(iLocal_359);
				if (iLocal_364 != 0)
				{
					unk_0x4D7F4CC43D4D0DE3(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
				}
				iLocal_364++;
				if (iLocal_364 < (iLocal_362 - 1))
				{
					iLocal_359 = unk_0x1B26E47E3E30075B(func_397(iLocal_364), vLocal_363[iLocal_364 /*3*/] + Vector(2f, 0f, 0f), vLocal_363[iLocal_364 + 1 /*3*/], 3.2f, iVar1, iVar2, iVar3, iVar4, 0);
					unk_0x39BB9CA9BC90525F(iLocal_359, 1.6f, 1.6f, 100f);
					iVar0 = 13;
					unk_0xA402F6C87C08815C(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
					unk_0xF0B0A50DF3EA0E70(iLocal_359, iVar1, iVar2, iVar3, iVar4);
					iVar0 = 134;
					unk_0xA402F6C87C08815C(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
					unk_0xF08C5AE8AC5C7427(iLocal_359, iVar1, iVar2, iVar3, iVar4);
					iLocal_357 = unk_0x6CC513A908911CF0(vLocal_363[iLocal_364 /*3*/]);
					unk_0xF2D30B8ACAF12A39(iLocal_357, 0);
					unk_0x516E63E474722206(iLocal_357, 1.2f);
					iLocal_358 = unk_0x6CC513A908911CF0(vLocal_363[iLocal_364 + 1 /*3*/]);
					if (iLocal_364 + 1 == (iLocal_362 - 1))
					{
						unk_0x516E63E474722206(iLocal_358, 1.2f);
						unk_0xBC8E0A7390523199(iLocal_358, 38);
						unk_0xF2D30B8ACAF12A39(iLocal_358, 0);
					}
					else
					{
						unk_0x516E63E474722206(iLocal_358, 0.7f);
						unk_0xF2D30B8ACAF12A39(iLocal_358, 0);
					}
				}
				else if (iLocal_364 == (iLocal_362 - 1))
				{
					iVar0 = func_396(func_397(iLocal_364));
					unk_0xA402F6C87C08815C(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
					iLocal_359 = unk_0x1B26E47E3E30075B(func_397(iLocal_364), vLocal_363[iLocal_364 /*3*/] + Vector(2f, 0f, 0f), vLocal_363[iLocal_364 /*3*/], 3.2f, iVar1, iVar2, iVar3, iVar4, 0);
					unk_0x39BB9CA9BC90525F(iLocal_359, 1.6f, 1.6f, 100f);
					iLocal_357 = unk_0x6CC513A908911CF0(vLocal_363[iLocal_364 /*3*/]);
					unk_0x516E63E474722206(iLocal_357, 1.2f);
					unk_0xBC8E0A7390523199(iLocal_357, 38);
					unk_0xF2D30B8ACAF12A39(iLocal_357, 0);
				}
			}
		}
		else if (iLocal_364 == (iLocal_362 - 1))
		{
			if (func_346(unk_0x16F2683693E537C9(), vLocal_356, 1) < 4f)
			{
				if (!unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
				{
					if (iLocal_359 != 0)
					{
						func_39("Create prev CP");
						iLocal_361 = 180;
						iVar0 = 1;
						unk_0xA402F6C87C08815C(iVar0, &iVar5, &iVar6, &iVar7, &iLocal_361);
						iLocal_360 = unk_0x1B26E47E3E30075B(10, vLocal_363[iLocal_364 /*3*/] + Vector(2f, 0f, 0f), vLocal_363[iLocal_364 /*3*/], 3.2f, iVar5, iVar6, iVar7, iLocal_361, 0);
						unk_0xF0B0A50DF3EA0E70(iLocal_360, iVar5, iVar6, iVar7, iLocal_361);
						unk_0xF08C5AE8AC5C7427(iLocal_360, iVar5, iVar6, iVar7, iLocal_361);
					}
					unk_0x4D7F4CC43D4D0DE3(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
					iLocal_308 = 1;
					iLocal_55 = 0;
					iLocal_56 = 8;
					func_39("PLAYER_AT_FINISH_LINE");
				}
			}
		}
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		fVar8 = unk_0x0EB28750412C3A5A(vLocal_363[iLocal_364 /*3*/], unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), true);
		if (iLocal_359 != 0)
		{
			if (fVar8 > 100f)
			{
				iVar4 = 240;
				iVar0 = 13;
				unk_0xA402F6C87C08815C(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
				unk_0xF0B0A50DF3EA0E70(iLocal_359, iVar1, iVar2, iVar3, iVar4);
				iVar0 = 134;
				unk_0xA402F6C87C08815C(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
				unk_0xF08C5AE8AC5C7427(iLocal_359, iVar1, iVar2, iVar3, iVar4);
			}
			else
			{
				iVar0 = 13;
				unk_0xA402F6C87C08815C(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
				iVar4 = round((fVar8 * 2.4f));
				if (iVar4 < 60)
				{
					iVar4 = 60;
				}
				unk_0xF0B0A50DF3EA0E70(iLocal_359, iVar1, iVar2, iVar3, iVar4);
				iVar0 = 134;
				unk_0xA402F6C87C08815C(iVar0, &iVar1, &iVar2, &iVar3, &iVar4);
				iVar4 = round((fVar8 * 2.4f));
				if (iVar4 < 60)
				{
					iVar4 = 60;
				}
				unk_0xF08C5AE8AC5C7427(iLocal_359, iVar1, iVar2, iVar3, iVar4);
			}
		}
	}
	if (iLocal_360 != 0)
	{
		iLocal_361 = (iLocal_361 - 25);
		if (iLocal_361 > 0)
		{
			unk_0xA402F6C87C08815C(1, &iVar5, &iVar6, &iVar7, &iVar4);
			unk_0xF0B0A50DF3EA0E70(iLocal_360, iVar5, iVar6, iVar7, iLocal_361);
			unk_0xF08C5AE8AC5C7427(iLocal_360, iVar5, iVar6, iVar7, iLocal_361);
		}
		else
		{
			unk_0xE223EB8FE6F8CC15(iLocal_360);
		}
	}
	if (iLocal_365 < iLocal_362)
	{
		if (unk_0x5A91F08DF773C39D(iLocal_244, vLocal_363[iLocal_365 /*3*/], 3f, 3f, 3f, false, true, 0))
		{
			iLocal_365++;
		}
	}
}

int func_396(var uParam0)
{
	uParam0 = uParam0;
	return 13;
}

int func_397(int iParam0)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 180f;
	fVar7 = 140f;
	fVar8 = 80f;
	vVar0 = { vLocal_363[iParam0 /*3*/] };
	if (iParam0 == (iLocal_362 - 1))
	{
		return 10;
	}
	else if (iParam0 == 0)
	{
		vVar2 = { -1869.12f, -445.17f, 45.17f };
		vVar1 = { vLocal_363[iParam0 + 1 /*3*/] };
	}
	else
	{
		vVar2 = { vLocal_363[(iParam0 - 1) /*3*/] };
		vVar1 = { vLocal_363[iParam0 + 1 /*3*/] };
	}
	vVar3 = { vVar2 - vVar0 };
	vVar4 = { vVar1 - vVar0 };
	fVar5 = unk_0x07AB02F3C4AE2B04(vVar3.x, vVar3.y, vVar4.x, vVar4.y);
	if (fVar5 > 180f)
	{
		fVar5 = (360f - fVar5);
	}
	if (fVar5 < fVar8)
	{
		return 8;
	}
	else if (fVar5 < fVar7)
	{
		return 7;
	}
	else if (fVar5 < fVar6)
	{
		return 6;
	}
	else
	{
		return 6;
	}
	return 6;
}

void func_398()
{
	if ((iLocal_56 != 8 && iLocal_56 != 10) && iLocal_56 > 1)
	{
		if (unk_0xC844350D5D58C99A(iLocal_244))
		{
			func_57();
			func_45();
			func_297();
			func_400();
			func_399();
		}
	}
}

void func_399()
{
	if (iLocal_56 != 9 && iLocal_56 != 10)
	{
		if (func_346(iLocal_244, vLocal_356, 1) < 3f)
		{
			func_39("Detected Mary Ann won race");
			iLocal_58 = 5;
			iLocal_55 = 0;
			iLocal_56 = 9;
		}
	}
}

void func_400()
{
	if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_353, true) > 60f || func_404(60f))
	{
		unk_0xC92DB9682A650680("RC6A_FAIL");
		iLocal_58 = 6;
		iLocal_55 = 0;
		iLocal_56 = 10;
	}
	else if (Local_74.f_1 == 0)
	{
		if (!func_403(Local_73, 0, 0))
		{
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_353, true) > 40f || func_404(40f))
			{
				if (func_40())
				{
					func_39("stop scripted conversation at CHECK_IF_PLAYER_LEFT_THE_COURSE_OR_MARY_ANN");
					func_15();
				}
				unk_0x790015DC92C918E2();
				func_402(Local_74, 7500, 1);
				Local_74.f_1 = 1;
			}
		}
	}
	if (iLocal_351 < iLocal_352)
	{
		if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_244, true), true) > 70f)
		{
			unk_0xC92DB9682A650680("RC6A_FAIL");
			iLocal_58 = 4;
			iLocal_55 = 0;
			iLocal_56 = 10;
		}
		else if (Local_73.f_1 == 0 && !func_403(Local_74, 0, 0))
		{
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), unk_0x68F4C0EC296D3901(iLocal_244, true), true) > 50f)
			{
				func_401(Local_73, 7500, 1);
				Local_73.f_1 = 1;
			}
		}
	}
}

void func_401(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

void func_402(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 0);
}

bool func_403(char* sParam0, int iParam1, int iParam2)
{
	unk_0x18B60B994182620C(sParam0);
	if (iParam1 == 1)
	{
		unk_0x6B012227B3921E18(iParam2);
	}
	return unk_0xB165082A56EE6E7F();
}

int func_404(float fParam0)
{
	int iVar0;
	
	if (iLocal_364 < (iLocal_362 - 1))
	{
		unk_0x9414396734E14897(sLocal_348, vLocal_363[iLocal_364 /*3*/], &iVar0);
		if (iVar0 < iLocal_351)
		{
			if (unk_0x0EB28750412C3A5A(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), vLocal_363[iLocal_364 /*3*/], true) > fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_405(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (Global_76876 != 6)
	{
		if (Global_76878 == -1)
		{
			if (func_416(1, Param0))
			{
				if (Global_76879 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0)
				{
					Global_76878 = unk_0x1C0640BA9A7327B3();
					vLocal_22 = { unk_0x96792D8393A779D7(15) };
					fLocal_21 = 0f;
				}
				else
				{
					fLocal_21 = (fLocal_21 + unk_0x6117725E0134737F());
				}
			}
			else
			{
				fLocal_21 = 0f;
			}
		}
		else
		{
			if (!func_416(0, Param0))
			{
				Global_76878 = (unk_0x1C0640BA9A7327B3() - 9000);
			}
			unk_0x3584F71E5CA29322(7);
			unk_0x3584F71E5CA29322(6);
			unk_0x3584F71E5CA29322(8);
			unk_0x3584F71E5CA29322(9);
			iVar1 = (unk_0x1C0640BA9A7327B3() - Global_76878);
			if (iVar1 < 9000 && !unk_0x757EF87A33649210())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = ceil(((to_float(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = ceil(((to_float(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_76876)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				unk_0xD02CE72B4B66DC29(82, 66);
				unk_0x7BBAC160090910C3(1);
				unk_0xEEF67251E263A87F(2);
				iVar11 = func_29();
				if (Global_76879 == 1 && Global_76877 == 62)
				{
					iVar11 = Global_111638.f_2358.f_539.f_4322;
				}
				switch (iVar11)
				{
					case 0:
						unk_0xA402F6C87C08815C(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 1:
						unk_0xA402F6C87C08815C(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 2:
						unk_0xA402F6C87C08815C(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				unk_0x7178F32F6742C936(iVar7, iVar8, iVar9, iVar2);
				unk_0xC8CFC125861F0537();
				Var4 = { func_407(Global_76877, Global_76879, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				unk_0x75BBE9A62B73769F(fVar5, fVar6, 0f, 0.01f);
				unk_0xD3539A877EC25E86(0.67f, 0.67f);
				if (!unk_0x0D71AFA59EF5104F() && !unk_0x0DF32524CC9DB3EB())
				{
					fLocal_24 = 0.14f;
				}
				else
				{
					fLocal_24 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (func_406(&Var4) > fLocal_24)
					{
						if (unk_0x2F1FB0453B36C270(15))
						{
							unk_0x744B56EE9DE7B57F(15, vLocal_22.x, (vLocal_22.y + fLocal_23));
							Global_76881 = 1;
						}
					}
				}
				unk_0x070005E852D4C0E9(&Var4);
				unk_0xE0026608C37C7C41(fVar5, fVar6, 0);
				unk_0xD59EF13BB60323B9();
				if (Global_76880 == 1)
				{
					func_230();
					fLocal_21 = 0f;
				}
			}
			else
			{
				func_230();
				fLocal_21 = 0f;
			}
		}
	}
}

float func_406(char* sParam0)
{
	unk_0xBBA442527B4BB1A6(sParam0);
	return unk_0x79E367314AFBB5CA(1);
}

struct<2> func_407(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_415(iParam0) };
			break;
		
		case 7:
			Var0 = { func_216(iParam0) };
			break;
		
		case 3:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0:
					Var0 = { func_414(iParam2) };
					break;
				
				case 8:
					Var0 = { func_413(iParam2) };
					break;
				
				case 7:
					Var0 = { func_412(iParam2) };
					break;
				
				case 10:
					Var0 = { func_411(iParam2) };
					break;
				
				case 5:
					Var0 = { func_410(iParam2) };
					break;
				
				case 4:
					Var0 = { func_409(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_408(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_408(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_409(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_410(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_411(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_412(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_413(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_414(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (unk_0xEA6BC48857E0AC4C(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_415(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_89532[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_111638.f_9080.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_416(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_418(0) || Global_76891) || Global_76880 == 1) || !unk_0x0F1CCD77290EE12F())
	{
		return 0;
	}
	switch (Global_76876)
	{
		case 0:
			if (unk_0x7F8A39872A07D2CE(&uParam1, "NONE") || unk_0xEA6BC48857E0AC4C(&uParam1))
			{
				Global_76876 = 3;
			}
			else
			{
				Global_76876 = 1;
			}
			break;
		
		case 1:
			if (unk_0x62A1F4500E8F07E0())
			{
				Global_76876 = 2;
			}
			break;
		
		case 2:
			if (unk_0x22A8E52414415B76())
			{
				Global_76876 = 4;
				return 1;
			}
			else if (!unk_0x39B7A3CCD2467CAB())
			{
				Global_76876 = 3;
			}
			break;
		
		case 3:
			if (unk_0x22A8E52414415B76())
			{
			}
			else
			{
				Global_76876 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0x22A8E52414415B76())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_76876 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x22A8E52414415B76() || func_290(0)) || func_417(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_417(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22211.f_4 && Global_22211.f_104 == 4);
	}
	return Global_22211.f_4;
}

int func_418(int iParam0)
{
	if (Global_41431 == 15)
	{
		return 0;
	}
	if (func_419(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_419(int iParam0)
{
	return func_420(iParam0, Global_41431);
}

int func_420(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_421(int iParam0)
{
	func_434(1, 1);
	unk_0x790015DC92C918E2();
	unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
	func_433(0, 1);
	unk_0xBFE31971E49FA500(true);
	unk_0x55D0A2DB35045A35(iLocal_371);
	iLocal_372 = 0;
	unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
	unk_0x324CFDE7809E2EC2(unk_0xD803B885F5E47A62());
	iLocal_327 = 0;
	iLocal_71 = 0;
	func_12(&iLocal_357);
	func_12(&iLocal_358);
	unk_0xE223EB8FE6F8CC15(iLocal_359);
	if (func_40())
	{
		func_39("Stopping scripted convo at jump_to_stage");
		func_37();
	}
	unk_0x51732B934211201A(iLocal_76);
	unk_0xF63400DBE3303D26("FRIENDLIES", &iLocal_76);
	unk_0x0E2400AB9174FA81(1, iLocal_76, 1862763509);
	unk_0x0E2400AB9174FA81(1, 1862763509, iLocal_76);
	unk_0x523BCC9DC80CD82F(joaat("ig_maryann"));
	while (!unk_0xB87F6CF6E5628C67(joaat("ig_maryann")))
	{
		wait(0);
	}
	func_5();
	func_432();
	iLocal_276 = unk_0x1C0640BA9A7327B3();
	iLocal_281 = unk_0x1C0640BA9A7327B3();
	iLocal_277 = 0;
	iLocal_244 = unk_0x36F2404464202779(26, joaat("ig_maryann"), -1865.9f, -448.81f, 45.13f, -143.87f, 1, true);
	unk_0x6DF7BF67E86AAE86(iLocal_244, iLocal_76);
	unk_0x79C43E2BAC7C696F(iLocal_244, "FEMALE_FAST_RUNNER", 1048576000);
	unk_0x64F9F278AB9DCA2C(iLocal_244, 4, 1, 0, 0);
	func_348(&uLocal_78, 3, iLocal_244, "MARYANN", 0, 1);
	if (iParam0 <= 3)
	{
		iLocal_248 = 1800;
		iLocal_249 = 4500;
	}
	if (iParam0 == 0)
	{
		if (unk_0x562F77A7F33D2E46("FANATIC_MIX_SCENE"))
		{
			unk_0x06FF977AA95DCCE3(iLocal_244, 0);
			unk_0x8910D3D58E0132B8("FANATIC_MIX_SCENE");
		}
	}
	else if (!unk_0x562F77A7F33D2E46("FANATIC_MIX_SCENE"))
	{
		unk_0x8BC9595FD2792B5D("FANATIC_MIX_SCENE");
		if (func_440(iLocal_244))
		{
			unk_0x2E1E5367A885F9B7(iLocal_244, "FANATIC_MIX_MARY_ANNE", 0);
		}
	}
	switch (iParam0)
	{
		case 0:
			func_359("ef_1_rcm", 0);
			if (unk_0x75EECC9B0572F772())
			{
				func_39("Trying to set Mary Ann component variation");
				unk_0xA0A8D79ACBBD1CB8("Mary_Ann", iLocal_244, joaat("cs_maryann"));
			}
			iLocal_364 = 0;
			iLocal_365 = 1;
			unk_0x51732B934211201A(iLocal_76);
			func_4(0);
			func_431();
			func_430();
			func_429();
			iLocal_55 = 0;
			iLocal_56 = 1;
			break;
		
		case 1:
			iLocal_364 = 0;
			iLocal_365 = 1;
			if (!func_428())
			{
				unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1878.234f, -439.6985f, 45.0299f, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 241.0468f);
			}
			unk_0x745CE398A4B0A3C6(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), 7f, 0);
			unk_0xA47B46945FF6DE74(iLocal_244, -1869.24f, -444.99f, 45.17f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(iLocal_244, -143.87f);
			func_4(0);
			func_431();
			func_430();
			func_429();
			func_367(2, 1);
			if (!func_428())
			{
				unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -530524, 1, 0, 0);
				unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 2f, 5000, 0, 1, 0);
				unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), true);
			}
			break;
		
		case 2:
			iLocal_364 = 3;
			iLocal_365 = 4;
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1731.05f, -549.78f, 36.4f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 104.26f);
			unk_0xA3BF0AA5A2608191(iLocal_244);
			unk_0xA47B46945FF6DE74(iLocal_244, -1732.88f, -551.7632f, 36.5f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(iLocal_244, 115.26f);
			func_4(0);
			unk_0x28F5E4DA506AC0CA(-1806.495f, -525.8696f, 29.92591f, 100f, 0, 0, 0, 0, false, 0);
			func_431();
			func_430();
			func_429();
			func_367(3, 1);
			break;
		
		case 3:
			iLocal_364 = 5;
			iLocal_365 = 6;
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1832.52f, -519.37f, 27.89f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 162.59f);
			unk_0xA3BF0AA5A2608191(iLocal_244);
			unk_0xA47B46945FF6DE74(iLocal_244, -1833.81f, -523.7f, 28.14f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(iLocal_244, 172.66f);
			func_431();
			while (!func_324() || !func_326())
			{
				wait(0);
			}
			func_427();
			func_323(1);
			func_327();
			func_429();
			func_4(1);
			func_367(4, 1);
			break;
		
		case 4:
			iLocal_364 = 6;
			iLocal_365 = 7;
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -1850.1f, -592.21f, 18.2f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 124.19f);
			unk_0xA3BF0AA5A2608191(iLocal_244);
			unk_0xA47B46945FF6DE74(iLocal_244, -1849.61f, -592.9f, 18.2f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(iLocal_244, 135.16f);
			func_431();
			while (!func_324() || !func_326())
			{
				wait(0);
			}
			func_427();
			func_323(0);
			func_327();
			if (func_313(iLocal_329))
			{
				unk_0x0952F7603629A4C0(97, iLocal_329, -1f);
			}
			func_429();
			func_4(1);
			if (func_424(1))
			{
				func_17(&uLocal_78, "FAN1AU", "FAN1_BCHB", 7, 0, 0, 0);
			}
			else
			{
				func_17(&uLocal_78, "FAN1AU", "FAN1_BCHA", 7, 0, 0, 0);
			}
			func_367(5, 1);
			break;
		
		case 5:
			iLocal_364 = 8;
			iLocal_365 = 9;
			func_431();
			while (!func_324() || !func_326())
			{
				wait(0);
			}
			func_427();
			func_323(1);
			func_327();
			func_429();
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), vLocal_356, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 19.95f);
			if (func_313(iLocal_244))
			{
				unk_0xA3BF0AA5A2608191(iLocal_244);
				unk_0xA47B46945FF6DE74(iLocal_244, -1986.93f, -526.39f, 11.7f, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(iLocal_244, 44.46f);
			}
			func_4(1);
			func_367(6, 1);
			break;
		
		case 6:
			iLocal_364 = 8;
			iLocal_365 = 9;
			func_431();
			while (!func_324() || !func_326())
			{
				wait(0);
			}
			func_427();
			func_323(1);
			func_327();
			func_429();
			unk_0xA3BF0AA5A2608191(unk_0x16F2683693E537C9());
			unk_0xA47B46945FF6DE74(unk_0x16F2683693E537C9(), -2001.27f, -514.18f, 11f, 1, false, 0, 1);
			unk_0xD8F6A53F4799FAFE(unk_0x16F2683693E537C9(), 19.95f);
			if (func_313(iLocal_244))
			{
				unk_0xA3BF0AA5A2608191(iLocal_244);
				unk_0xA47B46945FF6DE74(iLocal_244, -1986.93f, -526.39f, 11.7f, 1, false, 0, 1);
				unk_0xD8F6A53F4799FAFE(iLocal_244, 44.46f);
			}
			func_4(1);
			func_367(6, 1);
			break;
	}
	func_328(iLocal_244);
	func_328(unk_0x16F2683693E537C9());
	if (unk_0xC844350D5D58C99A(iLocal_244) && unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		func_297();
		func_380();
	}
	if (func_428())
	{
		func_39("JUMP_TO_STAGE: replay being set up");
		func_423(0, -1, 1);
		unk_0x5A9FF5F994E904B8(unk_0xD803B885F5E47A62(), 2f, 5000, 0, 1, 0);
		unk_0xBD453909DC26A85D(unk_0x16F2683693E537C9(), -530524, 1, 0, 0);
		unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), true);
		wait(1000);
		func_422(1, 1, 1);
	}
	else
	{
		func_39("JUMP_TO_STAGE: replay not being set up");
		if (iLocal_56 == 1)
		{
			while (!func_354(1, 1093140480, 0))
			{
				if (unk_0x75EECC9B0572F772())
				{
					if (func_440(iLocal_244))
					{
						func_39("Trying to set Mary Ann component variation");
						unk_0xA0A8D79ACBBD1CB8("Mary_Ann", iLocal_244, joaat("cs_maryann"));
					}
				}
				func_359("ef_1_rcm", 0);
				wait(0);
			}
		}
		else
		{
			wait(1000);
			func_422(1, 1, 1);
		}
	}
}

void func_422(int iParam0, int iParam1, int iParam2)
{
	func_271(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0xEF6276132B396452(0f, 1065353216);
		unk_0x2FB9A57162E54BAB(0f);
	}
	if (iParam1 == 1)
	{
		func_301(500, 0);
	}
}

void func_423(int iParam0, int iParam1, int iParam2)
{
	if (func_453() && func_428())
	{
		while (Global_98739 != 6)
		{
			wait(0);
		}
		unk_0x21387C9EECC2B220(0);
		if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0xFE76348A7A0CEF66(unk_0x16F2683693E537C9());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				if (unk_0xC844350D5D58C99A(iParam0))
				{
					if (unk_0xDF1306B443CD3D15(iParam0, 0))
					{
						if (!unk_0xC42A92762C58E1B9(unk_0x16F2683693E537C9(), iParam0, 0))
						{
							unk_0xF821F915BC24D246(unk_0x16F2683693E537C9(), iParam0, iParam1);
							unk_0xEF6276132B396452(0f, 1065353216);
							unk_0x2FB9A57162E54BAB(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
			}
		}
		unk_0x17EFA7496495F972();
		func_79(0);
	}
}

int func_424(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
		case 2:
			if (func_425(iParam0, 12))
			{
				return 1;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (iVar0 != 12)
				{
					if (!func_425(iParam0, iVar0))
					{
						return 0;
					}
				}
				iVar0++;
			}
			return 1;
			break;
		
		case 3:
			if (func_213(unk_0x16F2683693E537C9(), 12, 6))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_425(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != 14)
	{
		iVar0 = func_107(unk_0x16F2683693E537C9(), iParam1, -1);
	}
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 3:
					if ((((((iVar0 == 69 || (iVar0 >= 17 && iVar0 <= 32)) || iVar0 == 69) || (iVar0 >= 77 && iVar0 <= 84)) || (iVar0 >= 85 && iVar0 <= 90)) || (iVar0 >= 113 && iVar0 <= 128)) || (iVar0 >= 171 && iVar0 <= 173))
					{
						return 1;
					}
					break;
				
				case 4:
					if (((iVar0 == 40 || (iVar0 >= 41 && iVar0 <= 45)) || (iVar0 >= 89 && iVar0 <= 91)) || (iVar0 >= 96 && iVar0 <= 111))
					{
						return 1;
					}
					break;
				
				case 6:
					if (((iVar0 == 6 || iVar0 == 13) || iVar0 == 7) || (iVar0 >= 20 && iVar0 <= 29))
					{
						return 1;
					}
					break;
				
				case 8:
					if (((iVar0 == 0 || iVar0 == 10) || iVar0 == 11) || iVar0 == 16)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iVar0 == 0)
					{
						return 1;
					}
					break;
				
				case 12:
					if (iVar0 == 13 || iVar0 == 9)
					{
						return 1;
					}
					break;
				
				case 14:
					iVar0 = func_107(unk_0x16F2683693E537C9(), iParam1, 1);
					if ((((((iVar0 == 58 || (iVar0 >= 70 && iVar0 <= 79)) || iVar0 == 61) || (iVar0 >= 62 && iVar0 <= 69)) || (iVar0 >= 80 && iVar0 <= 89)) || (iVar0 >= 91 && iVar0 <= 102)) || (iVar0 >= 103 && iVar0 <= 110))
					{
						return 1;
					}
					if (!func_426(unk_0x16F2683693E537C9()))
					{
						return 1;
					}
					break;
				
				default:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					if ((((((((iVar0 >= 0 && iVar0 <= 15) || (iVar0 >= 18 && iVar0 <= 26)) || iVar0 == 53) || (iVar0 >= 54 && iVar0 <= 69)) || (iVar0 >= 79 && iVar0 <= 94)) || iVar0 == 95) || (iVar0 >= 120 && iVar0 <= 135)) || (iVar0 >= 162 && iVar0 <= 177))
					{
						return 1;
					}
					break;
				
				case 4:
					if (((iVar0 == 17 || iVar0 == 33) || (iVar0 >= 54 && iVar0 <= 61)) || iVar0 == 91)
					{
						return 1;
					}
					break;
				
				case 6:
					if ((iVar0 == 8 || iVar0 == 11) || iVar0 == 34)
					{
						return 1;
					}
					break;
				
				case 8:
					if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 10) || iVar0 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iVar0 == 0 || iVar0 == 7)
					{
						return 1;
					}
					break;
				
				case 12:
					if (iVar0 == 5 || iVar0 == 9)
					{
						return 1;
					}
					break;
				
				case 14:
					iVar0 = func_107(unk_0x16F2683693E537C9(), iParam1, 1);
					if (((((((iVar0 == 89 || (iVar0 >= 100 && iVar0 <= 109)) || iVar0 == 111) || (iVar0 >= 113 && iVar0 <= 122)) || (iVar0 >= 123 && iVar0 <= 132)) || (iVar0 >= 133 && iVar0 <= 142)) || (iVar0 >= 90 && iVar0 <= 99)) || (iVar0 >= 143 && iVar0 <= 152))
					{
						return 1;
					}
					if (!func_426(unk_0x16F2683693E537C9()))
					{
						return 1;
					}
					break;
				
				default:
					return 1;
					break;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_426(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (unk_0x98F1B512A2CC07C5(iParam0, iVar0) != -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_427()
{
	if (!func_440(iLocal_344))
	{
		iLocal_344 = unk_0x36F2404464202779(26, joaat("a_c_rottweiler"), vLocal_345, fLocal_346, 1, true);
		unk_0x46CB381A452EF99D(iLocal_344, 1);
	}
}

bool func_428()
{
	return unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 13);
}

void func_429()
{
	unk_0x71199B01895C6202(joaat("g_m_y_salvagoon_01"));
	unk_0x71199B01895C6202(iLocal_326);
	unk_0x71199B01895C6202(joaat("a_m_y_beach_01"));
	unk_0x71199B01895C6202(joaat("a_f_y_beach_01"));
	unk_0x71199B01895C6202(joaat("a_c_rottweiler"));
	unk_0x71199B01895C6202(joaat("s_m_y_baywatch_01"));
	unk_0x71199B01895C6202(joaat("ig_maryann"));
	unk_0x71199B01895C6202(iLocal_307);
	unk_0x71199B01895C6202(joaat("blazer2"));
	unk_0x71199B01895C6202(joaat("banshee"));
	unk_0x71199B01895C6202(joaat("regina"));
}

void func_430()
{
	unk_0x523BCC9DC80CD82F(joaat("g_m_y_salvagoon_01"));
	unk_0x523BCC9DC80CD82F(joaat("banshee"));
	unk_0x523BCC9DC80CD82F(joaat("regina"));
	while ((!unk_0xB87F6CF6E5628C67(joaat("g_m_y_salvagoon_01")) || !unk_0xB87F6CF6E5628C67(joaat("banshee"))) || !unk_0xB87F6CF6E5628C67(joaat("regina")))
	{
		wait(0);
	}
	unk_0x28F5E4DA506AC0CA(1829.384f, -516.19f, 27.85739f, 7f, 0, 0, 0, 0, false, 0);
	if (!func_7(Local_322.f_2))
	{
		Local_322.f_5 = { -1833.33f, -513.3883f, 28.21071f };
		Local_322.f_11 = 286.343f;
		Local_322.f_8 = { -1721.02f, -559.7f, 37.46f };
		Local_322.f_12 = 18f;
		Local_322.f_4 = joaat("banshee");
		Local_322.f_2 = unk_0x122AAB0B1D6F55AD(Local_322.f_4, Local_322.f_5, Local_322.f_11, 1, 1, 0);
		unk_0xC002508A277213DE(Local_322.f_2, 1, 1);
		Local_322 = unk_0x852A19533F896693(Local_322.f_2, 4, joaat("g_m_y_salvagoon_01"), -1, 1, true);
		Local_322.f_1 = unk_0x852A19533F896693(Local_322.f_2, 4, joaat("g_m_y_salvagoon_01"), 0, 1, true);
		unk_0xAFF39FB306F8E232(Local_322.f_1, 3, false);
		unk_0xAFF39FB306F8E232(Local_322.f_1, 20, true);
		unk_0xAFF39FB306F8E232(Local_322, 17, true);
	}
	if (!func_7(Local_324.f_2))
	{
		Local_324.f_5 = { -2000.79f, -494.35f, 11.09f };
		Local_324.f_11 = 321.61f;
		Local_324.f_8 = { -1719.08f, -559.41f, 36.33f };
		Local_324.f_12 = 12f;
		Local_324.f_4 = joaat("regina");
		Local_324.f_2 = unk_0x122AAB0B1D6F55AD(Local_324.f_4, Local_324.f_5, Local_324.f_11, 1, 1, 0);
		Local_324 = unk_0x852A19533F896693(Local_324.f_2, 4, joaat("g_m_y_salvagoon_01"), -1, 1, true);
		Local_324.f_1 = unk_0x852A19533F896693(Local_324.f_2, 4, joaat("g_m_y_salvagoon_01"), 0, 1, true);
		unk_0xAFF39FB306F8E232(Local_324, 17, true);
		unk_0xAFF39FB306F8E232(Local_324.f_1, 17, true);
	}
	unk_0x71199B01895C6202(joaat("g_m_y_salvagoon_01"));
	unk_0x71199B01895C6202(joaat("banshee"));
	unk_0x71199B01895C6202(joaat("regina"));
}

void func_431()
{
	unk_0x3F423BF5B8125A50("rcmfanatic1");
	unk_0x3F423BF5B8125A50("rcmfanatic1celebrate");
	unk_0x3F423BF5B8125A50("rcmfanatic1yell");
	unk_0x3F423BF5B8125A50("move_f@runner");
	unk_0x4942FBD1EF896E39("FEMALE_FAST_RUNNER");
	unk_0x29398344B9E5B8A7(sLocal_348);
	unk_0x29398344B9E5B8A7("Fanatic1RollingStart");
	unk_0xD7992BEF7A9D109E("FATIC1", 0);
	unk_0x523BCC9DC80CD82F(joaat("ig_maryann"));
	while ((((((((!unk_0xB4AE0788C1587752("rcmfanatic1") || !unk_0xB4AE0788C1587752("rcmfanatic1celebrate")) || !unk_0xB4AE0788C1587752("rcmfanatic1yell")) || !unk_0xB4AE0788C1587752("move_f@runner")) || !unk_0xDF3FDDA1EADEDD07("FEMALE_FAST_RUNNER")) || !unk_0x1C2E18E9C63BEB77(sLocal_348)) || !unk_0x1C2E18E9C63BEB77("Fanatic1RollingStart")) || !unk_0x67C1D9E5B91B2E37(0)) || !unk_0xB87F6CF6E5628C67(joaat("ig_maryann")))
	{
		func_39("Loading other assets");
		wait(0);
	}
}

void func_432()
{
	iLocal_279 = 0;
	iLocal_277 = 0;
	iLocal_276 = unk_0x1C0640BA9A7327B3();
	iLocal_281 = unk_0x1C0640BA9A7327B3();
	iLocal_283 = unk_0x1C0640BA9A7327B3();
	iLocal_282 = 0;
	Local_274.f_1 = 0;
	Local_270.f_1 = 0;
	Local_272.f_1 = 0;
	Local_284[0 /*5*/].f_2 = 0;
	Local_284[1 /*5*/].f_2 = 0;
	Local_284[2 /*5*/].f_2 = 0;
	vLocal_298.z = 0;
	vLocal_295.z = 0;
	vLocal_301.z = 0;
	Local_285.f_2 = 0;
	vLocal_286.z = 0;
	vLocal_289.z = 0;
	vLocal_292.z = 0;
	Local_74.f_1 = 0;
	Local_73.f_1 = 0;
	Local_75.f_1 = 0;
	iLocal_262 = 0;
	iLocal_264 = 0;
}

void func_433(bool bParam0, bool bParam1)
{
	unk_0xA37A90C62806D848(1);
	unk_0x8BCB70EB440DED83(true);
	unk_0xBFE31971E49FA500(true);
	unk_0x5413873D3F67BF93(false, 500);
	unk_0xB3A1B75CB59FEB56(false, bParam0, 3000, 1, 0, 0);
	if (unk_0x9F4FE516EAACCFC5(iLocal_312))
	{
		unk_0xE3BB8E05FCEB3FBE(iLocal_312, false);
		unk_0x9A8DDC7C522F5BF5(iLocal_312, 0);
	}
	if (bParam1)
	{
		unk_0x2FB9A57162E54BAB(0f);
		unk_0xEF6276132B396452(-5f, 1065353216);
	}
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
	{
		unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), true, 0);
	}
}

void func_434(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_435(0, 1, 1);
	}
	if (!unk_0x757EF87A33649210())
	{
		unk_0x53491B90E4FD0E56(0);
	}
	func_300(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_435(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0x39B7A3CCD2467CAB())
	{
		while (bVar0)
		{
			bVar0 = unk_0x39B7A3CCD2467CAB();
			if (unk_0x22A8E52414415B76())
			{
				unk_0x55BE34EDDEA0AC9E(0);
			}
			if (unk_0x62A1F4500E8F07E0())
			{
				unk_0x5C8D148FC238F38A();
			}
			if (unk_0x39B7A3CCD2467CAB() && !unk_0x22A8E52414415B76())
			{
				bVar0 = false;
			}
			wait(0);
		}
		if (bParam0)
		{
			func_271(iParam1, iParam2, 1, 1);
		}
	}
}

int func_436()
{
	if (!Global_98744 == 10 && !Global_98744 == 9)
	{
		return 0;
	}
	return Global_98744.f_2;
}

void func_437()
{
	unk_0x790015DC92C918E2();
	func_39("IN INIT");
	sLocal_348 = "Fanatic1MaryAnn";
	unk_0x10F452EDECF82313(-1877.022f, -439.5663f, 47.06139f, -1809.615f, -493.494f, 39.58508f, 12.75f, 1, 0, 0, 0, 0, 0);
	unk_0x10F452EDECF82313(-1816.865f, -492.4081f, 42.83916f, -1792.158f, -470.2095f, 38.51269f, 12.75f, 1, 0, 0, 0, 0, 0);
	unk_0x10F452EDECF82313(-1792.194f, -470.2319f, 42.51471f, -1726.926f, -552.8375f, 35.24149f, 12.75f, 1, 0, 0, 0, 0, 0);
	unk_0x10F452EDECF82313(-1728.024f, -561.8721f, 39.49737f, -1835.285f, -514.9333f, 26.33557f, 19.75f, 1, 0, 0, 0, 0, 0);
	unk_0x10F452EDECF82313(-1822.226f, -535.3092f, 31.95555f, -1890.278f, -616.2764f, 9.657555f, 39.75f, 1, 0, 0, 0, 0, 0);
	unk_0x10F452EDECF82313(-1867.243f, -622.763f, 13.38351f, -2013.267f, -497.9799f, 9.736394f, 23.75f, 1, 0, 0, 0, 0, 0);
	unk_0x51732B934211201A(iLocal_76);
	unk_0xF63400DBE3303D26("FRIENDLIES", &iLocal_76);
	unk_0x0E2400AB9174FA81(1, iLocal_76, 1862763509);
	unk_0x0E2400AB9174FA81(1, 1862763509, iLocal_76);
	func_348(&uLocal_78, 0, unk_0x16F2683693E537C9(), "MICHAEL", 0, 1);
	func_431();
	if (func_440(iLocal_244))
	{
		unk_0x6DF7BF67E86AAE86(iLocal_244, iLocal_76);
		unk_0x9FA191B317572861(iLocal_244, 25f);
		unk_0x79C43E2BAC7C696F(iLocal_244, "FEMALE_FAST_RUNNER", 1048576000);
	}
	func_438();
	func_430();
	func_4(0);
	iLocal_341 = unk_0x7D6CA5F52B3748BF(-1979.062f, -534.325f, 10.4558f, -1973.332f, -528.2116f, 13.7014f, 0, 1, 1, 1);
	iLocal_342 = unk_0x7D6CA5F52B3748BF(-1914.78f, -591.1177f, 9.8302f, -1910.329f, -586.7218f, 12.0195f, 0, 1, 1, 1);
	iLocal_343 = unk_0x7D6CA5F52B3748BF(-1991.067f, -523.592f, 10.4269f, -1989.145f, -521.6824f, 11.3735f, 0, 1, 1, 1);
	Local_314 = 1;
	Local_314.f_1 = "rcmfanatic1out_of_breath";
	Local_314.f_2 = "p_zero_tired_enter";
	Local_314.f_17 = 2f;
	Local_314.f_18 = -8f;
	Local_314.f_20 = 48;
	Local_314.f_16 = unk_0x12AB0310C2281427("UpperbodyFeathered_NoLefttArm_filter");
	Local_316 = 1;
	Local_316.f_1 = "rcmfanatic1out_of_breath";
	Local_316.f_2 = "p_zero_tired_01";
	Local_316.f_17 = 8f;
	Local_316.f_18 = -8f;
	Local_316.f_20 = 48;
	Local_316.f_16 = unk_0x12AB0310C2281427("UpperbodyFeathered_NoLefttArm_filter");
	Local_318 = 1;
	Local_318.f_1 = "rcmfanatic1out_of_breath";
	Local_318.f_2 = "p_zero_tired_02";
	Local_318.f_17 = 8f;
	Local_318.f_18 = -8f;
	Local_318.f_20 = 48;
	Local_318.f_16 = unk_0x12AB0310C2281427("UpperbodyFeathered_NoLefttArm_filter");
	Local_320 = 1;
	Local_320.f_1 = "rcmfanatic1out_of_breath";
	Local_320.f_2 = "p_zero_tired_01";
	Local_320.f_17 = 8f;
	Local_320.f_18 = -1000f;
	Local_320.f_20 = 49;
	Local_320.f_16 = unk_0x12AB0310C2281427("UpperbodyFeathered_NoLefttArm_filter");
	vLocal_354 = { -1730.284f, -551.7269f, 36.3939f };
	vLocal_355 = { -1870.67f, -616.2423f, 10.8184f };
	unk_0x51FE1B68F2818389(sLocal_348, &iLocal_350);
	vLocal_363[0 /*3*/] = { -1868.36f, -447.84f, 45.2f };
	vLocal_363[1 /*3*/] = { -1835.81f, -468.73f, 43.45f };
	vLocal_363[2 /*3*/] = { -1753.45f, -523.3f, 37.35f };
	vLocal_363[3 /*3*/] = { vLocal_354 };
	vLocal_363[4 /*3*/] = { -1755.65f, -558.99f, 36.11f };
	vLocal_363[5 /*3*/] = { -1828.99f, -516.33f, 27.87f };
	vLocal_363[6 /*3*/] = { -1819.2f, -555.86f, 15.77f };
	vLocal_363[7 /*3*/] = { vLocal_355 };
	vLocal_363[8 /*3*/] = { -1918.04f, -583.45f, 10.76f };
	vLocal_363[9 /*3*/] = { vLocal_356 };
	iLocal_362 = vLocal_363.x;
	sLocal_263[0] = "FAN1_FALLB_1";
	sLocal_263[1] = "FAN1_FALLB_2";
	sLocal_266[0] = "FAN1_FAST_1";
	sLocal_266[1] = "FAN1_FAST_2";
	sLocal_266[2] = "FAN1_FAST_3";
	Local_270 = "FAN1_RUNIN";
	Local_272 = "FAN1_RUNIN2";
	Local_274 = "FAN1_OVERT";
	Local_284[0 /*5*/].f_1 = "FAN1_PUSH_1";
	Local_284[1 /*5*/].f_1 = "FAN1_PUSH_2";
	Local_284[2 /*5*/].f_1 = "FAN1_PUSH_3";
	vLocal_298.y = "FAN1_CHEAT_1";
	vLocal_298.x = "FAN1_CHEAT";
	vLocal_295.y = "FAN1_CHEAT_2";
	vLocal_295.x = "FAN1_CHEAT";
	vLocal_301.y = "FAN1_CATCHC_1";
	vLocal_301.x = "FAN1_CATCHC";
	if (func_440(unk_0x16F2683693E537C9()))
	{
		if (func_424(1))
		{
			Local_285 = "FAN1_STRTB";
			vLocal_292.x = "FAN1_BCHB";
		}
		else
		{
			Local_285 = "FAN1_STRTA";
			vLocal_292.x = "FAN1_BCHA";
		}
	}
	vLocal_286.x = "FAN1_RD1";
	vLocal_289.x = "FAN1_RD2";
	Local_74 = "FATIC1_7";
	Local_73 = "FATIC1_6";
	Local_75 = "FATIC1_H";
	func_39("end of init");
}

void func_438()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	if (unk_0x1C2E18E9C63BEB77(sLocal_348))
	{
		iVar0 = 0;
		unk_0x51FE1B68F2818389(sLocal_348, &iVar0);
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 <= iVar0)
		{
			vVar2 = { 0f, 0f, 0f };
			unk_0xEF8F639897C675D5(sLocal_348, iVar1, &vVar2);
			unk_0x28F5E4DA506AC0CA(vVar2, 4f, 0, 0, 0, 0, false, 0);
			func_347("Clearing area around waypoint", iVar1);
			iVar1++;
		}
	}
}

void func_439(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_453())
	{
		unk_0x256D93AFAE851A7A(0);
		unk_0x0674E58A79778E99(&(Global_98744.f_20), 2);
		unk_0x21387C9EECC2B220(1);
		if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x98E4DC66A651C9FA(unk_0xD803B885F5E47A62(), false, 0);
		}
		Global_98740 = { vParam0 };
		Global_98743 = fParam1;
		Global_98739 = 1;
		if (iParam2 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 14);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_98744.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 24);
		}
		else
		{
			unk_0x0674E58A79778E99(&(Global_98744.f_20), 24);
		}
		func_79(1);
	}
}

int func_440(int iParam0)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if (!unk_0x437347B10A200C4B(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_441(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_440(uParam0->f_28[iVar0]))
		{
			unk_0xAA6B3A4292417750(uParam0->f_28[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_440(uParam0->f_35[iVar0]))
		{
			unk_0xAA6B3A4292417750(uParam0->f_35[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_440(uParam0->f_41[iVar0]))
		{
			unk_0xAA6B3A4292417750(uParam0->f_41[iVar0], bParam1, bParam1, bParam1, bParam1, bParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0))
	{
		unk_0xAA6B3A4292417750(unk_0x16F2683693E537C9(), bParam1, bParam1, bParam1, bParam1, bParam1, 0, 0, 0);
		unk_0xE121AE1BBF90E186(unk_0x16F2683693E537C9(), bParam1);
		if (bParam2)
		{
			unk_0x5745EA6329A91E29(unk_0x16F2683693E537C9(), joaat("weapon_unarmed"), true);
		}
	}
}

int func_442(int iParam0)
{
	if (!func_3(iParam0))
	{
		return 0;
	}
	return Global_111638.f_2358.f_539.f_2332[iParam0];
}

void func_443(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x5D96D8530B3D0904(&Global_31015, iParam0);
	}
	else
	{
		unk_0x0674E58A79778E99(&Global_31015, iParam0);
	}
}

int func_444(var uParam0)
{
	int iVar0[1];
	int iVar1;
	bool bVar2;
	
	iVar0[0] = uLocal_53;
	switch (iLocal_52)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			StringCopy(&(uParam0->f_9), "EF_1_RCM", 24);
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x523BCC9DC80CD82F(iVar0[iVar1]);
				iVar1++;
			}
			func_451(&(uParam0->f_48), "rcmfanatic1", "ef_1_rcm_mary_ann_streching_base", 0);
			uParam0->f_48.f_5 = { -1878.223f, -440.5181f, 46.03983f };
			uParam0->f_48.f_8 = { 0f, 0f, 159.97f };
			iLocal_52 = 1;
			break;
		
		case 1:
			if (!func_450(&iVar0) || !func_448(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_52 = 2;
			break;
		
		case 2:
			bVar2 = true;
			if (!unk_0xC844350D5D58C99A(uParam0->f_28[0]))
			{
				if (func_445(&(uParam0->f_28[0]), 61, -1878.27f, -440.55f, 46.23f, 165.94f, "FANATIC LAUNCHER RC", 1))
				{
					unk_0xE8832A9E16A57A1F(uParam0->f_28[0], 1, 1);
					unk_0x1E9649458B15960F(uParam0->f_28[0], true);
				}
				else
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				iLocal_52 = 3;
			}
			break;
		
		case 3:
			iVar1 = 0;
			while (iVar1 <= (iVar0 - 1))
			{
				unk_0x71199B01895C6202(iVar0[iVar1]);
				iVar1++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_445(int iParam0, int iParam1, vector3 vParam2, float fParam3, char* sParam4, int iParam5)
{
	if (func_446(iParam0, iParam1, vParam2, fParam3, 1))
	{
		if (unk_0xC844350D5D58C99A(*iParam0))
		{
			if (!unk_0x437347B10A200C4B(*iParam0, 0))
			{
				unk_0x11AD11297DC58CC7(*iParam0, 1);
				unk_0x6D80F1AEBA734886(*iParam0, 0);
				if (iParam5 == 1)
				{
					unk_0x25C5402CC10F76CD(*iParam0, false);
				}
			}
			unk_0x5F2AA9E2843E9403(*iParam0, sParam4);
		}
		return 1;
	}
	return 0;
}

int func_446(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_3(iParam1))
	{
		iVar0 = func_488(iParam1);
		unk_0x523BCC9DC80CD82F(iVar0);
		if (unk_0xB87F6CF6E5628C67(iVar0))
		{
			if (unk_0xC844350D5D58C99A(*iParam0))
			{
				unk_0xEBA53F35D0085654(iParam0);
			}
			*iParam0 = unk_0x36F2404464202779(26, iVar0, vParam2, fParam3, 0, false);
			unk_0x78ED16BE998AECC7(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x36C584991B4C183F(*iParam0, 3) == 0)
				{
					unk_0x64F9F278AB9DCA2C(*iParam0, 5, 2, 0, 0);
				}
			}
			func_447(*iParam0, iParam1);
			if (bParam4)
			{
				unk_0x71199B01895C6202(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_447(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_94578[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_448(var uParam0)
{
	if (func_449(uParam0))
	{
		unk_0x3F423BF5B8125A50(*uParam0);
		if (unk_0xB4AE0788C1587752(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_449(var uParam0)
{
	if (unk_0xEA6BC48857E0AC4C(*uParam0) || unk_0xEA6BC48857E0AC4C(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

int func_450(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!unk_0xB87F6CF6E5628C67((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_451(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = iParam3;
	unk_0x3F423BF5B8125A50(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

bool func_452(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

int func_453()
{
	if (Global_98744 == 10 || Global_98744 == 9)
	{
		return 1;
	}
	return 0;
}

void func_454()
{
	int iVar0;
	
	func_353();
	if (func_465())
	{
		func_39("...Random Character Script was triggered so additional cleanup required");
	}
	if (func_440(iLocal_244))
	{
		unk_0x545E1397F38D9D5A(iLocal_244, 0);
	}
	unk_0x51732B934211201A(iLocal_76);
	if (unk_0x562F77A7F33D2E46("FANATIC_MIX_SCENE"))
	{
		if (unk_0xC844350D5D58C99A(iLocal_244))
		{
			unk_0x06FF977AA95DCCE3(iLocal_244, 0);
		}
		unk_0x8910D3D58E0132B8("FANATIC_MIX_SCENE");
	}
	unk_0xC92DB9682A650680("RC6A_FAIL");
	func_338(&iLocal_304);
	func_294(&iLocal_244, 1, 0, 1);
	func_12(&iLocal_357);
	func_12(&iLocal_245);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_294(&(Local_325[iVar0 /*12*/]), 1, 0, 1);
		iVar0++;
	}
	func_294(&Local_322, 1, 0, 1);
	if (func_440(Local_322.f_1))
	{
		unk_0xAFF39FB306F8E232(Local_322.f_1, 3, true);
		func_294(&(Local_322.f_1), 1, 0, 1);
	}
	func_338(&(Local_322.f_2));
	func_294(&iLocal_344, 1, 0, 1);
	unk_0x2F3540C2227116A3(sLocal_348);
	unk_0x2F3540C2227116A3("Fanatic1RollingStart");
	unk_0x8D17794CE3273D70("rcmfanatic1out_of_breath");
	unk_0x8D17794CE3273D70("move_f@runner");
	unk_0x8D17794CE3273D70("rcmfanatic1");
	unk_0xDD465543E2028AEA("FEMALE_FAST_RUNNER");
	unk_0x71199B01895C6202(iLocal_326);
	unk_0x71199B01895C6202(joaat("a_m_y_beach_01"));
	unk_0x71199B01895C6202(joaat("a_f_y_beach_01"));
	unk_0x71199B01895C6202(joaat("banshee"));
	unk_0x71199B01895C6202(iLocal_307);
	unk_0x71199B01895C6202(joaat("a_c_rottweiler"));
	unk_0x71199B01895C6202(joaat("blazer2"));
	unk_0x71199B01895C6202(joaat("s_m_y_baywatch_01"));
	unk_0x71199B01895C6202(joaat("g_m_y_salvagoon_01"));
	unk_0x71199B01895C6202(joaat("a_m_m_trampbeac_01"));
	unk_0x71199B01895C6202(joaat("ig_maryann"));
	func_464();
	func_4(1);
	unk_0xE342F209E49C5314(-1842.3f, -517.7f, 26.68f, -1823.52f, -515.43f, 29.27f, true, 1);
	unk_0x9FE27D475353EFE9(-1864.08f, -632.07f, 10.09f, -1863.31f, -631.53f, 10.15f, 0);
	unk_0x9FE27D475353EFE9(-1820.57f, -552.41f, 17.4f, -1865.76f, -617.48f, 10.58f, 0);
	unk_0xEFED0CD6E25037B9();
	unk_0x2952D66A502EA873(iLocal_341, 0);
	unk_0x2952D66A502EA873(iLocal_342, 0);
	unk_0x2952D66A502EA873(iLocal_343, 0);
	unk_0xB547E3FFEB27073E();
	unk_0x55D0A2DB35045A35(iLocal_371);
	unk_0x11CCD0ACA866C6C5(0, true);
	func_443(2, 0);
	func_455(&Local_54, 0, 0, 0);
	unk_0x10FAF14A60A0DBE1();
}

void func_455(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_462(uParam0, iParam1);
	func_460(uParam0, bParam2);
	func_456(uParam0, bParam3);
}

void func_456(var uParam0, bool bParam1)
{
	func_457(&(uParam0->f_41), bParam1);
}

void func_457(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_459(uParam0[iVar0]);
		}
		else
		{
			func_458(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_458(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xEEEE2E5FA6F78DF0(iParam0);
		}
		else
		{
			unk_0xAA2AE6161CB0D2DC(*iParam0);
		}
	}
}

void func_459(int iParam0)
{
	if (unk_0xC844350D5D58C99A(*iParam0))
	{
		if (unk_0xBDEB2DEEF1D23A18(*iParam0))
		{
			unk_0x15AFB6CBDE990FB6(*iParam0, 1, 1);
		}
		unk_0xF690C84DADBB3551(iParam0);
	}
}

void func_460(var uParam0, bool bParam1)
{
	func_461(&(uParam0->f_35), bParam1);
}

void func_461(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_6(uParam0[iVar0]);
		}
		else
		{
			func_338(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_462(var uParam0, int iParam1)
{
	func_463(&(uParam0->f_28), iParam1);
}

void func_463(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_8(uParam0[iVar0]);
		}
		else
		{
			func_294(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_464()
{
	func_294(&iLocal_328, 1, 0, 1);
	func_294(&iLocal_329, 1, 0, 1);
	func_294(&iLocal_330, 1, 0, 1);
	func_294(&iLocal_331, 1, 0, 1);
	unk_0x8D17794CE3273D70("mini@cpr@char_a@cpr_def");
	unk_0x8D17794CE3273D70("mini@cpr@char_b@cpr_def");
	unk_0x8D17794CE3273D70("mini@cpr@char_a@cpr_str");
	unk_0x8D17794CE3273D70("mini@cpr@char_b@cpr_str");
	unk_0x8D17794CE3273D70("rcmfanatic1");
	unk_0x17E8C6920A1E386F(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, 1, 0);
	unk_0x51EA29724CE5BF82(-1875.16f, -630.82f, 10f, -1867.9f, -625.78f, 10.25f, 0);
}

int func_465()
{
	int iVar0;
	
	iVar0 = func_261();
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_110725[iVar0 /*10*/].f_4)
	{
		return 0;
	}
	Global_110725[iVar0 /*10*/].f_4 = 0;
	unk_0x11CCD0ACA866C6C5(0, true);
	unk_0x11CCD0ACA866C6C5(3, true);
	unk_0x11CCD0ACA866C6C5(2, true);
	if (!func_452(0))
	{
		if (Global_110725[iVar0 /*10*/].f_5 && Global_110725[iVar0 /*10*/].f_6)
		{
			Global_110725[iVar0 /*10*/].f_6 = 0;
		}
		if (!Global_110725[iVar0 /*10*/].f_6 && !Global_110725[iVar0 /*10*/].f_5)
		{
			Global_110725[iVar0 /*10*/].f_6 = 1;
		}
	}
	return 1;
}

void func_466(bool bParam0)
{
	int iVar0;
	
	func_484();
	if (!func_483())
	{
		iVar0 = func_261();
		if (iVar0 == -1)
		{
			return;
		}
		if (!Global_110725[iVar0 /*10*/].f_4)
		{
			return;
		}
		if (Global_110725[iVar0 /*10*/].f_5)
		{
			return;
		}
		if (Global_110725[iVar0 /*10*/].f_6)
		{
			return;
		}
		if (Global_92919 == Global_98781)
		{
			Global_111638.f_18569[iVar0 /*6*/].f_4++;
		}
		Global_92919 = Global_98781;
		if (bParam0)
		{
			func_220(iVar0, 1, 0);
			func_467(unk_0xBB0808A181D4745C(), iVar0);
		}
		else
		{
			if (Global_110725[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				func_231(&(Global_110725[iVar0 /*10*/].f_9));
			}
			func_219(iVar0, 1, 1, 0);
		}
		Global_110725[iVar0 /*10*/].f_6 = 1;
	}
}

void func_467(char* sParam0, int iParam1)
{
	if (Global_98744 != 12)
	{
		if (func_468(sParam0, 6, iParam1))
		{
			Global_98744.f_1 = iParam1;
		}
	}
}

int func_468(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<32> Var1;
	int iVar2;
	
	func_83();
	func_482();
	Global_98744 = 0;
	StringCopy(&(Global_98744.f_3), sParam0, 32);
	Global_98744.f_11 = iParam1;
	unk_0x65C5EBCA17A891FC(1);
	unk_0xD99B71B9E48EB0E6(0);
	unk_0x2C84016B4A95F6BA(0);
	func_287(1);
	func_480(1);
	func_477(0);
	func_476(1);
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 9);
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 6);
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 20);
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 21);
	unk_0x0674E58A79778E99(&(Global_98744.f_20), 5);
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
		{
			if (unk_0x405E212DDE472467(unk_0x16F2683693E537C9(), 0))
			{
				iVar0 = unk_0x6937EA2286828455(unk_0x16F2683693E537C9(), 0);
				if (unk_0x377BE9A1BF38C7CE(iVar0))
				{
					unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 5);
				}
			}
		}
	}
	unk_0xA37A90C62806D848(1);
	unk_0x790015DC92C918E2();
	func_475(0);
	func_86(1);
	Global_98744.f_2 = Global_98781;
	if (func_474())
	{
		if (func_473())
		{
			if (Global_98781 >= func_470())
			{
				if (!unk_0xEAE0D21A50E6C7F4(Global_89532[iParam2 /*34*/].f_15, 16))
				{
					if (Global_111638.f_9080.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_92920 = 1;
					}
				}
			}
		}
		else if (Global_98744.f_11 == 6)
		{
			func_222(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_111638.f_18569[iParam2 /*6*/].f_4 >= 2)
				{
					Global_92920 = 1;
				}
			}
		}
		else
		{
			iVar2 = func_469(unk_0xBB0808A181D4745C());
			if (iVar2 > -1)
			{
				if (Global_111638.f_24981.f_4[iVar2] >= 2)
				{
					Global_92920 = 1;
				}
			}
		}
	}
	return 1;
}

int func_469(char* sParam0)
{
	if (unk_0x7F8A39872A07D2CE("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x7F8A39872A07D2CE("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

int func_470()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_471(&(Global_98744.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_471(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x12AB0310C2281427(sParam0);
	iVar1 = func_472(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_472(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_89532[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

int func_473()
{
	if ((((Global_98744.f_11 == 0 || Global_98744.f_11 == 1) || Global_98744.f_11 == 2) || Global_98744.f_11 == 3) || Global_98744.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_474()
{
	if ((((Global_98744.f_11 == 0 || Global_98744.f_11 == 1) || Global_98744.f_11 == 2) || Global_98744.f_11 == 6) || Global_98744.f_11 == 3)
	{
		return 1;
	}
	if (Global_98744.f_11 == 5)
	{
		if (func_469(&(Global_98744.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_475(bool bParam0)
{
	unk_0x8BCB70EB440DED83(bParam0);
	unk_0xBFE31971E49FA500(bParam0);
}

void func_476(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x56FCE5C6DA4AA600();
		unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 3);
	}
	else if (unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 3))
	{
		unk_0x17D339215F817B98();
		unk_0x0674E58A79778E99(&(Global_98744.f_20), 3);
	}
}

void func_477(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_98744.f_20, 4))
		{
			func_479();
			unk_0x0674E58A79778E99(&(Global_98744.f_20), 4);
		}
	}
	else
	{
		func_478();
		unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 4);
	}
}

void func_478()
{
	Global_22211.f_5 = 1;
}

void func_479()
{
	Global_22211.f_5 = 0;
}

void func_480(bool bParam0)
{
	if (bParam0)
	{
		func_481();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_290(0))
		{
			func_287(0);
		}
	}
	else if (Global_19486.f_1 == 1)
	{
		if (!Global_19486.f_1 == 0)
		{
			Global_19486.f_1 = 3;
		}
	}
}

void func_481()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

void func_482()
{
	Global_92920 = 0;
	Global_92921 = 0;
}

int func_483()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

void func_484()
{
	Global_98779 = 1;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_29())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_76854, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_76854, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
	}
	else if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_29())
			{
				case 0:
					StringCopy(&Global_76854, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_76854, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_76854, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_76858, "", 16);
		}
		Global_98779 = 0;
		unk_0x5D96D8530B3D0904(&(Global_98744.f_20), 25);
	}
}

void func_485(char* sParam0)
{
	if (!unk_0xEA6BC48857E0AC4C(sParam0))
	{
	}
}

void func_486(var uParam0)
{
	func_487(&(uParam0->f_28));
	func_487(&(uParam0->f_35));
	func_487(&(uParam0->f_41));
}

void func_487(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0xC844350D5D58C99A((*uParam0)[iVar0]))
		{
			unk_0x73270B3C9CC833FD((*uParam0)[iVar0], false, 1);
		}
		iVar0++;
	}
}

int func_488(int iParam0)
{
	if (!func_3(iParam0))
	{
		return func_33(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

