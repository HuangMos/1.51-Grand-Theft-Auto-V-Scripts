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
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 17;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 17;
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
	float fLocal_113 = 0f;
	var uLocal_114 = 12;
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
	var uLocal_127 = 12;
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
	var uLocal_140 = 12;
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
	var uLocal_153 = 9;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 9;
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
	var uLocal_191 = -1;
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
	int iLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	vector3 vLocal_236 = { 0f, 0f, 0f };
	vector3 vLocal_237 = { 0f, 0f, 0f };
	vector3 vLocal_238 = { 0f, 0f, 0f };
	vector3 vLocal_239 = { 0f, 0f, 0f };
	vector3 vLocal_240 = { 0f, 0f, 0f };
	vector3 vLocal_241 = { 0f, 0f, 0f };
	vector3 vLocal_242 = { 0f, 0f, 0f };
	vector3 vLocal_243 = { 0f, 0f, 0f };
	vector3 vLocal_244 = { 0f, 0f, 0f };
	vector3 vLocal_245 = { 0f, 0f, 0f };
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_250 = 0;
	var uLocal_251 = 3;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 4;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 2;
	var uLocal_365 = 0;
	var uLocal_366 = 4;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 4;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 12;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 3;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
#endregion

void __EntryFunction__()
{
	struct<282> Var0;
	struct<29> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	
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
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_45 = { 500f, 500f, 500f };
	fLocal_113 = ((0.05f + 0.275f) - 0.01f);
	iLocal_233 = -1;
	vLocal_236 = { 0.034f, 0.002f, -0.007f };
	vLocal_237 = { 70.56f, 72.36f, 67.68f };
	vLocal_238 = { 2f, -0.04f, 0.6f };
	vLocal_239 = { 3.2f, -0.04f, 0.6f };
	vLocal_240 = { 3.2f, -0.04f, -0.6f };
	vLocal_241 = { 2f, -0.04f, -0.6f };
	vLocal_242 = { -3.2f, -0.04f, 0.6f };
	vLocal_243 = { -2f, -0.04f, 0.6f };
	vLocal_244 = { -2f, -0.04f, -0.6f };
	vLocal_245 = { -3.2f, -0.04f, -0.6f };
	if (unk_0x2EBF608FFE6CA406(2))
	{
		func_332();
		unk_0x10FAF14A60A0DBE1();
	}
	unk_0x752C7D5696C0D8A0(0);
	Var0 = 2;
	Var0.f_1.f_4.f_6 = 4;
	Var0.f_1.f_35 = 4;
	Var0.f_1.f_59 = 2;
	Var0.f_1.f_62 = 1056964608;
	Var0.f_1.f_66 = 1065353216;
	Var0.f_1.f_67 = 1065353216;
	Var0.f_1.f_94.f_4.f_6 = 4;
	Var0.f_1.f_94.f_35 = 4;
	Var0.f_1.f_94.f_59 = 2;
	Var0.f_1.f_94.f_62 = 1056964608;
	Var0.f_1.f_94.f_66 = 1065353216;
	Var0.f_1.f_94.f_67 = 1065353216;
	Var0.f_189.f_3 = 4;
	Var0.f_189.f_16 = 4;
	Var0.f_189.f_32 = 2;
	Var0.f_189.f_39 = 3;
	Var0.f_282 = 10;
	Var0.f_303 = 77;
	Var0.f_535 = 77;
	Var0.f_535.f_1 = -1082130432;
	Var0.f_535.f_1.f_1 = -1082130432;
	Var0.f_535.f_1.f_2 = -1082130432;
	Var0.f_535.f_1.f_3 = -1;
	Var0.f_535.f_1.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_1 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_2 = -1082130432;
	Var0.f_535.f_1.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_12.f_3 = -1;
	Var0.f_1460 = 10;
	Var0.f_1460.f_1 = 10;
	Var0.f_1460.f_1.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1460.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var0.f_1571 = 11;
	Var0.f_1583 = 24;
	Var1.f_3 = 1;
	Var1.f_7 = 2;
	Var1.f_7.f_1.f_1 = 5;
	Var1.f_7.f_1.f_8.f_1 = 5;
	Var1.f_28 = 1;
	iVar2 = 0;
	fVar3 = 0f;
	iVar4 = func_331(25);
	iVar5 = func_331(17);
	func_330(&Var0, iVar4, iVar5);
	iVar6 = 0;
	iVar7 = (1 - iVar6);
	func_316(&Var0, &Var1, 1, iVar6, iVar7);
	while (true)
	{
		func_315(&Var0);
		func_314(&fVar3, &(Var0.f_189), &(Var0[iVar6 /*94*/]));
		if (Global_95672)
		{
			func_310(&Var0);
		}
		if (func_309(&Var1) > 4 && func_307(&Var0, iVar6, &iVar2))
		{
			func_304(2, 140);
			func_310(&Var0);
		}
		func_3(&Var0, &Var1, &iVar2, iVar6, iVar7, &uVar8, 0);
		func_2(&(Var0.f_281));
		if (unk_0x8A22C4C08282BF26(joaat("tennis")) > 0)
		{
			func_304(2, 140);
			func_310(&Var0);
		}
		if (!func_1(2) == 49)
		{
			func_310(&Var0);
		}
		wait(0);
	}
}

int func_1(int iParam0)
{
	return Global_93750[iParam0];
}

void func_2(var uParam0)
{
	*uParam0++;
}

void func_3(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	float fVar5;
	vector3 vVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	vector3 vVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	var uVar17;
	char* sVar18;
	float fVar19;
	vector3 vVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	vVar1 = { 0f, 0f, 0f };
	bVar7 = (uParam0->f_1657 == 1 && func_309(uParam1) == 20);
	func_291(uParam0, func_309(uParam1), *iParam2, iParam3, iParam4, bVar7);
	if (uParam0->f_1657 == 1 && !bParam6)
	{
		func_290(uParam0);
	}
	if (func_289(&(uParam0->f_247), 16))
	{
		func_288(&(uParam0->f_247), 16);
	}
	iVar8 = func_287(&(uParam0->f_247));
	if (func_285(uParam0, iVar8, *iParam2, func_309(uParam1)))
	{
		bVar9 = (func_309(uParam1) != 8 && func_309(uParam1) < 16);
		vVar6 = { func_284(&(uParam0->f_247)) };
		iVar10 = func_280(&(uParam0->f_189), &vVar6, &(uParam0->f_247.f_10), &(uParam0->f_1658), &(uParam0->f_247.f_4), &(uParam0->f_247.f_22), &(uParam0->f_247.f_5), &iVar8, bVar9, -1f, func_289(&(uParam0->f_247), 32), 0, 0);
		if (iVar10 == 1)
		{
			func_279(&(uParam0->f_247), 16);
		}
		else if (iVar10 == 3 || iVar10 == 2)
		{
			func_278(uParam0[0 /*94*/], 32768);
			func_278(uParam0[1 /*94*/], 32768);
		}
		func_277(&(uParam0->f_247), vVar6);
		unk_0xA47B46945FF6DE74(uParam0->f_247, func_284(&(uParam0->f_247)), 1, false, 0, 0);
		unk_0x37806EBF326ECEE9(uParam0->f_247, uParam0->f_247.f_10);
		vVar6 = { func_284(&(uParam0->f_247)) };
	}
	else if (func_309(uParam1) > 5)
	{
		if (func_276(&(uParam0->f_247)))
		{
			func_275(&(uParam0->f_247));
		}
	}
	func_274(uParam0, uParam1, &iVar11, &iVar12);
	switch (func_309(uParam1))
	{
		case 0:
			if (unk_0x757EF87A33649210() && !unk_0xD0BB2359EC70FC37())
			{
				unk_0x790015DC92C918E2();
				unk_0xA47B46945FF6DE74((uParam0[iParam3 /*94*/])->f_32, func_271(&(uParam0->f_189), func_273(uParam1), uParam0->f_1661, uParam0->f_1658, iParam3 == func_272(uParam1), iParam3), 1, true, 0, 1);
				unk_0xD8F6A53F4799FAFE(unk_0x9539D44F3E4492F6(unk_0xA30EC016B12C03E4()), unk_0xE7D606C557C86100((uParam0[iParam3 /*94*/])->f_40, (uParam0[iParam3 /*94*/])->f_40.f_1));
				unk_0x9E632F16E887F781(uParam0->f_189.f_29, 50f, 0);
				func_270(uParam1, 1);
			}
			break;
		
		case 1:
			if (unk_0xEB880D98B5988D0C())
			{
				unk_0x82E51BCA72537B6C(250);
				if (uParam0->f_1657 != 1)
				{
					unk_0xB3A1B75CB59FEB56(true, false, 3000, 1, 0, 0);
				}
				func_270(uParam1, 4);
			}
			break;
		
		case 4:
			if (func_269(uParam0))
			{
				if (uParam0->f_1657 == 1)
				{
					func_268(uParam0, 1);
					vVar13 = { func_271(&(uParam0->f_189), 1, uParam0->f_1661, uParam0->f_1658, 1, (uParam0[iParam3 /*94*/])->f_1) };
					func_267(uParam0[iParam3 /*94*/], unk_0x36F2404464202779(1, uParam0->f_1669, vVar13, unk_0xE7D606C557C86100(uParam0->f_1658, uParam0->f_1658.f_1), 0, false));
					unk_0x93D47DFD0AE94949((uParam0[iParam3 /*94*/])->f_32, -1);
					unk_0xD8F6A53F4799FAFE(func_266(uParam0[iParam3 /*94*/]), (unk_0xE7D606C557C86100(uParam0->f_1658, uParam0->f_1658.f_1) + 180f));
					vVar1 = { func_271(&(uParam0->f_189), func_273(uParam1), uParam0->f_1661, uParam0->f_1658, iParam4 == func_272(uParam1), iParam4) };
					func_267(uParam0[iParam4 /*94*/], unk_0x36F2404464202779(1, uParam0->f_1668, vVar1, unk_0xE7D606C557C86100(-uParam0->f_1658, -uParam0->f_1658.f_1), 0, false));
					unk_0x93D47DFD0AE94949((uParam0[iParam4 /*94*/])->f_32, -1);
					unk_0xD8F6A53F4799FAFE(func_266(uParam0[iParam4 /*94*/]), unk_0xE7D606C557C86100(-uParam0->f_1658, -uParam0->f_1658.f_1));
					vVar1 = { 0f, 0f, 0f };
					func_270(uParam1, 8);
					func_265(uParam1, 0);
					func_264(uParam1, iParam3);
					(uParam0[iParam3 /*94*/])->f_33 = unk_0x7707E48765093646(joaat("prop_tennis_rack_01b"), uParam0->f_189.f_3[3 /*3*/], false, false, false);
					unk_0x4A4806F9D471E491((uParam0[iParam3 /*94*/])->f_33, false, 0);
					(uParam0[iParam4 /*94*/])->f_33 = unk_0x7707E48765093646(joaat("prop_tennis_rack_01b"), uParam0->f_189.f_3[2 /*3*/], false, false, false);
					func_263(uParam0, iParam3, iParam4, 0, 0);
					unk_0x4A4806F9D471E491((uParam0[iParam4 /*94*/])->f_33, false, 0);
					unk_0x4A4806F9D471E491((uParam0[iParam3 /*94*/])->f_33, true, 0);
					unk_0x69C149C0E43FAF13((uParam0[iParam3 /*94*/])->f_33, true);
					unk_0x4A4806F9D471E491((uParam0[iParam4 /*94*/])->f_33, true, 0);
					unk_0x69C149C0E43FAF13((uParam0[iParam4 /*94*/])->f_33, true);
					func_262(func_266(uParam0[iParam3 /*94*/]), 1);
					func_262(func_266(uParam0[iParam4 /*94*/]), 1);
					if (uParam0->f_189 == 0)
					{
						func_260(uParam0);
						unk_0x64F9F278AB9DCA2C(func_266(uParam0[iParam4 /*94*/]), 0, 0, 0, 0);
						unk_0x64F9F278AB9DCA2C(func_266(uParam0[iParam4 /*94*/]), 2, 0, 0, 0);
						unk_0x64F9F278AB9DCA2C(func_266(uParam0[iParam4 /*94*/]), 3, 0, 0, 0);
						unk_0x64F9F278AB9DCA2C(func_266(uParam0[iParam4 /*94*/]), 4, 0, 0, 0);
						unk_0x64F9F278AB9DCA2C(func_266(uParam0[iParam4 /*94*/]), 5, 0, 0, 0);
						unk_0x64F9F278AB9DCA2C(func_266(uParam0[iParam4 /*94*/]), 7, 0, 0, 0);
					}
				}
			}
			break;
		
		case 8:
			func_259(&(uParam0->f_247));
			if (func_258(*iParam2, 1))
			{
				func_263(uParam0, iParam3, iParam4, 0, 0);
				unk_0x4A4806F9D471E491((uParam0[iParam3 /*94*/])->f_33, true, 0);
				unk_0x4A4806F9D471E491((uParam0[iParam4 /*94*/])->f_33, true, 0);
				func_256(iParam2, 1);
			}
			bVar14 = (unk_0x1C0640BA9A7327B3() > func_255(uParam0[iParam3 /*94*/]) && unk_0x1C0640BA9A7327B3() > func_255(uParam0[iParam4 /*94*/]));
			if ((((uParam0->f_1657 != 1 && !func_258(*iParam2, 4194304)) && bVar14) || ((uParam0->f_1657 == 1 && func_254(uParam0) > func_253(uParam0, iParam3, iParam4)) && !bParam6)) || (uParam0->f_1657 == 1 && bParam6))
			{
				func_237(uParam0[iParam3 /*94*/], uParam0, func_273(uParam1), iParam3, 0, 0);
				func_237(uParam0[iParam4 /*94*/], uParam0, func_273(uParam1), iParam4, 0, 0);
				func_236(&((uParam0[iParam3 /*94*/])->f_4), 0);
				func_236(&((uParam0[iParam4 /*94*/])->f_4), 0);
				func_235(uParam0[iParam3 /*94*/], 75);
				func_235(uParam0[iParam4 /*94*/], 75);
				func_234(uParam0[iParam3 /*94*/]);
				func_234(uParam0[iParam4 /*94*/]);
				func_288(&(uParam0->f_247), 32);
				func_278(uParam0[iParam3 /*94*/], 1024);
				func_278(uParam0[iParam4 /*94*/], 1024);
				func_278(uParam0[iParam3 /*94*/], 8192);
				func_278(uParam0[iParam4 /*94*/], 8192);
				func_233(uParam0->f_1657, 1);
				func_256(iParam2, 268435456);
				func_256(iParam2, 1024);
				func_256(iParam2, 64);
				func_256(iParam2, 32);
				func_256(iParam2, 512);
				func_256(iParam2, 256);
				func_256(iParam2, 8);
				func_232(uParam0, 2);
				func_232(uParam0, 32);
				func_288(&(uParam0->f_247), 64);
				if (uParam1->f_5 != 10)
				{
					func_265(uParam1, 0);
				}
				func_231(uParam0[iParam3 /*94*/], 0);
				func_231(uParam0[iParam4 /*94*/], 0);
				if (uParam0->f_1657 != 1 && !func_230(uParam0, 1))
				{
					func_268(uParam0, 1);
				}
				bVar15 = (uParam0->f_1657 == 1 || func_230(uParam0, 1));
				if (!func_229(&((uParam0[func_272(uParam1) /*94*/])->f_4), 256))
				{
					func_228(uParam0[func_272(uParam1) /*94*/], uParam0, func_273(uParam1), func_272(uParam1), uParam0->f_1657 != 1, func_258(*iParam2, 1), (uParam0->f_1657 != 1 && !func_230(uParam0, 1)), bVar15, 0, 0);
				}
				if (!func_229(&((uParam0[(1 - func_272(uParam1)) /*94*/])->f_4), 256))
				{
					func_219(uParam0[(1 - func_272(uParam1)) /*94*/], uParam0, func_273(uParam1), (1 - func_272(uParam1)), uParam0->f_1657 != 1, bVar15, 0, !func_229(&((uParam0[(1 - func_272(uParam1)) /*94*/])->f_4), 16), 0);
				}
				func_232(uParam0, 8);
				func_270(uParam1, 20);
				func_218(&((uParam0[iParam3 /*94*/])->f_4), 256);
				func_218(&((uParam0[iParam4 /*94*/])->f_4), 256);
				func_217(&(uParam0->f_247));
				func_216(uParam0, 0);
				func_233(uParam0->f_1657, 0);
			}
			else
			{
				func_233(uParam0->f_1657, 0);
			}
			break;
		
		case 9:
			func_215(uParam0, iParam4, func_272(uParam1), uParam0->f_1657, func_229(&((uParam0[iParam4 /*94*/])->f_4), 256));
			if (func_230(uParam0, 4))
			{
				func_232(uParam0, 4);
			}
			if (!func_258(*iParam2, 4194304))
			{
				func_237(uParam0[func_272(uParam1) /*94*/], uParam0, func_273(uParam1), func_272(uParam1), 1, 0);
				func_237(uParam0[(1 - func_272(uParam1)) /*94*/], uParam0, func_273(uParam1), (1 - func_272(uParam1)), 0, 0);
			}
			func_214(uParam0[(1 - func_272(uParam1)) /*94*/], &(uParam0->f_247));
			if ((uParam0[func_272(uParam1) /*94*/])->f_31 != 4)
			{
				if (func_200(uParam0[func_272(uParam1) /*94*/], uParam0, func_273(uParam1), &uVar17, 0))
				{
					bVar16 = true;
				}
			}
			else
			{
				sVar18 = func_196(func_197(uParam0[func_272(uParam1) /*94*/]), "mini@tennis", "mini@tennis@female");
				if (unk_0xB4ECF989E2C1DAC8(func_266(uParam0[func_272(uParam1) /*94*/]), sVar18, "serve", 3))
				{
					if (uParam0->f_1657 == 1 && unk_0xC844350D5D58C99A(uParam0->f_247))
					{
						fVar19 = unk_0x8CA9406E01C7EE58(func_266(uParam0[func_272(uParam1) /*94*/]), sVar18, "serve");
						if (fVar19 > 0.015f && fVar19 < (0.015f * 10f))
						{
							func_195(uParam0[func_272(uParam1) /*94*/], &(uParam0->f_247));
						}
					}
				}
				if (!func_194(1))
				{
					func_193(1);
				}
				if (func_183(uParam0, uParam1, uParam0[func_272(uParam1) /*94*/], bParam6))
				{
					bVar16 = true;
				}
			}
			if (bVar16)
			{
				func_181(iParam2, 128);
				func_270(uParam1, 11);
				func_180(uParam1, func_272(uParam1));
				func_179(uParam0[iParam3 /*94*/], &(uParam0->f_247), 1);
				func_179(uParam0[iParam4 /*94*/], &(uParam0->f_247), 1);
			}
			break;
		
		case 10:
			func_237(uParam0[func_272(uParam1) /*94*/], uParam0, func_273(uParam1), func_272(uParam1), 0, 0);
			func_237(uParam0[(1 - func_272(uParam1)) /*94*/], uParam0, func_273(uParam1), (1 - func_272(uParam1)), 0, 0);
			func_214(uParam0[func_272(uParam1) /*94*/], &(uParam0->f_247));
			if (func_107(uParam0[(1 - func_272(uParam1)) /*94*/], uParam0, &(uParam1->f_7), func_178(uParam1), (1 - func_272(uParam1)), func_272(uParam1), func_273(uParam1), func_177(uParam1)))
			{
				func_180(uParam1, (1 - func_272(uParam1)));
				func_256(iParam2, 128);
			}
			if (unk_0xF4CCC8CB6DE7F1AE() > func_106(&(uParam0->f_247)) && func_105(uParam0[(1 - func_272(uParam1)) /*94*/], 256))
			{
				func_104(uParam1, func_178(uParam1));
				func_270(uParam1, 14);
				func_103(iParam2);
				func_256(iParam2, 128);
			}
			if (func_98(&(uParam0->f_247), func_102(uParam0), &(uParam0->f_189.f_29)))
			{
				if (func_97(&(uParam0->f_189), uParam0, (uParam0[func_272(uParam1) /*94*/])->f_1, func_273(uParam1)))
				{
					func_96(&(uParam0->f_247));
					func_270(uParam1, 12);
				}
				else
				{
					func_103(iParam2);
					if (func_95(uParam1) == 0)
					{
						if (iParam3 == func_272(uParam1))
						{
							func_94(iParam2, 134217728);
						}
						else
						{
							func_94(iParam2, 33554432);
						}
						func_265(uParam1, 1);
						func_270(uParam1, 8);
						func_181(iParam2, 8192);
						func_181(iParam2, 32);
					}
					else
					{
						func_265(uParam1, 2);
						func_104(uParam1, (1 - func_272(uParam1)));
						func_270(uParam1, 14);
					}
				}
			}
			else if (func_178(uParam1) != func_272(uParam1))
			{
				if (iParam3 == func_272(uParam1))
				{
					func_94(iParam2, 67108864);
				}
				else
				{
					func_94(iParam2, 16777216);
				}
				func_104(uParam1, func_272(uParam1));
				func_270(uParam1, 14);
				func_103(iParam2);
			}
			vVar6 = { func_284(&(uParam0->f_247)) };
			if (vVar6.z < (uParam0->f_189.f_3[0 /*3*/].f_2 - 1f) && vdist2(uParam0->f_189.f_29, func_284(&(uParam0->f_247))) < (26.75f * 26.75f))
			{
				func_104(uParam1, (1 - func_272(uParam1)));
				func_270(uParam1, 14);
			}
			break;
		
		case 11:
			iVar4 = (1 - func_272(uParam1));
			func_278(uParam0[iVar4 /*94*/], 32768);
			vVar3 = { func_90(&(uParam0->f_189), func_284(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, func_93(&(uParam0->f_247)), func_92(&(uParam0->f_247)), func_91(&(uParam0->f_247))) };
			func_89(uParam0[iVar4 /*94*/], &vVar3);
			vVar2 = { func_88((uParam0[iVar4 /*94*/])->f_37, &(uParam0->f_189), func_284(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, func_93(&(uParam0->f_247)), func_92(&(uParam0->f_247)), func_91(&(uParam0->f_247)), &fVar5) };
			func_82(&((uParam0[iVar4 /*94*/])->f_4), func_83(uParam0[iVar4 /*94*/], &(uParam0->f_303), vVar2, uParam0->f_189.f_29.f_2, fVar5));
			if (!func_229(&((uParam0[iVar4 /*94*/])->f_4), 64))
			{
				func_81(&((uParam0[iVar4 /*94*/])->f_4), 64);
			}
			if (bParam6)
			{
				func_80(&((uParam0[iVar4 /*94*/])->f_4), 0f);
			}
			else
			{
				func_79(&((uParam0[iVar4 /*94*/])->f_4));
				if ((!func_229(&((uParam0[iVar4 /*94*/])->f_4), 32) && func_287(&(uParam0->f_247)) < 1) && !func_77(vVar3, uParam0->f_189.f_3[0 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam0->f_189.f_3[3 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), func_78(&(uParam0->f_189))))
				{
					if (func_76(uParam0[iVar4 /*94*/]) == 75)
					{
						func_81(&((uParam0[iVar4 /*94*/])->f_4), 32);
					}
				}
			}
			if ((uParam0[iVar4 /*94*/])->f_31 == 4)
			{
				func_236(&((uParam0[iVar4 /*94*/])->f_4), 6);
			}
			else
			{
				func_236(&((uParam0[iVar4 /*94*/])->f_4), 1);
			}
			func_236(&((uParam0[func_272(uParam1) /*94*/])->f_4), 5);
			func_270(uParam1, 10);
			if ((uParam0[iVar4 /*94*/])->f_31 != 4)
			{
				*uParam5 = 0f;
				uParam0->f_247.f_1 = 0;
				func_181(iParam2, 536870912);
			}
			if ((uParam0[(1 - func_178(uParam1)) /*94*/])->f_1 == 0)
			{
				iVar0 = 0;
			}
			else if ((uParam0[(1 - func_178(uParam1)) /*94*/])->f_1 == 1)
			{
				iVar0 = 2;
			}
			func_72(uParam0[(1 - func_178(uParam1)) /*94*/], uParam0->f_189.f_3[iVar0 /*3*/], uParam0->f_189.f_16[iVar0 /*3*/]);
			func_67(uParam0[(1 - func_178(uParam1)) /*94*/], func_273(uParam1));
			break;
		
		case 12:
			vVar6 = { func_284(&(uParam0->f_247)) };
			if (!func_65(uParam0, func_178(uParam1)))
			{
				if (func_287(&(uParam0->f_247)) > 1)
				{
					func_104(uParam1, func_178(uParam1));
					func_103(iParam2);
				}
				else
				{
					func_104(uParam1, (1 - func_178(uParam1)));
					func_103(iParam2);
					if (func_64(uParam1) != iParam3 && uParam0->f_1657 == 1)
					{
						Global_111638.f_20016.f_10++;
						func_61(10, 1);
					}
					if (func_60(uParam0->f_247.f_13, &(uParam0->f_189), &(uParam0->f_1658), &(uParam0->f_1661)))
					{
						func_59(uParam0[(1 - func_178(uParam1)) /*94*/], 2);
					}
				}
				func_270(uParam1, 14);
			}
			else if (vVar6.z < (uParam0->f_189.f_3[0 /*3*/].f_2 - 1f) && vdist2(uParam0->f_189.f_29, func_284(&(uParam0->f_247))) < (26.75f * 26.75f))
			{
				func_104(uParam1, (1 - func_178(uParam1)));
				func_270(uParam1, 14);
				if (func_64(uParam1) != iParam3 && uParam0->f_1657 != 1)
				{
					Global_111638.f_20016.f_10++;
					func_61(10, 1);
				}
			}
			func_214(uParam0[func_178(uParam1) /*94*/], &(uParam0->f_247));
			if (func_107(uParam0[(1 - func_178(uParam1)) /*94*/], uParam0, &(uParam1->f_7), func_178(uParam1), (1 - func_178(uParam1)), func_272(uParam1), func_273(uParam1), func_177(uParam1)))
			{
				func_259(&(uParam0->f_247));
				func_180(uParam1, (1 - func_178(uParam1)));
				if ((uParam0[func_178(uParam1) /*94*/])->f_31 == 4)
				{
					func_236(&((uParam0[func_178(uParam1) /*94*/])->f_4), 5);
					func_58(uParam0[func_178(uParam1) /*94*/], &(uParam0->f_189), uParam0->f_1661);
				}
				else
				{
					func_256(iParam2, 536870912);
				}
				func_256(iParam2, 128);
				func_270(uParam1, 13);
				func_57(uParam0[iParam3 /*94*/]);
				func_57(uParam0[iParam4 /*94*/]);
			}
			else if (unk_0xF4CCC8CB6DE7F1AE() > func_106(&(uParam0->f_247)) && func_105(uParam0[(1 - func_178(uParam1)) /*94*/], 256))
			{
				func_104(uParam1, func_178(uParam1));
				func_270(uParam1, 14);
				func_103(iParam2);
				func_256(iParam2, 128);
			}
			func_237(uParam0[iParam3 /*94*/], uParam0, func_273(uParam1), iParam3, 0, 0);
			func_237(uParam0[iParam4 /*94*/], uParam0, func_273(uParam1), iParam4, 0, 0);
			if (uParam0->f_1657 != 1)
			{
				func_54(uParam0[iParam3 /*94*/], &(uParam0->f_189));
			}
			if ((func_229(&((uParam0[iParam3 /*94*/])->f_4), 16) && !func_229(&((uParam0[iParam4 /*94*/])->f_4), 16)) && !func_229(&((uParam0[iParam4 /*94*/])->f_4), 256))
			{
				unk_0x93D47DFD0AE94949(func_266(uParam0[iParam4 /*94*/]), -1);
			}
			break;
		
		case 13:
			iVar4 = (1 - func_178(uParam1));
			func_278(uParam0[iVar4 /*94*/], 32768);
			vVar20 = { func_90(&(uParam0->f_189), func_284(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, func_93(&(uParam0->f_247)), func_92(&(uParam0->f_247)), func_91(&(uParam0->f_247))) };
			func_89(uParam0[iVar4 /*94*/], &vVar20);
			if (!func_229(&((uParam0[iVar4 /*94*/])->f_4), 64))
			{
				func_81(&((uParam0[iVar4 /*94*/])->f_4), 64);
			}
			if (func_53(uParam0[func_178(uParam1) /*94*/]) == 2)
			{
				func_82(&((uParam0[iVar4 /*94*/])->f_4), vVar20);
			}
			else
			{
				vVar2 = { func_88((uParam0[iVar4 /*94*/])->f_37, &(uParam0->f_189), func_284(&(uParam0->f_247)), uParam0->f_247.f_10, uParam0->f_1658, func_93(&(uParam0->f_247)), func_92(&(uParam0->f_247)), func_91(&(uParam0->f_247)), &fVar5) };
				func_82(&((uParam0[iVar4 /*94*/])->f_4), func_83(uParam0[iVar4 /*94*/], &(uParam0->f_303), vVar2, uParam0->f_189.f_29.f_2, fVar5));
			}
			if ((!func_229(&((uParam0[iVar4 /*94*/])->f_4), 32) && func_287(&(uParam0->f_247)) < 1) && !func_77(vVar20, uParam0->f_189.f_3[0 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam0->f_189.f_3[3 /*3*/] + uParam0->f_1661 * Vector(0.5f, 0.5f, 0.5f), func_78(&(uParam0->f_189))))
			{
				if (func_76(uParam0[iVar4 /*94*/]) == 75)
				{
					func_81(&((uParam0[iVar4 /*94*/])->f_4), 32);
				}
			}
			if ((uParam0[iVar4 /*94*/])->f_31 == 4)
			{
				if ((uParam0[iVar4 /*94*/])->f_1 == 0)
				{
					iVar0 = 0;
				}
				else if ((uParam0[iVar4 /*94*/])->f_1 == 1)
				{
					iVar0 = 2;
				}
				func_72(uParam0[iVar4 /*94*/], uParam0->f_189.f_3[iVar0 /*3*/], uParam0->f_189.f_16[iVar0 /*3*/]);
			}
			else
			{
				*uParam5 = 0f;
				uParam0->f_247.f_1 = 0;
				func_181(iParam2, 536870912);
			}
			func_218(&((uParam0[iVar4 /*94*/])->f_4), 4);
			func_236(&((uParam0[iVar4 /*94*/])->f_4), 1);
			func_270(uParam1, 12);
			break;
		
		case 14:
			func_179(uParam0[iParam3 /*94*/], &(uParam0->f_247), 0);
			func_179(uParam0[iParam4 /*94*/], &(uParam0->f_247), 0);
			func_236(&((uParam0[iParam3 /*94*/])->f_4), 0);
			func_236(&((uParam0[iParam4 /*94*/])->f_4), 0);
			func_52(&(uParam1->f_7[func_64(uParam1) /*8*/]), iParam2);
			if (uParam1->f_7[func_64(uParam1) /*8*/] >= func_51(func_177(uParam1), 7, 4) && (uParam1->f_7[func_64(uParam1) /*8*/] - uParam1->f_7[(1 - func_64(uParam1)) /*8*/]) >= 2)
			{
				func_49(&(uParam1->f_7), func_50(uParam1), func_64(uParam1), (1 - func_64(uParam1)), iParam2, func_177(uParam1));
				func_270(uParam1, 18);
				func_181(iParam2, 8388608);
				func_48(uParam1, 0);
				if (uParam0->f_1657 == 1)
				{
					func_216(uParam0, 0);
				}
				if (func_64(uParam1) == iParam3)
				{
					func_181(iParam2, 1048576);
					func_94(iParam2, 67108864);
					if ((uParam0[iParam3 /*94*/])->f_31 != 4)
					{
						func_35(2, 3);
						func_181(iParam2, 256);
					}
					if (func_34(&((uParam0[iParam4 /*94*/])->f_4)) == 2)
					{
						func_33(&((uParam0[iParam4 /*94*/])->f_4));
					}
				}
				else
				{
					func_181(iParam2, 2097152);
					func_94(iParam2, 16777216);
					if ((uParam0[iParam3 /*94*/])->f_31 != 4)
					{
						func_181(iParam2, 512);
					}
				}
			}
			else
			{
				iVar23 = func_64(uParam1);
				iVar24 = (1 - iVar23);
				iVar22 = func_50(uParam1);
				iVar21 = func_51(func_177(uParam1), 6, 3);
				if (func_177(uParam1))
				{
					func_32(uParam0, unk_0x1C0640BA9A7327B3() + 1500);
				}
				if (uParam1->f_7[iVar23 /*8*/] >= iVar21 && uParam1->f_7[iVar23 /*8*/] == uParam1->f_7[iVar24 /*8*/])
				{
					func_181(iParam2, 65536);
					func_31(iVar23, iParam3, uParam0, iParam2);
				}
				else if (uParam1->f_7[iVar23 /*8*/] > iVar21 && uParam1->f_7[iVar23 /*8*/] == uParam1->f_7[iVar24 /*8*/] + 1)
				{
					if (((((func_30(uParam1) == 0 && uParam1->f_7[iVar23 /*8*/].f_1[iVar22] >= 5) && (uParam1->f_7[iVar23 /*8*/].f_1[iVar22] + 1 - uParam1->f_7[iVar24 /*8*/].f_1[iVar22]) >= 2) || func_30(uParam1) == 1) || (func_30(uParam1) == 2 && uParam1->f_7[iVar23 /*8*/].f_1[iVar22] >= 1)) || (func_30(uParam1) == 3 && uParam1->f_7[iVar23 /*8*/].f_1[iVar22] >= 2))
					{
						func_181(iParam2, 32768);
					}
					else
					{
						func_181(iParam2, 131072);
					}
					func_31(iVar23, iParam3, uParam0, iParam2);
				}
				else if (uParam1->f_7[iVar23 /*8*/] == iVar21 && uParam1->f_7[iVar24 /*8*/] < iVar21)
				{
					func_181(iParam2, 32768);
					func_31(iVar23, iParam3, uParam0, iParam2);
				}
				else if (uParam1->f_5 == 10)
				{
					if (uParam1->f_2 != func_272(uParam1))
					{
						func_181(iParam2, 8192);
						func_181(iParam2, 32);
						if (func_64(uParam1) == iParam3)
						{
							func_94(iParam2, 33554432);
						}
						else
						{
							func_94(iParam2, 134217728);
						}
					}
					else if (iVar23 == iParam3)
					{
						func_94(iParam2, 67108864);
						func_181(iParam2, 262144);
						func_181(iParam2, 64);
					}
					else
					{
						func_94(iParam2, 16777216);
						func_181(iParam2, 1024);
						func_181(iParam2, 524288);
					}
				}
				else if (uParam1->f_5 == 12)
				{
					if (iVar23 == iParam3)
					{
						func_181(iParam2, 262144);
					}
					else
					{
						func_181(iParam2, 524288);
					}
					func_31(iVar23, iParam3, uParam0, iParam2);
				}
				if (uParam1->f_5 == 10 && uParam1->f_2 != func_272(uParam1))
				{
					func_256(iParam2, 128);
					if (!func_258(*iParam2, 8192))
					{
					}
				}
				if (func_177(uParam1))
				{
					if (unk_0xEAE0D21A50E6C7F4((uParam1->f_7[iParam3 /*8*/] + uParam1->f_7[iParam4 /*8*/]), 0))
					{
						func_270(uParam1, 18);
					}
					else if (((uParam1->f_7[iParam3 /*8*/] + uParam1->f_7[iParam4 /*8*/]) % 6) == 0)
					{
						func_270(uParam1, 17);
					}
					else
					{
						func_29(uParam1, (1 - func_273(uParam1)));
						func_270(uParam1, 8);
					}
				}
				else
				{
					func_29(uParam1, (1 - func_273(uParam1)));
					func_270(uParam1, 8);
					if (uParam0->f_1657 == 1)
					{
						func_216(uParam0, 0);
					}
				}
			}
			if (func_229(&((uParam0[iParam3 /*94*/])->f_4), 16) || func_229(&((uParam0[iParam4 /*94*/])->f_4), 16))
			{
				func_181(iParam2, 268435456);
			}
			func_234(uParam0[iParam3 /*94*/]);
			func_234(uParam0[iParam4 /*94*/]);
			break;
		
		case 20:
			if (func_26(uParam0, iParam3, iParam4, func_272(uParam1), uParam0->f_1657, func_230(uParam0, 1), iVar12))
			{
				func_233(uParam0->f_1657, 1);
				func_270(uParam1, 9);
				func_25(&((uParam0[iParam3 /*94*/])->f_4));
				func_25(&((uParam0[iParam4 /*94*/])->f_4));
				if (func_230(uParam0, 1))
				{
					func_232(uParam0, 1);
				}
				if (func_230(uParam0, 256))
				{
					func_232(uParam0, 256);
				}
			}
			if ((func_230(uParam0, 1) && !func_230(uParam0, 4)) && iVar11 >= 2)
			{
				func_24(uParam0, 4);
				func_23(uParam0, unk_0x1C0640BA9A7327B3() + 580);
			}
			else if (((unk_0x1C0640BA9A7327B3() > func_22(uParam0) && func_230(uParam0, 4)) && unk_0xC844350D5D58C99A(uParam0->f_247)) && !unk_0xD59B17D2DFF98E26(uParam0->f_247))
			{
				func_268(uParam0, 1);
				func_195(uParam0[func_272(uParam1) /*94*/], &(uParam0->f_247));
				func_288(&(uParam0->f_247), 4);
			}
			if (func_272(uParam1) != iParam3 && unk_0xD1960163A3042274(func_266(uParam0[iParam3 /*94*/]), 242628503) == 7)
			{
				func_233(uParam0->f_1657, 1);
				func_237(uParam0[iParam3 /*94*/], uParam0, func_273(uParam1), iParam3, 0, 0);
				func_21(20, uParam0[iParam3 /*94*/], *iParam2, 1);
				func_214(uParam0[iParam3 /*94*/], &(uParam0->f_247));
			}
			break;
		
		case 18:
			if (!func_177(uParam1))
			{
				if (uParam0->f_1657 != 1 && (((((uParam1->f_7[iParam3 /*8*/].f_1[func_50(uParam1)] > 5 && (uParam1->f_7[iParam3 /*8*/].f_1[func_50(uParam1)] - uParam1->f_7[iParam4 /*8*/].f_1[func_50(uParam1)]) >= 2) && uParam1->f_7[iParam3 /*8*/] >= 3) || ((uParam1->f_7[iParam4 /*8*/].f_1[func_50(uParam1)] > 5 && (uParam1->f_7[iParam4 /*8*/].f_1[func_50(uParam1)] - uParam1->f_7[iParam3 /*8*/].f_1[func_50(uParam1)]) >= 2) && uParam1->f_7[iParam4 /*8*/] >= 3)) || uParam1->f_7[iParam3 /*8*/].f_1[func_50(uParam1)] == 7) || uParam1->f_7[iParam4 /*8*/].f_1[func_50(uParam1)] == 7))
				{
					if (func_20(uParam1) > 1)
					{
						func_19(&(uParam1->f_7), &(uParam1->f_30), iParam2, func_20(uParam1));
					}
				}
				else if ((uParam1->f_7[iParam3 /*8*/].f_1[func_50(uParam1)] == 6 && uParam1->f_7[iParam4 /*8*/].f_1[func_50(uParam1)] == 6) && uParam0->f_1657 != 1)
				{
					func_48(uParam1, 1);
					func_181(iParam2, 4);
					func_32(uParam0, unk_0x1C0640BA9A7327B3() + 1500);
				}
				if ((uParam0->f_1657 != 1 && !func_177(uParam1)) && ((((((((func_30(uParam1) == 0 && uParam1->f_7[iParam3 /*8*/].f_7 > (func_20(uParam1) / 2)) || (func_30(uParam1) == 0 && uParam1->f_7[iParam4 /*8*/].f_7 > (func_20(uParam1) / 2))) || (func_30(uParam1) == 1 && uParam1->f_7[iParam3 /*8*/].f_1[func_50(uParam1)] >= 1)) || (func_30(uParam1) == 1 && uParam1->f_7[iParam4 /*8*/].f_1[func_50(uParam1)] >= 1)) || (func_30(uParam1) == 2 && uParam1->f_7[iParam3 /*8*/].f_1[func_50(uParam1)] >= 2)) || (func_30(uParam1) == 2 && uParam1->f_7[iParam4 /*8*/].f_1[func_50(uParam1)] >= 2)) || (func_30(uParam1) == 3 && uParam1->f_7[iParam3 /*8*/].f_1[func_50(uParam1)] >= 3)) || (func_30(uParam1) == 3 && uParam1->f_7[iParam4 /*8*/].f_1[func_50(uParam1)] >= 3)))
				{
					if (func_20(uParam1) > 1)
					{
						uParam1->f_30 = (uParam1->f_30 - 1);
					}
					func_262(unk_0x16F2683693E537C9(), 0);
					func_270(uParam1, 22);
					func_181(iParam2, 2);
				}
				else
				{
					func_18(&(uParam1->f_7), iParam2);
					if (func_272(uParam1) == iParam3)
					{
						func_264(uParam1, iParam4);
					}
					else if (func_272(uParam1) == iParam4)
					{
						func_264(uParam1, iParam3);
					}
					func_270(uParam1, 8);
					func_29(uParam1, 1);
					if (func_17(&(uParam1->f_7), func_50(uParam1)) && uParam0->f_1657 != 1)
					{
						func_270(uParam1, 17);
					}
				}
			}
			else if (func_177(uParam1))
			{
				if (func_272(uParam1) == iParam3)
				{
					func_264(uParam1, iParam4);
				}
				else if (func_272(uParam1) == iParam4)
				{
					func_264(uParam1, iParam3);
				}
				func_270(uParam1, 8);
				func_29(uParam1, 1);
			}
			break;
		
		case 16:
			func_237(uParam0[iParam4 /*94*/], uParam0, func_273(uParam1), iParam4, 0, 0);
			func_237(uParam0[iParam3 /*94*/], uParam0, func_273(uParam1), iParam3, 0, 0);
			if ((uParam0->f_1657 != 1 && !func_258(*iParam2, 4194304)) || uParam0->f_1657 == 1)
			{
				func_270(uParam1, 8);
			}
			break;
		
		case 28:
			break;
	}
	if ((!func_258(*iParam2, 4194304) && func_309(uParam1) > 6) && func_309(uParam1) < 21)
	{
		func_5(uParam0[iParam3 /*94*/], &(uParam0->f_535), uParam0->f_1657);
		func_5(uParam0[iParam4 /*94*/], &(uParam0->f_535), uParam0->f_1657);
	}
	func_4(uParam0);
}

void func_4(var uParam0)
{
	if (unk_0xC844350D5D58C99A((uParam0[0 /*94*/])->f_33))
	{
		(uParam0[0 /*94*/])->f_46 = { unk_0x68F4C0EC296D3901((uParam0[0 /*94*/])->f_33, true) };
	}
	if (unk_0xC844350D5D58C99A((uParam0[1 /*94*/])->f_33))
	{
		(uParam0[1 /*94*/])->f_46 = { unk_0x68F4C0EC296D3901((uParam0[1 /*94*/])->f_33, true) };
	}
}

void func_5(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	char* sVar7;
	
	iVar0 = func_266(uParam0);
	iVar6 = func_76(uParam0);
	if (!unk_0xEB6A8945D1AC98A1(iVar0))
	{
		sVar7 = func_196(func_197(uParam0), "mini@tennis", "mini@tennis@female");
		if (iVar6 == 75)
		{
			if (func_105(uParam0, 32))
			{
				if (unk_0xB4ECF989E2C1DAC8(iVar0, sVar7, "idle", 3))
				{
					unk_0xFB131B855F2FD560(iVar0, sVar7, "idle", -8f);
				}
				func_278(uParam0, 32);
			}
			if (!func_105(uParam0, 128) && !func_229(&(uParam0->f_4), 4))
			{
				if (!unk_0x001220CC1F110806(func_266(uParam0)))
				{
					func_262(func_266(uParam0), 1);
				}
				func_59(uParam0, 128);
			}
		}
		else if (iVar6 == 74)
		{
			fVar1 = 0f;
			fVar4 = 0.567f;
			fVar2 = 0.72f;
			fVar3 = 0.855f;
			sVar5 = "serve";
			if (!unk_0xB4ECF989E2C1DAC8(iVar0, sVar7, sVar5, 3))
			{
				unk_0xC6EB89C59F2AF6B8(iVar0, sVar7, sVar5, 8f, -8f, -1, 0, fVar1, 0, 0, 0);
				func_231(uParam0, 7);
			}
			else if (unk_0x8CA9406E01C7EE58(iVar0, sVar7, sVar5) > fVar3)
			{
				unk_0xFB131B855F2FD560(iVar0, sVar7, sVar5, -8f);
				func_235(uParam0, 75);
				if (func_105(uParam0, 4))
				{
					func_278(uParam0, 4);
				}
				if (!func_105(uParam0, 128))
				{
					func_262(func_266(uParam0), 1);
					func_59(uParam0, 128);
				}
			}
			else if (unk_0x8CA9406E01C7EE58(iVar0, sVar7, sVar5) >= fVar2)
			{
				if (!func_105(uParam0, 4))
				{
					func_59(uParam0, 4);
					func_231(uParam0, 6);
				}
			}
			else if (unk_0x8CA9406E01C7EE58(iVar0, sVar7, sVar5) > fVar4)
			{
				if (func_105(uParam0, 4))
				{
					func_278(uParam0, 4);
				}
			}
		}
		else
		{
			func_6(uParam0, iVar0, uParam1[iVar6 /*12*/], func_16(uParam0), uParam2);
		}
	}
}

void func_6(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	bool bVar0;
	char* sVar1;
	struct<8> Var2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	
	bVar0 = func_197(uParam0);
	sVar1 = func_196(bVar0, "mini@tennis", "mini@tennis@female");
	Var2 = { uParam2->f_4 };
	iVar3 = func_15(uParam2->f_3);
	fVar4 = (to_float(iParam3) / to_float(iVar3));
	fVar5 = *uParam2;
	if (func_14(func_76(uParam0), iParam3))
	{
		fVar5 = (*uParam2 + fVar4);
		func_13(uParam0, 1f);
	}
	else
	{
		fVar6 = (uParam2->f_1 - fVar4);
		fVar7 = (uParam2->f_1 / fVar6);
		fVar7 = func_12(fVar7, 0.5f, 1.5f);
		func_13(uParam0, fVar7);
	}
	if (fVar5 > uParam2->f_1)
	{
		fVar5 = uParam2->f_1;
	}
	if (!func_105(uParam0, 1024))
	{
		if (!unk_0x001220CC1F110806(func_266(uParam0)))
		{
			return;
		}
		unk_0xA3BF0AA5A2608191(iParam1);
		if (func_76(uParam0) == 72 || func_76(uParam0) == 73)
		{
			if (func_11(uParam0) != 0)
			{
				if (func_76(uParam0) == 72)
				{
					iVar8 = 0;
				}
				else if (func_76(uParam0) == 73)
				{
					iVar8 = 1;
				}
				unk_0x34247A39A3D61421(iParam1, iVar8, func_10(uParam0), func_9(uParam0), 1065353216, 0);
				func_8(uParam0, unk_0x1C0640BA9A7327B3() + 2871);
			}
		}
		else
		{
			unk_0x39C50C474849547D(iParam1, sVar1, &Var2, fVar5, func_7(uParam0), 0);
		}
		func_59(uParam0, 1024);
		if (uParam0->f_31 != 4)
		{
			Global_111638.f_20016.f_12++;
		}
	}
	else if (unk_0x02689472521FD800(iParam1) || unk_0xFEE406240FD2B150(iParam1))
	{
		func_278(uParam0, 1024);
		unk_0xA3BF0AA5A2608191(iParam1);
		func_235(uParam0, 75);
		func_13(uParam0, 1f);
		if (func_105(uParam0, 65536))
		{
			func_278(uParam0, 65536);
		}
	}
}

var func_7(var uParam0)
{
	return uParam0->f_67;
}

void func_8(var uParam0, var uParam1)
{
	uParam0->f_77 = uParam1;
}

var func_9(var uParam0)
{
	return uParam0->f_70;
}

var func_10(var uParam0)
{
	return uParam0->f_71;
}

int func_11(var uParam0)
{
	return uParam0->f_52;
}

float func_12(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_13(var uParam0, float fParam1)
{
	uParam0->f_67 = fParam1;
}

int func_14(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 == 54)
	{
		return 0;
	}
	if (iParam0 == 56)
	{
		return 0;
	}
	if (iParam0 == 55)
	{
		return 0;
	}
	if (iParam0 == 57)
	{
		return 0;
	}
	if (iParam0 == 59)
	{
		return 0;
	}
	if (iParam0 == 58)
	{
		return 0;
	}
	return 1;
}

int func_15(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (to_float(iParam0) * 0.03333334f);
	fVar1 = (fVar0 / unk_0x6117725E0134737F());
	return round(fVar1);
}

int func_16(var uParam0)
{
	return uParam0->f_53;
}

int func_17(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < iParam1 + 1)
	{
		iVar0 = (iVar0 + (uParam0[0 /*8*/])->f_1[iVar1]);
		iVar0 = (iVar0 + (uParam0[1 /*8*/])->f_1[iVar1]);
		iVar1++;
	}
	if ((iVar0 % 2) == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, var uParam1)
{
	(*uParam0)[0 /*8*/] = 0;
	(*uParam0)[1 /*8*/] = 0;
	func_181(uParam1, 2);
}

void func_19(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (*uParam1 + 1 < iParam3)
	{
		*uParam1++;
		(*uParam0)[0 /*8*/] = 0;
		(*uParam0)[1 /*8*/] = 0;
		(uParam0[0 /*8*/])->f_1[*uParam1] = 0;
		(uParam0[1 /*8*/])->f_1[*uParam1] = 0;
	}
	func_181(uParam2, 2);
}

int func_20(var uParam0)
{
	return uParam0->f_28;
}

void func_21(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if ((((iParam0 > 6 && iParam0 < 22) && !func_258(uParam2, 4194304)) && iParam0 != 16) || iParam3)
	{
		if (unk_0xC844350D5D58C99A(func_266(uParam1)))
		{
			if (unk_0x001220CC1F110806(func_266(uParam1)))
			{
				unk_0x9DD8618CA5BF832D(func_266(uParam1), 69, true);
			}
			unk_0x9DD8618CA5BF832D(func_266(uParam1), 102, true);
		}
	}
}

int func_22(var uParam0)
{
	return uParam0->f_1674;
}

void func_23(var uParam0, var uParam1)
{
	uParam0->f_1674 = uParam1;
}

void func_24(var uParam0, int iParam1)
{
	uParam0->f_1673 = (uParam0->f_1673 || iParam1);
}

void func_25(var uParam0)
{
	uParam0->f_25 = 0;
}

int func_26(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar0 = 1;
	iVar1 = func_266(uParam0[iParam1 /*94*/]);
	iVar2 = func_266(uParam0[iParam2 /*94*/]);
	if (!unk_0xEB6A8945D1AC98A1(iVar1) && unk_0xD1960163A3042274(iVar1, 242628503) != 7)
	{
		if (unk_0xB4ECF989E2C1DAC8(iVar1, "mini@tennis", "idle_2_serve", 3))
		{
		}
		iVar0 = 0;
		if (unk_0x001220CC1F110806(iVar1))
		{
			func_59(uParam0[iParam1 /*94*/], 16384);
		}
	}
	else if ((!unk_0xEB6A8945D1AC98A1(iVar1) && (bParam5 || iParam4 == 1)) && !func_105(uParam0[iParam1 /*94*/], 8192))
	{
		if (iParam1 == iParam3)
		{
			func_28(uParam0[iParam1 /*94*/], "TennisServeSet", 0f);
		}
		func_262(iVar1, 1);
		unk_0xF895E10BF4C72645(iVar1, 0, 0);
		func_59(uParam0[iParam1 /*94*/], 8192);
	}
	else if (func_105(uParam0[iParam1 /*94*/], 8192) && iParam1 == iParam3)
	{
		if (!unk_0xEB6A8945D1AC98A1(iVar1) && unk_0x43AB9B3158C51226(iVar1))
		{
			if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(iVar1), "Intro") && unk_0xB4E9220C59EBC663(iVar1))
			{
				unk_0x77CE1D0498EE13D6(iVar1, "running");
			}
		}
	}
	bVar3 = (((iParam2 != iParam3 && iParam6 >= (func_27(uParam0[iParam2 /*94*/]) - 1)) && iVar0) && 1);
	if (!unk_0xEB6A8945D1AC98A1(iVar2) && (unk_0xD1960163A3042274(iVar2, 242628503) != 7 && !bVar3))
	{
		if (unk_0xB4ECF989E2C1DAC8(iVar2, "mini@tennis", "idle_2_serve", 3))
		{
		}
		if (unk_0x001220CC1F110806(iVar2))
		{
			func_59(uParam0[iParam2 /*94*/], 16384);
		}
		iVar0 = 0;
	}
	else if (((!unk_0xEB6A8945D1AC98A1(iVar2) && ((bParam5 || iParam4 == 4) || iParam4 == 1)) && !func_105(uParam0[iParam2 /*94*/], 8192)) && unk_0xD1960163A3042274(iVar2, 242628503) == 7)
	{
		if (iParam2 == iParam3)
		{
			func_28(uParam0[iParam2 /*94*/], "TennisServeSet", 0f);
		}
		func_262(iVar2, 1);
		unk_0xF895E10BF4C72645(iVar2, 0, 0);
		func_59(uParam0[iParam2 /*94*/], 8192);
	}
	else if (func_105(uParam0[iParam2 /*94*/], 8192) && iParam2 == iParam3)
	{
		if (!unk_0xEB6A8945D1AC98A1(iVar2) && unk_0x43AB9B3158C51226(iVar2))
		{
			if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(iVar2), "Intro") && unk_0xB4E9220C59EBC663(iVar2))
			{
				unk_0x77CE1D0498EE13D6(iVar2, "running");
			}
		}
	}
	return iVar0;
}

int func_27(var uParam0)
{
	return uParam0->f_55;
}

void func_28(var uParam0, char* sParam1, float fParam2)
{
	if (!((!unk_0xEB6A8945D1AC98A1(func_266(uParam0)) && unk_0x43AB9B3158C51226(func_266(uParam0))) && unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(func_266(uParam0)), "running")))
	{
		unk_0x312838E3386842B6(func_266(uParam0), sParam1, fParam2, 0, "mini@tennis", 4);
	}
}

void func_29(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

int func_30(var uParam0)
{
	return uParam0->f_24;
}

void func_31(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (iParam0 == iParam1)
	{
		if (func_229(&((uParam2[iParam1 /*94*/])->f_4), 16))
		{
			func_94(uParam3, 33554432);
			func_181(uParam3, 32);
		}
		else
		{
			func_94(uParam3, 67108864);
			func_181(uParam3, 64);
		}
	}
	else if (iParam0 != iParam1)
	{
		if (func_105(uParam2[iParam1 /*94*/], 2) || func_229(&((uParam2[iParam0 /*94*/])->f_4), 16))
		{
			func_94(uParam3, 134217728);
		}
		else if (!func_105(uParam2[iParam1 /*94*/], 2))
		{
			func_94(uParam3, 16777216);
		}
		func_181(uParam3, 1024);
	}
}

void func_32(var uParam0, var uParam1)
{
	uParam0->f_1678 = uParam1;
}

void func_33(var uParam0)
{
	uParam0->f_23 = 0f;
	uParam0->f_21 = 0f;
	uParam0->f_22 = 0f;
}

int func_34(var uParam0)
{
	return uParam0->f_20;
}

void func_35(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_41();
	func_36(iVar0, iParam0, iParam1);
}

void func_36(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_111638.f_2358.f_539.f_2247[iParam1 /*4*/][iParam0] = (Global_111638.f_2358.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2);
			break;
		
		case 3:
			iVar1 = 11511;
			switch (iParam1)
			{
				case 1:
					iVar1 = 72;
					break;
				
				case 3:
					iVar1 = 74;
					break;
				
				case 2:
					iVar1 = 73;
					break;
				
				case 4:
					iVar1 = 75;
					break;
				
				case 5:
					iVar1 = 76;
					break;
				
				case 6:
					iVar1 = 77;
					break;
				
				case 7:
					iVar1 = 78;
					break;
			}
			if (iVar1 != 11511)
			{
				iVar0 = func_40(iVar1, -1, 0);
				iVar0 = (iVar0 + iParam2);
				if (iVar0 > 100)
				{
					iVar0 = 100;
				}
				func_37(iVar1, iVar0, -1, 1, 0);
			}
			break;
	}
}

void func_37(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2548434[iParam0 /*3*/][func_38(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xCDC520E5E48E63D9(iVar0, iParam1, iParam3);
	}
}

int func_38(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_39();
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

int func_39()
{
	return Global_1312745;
}

int func_40(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11511)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2548434[iParam0 /*3*/][func_38(iParam1)];
		if (unk_0x6FB46C25CCB7E6D5(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_41()
{
	func_42();
	return Global_111638.f_2358.f_539.f_4321;
}

void func_42()
{
	int iVar0;
	
	if (unk_0xC844350D5D58C99A(unk_0x16F2683693E537C9()))
	{
		if (func_46(Global_111638.f_2358.f_539.f_4321) != unk_0x134B62B726CEC8E6(unk_0x16F2683693E537C9()))
		{
			iVar0 = func_45(unk_0x16F2683693E537C9());
			if (func_44(iVar0) && (!func_43(14) || Global_110589))
			{
				if (Global_111638.f_2358.f_539.f_4321 != iVar0 && func_44(Global_111638.f_2358.f_539.f_4321))
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

bool func_43(int iParam0)
{
	return Global_41431 == iParam0;
}

bool func_44(int iParam0)
{
	return iParam0 < 3;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_46(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_46(int iParam0)
{
	if (func_44(iParam0))
	{
		return func_47(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_47(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_48(var uParam0, int iParam1)
{
	uParam0->f_26 = iParam1;
}

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)
{
	if ((uParam0[iParam2 /*8*/])->f_1[iParam1] == -1)
	{
		(uParam0[iParam2 /*8*/])->f_1[iParam1] = 1;
	}
	else
	{
		(uParam0[iParam2 /*8*/])->f_1[iParam1]++;
	}
	if (((((uParam0[iParam2 /*8*/])->f_1[iParam1] > 5 && ((uParam0[iParam2 /*8*/])->f_1[iParam1] - (uParam0[iParam3 /*8*/])->f_1[iParam1]) >= 2) && (*uParam0)[iParam2 /*8*/] >= 3) && !bParam5) || bParam5)
	{
		(uParam0[iParam2 /*8*/])->f_7++;
	}
	func_181(uParam4, 2);
}

int func_50(var uParam0)
{
	return uParam0->f_30;
}

int func_51(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_52(var uParam0, var uParam1)
{
	*uParam0++;
	func_181(uParam1, 2);
}

int func_53(var uParam0)
{
	return uParam0->f_34;
}

void func_54(var uParam0, var uParam1)
{
	vector3 vVar0;
	
	if (!func_105(uParam0, 2048) && func_56(uParam0->f_37, uParam1))
	{
		if (unk_0xD1960163A3042274(func_266(uParam0), 713668775) != 1 && unk_0xD1960163A3042274(func_266(uParam0), 242628503) != 1)
		{
			vVar0 = { uParam0->f_37 - uParam1->f_29 * Vector(0.93f, 0.93f, 0.93f) };
			unk_0x96167B03C5A77156(func_266(uParam0), uParam1->f_29 + vVar0, 2f, 20000, 1048576000, 0, 1193033728);
			func_59(uParam0, 2048);
			func_55("FAR_FROM_COURT", -1);
		}
	}
	else if (func_105(uParam0, 2048) && unk_0xD1960163A3042274(func_266(uParam0), 713668775) != 1)
	{
		func_278(uParam0, 2048);
	}
}

void func_55(char* sParam0, int iParam1)
{
	unk_0xB6A2CAEFEE28197D(sParam0);
	unk_0xBAB71DDCAEBC7FDD(0, 0, true, iParam1);
}

bool func_56(vector3 vParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	switch (*uParam1)
	{
		case 7:
			fVar0 = 2.031f;
			fVar1 = 2.16f;
			break;
		
		case 1:
			fVar0 = 6.955f;
			fVar1 = 1.6f;
			break;
		
		case 4:
			fVar0 = 6.715f;
			fVar1 = 2.043f;
			break;
		
		case 0:
			fVar0 = 4.8f;
			fVar1 = 2.433f;
			break;
		
		case 3:
			fVar0 = 6.1f;
			fVar1 = 2.395f;
			break;
		
		case 5:
			fVar0 = 2.9f;
			fVar1 = 2.005f;
			break;
		
		case 2:
			fVar0 = 7f;
			fVar1 = 2.533f;
			break;
		
		case 6:
			fVar0 = 7.7f;
			fVar1 = 2.775f;
			break;
		
		default:
			fVar0 = 10f;
			fVar1 = 3f;
			break;
	}
	vVar2 = { uParam1->f_3[1 /*3*/] - uParam1->f_3[0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
	vVar3 = { uParam1->f_3[0 /*3*/] + vVar2 - uParam1->f_49 * Vector(fVar0, fVar0, fVar0) };
	vVar4 = { uParam1->f_3[3 /*3*/] + vVar2 + uParam1->f_49 * Vector(fVar0, fVar0, fVar0) };
	return !func_77(vParam0, vVar3, vVar4, (func_78(uParam1) * fVar1));
}

void func_57(var uParam0)
{
	uParam0->f_60 = 0f;
}

void func_58(var uParam0, var uParam1, vector3 vParam2)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = unk_0x09AC81E49EA267F7(0, 3);
	if (uParam0->f_4.f_20 == 2)
	{
		iVar0 = func_51(unk_0x79833B02DBD2A244(0f, 1f) < 0.5f, 0, 3);
		func_82(&(uParam0->f_4), uParam0->f_4.f_6[iVar0 /*3*/]);
	}
	else if (uParam0->f_4.f_20 == 0)
	{
		vVar1 = { uParam1->f_3[0 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
		vVar2 = { uParam1->f_3[3 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
		if (!func_77(uParam0->f_37, vVar1, vVar2, func_78(uParam1)))
		{
			vVar1 = { uParam1->f_29 - uParam0->f_40 * Vector(6f, 6f, 6f) };
			func_82(&(uParam0->f_4), vVar1);
		}
		else
		{
			func_82(&(uParam0->f_4), uParam0->f_37);
		}
	}
	else
	{
		func_82(&(uParam0->f_4), uParam0->f_4.f_6[iVar0 /*3*/]);
	}
}

void func_59(var uParam0, int iParam1)
{
	func_181(&(uParam0->f_2), iParam1);
}

bool func_60(vector3 vParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	bool bVar2;
	vector3 vVar3;
	float fVar4;
	
	vVar0 = { uParam1->f_3[0 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	vVar1 = { uParam1->f_3[3 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	bVar2 = func_77(vParam0, vVar0, vVar1, uParam1->f_1);
	vVar3 = { *uParam2 * Vector(0.018f, 0.018f, 0.018f) };
	fVar4 = (uParam1->f_1 * 1.038f);
	vVar0 = { vVar0 - vVar3 };
	vVar1 = { vVar1 + vVar3 };
	return (!bVar2 && func_77(vParam0, vVar0, vVar1, fVar4));
}

void func_61(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_62(iParam0, (func_63(iParam0) + iParam1));
	}
	else
	{
		func_62(iParam0, iParam1);
	}
}

void func_62(int iParam0, int iParam1)
{
	uLocal_249[iParam0] = iParam1;
}

int func_63(int iParam0)
{
	return uLocal_249[iParam0];
}

int func_64(var uParam0)
{
	return uParam0->f_2;
}

int func_65(var uParam0, int iParam1)
{
	if (func_98(&(uParam0->f_247), func_102(uParam0), &(uParam0->f_189.f_29)))
	{
		if (func_66(iParam1, uParam0, 1, 1))
		{
			func_96(&(uParam0->f_247));
			if (func_287(&(uParam0->f_247)) > 1)
			{
				return 0;
			}
		}
		else
		{
			func_96(&(uParam0->f_247));
			return 0;
		}
	}
	return 1;
}

int func_66(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	
	vVar0 = { uParam1->f_247.f_13 };
	if (!bParam2)
	{
		vVar0 = { func_284(&(uParam1->f_247)) };
	}
	if (bParam3)
	{
	}
	if ((uParam1[iParam0 /*94*/])->f_1 == 1)
	{
		if (bParam3)
		{
		}
		return func_77(vVar0, uParam1->f_189.f_3[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam1->f_189.f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), func_78(&(uParam1->f_189)));
	}
	else
	{
		if (bParam3)
		{
		}
		return func_77(vVar0, uParam1->f_189.f_3[3 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), uParam1->f_189.f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f), func_78(&(uParam1->f_189)));
	}
	return 0;
}

void func_67(var uParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = func_70(uParam0->f_43, func_71(&(uParam0->f_4)) - uParam0->f_37);
	if (fVar0 > 0f && iParam1 == 1)
	{
		func_69(&(uParam0->f_4));
	}
	else if (fVar0 <= 0f && iParam1 == 1)
	{
		func_68(&(uParam0->f_4));
	}
	else if (fVar0 > 0f && iParam1 == 0)
	{
		func_68(&(uParam0->f_4));
	}
	else if (fVar0 <= 0f && iParam1 == 0)
	{
		func_69(&(uParam0->f_4));
	}
}

void func_68(var uParam0)
{
	uParam0->f_23 = (uParam0->f_23 - 0.5f);
	uParam0->f_23 = func_12(uParam0->f_23, -1.5f, 1.5f);
}

void func_69(var uParam0)
{
	uParam0->f_23 = (uParam0->f_23 + 0.5f);
	uParam0->f_23 = func_12(uParam0->f_23, -1.5f, 1.5f);
}

float func_70(vector3 vParam0, vector3 vParam1)
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_71(var uParam0)
{
	return *uParam0;
}

void func_72(var uParam0, vector3 vParam1, vector3 vParam2)
{
	if (func_70(uParam0->f_43, func_71(&(uParam0->f_4)) - uParam0->f_37) > 0f)
	{
		func_75(&(uParam0->f_4));
	}
	else
	{
		func_74(&(uParam0->f_4));
	}
	if (func_70(uParam0->f_40, func_71(&(uParam0->f_4)) - uParam0->f_37) > 0f)
	{
		func_73(&(uParam0->f_4), 0);
	}
	else
	{
		func_73(&(uParam0->f_4), 1);
	}
	uParam0->f_4.f_6[0 /*3*/] = { vParam1 + uParam0->f_40 * Vector(1f, 1f, 1f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(4f, 4f, 4f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
	uParam0->f_4.f_6[1 /*3*/] = { vParam1 + uParam0->f_40 * Vector(8f, 8f, 8f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(2.165f, 2.165f, 2.165f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
	uParam0->f_4.f_6[2 /*3*/] = { vParam1 + uParam0->f_40 * Vector(8f, 8f, 8f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(6f, 6f, 6f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
	uParam0->f_4.f_6[3 /*3*/] = { vParam2 + uParam0->f_40 * Vector(0.5f, 0.5f, 0.5f) + uParam0->f_40 * Vector(uParam0->f_4.f_22, uParam0->f_4.f_22, uParam0->f_4.f_22) + uParam0->f_43 * Vector(4f, 4f, 4f) + uParam0->f_43 * Vector(uParam0->f_4.f_21, uParam0->f_4.f_21, uParam0->f_4.f_21) };
}

void func_73(var uParam0, bool bParam1)
{
	float fVar0;
	
	switch (uParam0->f_20)
	{
		case 0:
			fVar0 = 0.1f;
			break;
		
		case 1:
			fVar0 = 0.1f;
			break;
		
		case 2:
			fVar0 = 0.1f;
			break;
	}
	if (!bParam1)
	{
		fVar0 = (fVar0 * -1f);
	}
	uParam0->f_22 = (uParam0->f_22 + fVar0);
	uParam0->f_22 = func_12(uParam0->f_22, -2f, 2f);
}

void func_74(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_20)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		
		case 1:
			fVar0 = 0.25f;
			break;
		
		case 2:
			fVar0 = 0.05f;
			break;
	}
	uParam0->f_21 = (uParam0->f_21 - fVar0);
	uParam0->f_21 = func_12(uParam0->f_21, -2f, 2f);
}

void func_75(var uParam0)
{
	float fVar0;
	
	switch (uParam0->f_20)
	{
		case 0:
			fVar0 = 0.5f;
			break;
		
		case 1:
			fVar0 = 0.25f;
			break;
		
		case 2:
			fVar0 = 0.05f;
			break;
	}
	uParam0->f_21 = (uParam0->f_21 + fVar0);
	uParam0->f_21 = func_12(uParam0->f_21, -2f, 2f);
}

int func_76(var uParam0)
{
	return uParam0->f_36;
}

bool func_77(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	vParam1.z = (vParam1.z + 30f);
	vParam2.z = (vParam2.z - 5f);
	return unk_0x0399732A9EBC368E(vParam0, vParam1, vParam2, fParam3, 0, true);
}

float func_78(var uParam0)
{
	return uParam0->f_1;
}

void func_79(var uParam0)
{
	if (uParam0->f_20 == 0)
	{
		uParam0->f_24 = unk_0x79833B02DBD2A244(0f, 0.4f);
	}
	else if (uParam0->f_20 == 1)
	{
		uParam0->f_24 = unk_0x79833B02DBD2A244(0f, 0.2f);
	}
	else if (uParam0->f_20 == 2)
	{
		uParam0->f_24 = unk_0x79833B02DBD2A244(0f, 0.01f);
	}
}

void func_80(var uParam0, float fParam1)
{
	uParam0->f_24 = fParam1;
}

void func_81(var uParam0, int iParam1)
{
	func_181(&(uParam0->f_25), iParam1);
}

void func_82(var uParam0, vector3 vParam1)
{
	*uParam0 = { vParam1 };
}

Vector3 func_83(var uParam0, var uParam1, vector3 vParam2, var uParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	vector3 vVar10;
	float fVar11;
	float fVar12;
	
	iVar0 = 0;
	fVar4 = 100f;
	vVar6 = { func_87(uParam0, vParam2) };
	fVar7 = func_70(vParam2 - uParam0->f_37, uParam0->f_43);
	bVar8 = fVar7 > 0f;
	while (iVar0 < 75)
	{
		bVar9 = (*uParam1)[iVar0 /*3*/] > 0f;
		if (bVar8 == bVar9)
		{
			vVar1 = { func_86(uParam0, *(uParam1[iVar0 /*3*/])) };
			fVar5 = unk_0x755FF954DAE327E1(((vVar1.z + vVar6.z) - vParam2.z));
			if (fVar5 < 0.15f)
			{
				fVar5 = 0f;
			}
			fVar5 = (fVar5 + func_85(iVar0));
			vVar10 = { vParam2 - vVar1 };
			fVar11 = 0f;
			fVar12 = func_84(uParam0, vVar10, fParam4, &fVar11);
			if (fVar12 < fVar11)
			{
				fVar5 = (fVar5 + (fVar11 - fVar12));
			}
			if (fVar5 < fVar4)
			{
				fVar4 = fVar5;
				vVar3 = { vVar1 };
			}
		}
		iVar0++;
	}
	vVar2 = { vParam2 - vVar3 };
	vVar2.z = uParam3;
	return vVar2;
}

float func_84(var uParam0, vector3 vParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	
	vVar0 = { vParam1 - uParam0->f_37 };
	*fParam3 = vmag(vVar0);
	if (*fParam3 > 5f)
	{
		vVar0 = { vVar0 * FtoV((5f / *fParam3)) };
	}
	vVar1 = { unk_0x56E9E0FD5ACCD35D(uParam0->f_32) };
	fVar2 = ((vdist(vVar0, vVar1) * 2f) / 5f);
	fVar3 = ((fParam2 * 5f) - fVar2);
	if (fVar3 < 0f)
	{
		fVar3 = 0f;
	}
	return fVar3;
}

float func_85(int iParam0)
{
	switch (iParam0)
	{
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 0.05f;
		
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 0.05f;
		
		case 72:
		case 73:
			return 0.4f;
		
		default:
	}
	return 0f;
}

Vector3 func_86(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	vVar0 = { Vector(vParam1.x, vParam1.x, vParam1.x) * uParam0->f_43 };
	vVar0 = { vVar0 + Vector(vParam1.y, vParam1.y, vParam1.y) * uParam0->f_40 };
	vVar0.z = (vVar0.z + vParam1.z);
	return vVar0;
}

Vector3 func_87(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	
	vVar0 = { vParam1 - uParam0->f_37 };
	fVar1 = func_70(vVar0, uParam0->f_40);
	vVar2 = { uParam0->f_40 * Vector(fVar1, fVar1, fVar1) };
	return uParam0->f_37 + vVar2;
}

Vector3 func_88(vector3 vParam0, var uParam1, vector3 vParam2, vector3 vParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, var uParam9, float fParam10)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 180 && iVar1 < 2)
	{
		vVar0 = { vParam2 };
		func_280(uParam1, &vParam2, &vParam3, &uParam4, &uParam7, &iParam8, &uParam9, &iVar1, 0, -1082130432, 0, 0, 0);
		if (vdist(vParam0, vVar0) < vdist(vParam0, vParam2))
		{
			*fParam10 = (IntToFloat(iVar2) * unk_0x6117725E0134737F());
			return vParam2;
		}
		if (iVar1 > 0 && vParam3.z < 0f)
		{
			*fParam10 = (IntToFloat(iVar2) * unk_0x6117725E0134737F());
			return vVar0;
		}
		iVar2++;
	}
	*fParam10 = (IntToFloat(iVar2) * unk_0x6117725E0134737F());
	return vParam2;
}

void func_89(var uParam0, var uParam1)
{
	uParam0->f_49 = { *uParam1 };
}

Vector3 func_90(var uParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, var uParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 180)
	{
		func_280(uParam0, &vParam1, &uParam2, &uParam5, &uParam8, &iParam9, &uParam10, &iVar0, 0, 0.03333334f, 0, 0.1f, 0);
		if (iVar0 > 0)
		{
			return vParam1;
		}
		iVar1++;
	}
	return vParam1;
}

var func_91(var uParam0)
{
	return uParam0->f_5;
}

int func_92(var uParam0)
{
	return uParam0->f_22;
}

var func_93(var uParam0)
{
	return uParam0->f_4;
}

void func_94(var uParam0, int iParam1)
{
	func_256(uParam0, 67108864);
	func_256(uParam0, 134217728);
	func_256(uParam0, 16777216);
	func_256(uParam0, 33554432);
	func_181(uParam0, iParam1);
}

int func_95(var uParam0)
{
	return uParam0->f_29;
}

void func_96(var uParam0)
{
	uParam0->f_1++;
}

int func_97(var uParam0, var uParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	vVar0 = { func_284(&(uParam1->f_247)) };
	if (unk_0x755FF954DAE327E1((vVar0.z - uParam0->f_3[0 /*3*/].f_2)) <= 0.6f)
	{
		vVar1 = { uParam1->f_247.f_13 };
		if (iParam2 == 0)
		{
			if (iParam3 == 1)
			{
				vVar2 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
				vVar3 = { uParam0->f_16[3 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
			}
			else
			{
				vVar2 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
				vVar3 = { uParam0->f_16[3 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
			}
		}
		else if (iParam2 == 1)
		{
			if (iParam3 == 1)
			{
				vVar2 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
				vVar3 = { uParam0->f_16[0 /*3*/] + uParam1->f_1661 * Vector(0.75f, 0.75f, 0.75f) };
			}
			else
			{
				vVar2 = { uParam0->f_32[0 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
				vVar3 = { uParam0->f_16[0 /*3*/] + uParam1->f_1661 * Vector(0.25f, 0.25f, 0.25f) };
			}
		}
		return func_77(vVar1, vVar2, vVar3, 4.153f);
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_98(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (unk_0xE608C809F9416F00(*uParam0) || func_289(uParam0, 16))
	{
		iVar0 = unk_0x3661263219ECFDCC(*uParam0);
		if (iVar0 == 122789469)
		{
		}
		if ((((((((((((((((((((iVar0 == 1907048430 || iVar0 == 1187676648) || iVar0 == 282940568) || iVar0 == 435688960) || iVar0 == 762193613) || iVar0 == -145735917) || iVar0 == 233925547) || iVar0 == -2098049209) || iVar0 == 450003561) || iVar0 == 1394765188) || iVar0 == 125958708) || iVar0 == -1625995479) || iVar0 == -365631240) || iVar0 == -642658848) || iVar0 == 592446772) || iVar0 == 669292054) || iVar0 == 1144315879) || iVar0 == -1286696947) || iVar0 == 1849540536) && (iParam1 - uParam0->f_2) > 4) && iVar0 != 0)
		{
			func_101(uParam0, iParam1);
			uParam0->f_13 = { func_284(uParam0) };
			func_288(uParam0, 32);
			func_288(uParam0, 16);
			return 1;
		}
		if (func_289(uParam0, 16) && (iParam1 - uParam0->f_2) > 4)
		{
			func_288(uParam0, 16);
			func_101(uParam0, iParam1);
			uParam0->f_13 = { func_284(uParam0) };
			func_288(uParam0, 32);
			return 1;
		}
		if (vdist2(*uParam2, func_284(uParam0)) > (26.75f * 26.75f))
		{
			return 1;
		}
	}
	if (func_100(uParam0) > 5f)
	{
		func_99(uParam0);
		func_279(uParam0, 128);
		return 1;
	}
	return 0;
}

void func_99(var uParam0)
{
	uParam0->f_6 = 0f;
}

float func_100(var uParam0)
{
	return uParam0->f_6;
}

void func_101(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

int func_102(var uParam0)
{
	return uParam0->f_281;
}

void func_103(var uParam0)
{
	func_181(uParam0, 2048);
	func_181(uParam0, 16384);
}

void func_104(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

bool func_105(var uParam0, int iParam1)
{
	return func_258(uParam0->f_2, iParam1);
}

int func_106(var uParam0)
{
	return uParam0->f_3;
}

int func_107(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	float fVar5;
	bool bVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	var uVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	vector3 vVar14;
	float fVar15;
	vector3 vVar16;
	vector3 vVar17;
	var uVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	float fVar22;
	int iVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	int iVar28;
	
	bVar6 = (unk_0xC844350D5D58C99A(uParam1->f_247) && !unk_0xD59B17D2DFF98E26(uParam1->f_247));
	uVar7 = func_93(&(uParam1->f_247));
	uVar8 = func_91(&(uParam1->f_247));
	iVar9 = func_287(&(uParam1->f_247));
	uVar10 = func_92(&(uParam1->f_247));
	vVar11 = { func_284(&(uParam1->f_247)) };
	vVar12 = { uParam1->f_247.f_10 };
	if (bVar6 && iParam3 != iParam4)
	{
		if (!func_105(uParam0, 32768))
		{
			func_176(uParam0, uParam1, &vVar11, &vVar12, &uVar7, &uVar10, &uVar8, &iVar9);
		}
		else if (func_105(uParam0, 32768))
		{
			func_171(uParam0, uParam1, &vVar11, &vVar12, &uVar7, &uVar10, &uVar8, &iVar9);
		}
	}
	if (func_229(&(uParam0->f_4), 32))
	{
		func_170(uParam0);
		if (func_169(uParam0) >= func_168(uParam0))
		{
			func_167(uParam1, uParam0, uParam2, iParam3, iParam5, iParam6, func_284(&(uParam1->f_247)), bParam7);
			func_218(&(uParam0->f_4), 32);
			func_218(&(uParam0->f_4), 8);
			func_166(uParam0);
		}
	}
	if (uParam0->f_31 != 4 && unk_0x1C0640BA9A7327B3() > func_165(uParam0))
	{
		bVar0 = unk_0x06F8112AA79C53D9(0, 223);
		bVar2 = unk_0x06F8112AA79C53D9(0, 224);
		bVar3 = unk_0x06F8112AA79C53D9(0, 225);
		bVar1 = unk_0x06F8112AA79C53D9(0, 222);
		if (((unk_0xBFC0798A6E3417F9(0, 223) || unk_0xBFC0798A6E3417F9(0, 224)) || unk_0xBFC0798A6E3417F9(0, 225)) || unk_0xBFC0798A6E3417F9(0, 222))
		{
			if (func_164(uParam0))
			{
				func_59(uParam0, 1);
			}
			if (func_163(uParam1, uParam0, bVar6))
			{
				func_59(uParam0, 8);
			}
			vVar13 = { vVar12 };
			vVar13.z = 0f;
			vVar14 = { uParam0->f_40 };
			vVar14.z = 0f;
			if (func_70(vVar13, vVar14) < 0f)
			{
				func_59(uParam0, 16);
			}
		}
	}
	else if (unk_0x1C0640BA9A7327B3() > func_165(uParam0))
	{
		if (vdist2(func_284(&(uParam1->f_247)), uParam0->f_37) > (0f * 0f))
		{
			func_162(uParam0, uParam1, &bVar0, &bVar1);
		}
	}
	if (((uParam0->f_31 != 4 && func_105(uParam0, 512)) && func_161(uParam0) > 0.95f) && func_76(uParam0) == 75)
	{
		func_278(uParam0, 512);
		func_160(uParam0);
	}
	else if (func_105(uParam0, 512))
	{
		func_159(uParam0);
		if ((bVar0 || bVar2) || bVar3)
		{
			func_158(uParam0);
		}
		else
		{
			func_57(uParam0);
		}
	}
	if (((bVar0 || bVar1) || bVar2) || bVar3)
	{
		if ((func_76(uParam0) == 75 && !func_105(uParam0, 512)) && !func_105(uParam0, 4096))
		{
			func_59(uParam0, 512);
			if (bVar0)
			{
				func_231(uParam0, 0);
			}
			else if (bVar1)
			{
				func_231(uParam0, 2);
			}
			else if (bVar2)
			{
				func_231(uParam0, 3);
			}
			else if (bVar3)
			{
				func_231(uParam0, 1);
			}
			if (uParam0->f_31 != 4)
			{
				vVar16 = { func_88(uParam0->f_37, &(uParam1->f_189), func_284(&(uParam1->f_247)), uParam1->f_247.f_10, uParam1->f_1658, func_93(&(uParam1->f_247)), func_92(&(uParam1->f_247)), func_91(&(uParam1->f_247)), &fVar15) };
				func_82(&(uParam0->f_4), func_83(uParam0, &(uParam1->f_303), vVar16, uParam1->f_189.f_29.f_2, fVar15));
			}
		}
		if (uParam0->f_31 != 4 && bVar0)
		{
			if (func_105(uParam0, 1))
			{
				func_157(uParam0);
			}
		}
		else if (!bVar0)
		{
			func_156(uParam0);
		}
		if (func_155(uParam0))
		{
			unk_0x5E858A00EAFA5B24(0, 50, 85);
		}
	}
	else
	{
		if (func_105(uParam0, 4096) && unk_0x1C0640BA9A7327B3() > func_165(uParam0))
		{
			func_278(uParam0, 4096);
		}
		func_156(uParam0);
	}
	if (iParam3 != iParam4 && ((func_105(uParam0, 512) && uParam0->f_31 != 4) || uParam0->f_31 == 4))
	{
		if (func_154(uParam0, vVar11, bVar6))
		{
			vVar17 = { func_71(&(uParam0->f_4)) };
			iVar4 = func_152(uParam0, uParam1, &(uParam1->f_303), &(uParam1->f_535), &(uParam1->f_1583), &vVar17, &iVar19, &uVar18);
			if ((iVar4 != 75 && iVar4 != 76) && (uParam0->f_31 == 4 || (uParam0->f_31 != 4 && func_105(uParam0, 512))))
			{
				if (!func_229(&(uParam0->f_4), 8) && !func_229(&(uParam0->f_4), 1))
				{
					func_151(&(uParam0->f_4));
					func_235(uParam0, iVar4);
					func_150(uParam0, iVar19);
					func_81(&(uParam0->f_4), 1);
					func_149(uParam0, unk_0xF4CCC8CB6DE7F1AE() + 2);
					if (uParam0->f_31 == 4)
					{
						func_147(uParam0, &(uParam1->f_189), uParam1[iParam3 /*94*/]);
						func_59(uParam0, 512);
					}
				}
			}
			else if (iVar4 == 75 && func_146(uParam0, uParam1[iParam3 /*94*/], &(uParam1->f_247), uParam1->f_189.f_29, &fVar5))
			{
				vVar11 = { func_284(&(uParam1->f_247)) };
				if (fVar5 > 0f)
				{
					iVar4 = func_140(uParam0, &(uParam1->f_303), &(uParam1->f_535), &vVar11, &uVar18);
					func_235(uParam0, iVar4);
				}
				func_139(uParam0, unk_0x1C0640BA9A7327B3() + 1000);
				if (iVar4 == 75 || fVar5 <= 0f)
				{
					unk_0xA3BF0AA5A2608191(func_266(uParam0));
					func_138(uParam1, uParam0, uParam2, iParam3, iParam5, iParam6, vVar11, bParam7);
					func_278(uParam0, 512);
				}
				if (fVar5 < 5f)
				{
					iVar20 = 0;
					fVar21 = func_70(uParam1->f_1583[iVar20 /*3*/] - uParam0->f_37, uParam0->f_40);
					while (iVar20 < 23 && fVar21 > 0f)
					{
						iVar20++;
						fVar21 = func_70(uParam1->f_1583[iVar20 /*3*/] - uParam0->f_37, uParam0->f_40);
					}
					fVar22 = to_float(func_15(uParam1->f_535[iVar4 /*12*/].f_3));
					iVar23 = (floor((uParam1->f_535[iVar4 /*12*/].f_1 * fVar22)) - iVar20);
					func_150(uParam0, iVar23);
					func_81(&(uParam0->f_4), 1);
				}
			}
			func_82(&(uParam0->f_4), vVar17);
		}
		else if (uParam0->f_31 != 4 && func_169(uParam0) >= (func_168(uParam0) / 2f))
		{
			if (func_105(uParam0, 512))
			{
				func_167(uParam1, uParam0, uParam2, iParam3, iParam5, iParam6, func_284(&(uParam1->f_247)), bParam7);
			}
		}
	}
	if (func_134(uParam0, &(uParam1->f_247), uParam1->f_189.f_29, bVar6))
	{
		iVar28 = (1 - iParam4);
		vVar11 = { func_284(&(uParam1->f_247)) };
		if (func_53(uParam0) == 2)
		{
			func_217(&(uParam1->f_247));
			if (func_133(uParam1[iVar28 /*94*/], &(uParam1->f_189), uParam1->f_1661))
			{
				bVar24 = true;
			}
			else
			{
				bVar25 = true;
				func_231(uParam0, 5);
			}
		}
		else if ((uParam0->f_31 != 4 && func_155(uParam0)) && func_164(uParam0))
		{
			func_132(uParam0);
			func_278(uParam0, 1);
			func_156(uParam0);
			bVar27 = true;
		}
		else if (func_131(uParam0, &(uParam1->f_189), &(uParam1->f_1661), vVar11.z, func_287(&(uParam1->f_247))))
		{
			bVar26 = true;
		}
		if (func_130(&(uParam1->f_247), &(uParam1->f_189), uParam0, uParam1[iVar28 /*94*/]))
		{
			func_279(&(uParam1->f_247), 32);
		}
		func_108(uParam0, uParam1, iParam4, bVar26, bVar27, bVar24, bVar25);
		return 1;
	}
	return 0;
}

void func_108(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	func_129(&iVar0, &iVar1, &iVar2, &iVar2, 1, 1);
	if (uParam0->f_31 != 4)
	{
		if (func_53(uParam0) == 1)
		{
			func_128(&(uParam1->f_247), 1);
		}
		else if (func_53(uParam0) == 3)
		{
			func_128(&(uParam1->f_247), 2);
		}
		else
		{
			func_217(&(uParam1->f_247));
		}
	}
	else if ((func_53(uParam0) != 2 && func_53(uParam0) != 5) && !bParam3)
	{
		func_128(&(uParam1->f_247), func_127(uParam0->f_4.f_20));
	}
	vVar3 = { func_121(uParam0, uParam1, iVar0, iParam2, func_284(&(uParam1->f_247)), bParam3, bParam4, bParam5, bParam6) };
	if (unk_0xC844350D5D58C99A(uParam1->f_247) && unk_0xD59B17D2DFF98E26(uParam1->f_247))
	{
		unk_0x15AFB6CBDE990FB6(uParam1->f_247, 1, true);
	}
	func_114(uParam1, vVar3);
	func_234(uParam0);
	func_218(&(uParam0->f_4), 4);
	func_59(uParam0, 4096);
	func_160(uParam0);
	func_109(uParam0, &(uParam1->f_247), bParam3, bParam4, bParam5, bParam6);
	iVar2 = (1 - iParam2);
	func_218(&((uParam1[iVar2 /*94*/])->f_4), 2);
	func_218(&((uParam1[iVar2 /*94*/])->f_4), 1);
	func_231(uParam1[iVar2 /*94*/], 0);
	func_150(uParam0, 0);
}

void func_109(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	
	if (func_45(func_266(uParam0)) == 17 && unk_0x79833B02DBD2A244(0f, 1f) < 0.5f)
	{
		func_110(uParam0, "TENNIS_EXHERT", func_113(uParam0), 9);
	}
	bVar1 = (bParam5 || bParam4);
	if (bParam2 || bParam3)
	{
		if (func_92(uParam1) == 0)
		{
			unk_0xCEAA091B490F8407(-1, func_196(uParam0->f_31 != 4, "TENNIS_PLYR_SMASH_MASTER", "TENNIS_NPC_SMASH_MASTER"), func_266(uParam0), 0, false, 0);
		}
		else if (func_92(uParam1) == 2)
		{
			unk_0xCEAA091B490F8407(-1, func_196(uParam0->f_31 != 4, "TENNIS_PLYR_SMASH_BACKSLICE_MASTER", "TENNIS_NPC_SMASH_BACKSLICE_MASTER"), func_266(uParam0), 0, false, 0);
		}
		else if (func_92(uParam1) == 1)
		{
			unk_0xCEAA091B490F8407(-1, func_196(uParam0->f_31 != 4, "TENNIS_PLYR_SMASH_MASTER", "TENNIS_NPC_SMASH_MASTER"), func_266(uParam0), 0, false, 0);
		}
		iVar0 = 100;
	}
	else if (bVar1)
	{
		unk_0xCEAA091B490F8407(-1, func_196(uParam0->f_31 != 4, "TENNIS_PLYR_LOB_MASTER", "TENNIS_NPC_LOB_MASTER"), func_266(uParam0), 0, false, 0);
		iVar0 = 60;
	}
	else
	{
		if (func_92(uParam1) == 0)
		{
			unk_0xCEAA091B490F8407(-1, func_196(uParam0->f_31 != 4, "TENNIS_PLYR_FOREARM_MASTER", "TENNIS_NPC_FOREARM_MASTER"), func_266(uParam0), 0, false, 0);
		}
		else if (func_92(uParam1) == 2)
		{
			unk_0xCEAA091B490F8407(-1, func_196(uParam0->f_31 != 4, "TENNIS_PLYR_BACKSLICE_MASTER", "TENNIS_NPC_BACKSLICE_MASTER"), func_266(uParam0), 0, false, 0);
		}
		else if (func_92(uParam1) == 1)
		{
			unk_0xCEAA091B490F8407(-1, func_196(uParam0->f_31 != 4, "TENNIS_PLYR_TOPSPIN_MASTER", "TENNIS_NPC_TOPSPIN_MASTER"), func_266(uParam0), 0, false, 0);
		}
		iVar0 = 80;
	}
	if (uParam0->f_31 != 4)
	{
		unk_0x5E858A00EAFA5B24(0, iVar0, 256);
	}
}

void func_110(var uParam0, char* sParam1, char* sParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, int iParam10)
{
	if (!unk_0xEB6A8945D1AC98A1(func_266(uParam0)))
	{
		func_111(func_266(uParam0), sParam1, &sParam2, iParam10);
	}
}

void func_111(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0xEB0A515D699A7E90(iParam0, sParam1, sParam2, func_112(iParam3), 0);
}

int func_112(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

struct<8> func_113(var uParam0)
{
	return uParam0->f_86;
}

void func_114(var uParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	if (unk_0xC844350D5D58C99A(uParam0->f_247))
	{
		if (uParam0->f_1657 != 1 && !func_276(&(uParam0->f_247)))
		{
			func_275(&(uParam0->f_247));
			func_120(&(uParam0->f_247));
		}
		uParam0->f_247.f_10 = { vParam1 };
		vVar0 = { unk_0x68F4C0EC296D3901(uParam0->f_247, true) };
		if (vVar0.z < uParam0->f_189.f_29.f_2)
		{
			vVar0.z = uParam0->f_189.f_29.f_2;
		}
		func_277(&(uParam0->f_247), vVar0);
		uParam0->f_247.f_16 = { func_284(&(uParam0->f_247)) };
		func_119(&(uParam0->f_247), unk_0xF4CCC8CB6DE7F1AE() + 5);
		func_118(&(uParam0->f_247));
		func_116(&(uParam0->f_247), 1);
		func_101(&(uParam0->f_247), func_102(uParam0));
		func_115(uParam0->f_247, 1);
	}
	func_288(&(uParam0->f_247), 4);
	func_288(&(uParam0->f_247), 16);
}

void func_115(int iParam0, bool bParam1)
{
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		if ((unk_0x4FC40AB0ECCE6E18(iParam0) && !bParam1) || (!unk_0x4FC40AB0ECCE6E18(iParam0) && bParam1))
		{
			unk_0x4A4806F9D471E491(iParam0, bParam1, 0);
			unk_0x69C149C0E43FAF13(iParam0, bParam1);
		}
	}
}

void func_116(var uParam0, bool bParam1)
{
	vector3 vVar0;
	
	if (unk_0xC844350D5D58C99A(*uParam0))
	{
		vVar0 = { func_117(bParam1, func_284(uParam0), unk_0x68F4C0EC296D3901(*uParam0, true)) };
	}
	uParam0->f_27 = { vVar0 };
	uParam0->f_30 = { vVar0 };
	uParam0->f_25 = 0f;
	uParam0->f_26 = 0f;
}

Vector3 func_117(bool bParam0, vector3 vParam1, vector3 vParam2)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam2;
}

void func_118(var uParam0)
{
	uParam0->f_4 = 0f;
	uParam0->f_5 = 0f;
	func_99(uParam0);
}

void func_119(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
}

void func_120(var uParam0)
{
	func_279(uParam0, 1);
}

Vector3 func_121(var uParam0, var uParam1, int iParam2, int iParam3, vector3 vParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	float fVar20;
	float fVar21;
	
	fVar1 = 8f;
	fVar2 = 7.2f;
	fVar3 = 5.5f;
	fVar4 = -1.5f;
	fVar5 = 0.9f;
	fVar6 = (30f * func_126(uParam0));
	fVar7 = fVar6;
	vVar8 = { vParam4 };
	vVar9 = { unk_0xE3C0A5DBED4FBAB7(vVar8, uParam1->f_189.f_32[0 /*3*/], uParam1->f_189.f_32[1 /*3*/], 0) };
	fVar10 = vdist(vVar8, vVar9);
	fVar11 = (vmag(uParam1->f_189.f_3[3 /*3*/] - uParam1->f_189.f_3[0 /*3*/]) / 2f);
	fVar12 = (fVar10 / fVar11);
	if (func_289(&(uParam1->f_247), 64))
	{
		bParam5 = false;
		bParam6 = false;
		bParam7 = true;
		func_231(uParam0, 2);
	}
	if (bParam5)
	{
		fVar6 = 45f;
		fVar1 = 15f;
		fVar2 = 0f;
		fVar3 = 7.5f;
		fVar4 = -2f;
	}
	else if (bParam6)
	{
		fVar6 = (fVar6 + 10f);
	}
	else if (bParam7)
	{
		fVar2 = 15f;
		fVar3 = 12.5f;
		fVar4 = 1.38f;
		fVar5 = func_125(8f, 15f, fVar12);
		fVar7 = 14.35f;
		fVar1 = 12.325f;
		fVar6 = func_125(15f, 30f, fVar12);
	}
	else if (bParam8)
	{
		fVar6 = 27.55f;
		fVar7 = 7f;
		fVar4 = 0f;
		fVar1 = 3f;
		fVar5 = 1.58f;
	}
	fVar13 = (vVar8.z - uParam1->f_189.f_29.f_2);
	fVar14 = (fVar13 / 2f);
	fVar15 = func_125(fVar6, fVar7, fVar14);
	fVar16 = func_125(fVar15, fVar6, fVar12);
	fVar17 = func_125(fVar1, fVar16, fVar12);
	fVar18 = func_125(fVar17, fVar16, fVar14);
	if (uParam0->f_31 != 4)
	{
		vVar0 = { func_124(uParam0, &(uParam1->f_189), vVar8, iParam2) };
	}
	else
	{
		iVar19 = (1 - iParam3);
		vVar0 = { func_122(uParam0, uParam1, &(uParam1->f_247.f_16), &((uParam1[iVar19 /*94*/])->f_37), iParam3) };
	}
	fVar20 = func_125(fVar2, fVar3, fVar12);
	fVar21 = func_125(fVar4, fVar5, fVar12);
	vVar0.z = func_125(fVar20, fVar21, fVar14);
	vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
	vVar0 = { vVar0 * Vector(fVar18, fVar18, fVar18) };
	return vVar0;
}

Vector3 func_122(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	
	iVar0 = func_51(uParam0->f_1 == 0, 3, 1);
	iVar1 = func_51(uParam0->f_1 == 0, 2, 0);
	iVar2 = (1 - iParam4);
	if (uParam0->f_4.f_20 == 0 || func_289(&(uParam1->f_247), 64))
	{
		vVar4 = { FtoV(unk_0x79833B02DBD2A244(-1f, 1f)) * uParam0->f_43 };
		vVar3 = { *uParam2 + vVar4 - uParam0->f_37 };
		if (func_289(&(uParam1->f_247), 64))
		{
			func_288(&(uParam1->f_247), 64);
		}
	}
	else if (uParam0->f_4.f_20 == 1)
	{
		fVar5 = unk_0x79833B02DBD2A244(-0.15f, 1.15f);
		vVar8 = { uParam1->f_189.f_3[iVar1 /*3*/] - uParam1->f_189.f_3[iVar0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
		if (vdist2(*uParam3, uParam1->f_189.f_3[iVar0 /*3*/]) > vdist2(*uParam3, uParam1->f_189.f_3[iVar1 /*3*/]))
		{
			vVar6 = { uParam1->f_189.f_3[iVar0 /*3*/] };
			vVar7 = { vVar6 + vVar8 };
		}
		else
		{
			vVar6 = { uParam1->f_189.f_3[iVar0 /*3*/] + vVar8 };
			vVar7 = { uParam1->f_189.f_3[iVar1 /*3*/] };
		}
		vVar9 = { func_123(vVar6, vVar7, fVar5) };
		vVar3 = { vVar9 - func_284(&(uParam1->f_247)) };
	}
	else if (uParam0->f_4.f_20 == 2)
	{
		bVar12 = false;
		fVar13 = vdist2(uParam1->f_189.f_3[0 /*3*/], *uParam3);
		fVar14 = vdist2(uParam1->f_189.f_3[1 /*3*/], *uParam3);
		fVar15 = unk_0x755FF954DAE327E1((fVar13 - fVar14));
		fVar16 = func_125(0.75f, 0.05f, (fVar15 / 90f));
		fVar17 = unk_0x79833B02DBD2A244(0f, 1f);
		switch (func_53(uParam0))
		{
			case 0:
				vVar11 = { uParam0->f_40 * Vector(-1f, -1f, -1f) };
				break;
			
			case 1:
				vVar11 = { uParam0->f_40 * Vector(-2f, -2f, -2f) };
				break;
			
			case 3:
				vVar11 = { uParam0->f_40 * Vector(0f, 0f, 0f) };
				break;
		}
		if (fVar17 < fVar16 && func_229(&(uParam0->f_4), 128))
		{
			bVar12 = true;
			func_129(&iVar18, &iVar19, &iVar19, &iVar19, 1, 1);
			if (iVar18 > 15)
			{
				iVar19 = func_51(uParam0->f_1 == 0, 2, 0);
				vVar10 = { uParam1->f_189.f_3[iVar19 /*3*/] + vVar11 };
			}
			else if (iVar18 < -15)
			{
				iVar19 = func_51(uParam0->f_1 == 0, 3, 1);
				vVar10 = { uParam1->f_189.f_3[iVar19 /*3*/] + vVar11 };
			}
			else
			{
				bVar12 = false;
			}
		}
		if (fVar13 > fVar14 && !bVar12)
		{
			if (uParam0->f_1 == 0)
			{
				fVar13 = vdist2(uParam1->f_189.f_3[0 /*3*/], uParam0->f_37);
				fVar14 = vdist2(uParam1->f_189.f_3[1 /*3*/], uParam0->f_37);
				if (func_66(iVar2, uParam1, 0, 0))
				{
					vVar10 = { uParam1->f_189.f_3[3 /*3*/] + vVar11 };
				}
				else if (fVar13 < fVar14)
				{
					vVar10 = { uParam1->f_189.f_3[3 /*3*/] + uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + vVar11 };
				}
				else
				{
					vVar10 = { uParam1->f_189.f_3[3 /*3*/] + vVar11 };
				}
			}
			else
			{
				fVar13 = vdist2(uParam1->f_189.f_3[3 /*3*/], uParam0->f_37);
				fVar14 = vdist2(uParam1->f_189.f_3[2 /*3*/], uParam0->f_37);
				if (func_66(iVar2, uParam1, 0, 0))
				{
					vVar10 = { uParam1->f_189.f_3[0 /*3*/] + vVar11 };
				}
				else if (fVar13 < fVar14)
				{
					vVar10 = { uParam1->f_189.f_3[0 /*3*/] - uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + vVar11 };
				}
				else
				{
					vVar10 = { uParam1->f_189.f_3[0 /*3*/] + vVar11 };
				}
			}
		}
		else if (!bVar12)
		{
			if (uParam0->f_1 == 0)
			{
				fVar13 = vdist2(uParam1->f_189.f_3[1 /*3*/], uParam0->f_37);
				fVar14 = vdist2(uParam1->f_189.f_3[0 /*3*/], uParam0->f_37);
				if (func_66(iVar2, uParam1, 0, 0))
				{
					vVar10 = { uParam1->f_189.f_3[2 /*3*/] + vVar11 };
				}
				else if (fVar13 < fVar14)
				{
					vVar10 = { uParam1->f_189.f_3[2 /*3*/] - uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + vVar11 };
				}
				else
				{
					vVar10 = { uParam1->f_189.f_3[2 /*3*/] + vVar11 };
				}
			}
			else
			{
				fVar13 = vdist2(uParam1->f_189.f_3[2 /*3*/], uParam0->f_37);
				fVar14 = vdist2(uParam1->f_189.f_3[3 /*3*/], uParam0->f_37);
				if (func_66(iVar2, uParam1, 0, 0))
				{
					vVar10 = { uParam1->f_189.f_3[1 /*3*/] + vVar11 };
				}
				else if (fVar13 < fVar14)
				{
					vVar10 = { uParam1->f_189.f_3[1 /*3*/] + uParam0->f_43 * Vector(1.5f, 1.5f, 1.5f) + vVar11 };
				}
				else
				{
					vVar10 = { uParam1->f_189.f_3[1 /*3*/] + vVar11 };
				}
			}
		}
		vVar3 = { vVar10 - func_284(&(uParam1->f_247)) };
	}
	else
	{
		vVar3 = { *uParam2 - uParam0->f_37 };
	}
	return vVar3;
}

Vector3 func_123(vector3 vParam0, vector3 vParam1, float fParam2)
{
	return FtoV((1f - fParam2)) * vParam0 + Vector(fParam2, fParam2, fParam2) * vParam1;
}

Vector3 func_124(var uParam0, var uParam1, vector3 vParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	float fVar8;
	vector3 vVar9;
	
	vVar1 = { 0f, 0f, 0f };
	vVar2 = { 0f, 0f, 0f };
	iVar3 = func_51(uParam0->f_1 == 0, 3, 1);
	iVar4 = func_51(uParam0->f_1 == 0, 2, 0);
	vVar5 = { uParam1->f_3[1 /*3*/] - uParam1->f_3[0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
	if (!func_77(vParam2, uParam1->f_3[0 /*3*/] + vVar5, uParam1->f_3[3 /*3*/] + vVar5, func_78(uParam1)))
	{
		fVar6 = func_125(0.4f, 1f, unk_0x79833B02DBD2A244(0f, 1f));
		if (func_70(uParam0->f_43, uParam0->f_37 - uParam1->f_3[0 /*3*/]) < 0f)
		{
			vVar1 = { uParam0->f_43 * Vector(fVar6, fVar6, fVar6) };
		}
		if (func_70(uParam0->f_43, uParam0->f_37 - uParam1->f_3[1 /*3*/]) >= 0f)
		{
			vVar2 = { uParam0->f_43 * Vector(fVar6, fVar6, fVar6) * Vector(-1f, -1f, -1f) };
		}
	}
	vVar7 = { unk_0xE3C0A5DBED4FBAB7(uParam0->f_37, uParam1->f_3[iVar3 /*3*/], uParam1->f_3[iVar4 /*3*/], 1) };
	if (unk_0x51D1D19912234EA0(iParam3) > 15)
	{
		if (iParam3 > 0)
		{
			fVar8 = (to_float(iParam3) / to_float(128));
			vVar9 = { func_123(vVar7, uParam1->f_3[iVar4 /*3*/] + vVar2, fVar8) };
		}
		else
		{
			fVar8 = (to_float(iParam3) / to_float(-128));
			vVar9 = { func_123(vVar7, uParam1->f_3[iVar3 /*3*/] + vVar1, fVar8) };
		}
		vVar0 = { vVar9 - vParam2 };
	}
	else
	{
		vVar0 = { vVar7 - vParam2 };
	}
	return vVar0;
}

float func_125(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

float func_126(var uParam0)
{
	return uParam0->f_66;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			if (unk_0x79833B02DBD2A244(0f, 1f) < 0.3f)
			{
				if (unk_0x79833B02DBD2A244(0f, 1f) < 0.5f)
				{
					return 1;
				}
				else
				{
					return 2;
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (unk_0x79833B02DBD2A244(0f, 1f) < 0.2f)
			{
				if (unk_0x79833B02DBD2A244(0f, 1f) < 0.6f)
				{
					return 1;
				}
				else
				{
					return 2;
				}
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

void func_128(var uParam0, int iParam1)
{
	uParam0->f_22 = iParam1;
}

void func_129(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (iParam5 == 0)
	{
		if (bParam4)
		{
			fVar0 = unk_0x4F3973434662D795(0, 218);
			fVar1 = unk_0x4F3973434662D795(0, 219);
			fVar2 = unk_0x4F3973434662D795(0, 220);
			fVar3 = unk_0x4F3973434662D795(0, 221);
		}
		else
		{
			fVar0 = unk_0x4B7163B4D6E4A3C2(0, 218);
			fVar1 = unk_0x4B7163B4D6E4A3C2(0, 219);
			fVar2 = unk_0x4B7163B4D6E4A3C2(0, 220);
			fVar3 = unk_0x4B7163B4D6E4A3C2(0, 221);
		}
	}
	else if (bParam4)
	{
		fVar0 = unk_0x659FAE9DBE6F38F5(0, 218);
		fVar1 = unk_0x659FAE9DBE6F38F5(0, 219);
		fVar2 = unk_0x659FAE9DBE6F38F5(0, 220);
		fVar3 = unk_0x659FAE9DBE6F38F5(0, 221);
	}
	else
	{
		fVar0 = unk_0x8A6BC5D9CAEACD0F(0, 218);
		fVar1 = unk_0x8A6BC5D9CAEACD0F(0, 219);
		fVar2 = unk_0x8A6BC5D9CAEACD0F(0, 220);
		fVar3 = unk_0x8A6BC5D9CAEACD0F(0, 221);
	}
	*iParam0 = round((128f * fVar0));
	*iParam1 = round((128f * fVar1));
	*uParam2 = round((128f * fVar2));
	*uParam3 = round((128f * fVar3));
}

int func_130(var uParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	float fVar1;
	
	if (uParam2->f_31 == 4)
	{
		return 0;
	}
	if (func_53(uParam3) != 2)
	{
		return 0;
	}
	if (func_53(uParam2) == 2)
	{
		return 0;
	}
	if (func_287(uParam0) >= 1)
	{
		return 0;
	}
	vVar0 = { func_284(uParam0) };
	fVar1 = (vVar0.z - uParam1->f_29.f_2);
	if (fVar1 < 0.1f)
	{
		return 0;
	}
	return 1;
}

int func_131(var uParam0, var uParam1, var uParam2, float fParam3, int iParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (func_76(uParam0) == 72 || func_76(uParam0) == 73)
	{
		return 0;
	}
	fVar0 = (fParam3 - uParam1->f_3[0 /*3*/].f_2);
	bVar1 = (uParam0->f_31 != 4 || uParam0->f_4.f_20 > 0);
	bVar2 = iParam4 < 1;
	if (!bVar1)
	{
		return 0;
	}
	if (!bVar2)
	{
		return 0;
	}
	if (!func_133(uParam0, uParam1, *uParam2))
	{
		return 0;
	}
	if (fVar0 < 0.8f)
	{
		return 0;
	}
	return 1;
}

void func_132(var uParam0)
{
	uParam0->f_63 = 0f;
}

bool func_133(var uParam0, var uParam1, vector3 vParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	
	vVar0 = { uParam1->f_16[0 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
	vVar1 = { uParam1->f_16[3 /*3*/] + vParam2 * Vector(0.5f, 0.5f, 0.5f) };
	uVar2 = func_77(uParam0->f_37, vVar0, vVar1, func_78(uParam1));
	return uVar2;
}

int func_134(var uParam0, var uParam1, vector3 vParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	float fVar11;
	
	if (!bParam3)
	{
		return 0;
	}
	if (func_76(uParam0) == 75)
	{
		return 0;
	}
	if (!unk_0xEB6A8945D1AC98A1(func_266(uParam0)) && unk_0xC7AD44C77841DD56(func_266(uParam0)))
	{
		return 0;
	}
	if (func_137(uParam0) > unk_0xF4CCC8CB6DE7F1AE())
	{
		return 0;
	}
	if (!func_105(uParam0, 1024))
	{
		return 0;
	}
	if (!func_105(uParam0, 512))
	{
		return 0;
	}
	if (func_105(uParam0, 8))
	{
		return 0;
	}
	if (func_229(&(uParam0->f_4), 16))
	{
		return 0;
	}
	vVar0 = { func_284(uParam1) };
	if (func_70(uParam0->f_40, vVar0 - vParam2) > 0f)
	{
		return 0;
	}
	fVar1 = 2f;
	if (func_76(uParam0) == 72 || func_76(uParam0) == 73)
	{
		fVar1 = 0.45f;
	}
	else if (func_16(uParam0) > 5)
	{
		fVar1 = 1.5f;
	}
	fVar2 = vdist2(vVar0, func_136(uParam0));
	if (fVar2 > (fVar1 * fVar1))
	{
		return 0;
	}
	vVar3 = { func_136(uParam0) };
	vVar4 = { vVar0 - vVar3 };
	fVar5 = func_70(uParam0->f_43, vVar4);
	fVar6 = func_70(uParam0->f_40, vVar4);
	fVar7 = func_70(0f, 0f, 1f, vVar4);
	vVar8 = { unk_0x64430C979F516F7A(func_266(uParam0), 60309, 0f, 0f, 0f) };
	vVar9 = { vVar0 - vVar8 };
	fVar10 = func_70(uParam0->f_43, vVar9);
	fVar11 = (unk_0x755FF954DAE327E1(fVar5) - unk_0x755FF954DAE327E1(fVar10));
	fVar11 = (fVar11 * 0.3f);
	if (!func_135(uParam0->f_33, &vVar8, &(uParam0->f_40), &vVar0, &(uParam1->f_10)))
	{
		return 0;
	}
	if (unk_0x755FF954DAE327E1(fVar5) > (0.65f + fVar11))
	{
		return 0;
	}
	if (fVar6 < -0.9f)
	{
		return 0;
	}
	if (fVar7 > 0.9f)
	{
		return 0;
	}
	func_277(uParam1, vVar0);
	unk_0xA47B46945FF6DE74(*uParam1, vVar0, 1, false, 0, 1);
	return 1;
}

int func_135(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	float fVar4;
	vector3 vVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		unk_0x61890296D3AA030F(iParam0, &uVar2, &uVar1, &vVar3, &vVar0);
		vVar0 = { vVar0 + vVar3 * Vector(0.4f, 0.4f, 0.4f) };
		fVar4 = unk_0x6117725E0134737F();
		*uParam3 = { *uParam3 + *uParam4 * Vector(fVar4, fVar4, fVar4) };
		vVar5 = { *uParam1 };
		fVar6 = func_70(*uParam3 - vVar5, *uParam2);
		bVar7 = fVar6 < 0.35f;
		if (bVar7)
		{
			fVar8 = func_70(*uParam4, *uParam2);
			if (fVar8 < 0f)
			{
				fVar9 = (fVar6 / fVar8);
				fVar9 = func_12(fVar9, 0f, fVar4);
				*uParam3 = { *uParam3 - *uParam4 * Vector(fVar9, fVar9, fVar9) };
				fVar10 = func_70(*uParam3 - vVar0, *uParam2);
				if (fVar10 < -0.1f)
				{
					*uParam3 = { *uParam3 - *uParam2 * Vector(fVar10, fVar10, fVar10) };
				}
			}
			else
			{
				*uParam3 = { *uParam3 - *uParam2 * Vector(fVar6, fVar6, fVar6) };
			}
		}
		return bVar7;
	}
	return 0;
}

Vector3 func_136(var uParam0)
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	
	if (unk_0xC844350D5D58C99A(uParam0->f_33))
	{
		unk_0xC01410D88E471560(uParam0->f_33);
		unk_0x61890296D3AA030F(uParam0->f_33, &uVar2, &uVar1, &vVar3, &vVar0);
		vVar0 = { vVar0 + vVar3 * Vector(0.4f, 0.4f, 0.4f) };
	}
	return vVar0;
}

int func_137(var uParam0)
{
	return uParam0->f_56;
}

void func_138(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, bool bParam7)
{
	float fVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	bool bVar4;
	
	if (!func_105(uParam1, 1024))
	{
		fVar0 = func_70(uParam1->f_43, vParam6 - uParam1->f_37);
		iVar1 = func_266(uParam1);
		sVar2 = "mini@tennis";
		sVar3 = func_196(fVar0 > 0f, "react_ball_out", "react_ball_out_lt");
		bVar4 = false;
		unk_0xA3BF0AA5A2608191(iVar1);
		unk_0x39C50C474849547D(iVar1, sVar2, sVar3, 0f, 1f, 1);
		func_59(uParam1, 1024);
		func_81(&(uParam1->f_4), 16);
		func_8(uParam1, unk_0x1C0640BA9A7327B3() + 2442);
		if ((1 && !func_229(&((uParam0[iParam3 /*94*/])->f_4), 256)) && unk_0x1C0640BA9A7327B3() > func_255(uParam0[iParam3 /*94*/]))
		{
			iParam5 = (1 - iParam5);
			if (bParam7)
			{
				bVar4 = (((*uParam2)[0 /*8*/] + (*uParam2)[1 /*8*/]) + 1 % 6) == false;
				if (unk_0xEAE0D21A50E6C7F4(((*uParam2)[0 /*8*/] + (*uParam2)[1 /*8*/]) + 1, 0) || bVar4)
				{
					iParam5 = 1;
					iParam4 = (1 - iParam4);
				}
			}
			else if (uParam0->f_1657 == 1)
			{
				if (((*uParam2)[0 /*8*/] >= 4 && ((*uParam2)[0 /*8*/] - (*uParam2)[1 /*8*/]) >= 2) || ((*uParam2)[1 /*8*/] >= 4 && ((*uParam2)[1 /*8*/] - (*uParam2)[0 /*8*/]) >= 2))
				{
					iParam4 = (1 - iParam4);
				}
			}
			if (iParam3 == iParam4)
			{
				func_81(&((uParam0[iParam3 /*94*/])->f_4), 256);
				func_228(uParam0[iParam3 /*94*/], uParam0, iParam5, iParam3, 0, 0, 0, 1, bVar4, 0);
			}
			else
			{
				func_81(&((uParam0[iParam3 /*94*/])->f_4), 256);
				func_219(uParam0[iParam3 /*94*/], uParam0, iParam5, iParam3, 0, 1, bVar4, 0, 0);
			}
		}
	}
}

void func_139(var uParam0, var uParam1)
{
	uParam0->f_65 = uParam1;
}

int func_140(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	float fVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	vector3 vVar12;
	vector3 vVar13;
	var uVar14;
	float fVar15;
	float fVar16;
	
	iVar0 = 75;
	fVar1 = 1000f;
	unk_0x6DE022225BD968DB(*uParam3, *uParam4, uParam0->f_37, uParam0->f_40, &fVar2);
	fVar5 = func_145(uParam0->f_31 != 4, 0.5f, 1.2f);
	if (fVar2 <= fVar5)
	{
		return 75;
	}
	vVar6 = { *uParam4 - *uParam3 * Vector(fVar2, fVar2, fVar2) };
	vVar7 = { *uParam3 + vVar6 };
	vVar7.z = uParam3->f_2;
	fVar8 = (vVar7.z - uParam0->f_37.f_2);
	if (fVar8 > 2f)
	{
		return 75;
	}
	iVar9 = 0;
	while (iVar9 < (77 - 1))
	{
		if (((uParam2[iVar9 /*12*/])->f_1 >= 0f && iVar9 != 72) && iVar9 != 73)
		{
			vVar3 = { func_86(uParam0, *(uParam1[iVar9 /*3*/])) };
			vVar4 = { uParam0->f_37 + vVar3 };
			fVar10 = vdist2(vVar4, vVar7);
			if (fVar10 < fVar1)
			{
				fVar1 = fVar10;
				iVar0 = iVar9;
			}
		}
		iVar9++;
	}
	vVar12 = { vVar7 + uParam0->f_40 };
	vVar13 = { vVar7 - uParam0->f_40 };
	if (iVar0 == 72)
	{
		iVar11 = func_144(uParam0, &vVar12, &vVar13, &vLocal_242, &vLocal_244, &vLocal_245, 0, &fVar15, &fVar16, &uVar14);
		if (iVar11 == 0)
		{
			func_143(uParam0, 0.5f);
			func_142(uParam0, 1f);
			func_141(uParam0, 2);
		}
		else
		{
			func_143(uParam0, fVar15);
			func_142(uParam0, fVar16);
			func_141(uParam0, iVar11);
			iVar0 = 75;
		}
	}
	else if (iVar0 == 73)
	{
		iVar11 = func_144(uParam0, &vVar12, &vVar13, &vLocal_238, &vLocal_240, &vLocal_241, 1, &fVar15, &fVar16, &uVar14);
		if (iVar11 == 0)
		{
			func_143(uParam0, 0.5f);
			func_142(uParam0, 1f);
			func_141(uParam0, 2);
		}
		else
		{
			func_143(uParam0, fVar15);
			func_142(uParam0, fVar16);
			func_141(uParam0, iVar11);
			iVar0 = 75;
		}
	}
	return iVar0;
}

void func_141(var uParam0, int iParam1)
{
	uParam0->f_52 = iParam1;
}

void func_142(var uParam0, float fParam1)
{
	uParam0->f_71 = fParam1;
}

void func_143(var uParam0, float fParam1)
{
	uParam0->f_70 = fParam1;
}

int func_144(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6, float fParam7, float fParam8, var uParam9)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	var uVar4;
	vector3 vVar5;
	
	fVar0 = 0f;
	unk_0x6DE022225BD968DB(*uParam1, *uParam2, uParam0->f_37, uParam0->f_40, &fVar0);
	if (fVar0 < 0f || fVar0 > 1f)
	{
		return 0;
	}
	vVar1 = { *uParam1 + *uParam2 - *uParam1 * Vector(fVar0, fVar0, fVar0) };
	vVar2 = { vVar1 - uParam0->f_37 };
	fVar3 = func_70(vVar2, uParam0->f_43);
	if (unk_0x755FF954DAE327E1(fVar3) < 2.85f)
	{
		return 0;
	}
	uVar4 = vVar2.z;
	vVar5 = { fVar3, 0f, uVar4 };
	*fParam7 = unk_0x89AA362D00A86F72(vVar5, *uParam5, *uParam3, 0);
	*fParam8 = unk_0x89AA362D00A86F72(vVar5, func_117(bParam6, *uParam5, *uParam4), func_117(bParam6, *uParam4, *uParam5), 0);
	if (((*fParam7 < 0f || *fParam7 > 2f) || *fParam8 < 0f) || *fParam8 > 2f)
	{
		return 0;
	}
	*uParam9 = { vVar1 };
	return 2;
}

float func_145(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_146(var uParam0, var uParam1, var uParam2, vector3 vParam3, var uParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	
	if (unk_0xD59B17D2DFF98E26(*uParam2))
	{
		return 0;
	}
	if (func_53(uParam1) == 2 && func_287(uParam2) <= 1)
	{
		return 0;
	}
	if (uParam0->f_31 != 4)
	{
		if (!func_105(uParam0, 512))
		{
			return 0;
		}
		if (vdist2(uParam0->f_37, func_284(uParam2)) > (20f * 20f))
		{
			return 0;
		}
		if (func_229(&(uParam0->f_4), 1))
		{
			return 0;
		}
		*uParam4 = 0f;
		*uParam4 = func_70(uParam0->f_40, func_284(uParam2) - uParam0->f_37);
		vVar0 = { uParam2->f_10 };
		vVar1 = { func_284(uParam2) };
		vVar0.z = 0f;
		vVar1.z = vParam3.z;
		vVar2 = { vParam3 - vVar1 };
		fVar3 = func_70(vVar0, vVar2);
		if (*uParam4 > 2f && fVar3 < 0f)
		{
			return 0;
		}
		if (*uParam4 > 2f && *uParam4 < 7.6f)
		{
			return 0;
		}
		if (*uParam4 < 0.5f)
		{
			return 1;
		}
		if (((!unk_0xB9132A06AE472728(0, 223) && !unk_0xB9132A06AE472728(0, 224)) && !unk_0xB9132A06AE472728(0, 225)) && !unk_0xB9132A06AE472728(0, 222))
		{
			return 0;
		}
	}
	else
	{
		if (!func_229(&(uParam0->f_4), 64))
		{
			return 0;
		}
		if (func_229(&(uParam0->f_4), 1))
		{
			return 0;
		}
		if (func_229(&(uParam0->f_4), 16))
		{
			return 0;
		}
		fVar4 = func_70(uParam0->f_40, func_284(uParam2) - uParam0->f_37);
		if (fVar4 > 1.2f)
		{
			return 0;
		}
	}
	return 1;
}

void func_147(var uParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	
	if (func_34(&(uParam0->f_4)) != 2)
	{
		if (func_148(&(uParam0->f_4)) == 3)
		{
			func_231(uParam0, 0);
		}
		else if (func_148(&(uParam0->f_4)) == 4)
		{
			func_231(uParam0, 2);
		}
		else
		{
			func_231(uParam0, 0);
		}
	}
	else
	{
		vVar5 = { uParam1->f_3[1 /*3*/] - uParam1->f_3[0 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
		vVar6 = { uParam1->f_3[0 /*3*/] + vVar5 };
		vVar7 = { uParam1->f_3[3 /*3*/] + vVar5 };
		fVar0 = vdist(vVar6, uParam2->f_37);
		fVar1 = vdist(vVar7, uParam2->f_37);
		fVar2 = unk_0x755FF954DAE327E1((fVar0 - fVar1));
		fVar3 = func_125(0.15f, 0.5f, (fVar2 / 570f));
		fVar4 = unk_0x79833B02DBD2A244(0f, 1f);
		if (fVar4 < fVar3)
		{
			func_231(uParam0, 2);
		}
		else
		{
			func_231(uParam0, 0);
		}
	}
}

int func_148(var uParam0)
{
	return uParam0->f_19;
}

void func_149(var uParam0, var uParam1)
{
	uParam0->f_56 = uParam1;
}

void func_150(var uParam0, int iParam1)
{
	uParam0->f_53 = iParam1;
}

void func_151(var uParam0)
{
	float fVar0;
	float fVar1;
	
	switch (func_148(uParam0))
	{
		case 3:
		case 4:
			break;
		
		default:
			fVar0 = unk_0x79833B02DBD2A244(0f, 1f);
			fVar1 = func_145(uParam0->f_20 == 2, 0.6f, 0.75f);
			if (fVar0 < fVar1)
			{
				func_236(uParam0, 3);
			}
			else
			{
				func_236(uParam0, 4);
			}
			break;
	}
}

int func_152(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	vector3 vVar27;
	vector3 vVar28;
	vector3 vVar29;
	vector3 vVar30;
	float fVar31;
	float fVar32;
	int iVar33;
	float fVar34;
	vector3 vVar35;
	float fVar36;
	float fVar37;
	
	iVar0 = 75;
	fVar1 = 0.75f;
	fVar2 = 100f;
	unk_0x6DE022225BD968DB(*(uParam4[0 /*3*/]), *(uParam4[1 /*3*/]), uParam0->f_37, uParam0->f_40, &fVar6);
	vVar7 = { *(uParam4[1 /*3*/]) - *(uParam4[0 /*3*/]) * Vector(fVar6, fVar6, fVar6) };
	vVar8 = { *(uParam4[0 /*3*/]) + vVar7 };
	vVar9 = { vVar8 - uParam0->f_37 };
	fVar10 = func_70(vVar9, uParam0->f_43);
	iVar11 = -1;
	iVar12 = -1;
	iVar13 = 0;
	while (iVar13 < 10)
	{
		if (iVar11 == -1 && (fVar10 - 0.2f) <= uParam1->f_1571[iVar13 + 1])
		{
			iVar11 = iVar13;
		}
		if (iVar12 == -1 && (fVar10 + 0.2f) <= uParam1->f_1571[iVar13 + 1])
		{
			iVar12 = iVar13;
		}
		iVar13++;
	}
	if (iVar11 == -1)
	{
		iVar11 = func_51(fVar10 > 0f, 9, 0);
	}
	if (iVar12 == -1)
	{
		iVar12 = func_51(fVar10 > 0f, 9, 0);
	}
	vVar15 = { uParam0->f_37 };
	iVar14 = 0;
	while (iVar14 <= 3)
	{
		iVar13 = iVar11;
		while (iVar13 <= iVar12)
		{
			iVar17 = 0;
			while (iVar17 < 10)
			{
				iVar18 = uParam1->f_1460[iVar13 /*11*/][iVar17];
				iVar17++;
				if ((uParam3[iVar18 /*12*/])->f_1 >= 0f)
				{
					fVar19 = ((((uParam3[iVar18 /*12*/])->f_1 - (*uParam3)[iVar18 /*12*/]) * IntToFloat((uParam3[iVar18 /*12*/])->f_3)) * 0.03333334f);
					fVar20 = ((fVar19 - uParam1->f_247.f_33) / 0.03333334f);
					iVar21 = floor(fVar20);
					fVar22 = (fVar20 - to_float(iVar21));
					iVar3 = (iVar14 + iVar21) - 2;
					if (iVar3 < (*uParam4 - 2) && iVar3 >= 0)
					{
						if (iVar14 == 0 && (iVar18 == 72 || iVar18 == 73))
						{
							fVar24 = -1f;
							fVar25 = -1f;
							if (iVar18 == 72)
							{
								iVar23 = func_144(uParam0, uParam4[8 /*3*/], uParam4[9 /*3*/], &vLocal_242, &vLocal_244, &vLocal_245, 0, &fVar24, &fVar25, &vVar16);
							}
							else
							{
								iVar23 = func_144(uParam0, uParam4[8 /*3*/], uParam4[9 /*3*/], &vLocal_238, &vLocal_240, &vLocal_241, 1, &fVar24, &fVar25, &vVar16);
							}
							if (iVar23 != 0)
							{
								fVar26 = func_85(iVar18);
								if (fVar26 < fVar1)
								{
									fVar1 = fVar26;
									iVar0 = iVar18;
									func_143(uParam0, fVar24);
									func_142(uParam0, fVar25);
									func_141(uParam0, iVar23);
									vVar5 = { vVar16 };
								}
							}
						}
						else if (iVar18 != 72 && iVar18 != 73)
						{
							vVar4 = { func_86(uParam0, *(uParam2[iVar18 /*3*/])) };
							vVar27 = { vVar15 + vVar4 };
							vVar28 = { func_123(*(uParam4[iVar3 /*3*/]), *(uParam4[iVar3 + 1 /*3*/]), fVar22) };
							vVar29 = { vVar28 - vVar4 };
							vVar29.z = uParam0->f_37.f_2;
							vVar30 = { vVar27 - vVar28 };
							fVar31 = func_70(vVar30, uParam0->f_40);
							fVar32 = func_70(uParam0->f_40, func_284(&(uParam1->f_247)) - uParam0->f_37);
							iVar33 = 0;
							while (((fVar31 > 0f && (iVar3 - iVar33) > 2) && func_153(uParam0)) && fVar32 > 0f)
							{
								iVar33++;
								vVar28 = { unk_0xE3C0A5DBED4FBAB7(vVar27, *(uParam4[(iVar3 - iVar33) /*3*/]), *(uParam4[((iVar3 - iVar33) - 1) /*3*/]), 1) };
								vVar30 = { vVar27 - vVar28 };
								fVar31 = func_70(vVar30, uParam0->f_40);
							}
							if (unk_0x755FF954DAE327E1(fVar31) > 0.3f)
							{
								fVar31 = (fVar31 * (0.3f / unk_0x755FF954DAE327E1(fVar31)));
							}
							vVar30 = { vVar30 - uParam0->f_40 * Vector(fVar31, fVar31, fVar31) };
							fVar34 = vmag(vVar30);
							if (fVar34 < 0.15f)
							{
								fVar34 = 0f;
							}
							fVar34 = (fVar34 + func_85(iVar18));
							if (fVar34 < fVar1)
							{
								vVar35 = { uParam0->f_37 - vVar28 };
								fVar36 = func_70(vVar30, vVar35);
								if (fVar36 > 0f)
								{
									if (fVar34 > 0.25f)
									{
										fVar37 = (2.5f * (fVar34 - 0.25f));
										fVar34 = (fVar34 + fVar37);
									}
								}
							}
							if (fVar34 < fVar2)
							{
								fVar2 = fVar34;
								vVar5 = { vVar28 };
							}
							if (fVar34 < fVar1)
							{
								if (iVar14 > 0)
								{
								}
								fVar1 = fVar34;
								iVar0 = iVar18;
								*uParam5 = { vVar29 };
								*uParam6 = (iVar33 - iVar14);
								vVar5 = { vVar28 };
							}
						}
					}
				}
			}
			iVar13++;
		}
		*uParam7 = { vVar5 };
		if (fVar1 <= 0.4f)
		{
			return iVar0;
		}
		if (iVar0 != 75)
		{
			return iVar0;
		}
		if (uParam0->f_31 == 4)
		{
			return 75;
		}
		iVar14++;
	}
	return iVar0;
}

int func_153(var uParam0)
{
	if (uParam0->f_31 == 4)
	{
		return 0;
	}
	return 1;
}

int func_154(var uParam0, vector3 vParam1, bool bParam2)
{
	if (!bParam2)
	{
		return 0;
	}
	if (func_76(uParam0) != 75)
	{
		return 0;
	}
	if (vdist(uParam0->f_37, vParam1) > 100f)
	{
		return 0;
	}
	if (func_229(&(uParam0->f_4), 32))
	{
		return 0;
	}
	return 1;
}

bool func_155(var uParam0)
{
	return uParam0->f_64 > 0.5f;
}

void func_156(var uParam0)
{
	uParam0->f_64 = 0f;
}

void func_157(var uParam0)
{
	uParam0->f_64 = (uParam0->f_64 + unk_0x6117725E0134737F());
}

void func_158(var uParam0)
{
	uParam0->f_60 = (uParam0->f_60 + unk_0x6117725E0134737F());
}

void func_159(var uParam0)
{
	uParam0->f_61 = (uParam0->f_61 + unk_0x6117725E0134737F());
}

void func_160(var uParam0)
{
	uParam0->f_61 = 0f;
}

float func_161(var uParam0)
{
	return uParam0->f_61;
}

void func_162(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	
	*bParam2 = 0;
	*bParam3 = 0;
	switch (func_148(&(uParam0->f_4)))
	{
		case 2:
			if (unk_0xC844350D5D58C99A(uParam1->f_247) && func_287(&(uParam1->f_247)) > 0)
			{
				fVar0 = unk_0x79833B02DBD2A244(0f, 1f);
				fVar1 = func_145(uParam0->f_4.f_20 == 2, 0.6f, 0.75f);
				if (fVar0 < fVar1)
				{
					if (!func_229(&(uParam0->f_4), 2))
					{
						*bParam2 = 1;
						func_81(&(uParam0->f_4), 2);
					}
					func_236(&(uParam0->f_4), 3);
				}
				else
				{
					if (!func_229(&(uParam0->f_4), 2))
					{
						*bParam3 = 1;
						func_81(&(uParam0->f_4), 2);
					}
					func_236(&(uParam0->f_4), 4);
				}
			}
			break;
		
		case 3:
			*bParam2 = 1;
			break;
		
		case 4:
			*bParam3 = 1;
			break;
	}
}

int func_163(var uParam0, var uParam1, bool bParam2)
{
	if (func_70(uParam1->f_40, uParam0->f_247.f_10) > 0f)
	{
		return 0;
	}
	if (func_70(uParam1->f_40, uParam0->f_1583[1 /*3*/] - uParam1->f_37) > 0f)
	{
		return 0;
	}
	if (func_76(uParam1) != 75)
	{
		return 0;
	}
	if (!bParam2)
	{
		return 0;
	}
	return 1;
}

bool func_164(var uParam0)
{
	return uParam0->f_63 > 3f;
}

int func_165(var uParam0)
{
	return uParam0->f_65;
}

void func_166(var uParam0)
{
	uParam0->f_68 = 0f;
}

int func_167(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, bool bParam7)
{
	if (!func_229(&(uParam1->f_4), 32))
	{
		return 0;
	}
	if (func_229(&(uParam1->f_4), 8))
	{
		return 0;
	}
	if (func_76(uParam1) != 75)
	{
		return 0;
	}
	func_138(uParam0, uParam1, uParam2, iParam3, iParam4, iParam5, vParam6, bParam7);
	func_236(&(uParam1->f_4), 5);
	func_81(&(uParam1->f_4), 8);
	func_218(&(uParam1->f_4), 32);
	return 1;
}

float func_168(var uParam0)
{
	return uParam0->f_69;
}

float func_169(var uParam0)
{
	return uParam0->f_68;
}

void func_170(var uParam0)
{
	uParam0->f_68 = (uParam0->f_68 + unk_0x6117725E0134737F());
}

void func_171(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	uParam1->f_247.f_33 = (uParam1->f_247.f_33 - unk_0x6117725E0134737F());
	while (uParam1->f_247.f_33 <= 0f)
	{
		uParam1->f_247.f_33 = (uParam1->f_247.f_33 + 0.03333334f);
		iVar0 = 0;
		while (iVar0 <= 22)
		{
			uParam1->f_1583[iVar0 /*3*/] = { uParam1->f_1583[iVar0 + 1 /*3*/] };
			iVar0++;
		}
		*uParam2 = { uParam1->f_1583[iVar0 /*3*/] };
		func_175(uParam0, uParam3, uParam4, uParam5, uParam6, iParam7);
		iVar1 = func_280(&(uParam1->f_189), uParam2, uParam3, &(uParam1->f_1658), uParam4, uParam5, uParam6, iParam7, 0, 0.03333334f, 0, 0.1f, 0);
		if (iVar1 == 1)
		{
			if (func_229(&(uParam0->f_4), 32) && func_169(uParam0) == 0f)
			{
				func_166(uParam0);
				func_174(uParam0, (to_float(iVar0) * unk_0x6117725E0134737F()));
			}
		}
		if (!func_173(*uParam2))
		{
			uParam1->f_1583[iVar0 /*3*/] = { *uParam2 };
		}
		else
		{
			uParam1->f_1583[iVar0 /*3*/] = { func_284(&(uParam1->f_247)) };
		}
		func_172(uParam0, *uParam3, *uParam4, *uParam5, *uParam6, *iParam7);
	}
}

void func_172(var uParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	uParam0->f_78 = { vParam1 };
	uParam0->f_81 = uParam2;
	uParam0->f_82 = uParam3;
	uParam0->f_83 = uParam4;
	uParam0->f_84 = uParam5;
}

int func_173(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_174(var uParam0, float fParam1)
{
	uParam0->f_69 = fParam1;
}

void func_175(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam1 = { uParam0->f_78 };
	*uParam2 = uParam0->f_81;
	*uParam3 = uParam0->f_82;
	*uParam4 = uParam0->f_83;
	*uParam5 = uParam0->f_84;
}

void func_176(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		iVar1 = func_280(&(uParam1->f_189), uParam2, uParam3, &(uParam1->f_1658), uParam4, uParam5, uParam6, iParam7, 0, 0.03333334f, 0, 0.1f, 0);
		if (iVar1 == 1)
		{
			if (func_229(&(uParam0->f_4), 32) && func_169(uParam0) == 0f)
			{
				func_166(uParam0);
				func_174(uParam0, (to_float(iVar0) * unk_0x6117725E0134737F()));
			}
		}
		if (!func_173(*uParam2))
		{
			uParam1->f_1583[iVar0 /*3*/] = { *uParam2 };
		}
		else
		{
			uParam1->f_1583[iVar0 /*3*/] = { func_284(&(uParam1->f_247)) };
		}
		iVar0++;
	}
	func_172(uParam0, *uParam3, *uParam4, *uParam5, *uParam6, *iParam7);
	if (!func_105(uParam0, 32768))
	{
		func_59(uParam0, 32768);
		uParam1->f_247.f_33 = 0.03333334f;
	}
}

bool func_177(var uParam0)
{
	return uParam0->f_26;
}

int func_178(var uParam0)
{
	return uParam0->f_1;
}

void func_179(var uParam0, var uParam1, bool bParam2)
{
	if (unk_0xC844350D5D58C99A(*uParam1))
	{
		if (bParam2)
		{
			if (!unk_0xEB6A8945D1AC98A1(func_266(uParam0)))
			{
				unk_0x0C8C0C840C2D1AD2(func_266(uParam0), *uParam1, -1, 6, 2);
			}
		}
		else if (!unk_0xEB6A8945D1AC98A1(func_266(uParam0)))
		{
			unk_0xBC43ED9FE28DB191(func_266(uParam0));
		}
	}
}

void func_180(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_181(var uParam0, int iParam1)
{
	func_182(uParam0, iParam1);
}

void func_182(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_183(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	struct<2> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	if (!bParam3)
	{
		if (((func_254(uParam0) > func_192(uParam1) && func_76(uParam2) == 75) && uParam0->f_1657 != 1) || (((func_254(uParam0) > func_192(uParam1) && func_76(uParam2) == 75) && uParam0->f_1657 == 1) && unk_0x0F1CCD77290EE12F()))
		{
			func_235(uParam2, 74);
			func_216(uParam0, 0);
		}
	}
	else if (func_194(2))
	{
		func_235(uParam2, 74);
		func_216(uParam0, 0);
	}
	if (func_105(uParam2, 4))
	{
		if (func_273(uParam1) == 1)
		{
			if (uParam2->f_1 == 0)
			{
				vVar5 = { uParam0->f_189.f_3[3 /*3*/] + uParam2->f_43 };
				vVar6 = { uParam0->f_189.f_3[3 /*3*/] };
			}
			else
			{
				vVar5 = { uParam0->f_189.f_3[1 /*3*/] + uParam2->f_43 };
				vVar6 = { uParam0->f_189.f_3[1 /*3*/] };
			}
		}
		else if (uParam2->f_1 == 0)
		{
			vVar5 = { uParam0->f_189.f_3[2 /*3*/] - uParam2->f_43 };
			vVar6 = { uParam0->f_189.f_3[2 /*3*/] };
		}
		else
		{
			vVar5 = { uParam0->f_189.f_3[0 /*3*/] - uParam2->f_43 };
			vVar6 = { uParam0->f_189.f_3[0 /*3*/] };
		}
		if (uParam0->f_1657 == 1)
		{
			iVar0 = 2;
		}
		else if (uParam2->f_4.f_20 == 0)
		{
			iVar7 = unk_0x09AC81E49EA267F7(2, 6);
			iVar0 = func_51(unk_0x79833B02DBD2A244(0f, 1f) < 0.2f, 6, iVar7);
		}
		else if (uParam2->f_4.f_20 == 1)
		{
			iVar7 = unk_0x09AC81E49EA267F7(1, 4);
			iVar0 = func_51(unk_0x79833B02DBD2A244(0f, 1f) < 0.1f, 6, iVar7);
		}
		else if (uParam2->f_4.f_20 == 2)
		{
			iVar0 = unk_0x09AC81E49EA267F7(0, 2);
		}
		vVar5 = { func_123(vVar6, vVar5, unk_0x79833B02DBD2A244(0f, 1f)) };
		fVar2 = func_191(uParam2->f_37, vVar5);
		fVar3 = func_191(uParam2->f_37, uParam2->f_37 + uParam2->f_40);
		fVar4 = (fVar2 - fVar3);
		if (bParam3)
		{
			iVar0 = 2;
		}
		Var1 = { uParam0->f_282[iVar0 /*2*/] };
		*uParam2 = fVar4;
		func_231(uParam2, 6);
		if (iVar0 == 1 || iVar0 == 0)
		{
			unk_0xCEAA091B490F8407(-1, func_196(uParam0->f_1657 == 1, "TENNIS_AMB_SMASH_MASTER", "TENNIS_NPC_SMASH_MASTER"), func_266(uParam2), 0, false, 0);
		}
		else
		{
			unk_0xCEAA091B490F8407(-1, func_196(uParam0->f_1657 == 1, "TENNIS_AMB_SERVE_MASTER", "TENNIS_NPC_SERVE_MASTER"), func_266(uParam2), 0, false, 0);
		}
		unk_0x15AFB6CBDE990FB6(uParam0->f_247, 0, true);
		func_184(uParam0, uParam2, &Var1);
		func_278(uParam2, 4);
		return 1;
	}
	return 0;
}

void func_184(var uParam0, var uParam1, var uParam2)
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = *uParam1;
	vVar1 = { func_185(to_float(*uParam2), to_float(uParam2->f_1), fVar0, &(uParam1->f_40), &(uParam1->f_43)) };
	if (unk_0xC844350D5D58C99A(uParam0->f_247))
	{
		if (uParam0->f_1657 != 1 && !func_276(&(uParam0->f_247)))
		{
			func_275(&(uParam0->f_247));
			func_120(&(uParam0->f_247));
		}
		uParam0->f_247.f_10 = { vVar1 };
		func_277(&(uParam0->f_247), unk_0x68F4C0EC296D3901(uParam0->f_247, true));
		uParam0->f_247.f_16 = { func_284(&(uParam0->f_247)) };
		func_119(&(uParam0->f_247), unk_0xF4CCC8CB6DE7F1AE() + 5);
		func_118(&(uParam0->f_247));
		func_116(&(uParam0->f_247), 1);
		func_115(uParam0->f_247, 1);
	}
	func_288(&(uParam0->f_247), 4);
}

Vector3 func_185(float fParam0, float fParam1, float fParam2, var uParam3, var uParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { func_190(*uParam3) };
	func_186(&vVar0, fParam2, 0f, 0f, 1f);
	vVar1 = { func_190(*uParam4) };
	func_186(&vVar0, fParam1, vVar1);
	vVar0 = { vVar0 * Vector(fParam0, fParam0, fParam0) };
	return vVar0;
}

void func_186(var uParam0, float fParam1, vector3 vParam2)
{
	float fVar0;
	float fVar1;
	
	vParam2 = { func_190(vParam2) };
	fVar0 = cos(fParam1);
	fVar1 = sin(fParam1);
	*uParam0 = { func_189(*uParam0, vParam2) * Vector(fVar0, fVar0, fVar0) + func_188(vParam2, *uParam0) * Vector(fVar1, fVar1, fVar1) + func_187(*uParam0, vParam2) };
}

Vector3 func_187(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	vVar0 = { vParam1 * FtoV(func_70(vParam0, vParam1)) };
	return vVar0;
}

Vector3 func_188(vector3 vParam0, vector3 vParam1)
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

Vector3 func_189(vector3 vParam0, vector3 vParam1)
{
	vector3 vVar0;
	
	vVar0 = { vParam0 - func_187(vParam0, vParam1) };
	return vVar0;
}

Vector3 func_190(vector3 vParam0)
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

float func_191(struct<2> Param0, var uParam1, struct<2> Param2, Vector3 vParam3)
{
	return unk_0xE7D606C557C86100((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_192(var uParam0)
{
	return uParam0->f_27;
}

void func_193(int iParam0)
{
	Global_110724 = (Global_110724 || iParam0);
}

bool func_194(int iParam0)
{
	return (Global_110724 && iParam0) != 0;
}

void func_195(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_266(uParam0);
	if (unk_0xC844350D5D58C99A(*uParam1) && unk_0xC844350D5D58C99A(iVar0))
	{
		unk_0x9F528B1B53FBC5D9(*uParam1, iVar0, unk_0x4A089F2B762B8D33(iVar0, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
		func_115(*uParam1, 1);
	}
}

char* func_196(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_197(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_59 == 2)
	{
		iVar0 = func_266(uParam0);
		iVar1 = func_45(iVar0);
		if (iVar1 == 145)
		{
			iVar1 = func_198(iVar0);
		}
		iVar2 = unk_0x16F2683693E537C9();
		if (((iVar1 == 0 || iVar1 == 1) || iVar1 == 2) || iVar0 == iVar2)
		{
			uParam0->f_59 = 1;
		}
		else if (unk_0xCED082ADD3739B9F(iVar0) && iVar1 != 14)
		{
			uParam0->f_59 = 1;
		}
		else
		{
			uParam0->f_59 = 0;
		}
	}
	return uParam0->f_59 == 1;
}

int func_198(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC844350D5D58C99A(iParam0))
	{
		iVar1 = unk_0x134B62B726CEC8E6(iParam0);
		iVar2 = (func_199() - 1);
		iVar0 = 3;
		while (iVar0 <= iVar2)
		{
			if (func_331(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_199()
{
	if (Global_30768 == 0 || Global_30768 == 2)
	{
		return 167;
	}
	return 161;
}

int func_200(var uParam0, var uParam1, int iParam2, var uParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC844350D5D58C99A(uParam1->f_247))
	{
		func_159(uParam0);
		if ((unk_0xBFC0798A6E3417F9(0, 223) && !bParam4) || (func_161(uParam0) > 30f && uParam1->f_1657 == 4))
		{
			if ((((func_76(uParam0) == 74 && func_213(&(uParam0->f_73))) && !func_212(&(uParam0->f_73))) && func_211(&(uParam0->f_73)) > (1.1f + 1.25f)) && !func_105(uParam0, 64))
			{
				func_59(uParam0, 64);
				func_129(&iVar0, &iVar1, &iVar1, &iVar1, 1, 1);
				if (unk_0x9E6C8D8976DA0ECD(2))
				{
					iVar0 = (round((unk_0x4F3973434662D795(2, 239) * 256f)) - 128);
				}
				func_210(uParam0, iVar0);
			}
			func_235(uParam0, 74);
			if (!func_213(&(uParam0->f_73)))
			{
				func_208(&(uParam0->f_73));
			}
			if (func_212(&(uParam0->f_73)))
			{
				func_208(&(uParam0->f_73));
				func_207(&(uParam0->f_73));
			}
		}
		if (func_105(uParam0, 4))
		{
			if (func_105(uParam0, 64))
			{
				if (func_206(uParam0) > 0.965f)
				{
					*uParam3 = { uParam1->f_282[0 /*2*/] };
					unk_0xCEAA091B490F8407(-1, "TENNIS_PLYR_SMASH_MASTER", func_266(uParam0), 0, false, 0);
					unk_0x5E858A00EAFA5B24(0, 450, 256);
					if (func_206(uParam0) >= 0.995f && 1)
					{
						func_279(&(uParam1->f_247), 32);
						func_279(&(uParam1->f_247), 64);
					}
				}
				else if (func_206(uParam0) > 0.9f)
				{
					*uParam3 = { uParam1->f_282[1 /*2*/] };
					unk_0xCEAA091B490F8407(-1, "TENNIS_PLYR_SMASH_MASTER", func_266(uParam0), 0, false, 0);
					unk_0x5E858A00EAFA5B24(0, 250, 256);
				}
				else if (func_206(uParam0) > 0.7f)
				{
					*uParam3 = { uParam1->f_282[2 /*2*/] };
					unk_0x5E858A00EAFA5B24(0, 200, 256);
					unk_0xCEAA091B490F8407(-1, "TENNIS_PLYR_SERVE_MASTER", func_266(uParam0), 0, false, 0);
				}
				else if (func_206(uParam0) > 0.45f)
				{
					*uParam3 = { uParam1->f_282[3 /*2*/] };
					unk_0xCEAA091B490F8407(-1, "TENNIS_PLYR_SERVE_MASTER", func_266(uParam0), 0, false, 0);
					unk_0x5E858A00EAFA5B24(0, 150, 256);
				}
				else if (func_206(uParam0) > 0.2f)
				{
					*uParam3 = { uParam1->f_282[4 /*2*/] };
					unk_0xCEAA091B490F8407(-1, "TENNIS_PLYR_SERVE_MASTER", func_266(uParam0), 0, false, 0);
					unk_0x5E858A00EAFA5B24(0, 100, 256);
				}
				else if (func_206(uParam0) >= 0f)
				{
					*uParam3 = { uParam1->f_282[5 /*2*/] };
					unk_0xCEAA091B490F8407(-1, "TENNIS_PLYR_SERVE_MASTER", func_266(uParam0), 0, false, 0);
					unk_0x5E858A00EAFA5B24(0, 70, 256);
				}
			}
			else
			{
				*uParam3 = { uParam1->f_282[6 /*2*/] };
				unk_0xCEAA091B490F8407(-1, "TENNIS_PLYR_SERVE_MASTER", func_266(uParam0), 0, false, 0);
				unk_0x5E858A00EAFA5B24(0, 50, 256);
			}
			if (!func_204(uParam0, uParam1, iParam2, func_205(uParam0)))
			{
				*uParam3 = { uParam1->f_282[7 /*2*/] };
			}
			unk_0x15AFB6CBDE990FB6(uParam1->f_247, 0, true);
			func_184(uParam1, uParam0, uParam3);
			func_201(&(uParam0->f_73));
			func_278(uParam0, 64);
			func_231(uParam0, 0);
			func_57(uParam0);
			func_160(uParam0);
			return 1;
		}
		if (func_161(uParam0) > 30f || (unk_0xBFC0798A6E3417F9(0, 223) && !bParam4))
		{
			func_160(uParam0);
		}
	}
	return 0;
}

void func_201(int iParam0)
{
	func_202(iParam0);
}

void func_202(int iParam0)
{
	if (func_213(iParam0))
	{
		if (!func_212(iParam0))
		{
			iParam0->f_2 = (func_203(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_1);
			unk_0x5D96D8530B3D0904(iParam0, 2);
		}
	}
}

float func_203(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0x1C0640BA9A7327B3());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x8CD06866876216F2())
	{
		iVar2 = unk_0x2B6E0A53779D29EA();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0x1C0640BA9A7327B3()) / 1000f);
}

int func_204(var uParam0, var uParam1, int iParam2, int iParam3)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	
	vVar1 = { 0f, 0f, 0f };
	fVar8 = 1f;
	vVar6 = { unk_0x68F4C0EC296D3901(uParam1->f_247, true) };
	if (unk_0x51D1D19912234EA0(iParam3) > 125)
	{
		fVar9 = 2.5f;
		fVar10 = 0.5f;
		fVar11 = 0.75f;
		iVar12 = 0;
	}
	else
	{
		fVar9 = 0.55f;
		fVar10 = 0f;
		fVar11 = 0f;
		iVar12 = 1;
	}
	vVar5 = { func_190(uParam1->f_1661) };
	fVar7 = ((to_float(iParam3) + 128f) / 256f);
	if (uParam0->f_1 == 0)
	{
		if (iParam2 == 1)
		{
			vVar3 = { uParam1->f_189.f_16[3 /*3*/] - vVar5 * Vector(fVar9, fVar9, fVar9) };
			vVar4 = { uParam1->f_189.f_16[3 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) + vVar5 * Vector(fVar10, fVar10, fVar10) };
			vVar1 = { func_123(vVar3, vVar4, fVar7) };
			if (func_70(uParam0->f_43, vVar1 - vVar6) > 0f)
			{
				fVar8 = -1f;
			}
		}
		else if (iParam2 == 0)
		{
			vVar4 = { uParam1->f_189.f_16[2 /*3*/] + vVar5 * Vector(fVar9, fVar9, fVar9) };
			vVar3 = { uParam1->f_189.f_16[2 /*3*/] - uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) - vVar5 * Vector(fVar11, fVar11, fVar11) };
			vVar1 = { func_123(vVar3, vVar4, fVar7) };
			if (func_70(uParam0->f_43, vVar1 - vVar6) < 0f)
			{
				fVar8 = -1f;
			}
		}
	}
	else if (iParam2 == 1)
	{
		vVar3 = { uParam1->f_189.f_16[1 /*3*/] + vVar5 * Vector(fVar9, fVar9, fVar9) };
		vVar4 = { uParam1->f_189.f_16[1 /*3*/] - uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) - vVar5 * Vector(fVar10, fVar10, fVar10) };
		vVar1 = { func_123(vVar3, vVar4, fVar7) };
		if (func_70(uParam0->f_43, vVar1 - vVar6) > 0f)
		{
			fVar8 = -1f;
		}
	}
	else if (iParam2 == 0)
	{
		vVar4 = { uParam1->f_189.f_16[0 /*3*/] - vVar5 * Vector(fVar9, fVar9, fVar9) };
		vVar3 = { uParam1->f_189.f_16[0 /*3*/] + uParam1->f_1661 * Vector(0.5f, 0.5f, 0.5f) + vVar5 * Vector(fVar11, fVar11, fVar11) };
		vVar1 = { func_123(vVar3, vVar4, fVar7) };
		if (func_70(uParam0->f_43, vVar1 - vVar6) < 0f)
		{
			fVar8 = -1f;
		}
	}
	vVar1.z = uParam0->f_37.f_2;
	vVar2 = { func_190(vVar1 - vVar6) };
	fVar0 = unk_0x07AB02F3C4AE2B04(uParam0->f_40, uParam0->f_40.f_1, vVar2.x, vVar2.y);
	fVar0 = (fVar0 * fVar8);
	*uParam0 = fVar0;
	if (iParam2 == 0)
	{
		*uParam0 = (*uParam0 * -1f);
	}
	return iVar12;
}

int func_205(var uParam0)
{
	return uParam0->f_76;
}

float func_206(var uParam0)
{
	return uParam0->f_60;
}

void func_207(int iParam0)
{
	if (func_213(iParam0))
	{
		if (func_212(iParam0))
		{
			iParam0->f_1 = (func_203(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - iParam0->f_2);
			iParam0->f_2 = 0f;
			unk_0x0674E58A79778E99(iParam0, 2);
		}
	}
}

void func_208(int iParam0)
{
	func_209(iParam0, 0f);
}

void func_209(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_203(unk_0xEAE0D21A50E6C7F4(*iParam0, 4)) - fParam1);
	unk_0x5D96D8530B3D0904(iParam0, 1);
	unk_0x0674E58A79778E99(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_210(var uParam0, int iParam1)
{
	uParam0->f_76 = iParam1;
}

float func_211(var uParam0)
{
	if (func_213(uParam0))
	{
		if (func_212(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_203(unk_0xEAE0D21A50E6C7F4(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_212(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 2);
}

bool func_213(var uParam0)
{
	return unk_0xEAE0D21A50E6C7F4(*uParam0, 1);
}

void func_214(var uParam0, var uParam1)
{
	vector3 vVar0;
	float fVar1;
	
	if (uParam0->f_31 != 4)
	{
		if (!func_229(&(uParam0->f_4), 256) && !func_229(&(uParam0->f_4), 16))
		{
			if (func_76(uParam0) == 75)
			{
				if (((unk_0xBFC0798A6E3417F9(0, 223) || unk_0xBFC0798A6E3417F9(0, 224)) || unk_0xBFC0798A6E3417F9(0, 225)) || unk_0xBFC0798A6E3417F9(0, 222))
				{
					vVar0 = { func_284(uParam1) - uParam0->f_37 };
					fVar1 = func_70(uParam0->f_43, vVar0);
					if (fVar1 >= 0f)
					{
						func_235(uParam0, 13);
					}
					else
					{
						func_235(uParam0, 1);
					}
					func_150(uParam0, 0);
					func_59(uParam0, 65536);
				}
			}
		}
	}
}

int func_215(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(func_266(uParam0[iParam1 /*94*/])) && unk_0xD1960163A3042274(func_266(uParam0[iParam1 /*94*/]), 242628503) != 7)
	{
		return 0;
	}
	else if ((!unk_0xEB6A8945D1AC98A1(func_266(uParam0[iParam1 /*94*/])) && ((bParam4 || iParam3 == 4) || iParam3 == 1)) && !func_105(uParam0[iParam1 /*94*/], 8192))
	{
		if (iParam1 == iParam2)
		{
			func_28(uParam0[iParam1 /*94*/], "TennisServeSet", 0f);
		}
		func_262(func_266(uParam0[iParam1 /*94*/]), 1);
		unk_0xF895E10BF4C72645(func_266(uParam0[iParam1 /*94*/]), 0, 0);
		func_59(uParam0[iParam1 /*94*/], 8192);
	}
	else if (func_105(uParam0[iParam1 /*94*/], 8192) && iParam1 == iParam2)
	{
		if (!unk_0xEB6A8945D1AC98A1(func_266(uParam0[iParam1 /*94*/])) && unk_0x43AB9B3158C51226(func_266(uParam0[iParam1 /*94*/])))
		{
			if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(func_266(uParam0[iParam1 /*94*/])), "Intro") && unk_0xB4E9220C59EBC663(func_266(uParam0[iParam1 /*94*/])))
			{
				unk_0x77CE1D0498EE13D6(func_266(uParam0[iParam1 /*94*/]), "running");
			}
		}
	}
	return 1;
}

void func_216(var uParam0, int iParam1)
{
	uParam0->f_1672 = iParam1;
}

void func_217(var uParam0)
{
	uParam0->f_22 = 0;
}

void func_218(var uParam0, int iParam1)
{
	func_256(&(uParam0->f_25), iParam1);
}

void func_219(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	float fVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	char* sVar8;
	
	if ((uParam0->f_31 != 4 && !unk_0xEB6A8945D1AC98A1(func_266(uParam0))) && !bParam5)
	{
		func_233(uParam1->f_1657, 1);
	}
	if (!bParam5)
	{
		func_278(uParam0, 128);
	}
	func_218(&(uParam0->f_4), 4);
	func_218(&(uParam0->f_4), 2);
	func_235(uParam0, 75);
	if ((uParam0->f_31 == 4 && !bParam5) && uParam1->f_1657 != 1)
	{
		func_236(&(uParam0->f_4), 0);
		func_262(func_266(uParam0), 1);
	}
	switch (iParam2)
	{
		case 0:
			if (uParam0->f_31 == 4)
			{
				if (uParam0->f_1 != 0)
				{
					func_82(&(uParam0->f_4), uParam1->f_189.f_3[2 /*3*/]);
				}
				else
				{
					func_82(&(uParam0->f_4), uParam1->f_189.f_3[0 /*3*/]);
				}
			}
			break;
		
		case 1:
			if (uParam0->f_31 == 4)
			{
				if (uParam0->f_1 != 0)
				{
					func_82(&(uParam0->f_4), uParam1->f_189.f_3[3 /*3*/]);
				}
				else
				{
					func_82(&(uParam0->f_4), uParam1->f_189.f_3[1 /*3*/]);
				}
			}
			break;
	}
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_32) && uParam0->f_36 == 75)
	{
		vVar1 = { func_271(&(uParam1->f_189), iParam2, uParam1->f_1661, uParam1->f_1658, 0, uParam0->f_1) };
		if (uParam0->f_31 == 4)
		{
			vVar1 = { vVar1 + uParam0->f_43 * FtoV(func_227(&(uParam0->f_4))) * FtoV(func_145(iParam2 == 1, 1f, -1f)) };
		}
		if ((uParam1->f_1657 != 1 && !bParam5) && !func_225(unk_0xD803B885F5E47A62(), 0))
		{
			func_224(uParam1, iParam3, 1);
			unk_0xA47B46945FF6DE74(uParam0->f_32, vVar1, 1, false, 0, 1);
			fVar0 = unk_0xE7D606C557C86100(-uParam1->f_1658, -uParam1->f_1658.f_1);
			if (uParam0->f_1 == 0)
			{
				fVar0 = (fVar0 + 180f);
			}
			unk_0xD8F6A53F4799FAFE(uParam0->f_32, fVar0);
		}
		else
		{
			unk_0xD8F6A53F4799FAFE(uParam0->f_32, unk_0xD9522BA9E27E1349(uParam0->f_32));
			func_59(uParam0, 16384);
			fVar2 = (unk_0xE7D606C557C86100(uParam0->f_40, uParam0->f_40.f_1) + func_145(bParam6, 180f, 0f));
			vVar3 = { uParam1->f_189.f_29 - unk_0x68F4C0EC296D3901((uParam1[iParam3 /*94*/])->f_32, true) };
			bVar4 = func_70(vVar3, uParam0->f_40) < 0f;
			bVar5 = func_70(vVar3, uParam0->f_43) < 0f;
			iVar6 = 0;
			func_223(uParam0, 0);
			unk_0xF82EA857DA10E0CD(&(uParam0->f_54));
			unk_0xDD353D0E9C789D0E(&(uParam0->f_54));
			if (!bParam6 && bParam7)
			{
				func_223(uParam0, func_27(uParam0) + 1);
				iVar6 = unk_0x09AC81E49EA267F7(800, 1200);
				unk_0xC6EB89C59F2AF6B8(0, func_196(func_197(uParam0), "mini@tennis", "mini@tennis@female"), "idle", 1.5f, -8f, iVar6, 0, 0, 0, 0, 0);
			}
			if (!bParam8)
			{
				unk_0xC6EB89C59F2AF6B8(0, "mini@tennis", "ready_2_idle", 1.5f, -8f, -1, 0, 0, 0, 0, 0);
				func_223(uParam0, func_27(uParam0) + 1);
			}
			if ((bParam6 && !bVar4) || (!bParam6 && bVar4))
			{
				vVar7 = { uParam1->f_189.f_29 + uParam0->f_43 * Vector(7.2f, 7.2f, 7.2f) };
				if (!bVar5 && (!bParam6 && bVar4))
				{
					vVar7 = { uParam1->f_189.f_29 + uParam0->f_43 * Vector(-7.2f, -7.2f, -7.2f) };
				}
				if (func_221(uParam1, uParam0))
				{
					unk_0x80AA372E04ED318D(0, vVar7, 1f, 20000, 1193033728, 1056964608);
				}
				else
				{
					unk_0x96167B03C5A77156(0, vVar7, 1f, 20000, 1048576000, 1, 1193033728);
				}
				func_223(uParam0, func_27(uParam0) + 1);
			}
			if (func_220(unk_0x68F4C0EC296D3901(uParam0->f_32, true), vVar1, 0.1f))
			{
				unk_0xE655C47E46F9A7E4(0, fVar2, 2500);
				func_223(uParam0, func_27(uParam0) + 1);
			}
			else
			{
				unk_0x96167B03C5A77156(0, vVar1, 1f, 20000, 1048576000, 0, fVar2);
				func_223(uParam0, func_27(uParam0) + 1);
			}
			sVar8 = func_196(func_197(uParam0), "mini@tennis", "mini@tennis@female");
			unk_0xC6EB89C59F2AF6B8(0, sVar8, "idle_2_ready", 8f, -8f, -1, 0, 0, 0, 0, 0);
			func_223(uParam0, func_27(uParam0) + 1);
			unk_0x75ABDC5F81978924(uParam0->f_54);
			unk_0x78ADC381772E3D54(func_266(uParam0), uParam0->f_54);
			unk_0x9237814869823B3E(func_266(uParam0), "weapons@tennis@male");
			func_81(&(uParam0->f_4), 4);
		}
	}
	if (bParam4 && unk_0xC844350D5D58C99A(func_266(uParam0)))
	{
		unk_0xF895E10BF4C72645(func_266(uParam0), 0, 0);
	}
}

int func_220(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3, float fParam4)
{
	if (fParam4 < 0f)
	{
		fParam4 = 0f;
	}
	if (unk_0x755FF954DAE327E1((Param0 - Param2)) <= fParam4)
	{
		if (unk_0x755FF954DAE327E1((Param0.f_1 - Param2.f_1)) <= fParam4)
		{
			return 1;
		}
	}
	return 0;
}

int func_221(var uParam0, var uParam1)
{
	if (func_222(&(uParam0->f_189)) != 2)
	{
		return 0;
	}
	if (uParam1->f_1 != 1)
	{
		return 0;
	}
	return 1;
}

int func_222(var uParam0)
{
	return *uParam0;
}

void func_223(var uParam0, int iParam1)
{
	uParam0->f_55 = iParam1;
}

void func_224(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0x327AAEE25F323797((uParam0[iParam1 /*94*/])->f_32);
	}
	else
	{
		unk_0xA3BF0AA5A2608191((uParam0[iParam1 /*94*/])->f_32);
	}
}

bool func_225(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD803B885F5E47A62())
	{
		bVar0 = func_226(-1, 0) == 8;
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

int func_226(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_39();
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

float func_227(var uParam0)
{
	return uParam0->f_23;
}

void func_228(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	float fVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	bool bVar4;
	bool bVar5;
	vector3 vVar6;
	bool bVar7;
	char* sVar8;
	
	if ((uParam0->f_31 != 4 && !unk_0xEB6A8945D1AC98A1(func_266(uParam0))) && !bParam7)
	{
		func_233(uParam1->f_1657, 1);
	}
	func_235(uParam0, 75);
	if (func_105(uParam0, 4))
	{
		func_278(uParam0, 4);
	}
	func_218(&(uParam0->f_4), 4);
	if (bParam6)
	{
		func_195(uParam0, &(uParam1->f_247));
	}
	if (uParam0->f_31 == 4)
	{
		func_236(&(uParam0->f_4), 0);
		if (uParam0->f_1 != 0)
		{
			func_82(&(uParam0->f_4), uParam1->f_189.f_3[2 /*3*/] + uParam1->f_189.f_3[3 /*3*/] * Vector(0.5f, 0.5f, 0.5f));
		}
		else
		{
			func_82(&(uParam0->f_4), uParam1->f_189.f_3[0 /*3*/] + uParam1->f_189.f_3[1 /*3*/] * Vector(0.5f, 0.5f, 0.5f));
		}
	}
	if (!unk_0xEB6A8945D1AC98A1(uParam0->f_32) && uParam0->f_36 == 75)
	{
		vVar1 = { func_271(&(uParam1->f_189), iParam2, uParam1->f_1661, uParam1->f_1658, 1, uParam0->f_1) };
		if ((uParam1->f_1657 != 1 && !bParam7) && !func_225(unk_0xD803B885F5E47A62(), 0))
		{
			if (!((!unk_0xEB6A8945D1AC98A1(func_266(uParam0)) && unk_0x43AB9B3158C51226(func_266(uParam0))) && unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(func_266(uParam0)), "running")))
			{
				func_224(uParam1, iParam3, 1);
			}
			unk_0xA47B46945FF6DE74(uParam0->f_32, vVar1, 1, true, 0, 1);
			fVar0 = unk_0xE7D606C557C86100(-uParam1->f_1658, -uParam1->f_1658.f_1);
			if (uParam0->f_1 == 0)
			{
				fVar0 = (fVar0 + 180f);
			}
			unk_0xD8F6A53F4799FAFE(uParam0->f_32, fVar0);
		}
		else
		{
			unk_0xD8F6A53F4799FAFE(uParam0->f_32, unk_0xD9522BA9E27E1349(uParam0->f_32));
			func_59(uParam0, 16384);
			fVar2 = (unk_0xE7D606C557C86100(uParam0->f_40, uParam0->f_40.f_1) + func_145(bParam8, 180f, 0f));
			vVar3 = { uParam1->f_189.f_29 - unk_0x68F4C0EC296D3901((uParam1[iParam3 /*94*/])->f_32, true) };
			bVar4 = func_70(vVar3, uParam0->f_40) < 0f;
			bVar5 = func_70(vVar3, uParam0->f_43) < 0f;
			func_223(uParam0, 0);
			unk_0xF82EA857DA10E0CD(&(uParam0->f_54));
			unk_0xDD353D0E9C789D0E(&(uParam0->f_54));
			if (!bParam9)
			{
				unk_0xC6EB89C59F2AF6B8(0, "mini@tennis", "ready_2_idle", 1.5f, -8f, -1, 0, 0, 0, 0, 0);
				func_223(uParam0, func_27(uParam0) + 1);
			}
			if ((bParam8 && !bVar4) || (!bParam8 && bVar4))
			{
				vVar6 = { uParam1->f_189.f_29 + uParam0->f_43 * Vector(7.2f, 7.2f, 7.2f) };
				if (!bVar5 && (!bParam8 && bVar4))
				{
					vVar6 = { uParam1->f_189.f_29 + uParam0->f_43 * Vector(-7.2f, -7.2f, -7.2f) };
				}
				if (func_221(uParam1, uParam0))
				{
					unk_0x80AA372E04ED318D(0, vVar6, 1f, 20000, 1193033728, 1056964608);
				}
				else
				{
					unk_0x96167B03C5A77156(0, vVar6, 1f, 20000, 1048576000, 1, 1193033728);
				}
				func_223(uParam0, func_27(uParam0) + 1);
			}
			unk_0x96167B03C5A77156(0, vVar1, 1f, 20000, 1048576000, 0, fVar2);
			func_223(uParam0, func_27(uParam0) + 1);
			unk_0xC6EB89C59F2AF6B8(0, "mini@tennis", "idle_2_serve", 8f, -8f, -1, 0, 0, 0, 0, 0);
			func_223(uParam0, func_27(uParam0) + 1);
			unk_0x75ABDC5F81978924(uParam0->f_54);
			unk_0x78ADC381772E3D54(uParam0->f_32, uParam0->f_54);
			unk_0x9237814869823B3E(uParam0->f_32, "weapons@tennis@male");
			func_81(&(uParam0->f_4), 4);
		}
	}
	if (!bParam7 && uParam1->f_1657 != 1)
	{
		if (!func_229(&(uParam0->f_4), 4))
		{
			bVar7 = (uParam1->f_1657 != 1 && !bParam7);
			sVar8 = func_196(bVar7, "TennisServeSet", "TennisServeSetWithIntro");
			func_28(uParam0, sVar8, 0f);
			bParam5 = bParam5;
		}
		else
		{
			func_262(func_266(uParam0), 1);
		}
	}
	if (bParam4 && unk_0xC844350D5D58C99A(func_266(uParam0)))
	{
		unk_0xF895E10BF4C72645(func_266(uParam0), 0, 0);
	}
	uParam0->f_37 = { unk_0x68F4C0EC296D3901(uParam0->f_32, false) };
}

bool func_229(var uParam0, int iParam1)
{
	return func_258(uParam0->f_25, iParam1);
}

bool func_230(var uParam0, int iParam1)
{
	return (uParam0->f_1673 && iParam1) != 0;
}

void func_231(var uParam0, int iParam1)
{
	uParam0->f_34 = iParam1;
}

void func_232(var uParam0, int iParam1)
{
	uParam0->f_1673 = (uParam0->f_1673 - (uParam0->f_1673 && iParam1));
}

void func_233(int iParam0, bool bParam1)
{
	if (iParam0 != 1)
	{
		if (bParam1)
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && !unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
			{
				unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), true, 0);
			}
		}
		else if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x93B62D155C014521(unk_0xA30EC016B12C03E4()))
		{
			unk_0x98E4DC66A651C9FA(unk_0xA30EC016B12C03E4(), false, 0);
		}
	}
}

void func_234(var uParam0)
{
	func_218(&(uParam0->f_4), 2);
	func_218(&(uParam0->f_4), 32);
	func_218(&(uParam0->f_4), 64);
	func_218(&(uParam0->f_4), 8);
	func_218(&(uParam0->f_4), 128);
	func_218(&(uParam0->f_4), 1);
	func_218(&(uParam0->f_4), 512);
	func_278(uParam0, 16);
	func_278(uParam0, 256);
	func_278(uParam0, 8);
	func_278(uParam0, 128);
	func_278(uParam0, 2);
	func_278(uParam0, 512);
	func_278(uParam0, 4);
}

void func_235(var uParam0, int iParam1)
{
	if (uParam0->f_36 == 75 && iParam1 != 75)
	{
		uParam0->f_36 = iParam1;
		func_278(uParam0, 128);
	}
	else if (uParam0->f_36 != 75 && iParam1 == 75)
	{
		uParam0->f_36 = iParam1;
	}
}

void func_236(var uParam0, int iParam1)
{
	uParam0->f_19 = iParam1;
}

void func_237(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	if (((uParam0->f_31 != 3 && !bParam4) && !unk_0xEB6A8945D1AC98A1(func_266(uParam0))) && !unk_0x869EFD0BC0868856(func_266(uParam0)))
	{
		if ((unk_0x001220CC1F110806(func_266(uParam0)) && !func_197(uParam0)) && !func_105(uParam0, 16384))
		{
			unk_0x9237814869823B3E(func_266(uParam0), "TENNIS_LOCOMOTION_FEMALE");
		}
		func_129(&iVar0, &iVar1, &uVar2, &uVar2, 1, 1);
		fVar3 = unk_0x755FF954DAE327E1(to_float(iVar0));
		if ((fVar3 > 0f || unk_0x755FF954DAE327E1(to_float(iVar1)) > 0f) && uParam0->f_31 != 4)
		{
			unk_0xDEAC6BC509D10068(func_266(uParam0), 2f);
		}
		if ((func_76(uParam0) != 74 && uParam0->f_31 != 4) && fVar3 > 15f)
		{
			func_251(uParam0, (func_252(uParam0) + unk_0x6117725E0134737F()));
		}
		else
		{
			func_251(uParam0, 0f);
		}
		if (!func_164(uParam0))
		{
			func_250(uParam0);
		}
		bVar4 = func_249(uParam0, uParam1);
		if (uParam0->f_31 != 4 && !bVar4)
		{
			func_129(&iVar0, &iVar1, &uVar2, &uVar2, 1, 1);
			func_233(uParam1->f_1657, 1);
		}
		else if (!func_105(uParam0, 32))
		{
			func_240(uParam0, &iVar0, &iVar1, uParam1[(1 - iParam3) /*94*/], &(uParam1->f_247));
			if (func_229(&(uParam0->f_4), 4) && func_229(&(uParam0->f_4), 2))
			{
				func_235(uParam0, 75);
			}
		}
		if (uParam1->f_1657 != 1)
		{
			func_239(uParam0, iVar0, iVar1);
		}
		fVar5 = func_70(uParam0->f_40, uParam1->f_247.f_10);
		if (unk_0x001220CC1F110806(func_266(uParam0)) && fVar5 < 0f)
		{
			fVar6 = func_70(uParam0->f_43, func_284(&(uParam1->f_247)) - uParam0->f_37);
			unk_0x822DE639EA8CAA94(func_266(uParam0), "ForcedStopDirection", fVar6);
		}
	}
	else if (uParam0->f_31 != 3)
	{
		if (uParam0->f_31 != 4)
		{
			func_238(&fVar8, &uVar7, &uVar7, &uVar7, 1);
		}
		else
		{
			func_240(uParam0, &iVar9, &iVar10, uParam1[(1 - iParam3) /*94*/], &(uParam1->f_247));
		}
		if (!unk_0xEB6A8945D1AC98A1(func_266(uParam0)) && unk_0x43AB9B3158C51226(func_266(uParam0)))
		{
			if (unk_0x7F8A39872A07D2CE(unk_0xEB7A99520B2BD745(func_266(uParam0)), "Intro") && unk_0xB4E9220C59EBC663(func_266(uParam0)))
			{
				unk_0x77CE1D0498EE13D6(func_266(uParam0), "running");
			}
			if (uParam0->f_1 == 0 && iParam2 == 1)
			{
				vVar11 = { uParam1->f_189.f_3[1 /*3*/] };
				fVar12 = (4.425f - 1f);
				fVar13 = 1.3f;
			}
			else if (uParam0->f_1 == 0 && iParam2 == 0)
			{
				vVar11 = { uParam1->f_189.f_3[1 /*3*/] };
				fVar12 = 7.783f;
				fVar13 = (4.425f + 0.7f);
			}
			else if (uParam0->f_1 != 0 && iParam2 == 1)
			{
				vVar11 = { uParam1->f_189.f_3[3 /*3*/] };
				fVar12 = (4.425f - 1f);
				fVar13 = 1.3f;
			}
			else if (uParam0->f_1 != 0 && iParam2 == 0)
			{
				vVar11 = { uParam1->f_189.f_3[3 /*3*/] };
				fVar12 = 7.783f;
				fVar13 = (4.425f + 0.7f);
			}
			if ((fVar8 > 0.75f && vdist2(uParam0->f_37, vVar11) > (fVar13 * fVar13)) || (fVar8 < 0.25f && vdist2(uParam0->f_37, vVar11) < (fVar12 * fVar12)))
			{
				uParam0->f_62 = fVar8;
			}
			else if ((((fVar8 >= 0.25f && fVar8 <= 0.75f) || (fVar8 > 0.75f && vdist2(uParam0->f_37, vVar11) < (fVar13 * fVar13))) || (fVar8 < 0.25f && vdist2(uParam0->f_37, vVar11) > (fVar12 * fVar12))) || iParam5)
			{
				uParam0->f_62 = 0.5f;
			}
			if (unk_0xC548B0F1DC969D9B(func_266(uParam0), "IdleStarted"))
			{
				fVar14 = unk_0x79833B02DBD2A244(0f, 1f);
				StringCopy(&(uParam1->f_1670), func_196(fVar14 < 0.33f, "Idle3", func_196(fVar14 < 0.66f, "Idle4", "Idle1")), 8);
			}
			unk_0xDDD27725BA343881(func_266(uParam0), &(uParam1->f_1670), 1);
			unk_0xAF74FCE53CF6DDED(func_266(uParam0), "Speed", uParam0->f_62);
		}
	}
	if (((func_76(uParam0) == 75 && unk_0xC844350D5D58C99A(uParam1->f_247)) && unk_0xE608C809F9416F00(uParam1->f_247)) && vdist2(uParam0->f_37, func_284(&(uParam1->f_247))) < (0.88f * 0.88f))
	{
		func_59(uParam0, 256);
		func_279(&(uParam1->f_247), 4);
	}
}

void func_238(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (bParam4)
	{
		fVar0 = unk_0x4F3973434662D795(0, 30);
		fVar1 = unk_0x4F3973434662D795(0, 31);
		fVar2 = unk_0x4F3973434662D795(0, 1);
		fVar3 = unk_0x4F3973434662D795(0, 2);
	}
	else
	{
		fVar0 = unk_0x4B7163B4D6E4A3C2(0, 30);
		fVar1 = unk_0x4B7163B4D6E4A3C2(0, 31);
		fVar2 = unk_0x4B7163B4D6E4A3C2(0, 1);
		fVar3 = unk_0x4B7163B4D6E4A3C2(0, 2);
	}
	*uParam0 = ((fVar0 + 1f) / 2f);
	*uParam1 = ((fVar1 + 1f) / 2f);
	*uParam2 = ((fVar2 + 1f) / 2f);
	*uParam3 = ((fVar3 + 1f) / 2f);
}

void func_239(var uParam0, int iParam1, int iParam2)
{
	if ((unk_0x611EC47521EE9CBA() <= 0f && unk_0x3DF1113971307AEB() <= 0f) && func_76(uParam0) == 75)
	{
		if (unk_0x755FF954DAE327E1(to_float(iParam1)) >= unk_0x755FF954DAE327E1(to_float(iParam2)))
		{
			if (iParam1 > 15)
			{
				if (uParam0->f_35 != 3 && unk_0x79833B02DBD2A244(0f, 1f) < 0.08f)
				{
					unk_0xCEAA091B490F8407(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_266(uParam0), 0, false, 0);
				}
				else if (unk_0x79833B02DBD2A244(0f, 1f) < 0.1f)
				{
					unk_0xCEAA091B490F8407(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_266(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 3;
			}
			else if (iParam1 < -15)
			{
				if (uParam0->f_35 != 2 && unk_0x79833B02DBD2A244(0f, 1f) < 0.08f)
				{
					unk_0xCEAA091B490F8407(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_266(uParam0), 0, false, 0);
				}
				else if (unk_0x79833B02DBD2A244(0f, 1f) < 0.1f)
				{
					unk_0xCEAA091B490F8407(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_266(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 2;
			}
			else
			{
				if (uParam0->f_35 != 4 && unk_0x79833B02DBD2A244(0f, 1f) < 0.08f)
				{
					unk_0xCEAA091B490F8407(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_266(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 4;
			}
		}
		else if (unk_0x755FF954DAE327E1(to_float(iParam1)) < unk_0x755FF954DAE327E1(to_float(iParam2)))
		{
			if (iParam2 > 15)
			{
				if (uParam0->f_35 != 1 && unk_0x79833B02DBD2A244(0f, 1f) < 0.08f)
				{
					unk_0xCEAA091B490F8407(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_266(uParam0), 0, false, 0);
				}
				else if (unk_0x79833B02DBD2A244(0f, 1f) < 0.1f)
				{
					unk_0xCEAA091B490F8407(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_266(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 1;
			}
			else if (iParam2 < -15)
			{
				if (uParam0->f_35 != 0 && unk_0x79833B02DBD2A244(0f, 1f) < 0.08f)
				{
					unk_0xCEAA091B490F8407(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_266(uParam0), 0, false, 0);
				}
				else if (unk_0x79833B02DBD2A244(0f, 1f) < 0.1f)
				{
					unk_0xCEAA091B490F8407(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_266(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 0;
			}
			else
			{
				if (uParam0->f_35 != 4 && unk_0x79833B02DBD2A244(0f, 1f) < 0.08f)
				{
					unk_0xCEAA091B490F8407(-1, "TENNIS_FOOT_SQUEAKS_MASTER", func_266(uParam0), 0, false, 0);
				}
				uParam0->f_35 = 4;
			}
		}
	}
}

void func_240(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	float fVar8;
	vector3 vVar9;
	vector3 vVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	bool bVar14;
	
	vVar1 = { func_71(&(uParam0->f_4)) };
	if (func_252(uParam3) > 0.5f && !func_229(&(uParam0->f_4), 128))
	{
		func_81(&(uParam0->f_4), 128);
	}
	else if (func_229(&(uParam0->f_4), 128))
	{
		func_218(&(uParam0->f_4), 128);
	}
	switch (func_148(&(uParam0->f_4)))
	{
		case 0:
			*iParam1 = 0;
			*iParam2 = 0;
			if (func_34(&(uParam0->f_4)) == 2)
			{
				func_246(uParam0, uParam3);
			}
			break;
		
		case 5:
			if (func_76(uParam0) == 75)
			{
				vVar2 = { 0.1f, 0.1f, 0.5f };
				if (func_244(uParam0, &vVar1, &vVar2))
				{
					unk_0x80AA372E04ED318D(func_266(uParam0), vVar1, 2f, -1, 1193033728, 1056964608);
					func_243(&(uParam0->f_4), vVar1);
					func_81(&(uParam0->f_4), 4);
					vVar0 = { vVar1 - uParam0->f_37 };
					vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
					*iParam1 = round((vVar0.x * 128f));
					*iParam2 = round((vVar0.y * 128f));
				}
				else if ((unk_0x5A91F08DF773C39D(uParam0->f_32, func_71(&(uParam0->f_4)), vVar2, false, true, 0) || unk_0xD1960163A3042274(func_266(uParam0), 2106541073) == 7) && !func_229(&(uParam0->f_4), 256))
				{
					func_236(&(uParam0->f_4), 0);
					func_218(&(uParam0->f_4), 4);
				}
				else if (uParam0->f_4.f_20 == 0 && !func_229(&(uParam0->f_4), 256))
				{
					func_236(&(uParam0->f_4), 0);
					func_218(&(uParam0->f_4), 4);
				}
				if (func_34(&(uParam0->f_4)) == 2)
				{
					func_246(uParam0, uParam3);
				}
			}
			break;
		
		case 6:
			if (func_242(&(uParam0->f_4)) <= 0f)
			{
				func_218(&(uParam0->f_4), 4);
				func_236(&(uParam0->f_4), 1);
			}
			func_241(&(uParam0->f_4));
			break;
		
		case 1:
			if (func_76(uParam0) == 75)
			{
				unk_0x6DE022225BD968DB(func_284(uParam4), func_284(uParam4) + uParam4->f_10, uParam0->f_37, uParam0->f_40, &fVar3);
				vVar7 = { func_284(uParam4) - func_284(uParam4) + uParam4->f_10 * Vector(fVar3, fVar3, fVar3) };
				vVar6 = { func_284(uParam4) + vVar7 };
				vVar4 = { vVar1 - uParam0->f_37 };
				fVar8 = func_70(vVar4, uParam0->f_40);
				if (!func_229(&(uParam0->f_4), 4))
				{
					if (func_53(uParam3) != 2)
					{
						if (fVar8 < 0f)
						{
							vVar9 = { uParam0->f_37 - vVar6 };
							vVar10 = { vVar6 + vVar9 * Vector(0.15f, 0.15f, 0.15f) };
							func_82(&(uParam0->f_4), vVar10);
							func_243(&(uParam0->f_4), vVar10);
							fVar8 = 0f;
						}
					}
				}
				if (func_53(uParam3) != 2)
				{
					vVar5 = { vVar6 - uParam0->f_37 };
					fVar11 = func_70(vVar4, uParam0->f_43);
					fVar12 = func_70(vVar5, uParam0->f_43);
					bVar13 = fVar11 > 0f;
					bVar14 = fVar12 > 0f;
					if ((vdist2(uParam0->f_37, vVar1) < 50f && bVar13 != bVar14) && fVar8 < 0f)
					{
						unk_0xA3BF0AA5A2608191(func_266(uParam0));
						func_81(&(uParam0->f_4), 4);
					}
				}
				if (((!unk_0xEB6A8945D1AC98A1(func_266(uParam0)) && !vdist2(uParam0->f_37, vVar1) <= (0f * 0f)) && !func_229(&(uParam0->f_4), 4)) && !func_105(uParam0, 1024))
				{
					unk_0x80AA372E04ED318D(uParam0->f_32, func_71(&(uParam0->f_4)), 2f, -1, 1193033728, 1056964608);
					vVar1 = { func_71(&(uParam0->f_4)) };
					func_243(&(uParam0->f_4), vVar1);
					func_81(&(uParam0->f_4), 4);
					vVar0 = { func_71(&(uParam0->f_4)) - uParam0->f_37 };
					vVar0 = { vVar0 / FtoV(vmag(vVar0)) };
					*iParam1 = round((vVar0.x * 128f));
					*iParam2 = round((vVar0.y * 128f));
				}
				else if (vdist2(uParam0->f_37, vVar1) <= (0f * 0f) || unk_0xD1960163A3042274(func_266(uParam0), 2106541073) == 7)
				{
					func_236(&(uParam0->f_4), 2);
					func_218(&(uParam0->f_4), 4);
				}
			}
			break;
		
		case 2:
			*iParam1 = 0;
			*iParam2 = 0;
			break;
	}
}

void func_241(var uParam0)
{
	uParam0->f_24 = (uParam0->f_24 - unk_0x6117725E0134737F());
}

float func_242(var uParam0)
{
	return uParam0->f_24;
}

void func_243(var uParam0, vector3 vParam1)
{
	uParam0->f_3 = { vParam1 };
}

int func_244(var uParam0, var uParam1, var uParam2)
{
	if (func_105(uParam0, 1024))
	{
		return 0;
	}
	if (func_229(&(uParam0->f_4), 256))
	{
		return 0;
	}
	if (func_229(&(uParam0->f_4), 4))
	{
		return 0;
	}
	if (func_229(&(uParam0->f_4), 16))
	{
		return 0;
	}
	if (unk_0xEB6A8945D1AC98A1(func_266(uParam0)))
	{
		return 0;
	}
	if (unk_0x5A91F08DF773C39D(uParam0->f_32, *uParam1, *uParam2, false, true, 0))
	{
		return 0;
	}
	if (!func_245(&(uParam0->f_4)))
	{
		return 0;
	}
	return 1;
}

int func_245(var uParam0)
{
	float fVar0;
	
	fVar0 = vdist(*uParam0, uParam0->f_3);
	if (fVar0 > 0.1f)
	{
		return 1;
	}
	return 0;
}

void func_246(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x1C0640BA9A7327B3() > func_248(&(uParam0->f_4)))
	{
		iVar0 = func_53(uParam1);
		if (iVar0 == 3 || iVar0 == 4)
		{
			func_82(&(uParam0->f_4), uParam0->f_4.f_6[0 /*3*/]);
			func_236(&(uParam0->f_4), 5);
			func_218(&(uParam0->f_4), 4);
		}
		func_247(&(uParam0->f_4), unk_0x1C0640BA9A7327B3() + 500);
	}
}

void func_247(var uParam0, var uParam1)
{
	uParam0->f_26 = uParam1;
}

int func_248(var uParam0)
{
	return uParam0->f_26;
}

int func_249(var uParam0, var uParam1)
{
	float fVar0;
	
	if (uParam0->f_31 == 4)
	{
		return 0;
	}
	if (!func_105(uParam0, 512))
	{
		return 0;
	}
	if (func_105(uParam0, 1024))
	{
		return 0;
	}
	if (!func_105(uParam0, 16))
	{
		return 0;
	}
	if (vdist2(func_71(&(uParam0->f_4)) + Vector(1f, 0f, 0f), uParam0->f_37) > (4f * 4f))
	{
		return 0;
	}
	fVar0 = func_70(uParam0->f_40, func_284(&(uParam1->f_247)) - uParam0->f_37);
	if (fVar0 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_250(var uParam0)
{
	uParam0->f_63 = (uParam0->f_63 + unk_0x6117725E0134737F());
}

void func_251(var uParam0, float fParam1)
{
	uParam0->f_72 = fParam1;
}

float func_252(var uParam0)
{
	return uParam0->f_72;
}

int func_253(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_105(uParam0[iParam1 /*94*/], 1024))
	{
		iVar0 = 5000;
		if (func_76(uParam0[iParam1 /*94*/]) == 72 || func_76(uParam0[iParam1 /*94*/]) == 73)
		{
			iVar0 = 2500;
		}
	}
	if (func_105(uParam0[iParam2 /*94*/], 1024))
	{
		iVar0 = 5000;
		if (func_76(uParam0[iParam2 /*94*/]) == 72 || func_76(uParam0[iParam2 /*94*/]) == 73)
		{
			iVar0 = 2500;
		}
	}
	return iVar0;
}

int func_254(var uParam0)
{
	return uParam0->f_1672;
}

int func_255(var uParam0)
{
	return uParam0->f_77;
}

void func_256(var uParam0, int iParam1)
{
	func_257(uParam0, iParam1);
}

void func_257(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

bool func_258(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_259(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_260(var uParam0)
{
	func_261(&((uParam0[0 /*94*/])->f_32), 1862763509);
	func_261(&((uParam0[1 /*94*/])->f_32), 1862763509);
}

void func_261(var uParam0, int iParam1)
{
	unk_0x25C5402CC10F76CD(*uParam0, false);
	unk_0x4E885A246A9D983A(*uParam0, 20, true);
	unk_0x5E678B691C852774(*uParam0, 16);
	if (iParam1 != -86095805)
	{
		unk_0x6DF7BF67E86AAE86(*uParam0, iParam1);
	}
}

void func_262(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC844350D5D58C99A(iParam0) && !unk_0xEB6A8945D1AC98A1(iParam0))
	{
		iVar0 = func_45(iParam0);
		if (iVar0 == 145)
		{
			iVar0 = func_198(iParam0);
		}
		iVar2 = unk_0x16F2683693E537C9();
		if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iParam0 == iVar2)
		{
			iVar1 = 0;
		}
		else if (unk_0xCED082ADD3739B9F(iParam0) && iVar0 != 14)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = 1;
		}
		unk_0xE6F26F1601EBDDBA(iParam0, iParam1, iVar1);
	}
}

void func_263(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!unk_0xEB6A8945D1AC98A1(func_266(uParam0[iParam1 /*94*/])) && !unk_0xEB6A8945D1AC98A1(func_266(uParam0[iParam2 /*94*/])))
	{
		if (!bParam3)
		{
			if (!bParam4)
			{
				unk_0x9F528B1B53FBC5D9((uParam0[iParam1 /*94*/])->f_33, func_266(uParam0[iParam1 /*94*/]), unk_0x4A089F2B762B8D33(func_266(uParam0[iParam1 /*94*/]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			unk_0x9F528B1B53FBC5D9((uParam0[iParam2 /*94*/])->f_33, func_266(uParam0[iParam2 /*94*/]), unk_0x4A089F2B762B8D33(func_266(uParam0[iParam2 /*94*/]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		}
		else
		{
			if (!bParam4)
			{
				unk_0x9F528B1B53FBC5D9((uParam0[iParam1 /*94*/])->f_33, func_266(uParam0[iParam1 /*94*/]), unk_0x4A089F2B762B8D33(func_266(uParam0[iParam1 /*94*/]), 28422), vLocal_236, vLocal_237, 0, 0, 0, 0, 2, 1);
			}
			unk_0x9F528B1B53FBC5D9((uParam0[iParam2 /*94*/])->f_33, func_266(uParam0[iParam2 /*94*/]), unk_0x4A089F2B762B8D33(func_266(uParam0[iParam2 /*94*/]), 28422), vLocal_236, vLocal_237, 0, 0, 0, 0, 2, 1);
		}
	}
}

void func_264(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_265(var uParam0, int iParam1)
{
	uParam0->f_29 = iParam1;
}

int func_266(var uParam0)
{
	return uParam0->f_32;
}

void func_267(var uParam0, int iParam1)
{
	uParam0->f_32 = iParam1;
}

void func_268(var uParam0, int iParam1)
{
	vector3 vVar0;
	
	if (unk_0xC844350D5D58C99A(uParam0->f_247))
	{
		if (iParam1 || !unk_0x4FC40AB0ECCE6E18(uParam0->f_247))
		{
			unk_0xF690C84DADBB3551(&(uParam0->f_247));
		}
		else
		{
			unk_0xEEEE2E5FA6F78DF0(&(uParam0->f_247));
		}
	}
	vVar0 = { uParam0->f_189.f_29 };
	uParam0->f_247 = unk_0x7707E48765093646(joaat("prop_tennis_ball"), vVar0, false, false, false);
	unk_0x69C149C0E43FAF13(uParam0->f_247, true);
	unk_0xD0C5FAC38659B26F(uParam0->f_247, 1);
	func_115(uParam0->f_247, 0);
	unk_0x1E9649458B15960F(uParam0->f_247, false);
	func_277(&(uParam0->f_247), uParam0->f_189.f_29);
	if (func_276(&(uParam0->f_247)))
	{
		func_275(&(uParam0->f_247));
	}
}

int func_269(var uParam0)
{
	if (!unk_0xAE317D00A5A55DF6("SCRIPT\Tennis", false, -1))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!unk_0xAE317D00A5A55DF6("SCRIPT\TENNIS_VER2_A", false, -1))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("prop_tennis_ball")))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(uParam0->f_1668))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (uParam0->f_1657 == 1 && !unk_0xB87F6CF6E5628C67(uParam0->f_1669))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!unk_0xB87F6CF6E5628C67(joaat("prop_tennis_rack_01b")))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (!unk_0xB4AE0788C1587752("mini@tennis"))
	{
		if (uParam0->f_1657 != 1)
		{
		}
		return 0;
	}
	if (uParam0->f_1657 == 1)
	{
		if (!unk_0xB4AE0788C1587752("mini@tennis@female"))
		{
			if (uParam0->f_1657 != 1)
			{
			}
			return 0;
		}
	}
	if (uParam0->f_1657 != 1)
	{
		if (uParam0->f_1657 != 1 && !unk_0xB87F6CF6E5628C67(joaat("prop_vb_34_tencrt_lighting")))
		{
			return 0;
		}
		if (uParam0->f_1657 != 1 && !unk_0xB4AE0788C1587752("mini@triathlon"))
		{
		}
	}
	if (!unk_0xB4AE0788C1587752("weapons@tennis@male"))
	{
		return 0;
	}
	return 1;
}

void func_270(var uParam0, int iParam1)
{
	if (iParam1 == 21 || func_309(uParam0) == 21)
	{
	}
	else if (func_309(uParam0) != iParam1)
	{
		uParam0->f_5 = func_309(uParam0);
		uParam0->f_4 = iParam1;
	}
}

Vector3 func_271(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, bool bParam4, int iParam5)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	iVar4 = iParam5;
	if ((bParam4 && iParam1 == 1) && iVar4 == 0)
	{
		fVar2 = 0.75f;
		fVar3 = -0.025f;
		vVar1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((bParam4 && iParam1 == 0) && iVar4 == 0)
	{
		fVar2 = 0.25f;
		fVar3 = -0.025f;
		vVar1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((bParam4 && iParam1 == 1) && iVar4 == 1)
	{
		fVar2 = 0.25f;
		fVar3 = 0.025f;
		vVar1 = { uParam0->f_3[3 /*3*/] };
	}
	else if ((bParam4 && iParam1 == 0) && iVar4 == 1)
	{
		fVar2 = 0.75f;
		fVar3 = 0.025f;
		vVar1 = { uParam0->f_3[3 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 1) && iVar4 == 0)
	{
		fVar2 = 0.75f;
		fVar3 = 0f;
		vVar1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 0) && iVar4 == 0)
	{
		fVar2 = 0.25f;
		fVar3 = 0f;
		vVar1 = { uParam0->f_3[0 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 1) && iVar4 == 1)
	{
		fVar2 = 0.25f;
		fVar3 = 0f;
		vVar1 = { uParam0->f_3[3 /*3*/] };
	}
	else if ((!bParam4 && iParam1 == 0) && iVar4 == 1)
	{
		fVar2 = 0.75f;
		fVar3 = 0f;
		vVar1 = { uParam0->f_3[3 /*3*/] };
	}
	vVar0 = { vVar1 + vParam2 * Vector(fVar2, fVar2, fVar2) + vParam3 * Vector(fVar3, fVar3, fVar3) };
	return vVar0;
}

int func_272(var uParam0)
{
	return *uParam0;
}

int func_273(var uParam0)
{
	return uParam0->f_3;
}

void func_274(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_272(uParam1);
	iVar1 = (1 - iVar0);
	if (!unk_0xEB6A8945D1AC98A1(func_266(uParam0[iVar0 /*94*/])) && unk_0xD1960163A3042274(func_266(uParam0[iVar0 /*94*/]), 242628503) == 1)
	{
		*uParam2 = unk_0x4F1B602325013CC2(func_266(uParam0[iVar0 /*94*/]));
	}
	if (!unk_0xEB6A8945D1AC98A1(func_266(uParam0[iVar1 /*94*/])) && unk_0xD1960163A3042274(func_266(uParam0[iVar1 /*94*/]), 242628503) == 1)
	{
		*uParam3 = unk_0x4F1B602325013CC2(func_266(uParam0[iVar1 /*94*/]));
	}
	if (func_105(uParam0[iVar0 /*94*/], 16384) && *uParam2 > 0)
	{
		func_278(uParam0[iVar0 /*94*/], 16384);
		func_262(func_266(uParam0[iVar0 /*94*/]), 0);
		unk_0x9237814869823B3E(func_266(uParam0[iVar0 /*94*/]), "weapons@tennis@male");
	}
	if (func_105(uParam0[iVar1 /*94*/], 16384) && *uParam3 > 0)
	{
		func_278(uParam0[iVar1 /*94*/], 16384);
		func_262(func_266(uParam0[iVar1 /*94*/]), 0);
		unk_0x9237814869823B3E(func_266(uParam0[iVar1 /*94*/]), "weapons@tennis@male");
	}
}

void func_275(var uParam0)
{
	if (func_276(uParam0))
	{
		unk_0xF7E25143642732EA(uParam0->f_23, 1);
		func_288(uParam0, 1);
	}
}

bool func_276(var uParam0)
{
	return unk_0x83A8177D302E1A7E(uParam0->f_23);
}

void func_277(var uParam0, vector3 vParam1)
{
	uParam0->f_7 = { vParam1 };
}

void func_278(var uParam0, int iParam1)
{
	func_256(&(uParam0->f_2), iParam1);
}

void func_279(var uParam0, int iParam1)
{
	func_181(&(uParam0->f_24), iParam1);
}

int func_280(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, bool bParam8, float fParam9, bool bParam10, float fParam11, bool bParam12)
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	float fVar14;
	vector3 vVar15;
	
	vVar0 = { 0f, 0f, 1f };
	fVar1 = func_145(fParam9 == -1f, unk_0x6117725E0134737F(), fParam9);
	iVar2 = 0;
	fVar3 = (fVar1 / 0.03333334f);
	vVar0 = { vVar0 * Vector(fVar3, fVar3, fVar3) };
	if (bParam10)
	{
		fVar1 = (fVar1 + (fVar1 * 0.75f));
		vVar0 = { vVar0 + vVar0 * Vector(0.75f, 0.75f, 0.75f) };
	}
	if ((*uParam5 == 1 && *uParam4 > 0.455f) && *uParam6 < 0.1f)
	{
		vVar0 = { vVar0 * Vector(-1f, -1f, -1f) };
		*uParam6 = (*uParam6 + fVar1);
		*uParam2 = { *uParam2 + vVar0 };
	}
	else if (*uParam5 == 2)
	{
		if (*uParam4 > 0.05f && *iParam7 < 1)
		{
			vVar0 = { *uParam2 * Vector(fVar3, fVar3, fVar3) * Vector(0.015f, 0.015f, 0.015f) };
			vVar0.z = 0f;
			*uParam2 = { *uParam2 + vVar0 };
		}
		else if (*iParam7 >= 1)
		{
			vVar0 = { *uParam2 * Vector(fVar3, fVar3, fVar3) * Vector(-0.1f, -0.1f, -0.1f) };
			*uParam2 = { *uParam2 + vVar0 };
			*uParam5 = 0;
		}
	}
	*uParam4 = (*uParam4 + fVar1);
	vVar4 = { *uParam3 / FtoV(vmag(*uParam3)) };
	unk_0x4ADCCF23C40DC113(uParam0->f_29 + Vector(1f, 0f, 0f), uParam0->f_29 + Vector(1f, 0f, 0f) + vVar4, 0, 0, 255, 255);
	unk_0x4ADCCF23C40DC113(uParam0->f_29 + Vector(1f, 0f, 0f), uParam0->f_29 + Vector(2f, 0f, 0f), 0, 255, 0, 255);
	vVar5 = { *uParam1 + *uParam2 * Vector(fVar1, fVar1, fVar1) };
	iVar2 = func_283(uParam0, uParam1, &vVar5, uParam3, &vVar7, &vVar6, fParam11);
	if (iVar2 == 2)
	{
		if (bParam8)
		{
			unk_0xEB819BD1E585E9CB(-1, "TENNIS_NET_BALL_MEDIUM_MASTER", *uParam1, 0, false, 0, 1);
			vVar8 = { *uParam1 + *uParam2 };
			unk_0xAE2BAF27F4FB7FE0(*uParam1, vVar8, 2f);
		}
		vVar9 = { *uParam3 / FtoV(vmag(*uParam3)) };
		fVar10 = func_70(vVar9, *uParam2);
		vVar11 = { vVar9 * Vector(fVar10, fVar10, fVar10) };
		*uParam2 = { *uParam2 - vVar11 * Vector(1.4f, 1.4f, 1.4f) };
		uParam2->f_2 = (uParam2->f_2 * 0.4f);
	}
	else if (iVar2 == 3 && !bParam12)
	{
		if (bParam8)
		{
			unk_0xEB819BD1E585E9CB(-1, "TENNIS_NET_BALL_SKIM_MASTER", *uParam1, 0, false, 0, 1);
			vVar12 = { *uParam1 + *uParam2 };
			unk_0xAE2BAF27F4FB7FE0(*uParam1, vVar12, 2f);
		}
		*uParam1 = { vVar7 };
		*uParam2 = { *uParam2 - vVar6 * FtoV(func_70(vVar6, *uParam2)) * Vector(1.4f, 1.4f, 1.4f) };
	}
	vVar13 = { *uParam1 };
	*uParam1 = { *uParam1 + *uParam2 * Vector(fVar1, fVar1, fVar1) };
	if (uParam1->f_2 < uParam0->f_29.f_2)
	{
		unk_0x6DE022225BD968DB(vVar13, *uParam1, uParam0->f_29, 0f, 0f, 1f, &fVar14);
		vVar15 = { *uParam2 * Vector(fVar1, fVar1, fVar1) * Vector(fVar14, fVar14, fVar14) };
		*uParam1 = { vVar13 + vVar15 };
		uParam1->f_2 = (uParam1->f_2 + 0.05f);
		*uParam2 = { func_282(*uParam2) };
		*iParam7++;
		iVar2 = 1;
		if (bParam8 && *iParam7 == 1)
		{
			unk_0xEB819BD1E585E9CB(-1, "TENNIS_CLS_BALL_HARD_MASTER", *uParam1, 0, false, 0, 1);
		}
		else if ((bParam8 && *iParam7 > 1) && *iParam7 < 4)
		{
			unk_0xEB819BD1E585E9CB(-1, "TENNIS_CLS_BALL_MASTER", *uParam1, 0, false, 0, 1);
		}
	}
	*uParam2 = { *uParam2 + func_281(*uParam2, fVar1) };
	unk_0x00EE06C17607E306("ScriptedMotion", *uParam1, 0, 0, 255, 255);
	return iVar2;
}

Vector3 func_281(vector3 vParam0, float fParam1)
{
	vector3 vVar0;
	float fVar1;
	vector3 vVar2;
	
	vVar0 = { 0f, 0f, -9.8f };
	fVar1 = vmag(vParam0);
	vVar2 = { -vParam0 * FtoV((fVar1 * 0.065f)) };
	vVar2 = { vVar2 + vVar0 };
	vVar2 = { vVar2 * Vector(fParam1, fParam1, fParam1) };
	return vVar2;
}

Vector3 func_282(vector3 vParam0)
{
	vParam0 = { vParam0 * Vector(1f, 1f, 1f) };
	vParam0.z = -vParam0.z;
	if (vParam0.z < 0.01f)
	{
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_283(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	float fVar7;
	
	unk_0x6DE022225BD968DB(*uParam1, *uParam2, uParam0->f_29, *uParam3, &fVar0);
	if (fVar0 >= 0f && fVar0 <= 1f)
	{
		vVar1 = { *uParam1 + *uParam2 - *uParam1 * Vector(fVar0, fVar0, fVar0) };
		fVar3 = unk_0x89AA362D00A86F72(vVar1, uParam0->f_39[0 /*3*/], uParam0->f_39[1 /*3*/], 0);
		fVar4 = unk_0x89AA362D00A86F72(vVar1, uParam0->f_39[1 /*3*/], uParam0->f_39[2 /*3*/], 0);
		if (fVar3 > 0f && fVar3 < 1f)
		{
			vVar2 = { uParam0->f_39[0 /*3*/] + uParam0->f_39[1 /*3*/] - uParam0->f_39[0 /*3*/] * Vector(fVar3, fVar3, fVar3) };
		}
		else if ((fVar4 > 0f && fVar4 < 1f) && fVar3 > 0f)
		{
			vVar2 = { uParam0->f_39[1 /*3*/] + uParam0->f_39[2 /*3*/] - uParam0->f_39[1 /*3*/] * Vector(fVar4, fVar4, fVar4) };
		}
		fVar5 = (vVar1.z - vVar2.z);
		if (fVar5 <= func_12((0.025f - fParam6), -1f, 0f))
		{
			return 2;
		}
		else if (fVar5 > 0f && fVar5 <= (0.025f - fParam6))
		{
			vVar6 = { *uParam3 / FtoV(vmag(*uParam3)) };
			if (func_70(*uParam2 - *uParam1, vVar6) > 0f)
			{
				vVar6 = { vVar6 * Vector(-1f, -1f, -1f) };
			}
			fVar7 = sqrt(((0.025f * 0.025f) - (fVar5 * fVar5)));
			*uParam4 = { vVar1 + vVar6 * Vector(fVar7, fVar7, fVar7) };
			*uParam5 = { *uParam4 - vVar2 };
			*uParam5 = { *uParam5 / FtoV(vmag(*uParam5)) };
			return 3;
		}
	}
	return 0;
}

Vector3 func_284(var uParam0)
{
	return uParam0->f_7;
}

int func_285(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (iParam3 < 8)
	{
		return 0;
	}
	if (func_230(uParam0, 1))
	{
		return 0;
	}
	if (iParam1 >= 2)
	{
		return 0;
	}
	if (func_258(uParam2, 4194304))
	{
		return 0;
	}
	if (!unk_0xC844350D5D58C99A(uParam0->f_247))
	{
		return 0;
	}
	if (unk_0xD59B17D2DFF98E26(uParam0->f_247))
	{
		return 0;
	}
	if (!func_286(&(uParam0->f_247), &(uParam0->f_189), &(uParam0->f_1658), &(uParam0->f_1661)))
	{
		if (!func_289(&(uParam0->f_247), 16))
		{
			func_279(&(uParam0->f_247), 16);
		}
		return 0;
	}
	if (func_289(&(uParam0->f_247), 2))
	{
		return 0;
	}
	if (func_289(&(uParam0->f_247), 4))
	{
		return 0;
	}
	return 1;
}

bool func_286(var uParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	vVar0 = { uParam1->f_3[0 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	vVar1 = { uParam1->f_3[3 /*3*/] + *uParam3 * Vector(0.5f, 0.5f, 0.5f) };
	vVar2 = { *uParam2 * Vector(0.191f, 0.191f, 0.191f) };
	fVar3 = (uParam1->f_1 * 1.8f);
	vVar0 = { vVar0 - vVar2 };
	vVar1 = { vVar1 + vVar2 };
	return func_77(func_284(uParam0), vVar0, vVar1, fVar3);
}

int func_287(var uParam0)
{
	return uParam0->f_1;
}

void func_288(var uParam0, int iParam1)
{
	func_256(&(uParam0->f_24), iParam1);
}

bool func_289(var uParam0, int iParam1)
{
	return func_258(uParam0->f_24, iParam1);
}

void func_290(var uParam0)
{
	uParam0->f_1667 = !uParam0->f_1667;
}

void func_291(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	unk_0xA2E3EDD0E119882F(0);
	if (iParam1 >= 12 && iParam1 < 14)
	{
		func_303(&(uParam0->f_247));
	}
	if (uParam0->f_1657 != 1)
	{
		func_293();
		if (unk_0xF06268E966D7C1A2(unk_0xA30EC016B12C03E4(), 0))
		{
			if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()))
			{
				unk_0x67F91979413C5D76(unk_0xD803B885F5E47A62(), 0, 0);
				unk_0x56EA5D248F36A081(unk_0xD803B885F5E47A62(), 0);
			}
		}
	}
	func_292(&(uParam0->f_247), func_284(&(uParam0->f_247)));
	if (!func_230(uParam0, 1))
	{
		bVar0 = !unk_0xEB6A8945D1AC98A1(func_266(uParam0[iParam3 /*94*/]));
		if (((bVar0 && !bParam5) && !func_229(&((uParam0[iParam3 /*94*/])->f_4), 256)) || ((bVar0 && func_105(uParam0[iParam3 /*94*/], 8192)) && uParam0->f_1657 == 1))
		{
			(uParam0[iParam3 /*94*/])->f_37 = { unk_0x68F4C0EC296D3901(func_266(uParam0[iParam3 /*94*/]), true) };
			func_21(iParam1, uParam0[iParam3 /*94*/], uParam2, func_105(uParam0[iParam3 /*94*/], 8192));
		}
		bVar0 = (!unk_0xEB6A8945D1AC98A1(func_266(uParam0[iParam4 /*94*/])) && unk_0xC844350D5D58C99A(func_266(uParam0[iParam4 /*94*/])));
		if (((bVar0 && !bParam5) && !func_229(&((uParam0[iParam4 /*94*/])->f_4), 256)) || ((bVar0 && func_105(uParam0[iParam4 /*94*/], 8192)) && uParam0->f_1657 == 1))
		{
			(uParam0[iParam4 /*94*/])->f_37 = { unk_0x68F4C0EC296D3901(func_266(uParam0[iParam4 /*94*/]), true) };
			func_21(iParam1, uParam0[iParam4 /*94*/], uParam2, func_105(uParam0[iParam4 /*94*/], 8192));
		}
	}
}

void func_292(var uParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (func_289(uParam0, 1))
	{
		if (!func_276(uParam0))
		{
			uParam0->f_23 = unk_0xB055A4268B938F30("scr_tennis_ball_trail", vParam1, 0f, 0f, 0f, 1065353216, 0, 0, 0, true);
			unk_0xA402F6C87C08815C(12, &iVar0, &iVar1, &iVar2, &uVar3);
			unk_0x02D205CBD211ED4F(uParam0->f_23, (to_float(iVar0) / 255f), (to_float(iVar1) / 255f), (to_float(iVar2) / 255f), false);
			uVar3 = uVar3;
		}
		unk_0xD803566B5FEA9245(uParam0->f_23, vParam1, 0f, 0f, 0f);
	}
}

void func_293()
{
	unk_0x38C3A68D7861DCFD(0, 22, 1);
	unk_0x38C3A68D7861DCFD(0, 21, 1);
	unk_0x38C3A68D7861DCFD(0, 24, 1);
	unk_0x38C3A68D7861DCFD(0, 36, 1);
	unk_0x38C3A68D7861DCFD(0, 25, 1);
	unk_0x38C3A68D7861DCFD(0, 140, 1);
	unk_0x38C3A68D7861DCFD(0, 141, 1);
	unk_0x38C3A68D7861DCFD(0, 143, 1);
	unk_0x38C3A68D7861DCFD(0, 44, 1);
	unk_0x38C3A68D7861DCFD(0, 27, 1);
	unk_0x38C3A68D7861DCFD(0, 37, 1);
	unk_0x38C3A68D7861DCFD(0, 12, 1);
	unk_0x38C3A68D7861DCFD(0, 13, 1);
	unk_0x38C3A68D7861DCFD(0, 14, 1);
	unk_0x38C3A68D7861DCFD(0, 15, 1);
	unk_0x38C3A68D7861DCFD(0, 16, 1);
	unk_0x38C3A68D7861DCFD(0, 17, 1);
	unk_0x38C3A68D7861DCFD(0, 26, 1);
	unk_0x38C3A68D7861DCFD(0, 19, 1);
	unk_0x38C3A68D7861DCFD(0, 20, 1);
	unk_0x38C3A68D7861DCFD(0, 0, 1);
	unk_0x3584F71E5CA29322(2);
	unk_0x3584F71E5CA29322(19);
	unk_0x3584F71E5CA29322(7);
	unk_0x3584F71E5CA29322(8);
	unk_0x3584F71E5CA29322(9);
	unk_0x3584F71E5CA29322(1);
	unk_0x3584F71E5CA29322(18);
	unk_0x3584F71E5CA29322(3);
	unk_0x3584F71E5CA29322(4);
	if (!func_302())
	{
		func_294(1);
	}
}

void func_294(bool bParam0)
{
	if (bParam0)
	{
		func_301();
		if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
		{
			unk_0x5D96D8530B3D0904(&Global_7357, 16);
		}
		Global_19486.f_1 = 1;
		if (func_300(0))
		{
			func_295(0);
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

void func_295(int iParam0)
{
	if (func_299())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_298())
		{
			func_297(1, 1);
		}
		else
		{
			func_297(0, 0);
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
	if (!func_296())
	{
		Global_19486.f_1 = 3;
	}
}

int func_296()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_297(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_300(0))
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

bool func_298()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 5);
}

bool func_299()
{
	return unk_0xEAE0D21A50E6C7F4(Global_1687687, 19);
}

int func_300(int iParam0)
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

void func_301()
{
	if (Global_19486.f_1 == 9 || Global_19486.f_1 == 10)
	{
		Global_20858 = 0;
		Global_20854 = 1;
	}
}

int func_302()
{
	if (Global_19486.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_303(var uParam0)
{
	uParam0->f_6 = (uParam0->f_6 + unk_0x6117725E0134737F());
}

void func_304(int iParam0, int iParam1)
{
	func_306(iParam0);
	Global_93750[iParam0] = iParam1;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_305(1, iParam1);
					func_305(2, iParam1);
					break;
				
				case 1:
					func_305(0, iParam1);
					func_305(2, iParam1);
					break;
				
				case 2:
					func_305(0, iParam1);
					func_305(1, iParam1);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_305(1, iParam1);
					func_305(2, iParam1);
					break;
				
				case 1:
					func_305(0, iParam1);
					func_305(2, iParam1);
					break;
				
				case 2:
					func_305(0, iParam1);
					func_305(1, iParam1);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					func_305(1, iParam1);
					func_305(2, iParam1);
					break;
				
				case 1:
					func_305(0, iParam1);
					func_305(2, iParam1);
					break;
				
				case 2:
					func_305(0, iParam1);
					func_305(1, iParam1);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					func_305(1, iParam1);
					func_305(2, iParam1);
					break;
				
				case 1:
					func_305(0, iParam1);
					func_305(2, iParam1);
					break;
				
				case 2:
					func_305(0, iParam1);
					func_305(1, iParam1);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					func_305(1, iParam1);
					func_305(2, iParam1);
					break;
				
				case 1:
					func_305(0, iParam1);
					func_305(2, iParam1);
					break;
				
				case 2:
					func_305(0, iParam1);
					func_305(1, iParam1);
					break;
			}
			break;
		
		case 12:
			switch (iParam0)
			{
				case 0:
					func_305(1, iParam1);
					break;
				
				case 1:
					func_305(0, iParam1);
					break;
			}
			break;
		
		case 13:
			switch (iParam0)
			{
				case 0:
					func_305(1, iParam1);
					break;
				
				case 1:
					func_305(0, iParam1);
					break;
			}
			break;
		
		case 14:
			switch (iParam0)
			{
				case 0:
					func_305(1, iParam1);
					break;
				
				case 1:
					func_305(0, iParam1);
					break;
			}
			break;
		
		case 15:
			switch (iParam0)
			{
				case 0:
					func_305(1, iParam1);
					break;
				
				case 1:
					func_305(0, iParam1);
					break;
			}
			break;
		
		case 25:
			switch (iParam0)
			{
				case 0:
					func_305(1, iParam1);
					break;
				
				case 1:
					func_305(0, iParam1);
					break;
			}
			break;
		
		case 47:
			switch (iParam0)
			{
				case 2:
					func_305(3, iParam1);
					break;
				
				case 3:
					func_305(2, iParam1);
					break;
			}
			break;
		
		case 56:
			switch (iParam0)
			{
				case 2:
					func_305(0, iParam1);
					break;
				
				case 0:
					func_305(2, iParam1);
					break;
			}
			break;
		
		case 57:
			switch (iParam0)
			{
				case 2:
					func_305(0, iParam1);
					break;
				
				case 0:
					func_305(2, iParam1);
					break;
			}
			break;
		
		case 58:
			switch (iParam0)
			{
				case 2:
					func_305(1, iParam1);
					break;
				
				case 1:
					func_305(2, iParam1);
					break;
			}
			break;
		
		case 74:
			switch (iParam0)
			{
				case 2:
					func_305(1, iParam1);
					break;
				
				case 1:
					func_305(2, iParam1);
					break;
			}
			break;
		
		case 99:
			switch (iParam0)
			{
				case 6:
					func_305(7, iParam1);
					break;
				
				case 7:
					func_305(6, iParam1);
					break;
			}
			break;
		
		case 116:
			switch (iParam0)
			{
				case 9:
					func_305(11, iParam1);
					break;
				
				case 11:
					func_305(9, iParam1);
					break;
			}
			break;
		
		case 117:
			switch (iParam0)
			{
				case 9:
					func_305(11, iParam1);
					break;
				
				case 11:
					func_305(9, iParam1);
					break;
			}
			break;
		
		case 124:
			switch (iParam0)
			{
				case 11:
					func_305(8, iParam1);
					break;
				
				case 8:
					func_305(11, iParam1);
					break;
			}
			break;
		
		case 136:
			switch (iParam0)
			{
				case 13:
					func_305(14, iParam1);
					break;
				
				case 14:
					func_305(13, iParam1);
					break;
			}
			break;
	}
}

void func_305(int iParam0, int iParam1)
{
	func_306(iParam0);
	Global_93750[iParam0] = iParam1;
}

void func_306(int iParam0)
{
	switch (Global_93750[iParam0])
	{
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
			break;
		
		default:
			Global_111638.f_18509[iParam0] = Global_93750[iParam0];
			break;
	}
}

int func_307(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_266(uParam0[iParam1 /*94*/]);
	if (!unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9()) && unk_0x168558745A6AC21E(unk_0x16F2683693E537C9()))
	{
		if (!unk_0xEB6A8945D1AC98A1(iVar0))
		{
			unk_0x5DA3F35E3BFDEE66(iVar0, unk_0x16F2683693E537C9(), -1, 0);
		}
		if (!unk_0xEB6A8945D1AC98A1(func_266(uParam0[(1 - iParam1) /*94*/])))
		{
			unk_0x5DA3F35E3BFDEE66(func_266(uParam0[(1 - iParam1) /*94*/]), unk_0x16F2683693E537C9(), -1, 0);
		}
		return 1;
	}
	if (unk_0xEB6A8945D1AC98A1(iVar0))
	{
		return 1;
	}
	if (unk_0x688A90832774AB83(iVar0))
	{
		return 1;
	}
	if (unk_0x65851B2C8786EE74(iVar0))
	{
		return 1;
	}
	if ((!unk_0x437347B10A200C4B(iVar0, 0) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0)) && unk_0xB87D13D0C064E9D1(iVar0, unk_0x16F2683693E537C9(), 1))
	{
		return 1;
	}
	if (!unk_0xC844350D5D58C99A(iVar0))
	{
		return 1;
	}
	if (uParam0->f_1657 != 1 && unk_0xF06268E966D7C1A2(unk_0xD803B885F5E47A62(), 0))
	{
		func_308("TENN_WANTED", 7500, 0);
		func_181(iParam2, 1073741824);
		return 1;
	}
	if (unk_0x869EFD0BC0868856(iVar0))
	{
		return 1;
	}
	iVar2 = (1 - iParam1);
	iVar1 = func_266(uParam0[iVar2 /*94*/]);
	if (unk_0xEB6A8945D1AC98A1(iVar1))
	{
		return 1;
	}
	if (unk_0x688A90832774AB83(iVar1))
	{
		return 1;
	}
	if (unk_0x65851B2C8786EE74(iVar1))
	{
		return 1;
	}
	if ((!unk_0x437347B10A200C4B(iVar1, 0) && !unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0)) && unk_0xB87D13D0C064E9D1(iVar1, unk_0x16F2683693E537C9(), 1))
	{
		return 1;
	}
	if (!unk_0xC844350D5D58C99A(iVar1))
	{
		return 1;
	}
	if (unk_0x869EFD0BC0868856(iVar1))
	{
		return 1;
	}
	if (uParam0->f_1657 == 1 && (unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iVar0) || unk_0x1B3D109B39CC2C89(unk_0x16F2683693E537C9(), iVar1)))
	{
		return 1;
	}
	return 0;
}

void func_308(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB05D06A3759A10CE(sParam0);
	unk_0x12F275EDEEF63A2B(iParam1, 1);
}

int func_309(var uParam0)
{
	return uParam0->f_4;
}

void func_310(var uParam0)
{
	if (unk_0xC844350D5D58C99A((uParam0[0 /*94*/])->f_33))
	{
		unk_0x15AFB6CBDE990FB6((uParam0[0 /*94*/])->f_33, 1, true);
		unk_0xEEEE2E5FA6F78DF0(&((uParam0[0 /*94*/])->f_33));
	}
	if (unk_0xC844350D5D58C99A(uParam0->f_247))
	{
		unk_0x15AFB6CBDE990FB6(uParam0->f_247, 1, true);
		unk_0xEEEE2E5FA6F78DF0(&(uParam0->f_247));
	}
	if (unk_0xC844350D5D58C99A((uParam0[1 /*94*/])->f_33))
	{
		unk_0x15AFB6CBDE990FB6((uParam0[1 /*94*/])->f_33, 1, true);
		unk_0xEEEE2E5FA6F78DF0(&((uParam0[1 /*94*/])->f_33));
	}
	unk_0x71199B01895C6202(joaat("prop_tennis_ball"));
	unk_0x71199B01895C6202(uParam0->f_1668);
	unk_0x71199B01895C6202(uParam0->f_1669);
	unk_0x71199B01895C6202(joaat("prop_tennis_rack_01b"));
	unk_0x8D17794CE3273D70("mini@tennis");
	unk_0x8D17794CE3273D70("mini@tennis@female");
	if (func_194(1))
	{
		func_313(1);
	}
	if (func_194(2))
	{
		func_313(2);
	}
	if (!func_311(-1))
	{
		unk_0xB72C6E8042748B1A(unk_0xD803B885F5E47A62(), 1);
	}
	else
	{
		unk_0xB72C6E8042748B1A(unk_0xD803B885F5E47A62(), 0);
	}
	if (!unk_0x437347B10A200C4B((uParam0[0 /*94*/])->f_32, 0) && !unk_0x9E834FAC6CCB49FB((uParam0[0 /*94*/])->f_32))
	{
		func_224(uParam0, 0, 1);
	}
	if (!unk_0x437347B10A200C4B((uParam0[1 /*94*/])->f_32, 0) && !unk_0x9E834FAC6CCB49FB((uParam0[1 /*94*/])->f_32))
	{
		func_224(uParam0, 1, 1);
	}
	unk_0x10FAF14A60A0DBE1();
}

int func_311(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iVar0 = unk_0xD803B885F5E47A62();
	}
	else
	{
		iVar0 = unk_0x117658E336116132(iParam0);
	}
	if (func_225(iVar0, 0))
	{
		return 1;
	}
	if (func_312(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_312(int iParam0)
{
	return unk_0xEAE0D21A50E6C7F4(Global_1590535[iParam0 /*876*/].f_39.f_18, 14);
}

void func_313(int iParam0)
{
	Global_110724 = (Global_110724 - (Global_110724 && iParam0));
}

void func_314(float fParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	float fVar2;
	struct<8> Var3;
	
	iVar0 = func_41();
	sVar1 = func_196(iVar0 == 0, "DISMISS_MICHAEL", func_196(iVar0 == 2, "GENERIC_CURSE_HIGH", func_196(iVar0 == 1, "GENERIC_INSULT_MALE", "GENERIC_INSULT_MED")));
	fVar2 = func_78(uParam1);
	*fParam0 = (*fParam0 + unk_0x6117725E0134737F());
	if ((((*fParam0 > (5f + unk_0x79833B02DBD2A244(0f, 5f)) && func_76(uParam2) == 75) && !unk_0xEB6A8945D1AC98A1(func_266(uParam2))) && !unk_0xEB6A8945D1AC98A1(unk_0x16F2683693E537C9())) && func_77(unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true), uParam1->f_3[0 /*3*/] + FtoV((fVar2 * 0.5f)) * uParam1->f_52, uParam1->f_3[3 /*3*/] + FtoV((fVar2 * 0.5f)) * uParam1->f_52, (fVar2 * 1.5f)))
	{
		StringCopy(&Var3, "AMANDA_NORMAL", 32);
		func_110(uParam2, sVar1, Var3, 9);
		*fParam0 = 0f;
	}
}

void func_315(var uParam0)
{
	uParam0->f_1672 = (uParam0->f_1672 + round((unk_0x6117725E0134737F() * 1000f)));
}

void func_316(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	func_324(&(uParam0->f_189), uParam0, 9);
	func_321(uParam0[iParam3 /*94*/], iParam3, 4, uParam0->f_1658, uParam0->f_1661);
	func_321(uParam0[iParam4 /*94*/], iParam4, 4, -uParam0->f_1658, -uParam0->f_1661);
	func_320(&(uParam0->f_247));
	StringCopy(&(uParam0->f_1670), "Idle1", 8);
	uParam1->f_4 = 4;
	uParam0->f_1657 = iParam2;
	(uParam0[iParam3 /*94*/])->f_4.f_20 = 1;
	(uParam0[iParam4 /*94*/])->f_4.f_20 = 1;
	func_319(uParam0);
	func_318(uParam0);
	func_317(uParam0);
}

void func_317(var uParam0)
{
	uParam0->f_535[3 /*12*/] = 0f;
	uParam0->f_535[3 /*12*/].f_1 = 0.167f;
	uParam0->f_535[3 /*12*/].f_2 = 0.633f;
	uParam0->f_535[3 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[3 /*12*/].f_4), "backhand_bs_hi", 32);
	uParam0->f_535[5 /*12*/] = 0f;
	uParam0->f_535[5 /*12*/].f_1 = 0.143f;
	uParam0->f_535[5 /*12*/].f_2 = 0.633f;
	uParam0->f_535[5 /*12*/].f_3 = 56;
	StringCopy(&(uParam0->f_535[5 /*12*/].f_4), "backhand_bs_lo", 32);
	uParam0->f_535[4 /*12*/] = 0f;
	uParam0->f_535[4 /*12*/].f_1 = 0.15f;
	uParam0->f_535[4 /*12*/].f_2 = 0.633f;
	uParam0->f_535[4 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[4 /*12*/].f_4), "backhand_bs_md", 32);
	uParam0->f_535[0 /*12*/] = 0f;
	uParam0->f_535[0 /*12*/].f_1 = 0.14f;
	uParam0->f_535[0 /*12*/].f_2 = 0.53f;
	uParam0->f_535[0 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[0 /*12*/].f_4), "backhand_ts_hi", 32);
	uParam0->f_535[2 /*12*/] = 0f;
	uParam0->f_535[2 /*12*/].f_1 = 0.15f;
	uParam0->f_535[2 /*12*/].f_2 = 0.535f;
	uParam0->f_535[2 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[2 /*12*/].f_4), "backhand_ts_lo", 32);
	uParam0->f_535[1 /*12*/] = 0f;
	uParam0->f_535[1 /*12*/].f_1 = 0.17f;
	uParam0->f_535[1 /*12*/].f_2 = 0.665f;
	uParam0->f_535[1 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[1 /*12*/].f_4), "backhand_ts_md", 32);
	uParam0->f_535[9 /*12*/] = 0.125f;
	uParam0->f_535[9 /*12*/].f_1 = 0.167f;
	uParam0->f_535[9 /*12*/].f_2 = 0.633f;
	uParam0->f_535[9 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[9 /*12*/].f_4), "backhand_bs_hi", 32);
	uParam0->f_535[11 /*12*/] = 0.089f;
	uParam0->f_535[11 /*12*/].f_1 = 0.143f;
	uParam0->f_535[11 /*12*/].f_2 = 0.633f;
	uParam0->f_535[11 /*12*/].f_3 = 56;
	StringCopy(&(uParam0->f_535[11 /*12*/].f_4), "backhand_bs_lo", 32);
	uParam0->f_535[10 /*12*/] = 0.108f;
	uParam0->f_535[10 /*12*/].f_1 = 0.15f;
	uParam0->f_535[10 /*12*/].f_2 = 0.633f;
	uParam0->f_535[10 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[10 /*12*/].f_4), "backhand_bs_md", 32);
	uParam0->f_535[6 /*12*/] = 0.086f;
	uParam0->f_535[6 /*12*/].f_1 = 0.12f;
	uParam0->f_535[6 /*12*/].f_2 = 0.53f;
	uParam0->f_535[6 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[6 /*12*/].f_4), "backhand_ts_hi", 32);
	uParam0->f_535[8 /*12*/] = 0.0925f;
	uParam0->f_535[8 /*12*/].f_1 = 0.15f;
	uParam0->f_535[8 /*12*/].f_2 = 0.535f;
	uParam0->f_535[8 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[8 /*12*/].f_4), "backhand_ts_lo", 32);
	uParam0->f_535[7 /*12*/] = 0.108f;
	uParam0->f_535[7 /*12*/].f_1 = 0.16f;
	uParam0->f_535[7 /*12*/].f_2 = 0.665f;
	uParam0->f_535[7 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[7 /*12*/].f_4), "backhand_ts_md", 32);
	uParam0->f_535[35 /*12*/] = 0f;
	uParam0->f_535[35 /*12*/].f_1 = 0.3f;
	uParam0->f_535[35 /*12*/].f_2 = 0.58f;
	uParam0->f_535[35 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[35 /*12*/].f_4), "close_bh_bs_lo", 32);
	uParam0->f_535[34 /*12*/] = 0f;
	uParam0->f_535[34 /*12*/].f_1 = 0.3f;
	uParam0->f_535[34 /*12*/].f_2 = 0.585f;
	uParam0->f_535[34 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[34 /*12*/].f_4), "close_bh_bs_md", 32);
	uParam0->f_535[33 /*12*/] = 0f;
	uParam0->f_535[33 /*12*/].f_1 = 0.29f;
	uParam0->f_535[33 /*12*/].f_2 = 0.63f;
	uParam0->f_535[33 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[33 /*12*/].f_4), "close_bh_bs_hi", 32);
	uParam0->f_535[32 /*12*/] = 0f;
	uParam0->f_535[32 /*12*/].f_1 = 0.28f;
	uParam0->f_535[32 /*12*/].f_2 = 0.708f;
	uParam0->f_535[32 /*12*/].f_3 = 50;
	StringCopy(&(uParam0->f_535[32 /*12*/].f_4), "close_bh_ts_lo", 32);
	uParam0->f_535[31 /*12*/] = 0f;
	uParam0->f_535[31 /*12*/].f_1 = 0.26f;
	uParam0->f_535[31 /*12*/].f_2 = 0.71f;
	uParam0->f_535[31 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[31 /*12*/].f_4), "close_bh_ts_md", 32);
	uParam0->f_535[30 /*12*/] = 0f;
	uParam0->f_535[30 /*12*/].f_1 = 0.26f;
	uParam0->f_535[30 /*12*/].f_2 = 0.643f;
	uParam0->f_535[30 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[30 /*12*/].f_4), "close_bh_ts_hi", 32);
	uParam0->f_535[47 /*12*/] = 0.174f;
	uParam0->f_535[47 /*12*/].f_1 = uParam0->f_535[35 /*12*/].f_1;
	uParam0->f_535[47 /*12*/].f_2 = uParam0->f_535[35 /*12*/].f_2;
	uParam0->f_535[47 /*12*/].f_3 = uParam0->f_535[35 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[47 /*12*/].f_4), "close_bh_bs_lo", 32);
	uParam0->f_535[46 /*12*/] = 0.217f;
	uParam0->f_535[46 /*12*/].f_1 = uParam0->f_535[34 /*12*/].f_1;
	uParam0->f_535[46 /*12*/].f_2 = uParam0->f_535[34 /*12*/].f_2;
	uParam0->f_535[46 /*12*/].f_3 = uParam0->f_535[34 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[46 /*12*/].f_4), "close_bh_bs_md", 32);
	uParam0->f_535[45 /*12*/] = 0.208f;
	uParam0->f_535[45 /*12*/].f_1 = uParam0->f_535[33 /*12*/].f_1;
	uParam0->f_535[45 /*12*/].f_2 = uParam0->f_535[33 /*12*/].f_2;
	uParam0->f_535[45 /*12*/].f_3 = uParam0->f_535[33 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[45 /*12*/].f_4), "close_bh_bs_hi", 32);
	uParam0->f_535[44 /*12*/] = 0.12f;
	uParam0->f_535[44 /*12*/].f_1 = uParam0->f_535[32 /*12*/].f_1;
	uParam0->f_535[44 /*12*/].f_2 = uParam0->f_535[32 /*12*/].f_2;
	uParam0->f_535[44 /*12*/].f_3 = uParam0->f_535[32 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[44 /*12*/].f_4), "close_bh_ts_lo", 32);
	uParam0->f_535[43 /*12*/] = 0.148f;
	uParam0->f_535[43 /*12*/].f_1 = uParam0->f_535[31 /*12*/].f_1;
	uParam0->f_535[43 /*12*/].f_2 = uParam0->f_535[31 /*12*/].f_2;
	uParam0->f_535[43 /*12*/].f_3 = uParam0->f_535[31 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[43 /*12*/].f_4), "close_bh_ts_md", 32);
	uParam0->f_535[42 /*12*/] = 0.09f;
	uParam0->f_535[42 /*12*/].f_1 = uParam0->f_535[30 /*12*/].f_1;
	uParam0->f_535[42 /*12*/].f_2 = uParam0->f_535[30 /*12*/].f_2;
	uParam0->f_535[42 /*12*/].f_3 = uParam0->f_535[30 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[42 /*12*/].f_4), "close_bh_ts_hi", 32);
	uParam0->f_535[41 /*12*/] = 0f;
	uParam0->f_535[41 /*12*/].f_1 = 0.27f;
	uParam0->f_535[41 /*12*/].f_2 = 0.613f;
	uParam0->f_535[41 /*12*/].f_3 = 56;
	StringCopy(&(uParam0->f_535[41 /*12*/].f_4), "close_fh_bs_lo", 32);
	uParam0->f_535[40 /*12*/] = 0f;
	uParam0->f_535[40 /*12*/].f_1 = 0.27f;
	uParam0->f_535[40 /*12*/].f_2 = 0.533f;
	uParam0->f_535[40 /*12*/].f_3 = 57;
	StringCopy(&(uParam0->f_535[40 /*12*/].f_4), "close_fh_bs_md", 32);
	uParam0->f_535[39 /*12*/] = 0f;
	uParam0->f_535[39 /*12*/].f_1 = 0.28f;
	uParam0->f_535[39 /*12*/].f_2 = 0.69f;
	uParam0->f_535[39 /*12*/].f_3 = 53;
	StringCopy(&(uParam0->f_535[39 /*12*/].f_4), "close_fh_bs_hi", 32);
	uParam0->f_535[38 /*12*/] = 0f;
	uParam0->f_535[38 /*12*/].f_1 = 0.26f;
	uParam0->f_535[38 /*12*/].f_2 = 0.665f;
	uParam0->f_535[38 /*12*/].f_3 = 57;
	StringCopy(&(uParam0->f_535[38 /*12*/].f_4), "close_fh_ts_lo", 32);
	uParam0->f_535[37 /*12*/] = 0f;
	uParam0->f_535[37 /*12*/].f_1 = 0.28f;
	uParam0->f_535[37 /*12*/].f_2 = 0.782f;
	uParam0->f_535[37 /*12*/].f_3 = 55;
	StringCopy(&(uParam0->f_535[37 /*12*/].f_4), "close_fh_ts_md", 32);
	uParam0->f_535[36 /*12*/] = 0f;
	uParam0->f_535[36 /*12*/].f_1 = 0.24f;
	uParam0->f_535[36 /*12*/].f_2 = 0.698f;
	uParam0->f_535[36 /*12*/].f_3 = 62;
	StringCopy(&(uParam0->f_535[36 /*12*/].f_4), "close_fh_ts_hi", 32);
	uParam0->f_535[53 /*12*/] = 0.135f;
	uParam0->f_535[53 /*12*/].f_1 = uParam0->f_535[41 /*12*/].f_1;
	uParam0->f_535[53 /*12*/].f_2 = uParam0->f_535[41 /*12*/].f_2;
	uParam0->f_535[53 /*12*/].f_3 = uParam0->f_535[41 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[53 /*12*/].f_4), "close_fh_bs_lo", 32);
	uParam0->f_535[52 /*12*/] = 0.173f;
	uParam0->f_535[52 /*12*/].f_1 = uParam0->f_535[40 /*12*/].f_1;
	uParam0->f_535[52 /*12*/].f_2 = uParam0->f_535[40 /*12*/].f_2;
	uParam0->f_535[52 /*12*/].f_3 = uParam0->f_535[40 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[52 /*12*/].f_4), "close_fh_bs_md", 32);
	uParam0->f_535[51 /*12*/] = 0.12f;
	uParam0->f_535[51 /*12*/].f_1 = uParam0->f_535[39 /*12*/].f_1;
	uParam0->f_535[51 /*12*/].f_2 = uParam0->f_535[39 /*12*/].f_2;
	uParam0->f_535[51 /*12*/].f_3 = uParam0->f_535[39 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[51 /*12*/].f_4), "close_fh_bs_hi", 32);
	uParam0->f_535[50 /*12*/] = 0.148f;
	uParam0->f_535[50 /*12*/].f_1 = uParam0->f_535[38 /*12*/].f_1;
	uParam0->f_535[50 /*12*/].f_2 = uParam0->f_535[38 /*12*/].f_2;
	uParam0->f_535[50 /*12*/].f_3 = uParam0->f_535[38 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[50 /*12*/].f_4), "close_fh_ts_lo", 32);
	uParam0->f_535[49 /*12*/] = 0.16f;
	uParam0->f_535[49 /*12*/].f_1 = uParam0->f_535[37 /*12*/].f_1;
	uParam0->f_535[49 /*12*/].f_2 = uParam0->f_535[37 /*12*/].f_2;
	uParam0->f_535[49 /*12*/].f_3 = uParam0->f_535[37 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[49 /*12*/].f_4), "close_fh_ts_md", 32);
	uParam0->f_535[48 /*12*/] = 0.155f;
	uParam0->f_535[48 /*12*/].f_1 = uParam0->f_535[36 /*12*/].f_1;
	uParam0->f_535[48 /*12*/].f_2 = uParam0->f_535[36 /*12*/].f_2;
	uParam0->f_535[48 /*12*/].f_3 = uParam0->f_535[36 /*12*/].f_3;
	StringCopy(&(uParam0->f_535[48 /*12*/].f_4), "close_fh_ts_hi", 32);
	uParam0->f_535[15 /*12*/] = 0f;
	uParam0->f_535[15 /*12*/].f_1 = 0.21f;
	uParam0->f_535[15 /*12*/].f_2 = 0.7f;
	uParam0->f_535[15 /*12*/].f_3 = 43;
	StringCopy(&(uParam0->f_535[15 /*12*/].f_4), "forehand_bs_hi", 32);
	uParam0->f_535[17 /*12*/] = 0f;
	uParam0->f_535[17 /*12*/].f_1 = 0.16f;
	uParam0->f_535[17 /*12*/].f_2 = 0.67f;
	uParam0->f_535[17 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[17 /*12*/].f_4), "forehand_bs_lo", 32);
	uParam0->f_535[16 /*12*/] = 0f;
	uParam0->f_535[16 /*12*/].f_1 = 0.18f;
	uParam0->f_535[16 /*12*/].f_2 = 0.6f;
	uParam0->f_535[16 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[16 /*12*/].f_4), "forehand_bs_md", 32);
	uParam0->f_535[24 /*12*/] = 0.136f;
	uParam0->f_535[24 /*12*/].f_1 = 0.21f;
	uParam0->f_535[24 /*12*/].f_2 = 0.7f;
	uParam0->f_535[24 /*12*/].f_3 = 43;
	StringCopy(&(uParam0->f_535[24 /*12*/].f_4), "forehand_bs_hi", 32);
	uParam0->f_535[26 /*12*/] = 0.108f;
	uParam0->f_535[26 /*12*/].f_1 = 0.16f;
	uParam0->f_535[26 /*12*/].f_2 = 0.67f;
	uParam0->f_535[26 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[26 /*12*/].f_4), "forehand_bs_lo", 32);
	uParam0->f_535[25 /*12*/] = 0.108f;
	uParam0->f_535[25 /*12*/].f_1 = 0.18f;
	uParam0->f_535[25 /*12*/].f_2 = 0.6f;
	uParam0->f_535[25 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[25 /*12*/].f_4), "forehand_bs_md", 32);
	uParam0->f_535[18 /*12*/] = 0f;
	uParam0->f_535[18 /*12*/].f_1 = 0.17f;
	uParam0->f_535[18 /*12*/].f_2 = 0.722f;
	uParam0->f_535[18 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[18 /*12*/].f_4), "forehand_smash", 32);
	uParam0->f_535[19 /*12*/] = 0f;
	uParam0->f_535[19 /*12*/].f_1 = 0.17f;
	uParam0->f_535[19 /*12*/].f_2 = 0.614f;
	uParam0->f_535[19 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[19 /*12*/].f_4), "forehand_smash_lt", 32);
	uParam0->f_535[20 /*12*/] = 0f;
	uParam0->f_535[20 /*12*/].f_1 = 0.17f;
	uParam0->f_535[20 /*12*/].f_2 = 0.7f;
	uParam0->f_535[20 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[20 /*12*/].f_4), "forehand_smash_rt", 32);
	uParam0->f_535[27 /*12*/] = 0.108f;
	uParam0->f_535[27 /*12*/].f_1 = 0.17f;
	uParam0->f_535[27 /*12*/].f_2 = 0.722f;
	uParam0->f_535[27 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[27 /*12*/].f_4), "forehand_smash", 32);
	uParam0->f_535[28 /*12*/] = 0.108f;
	uParam0->f_535[28 /*12*/].f_1 = 0.17f;
	uParam0->f_535[28 /*12*/].f_2 = 0.614f;
	uParam0->f_535[28 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[28 /*12*/].f_4), "forehand_smash_lt", 32);
	uParam0->f_535[29 /*12*/] = 0.108f;
	uParam0->f_535[29 /*12*/].f_1 = 0.17f;
	uParam0->f_535[29 /*12*/].f_2 = 0.7f;
	uParam0->f_535[29 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[29 /*12*/].f_4), "forehand_smash_rt", 32);
	uParam0->f_535[12 /*12*/] = 0f;
	uParam0->f_535[12 /*12*/].f_1 = 0.14f;
	uParam0->f_535[12 /*12*/].f_2 = 0.615f;
	uParam0->f_535[12 /*12*/].f_3 = 62;
	StringCopy(&(uParam0->f_535[12 /*12*/].f_4), "forehand_ts_hi", 32);
	uParam0->f_535[14 /*12*/] = 0f;
	uParam0->f_535[14 /*12*/].f_1 = 0.16f;
	uParam0->f_535[14 /*12*/].f_2 = 0.643f;
	uParam0->f_535[14 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[14 /*12*/].f_4), "forehand_ts_lo", 32);
	uParam0->f_535[13 /*12*/] = 0f;
	uParam0->f_535[13 /*12*/].f_1 = 0.18f;
	uParam0->f_535[13 /*12*/].f_2 = 0.779f;
	uParam0->f_535[13 /*12*/].f_3 = 45;
	StringCopy(&(uParam0->f_535[13 /*12*/].f_4), "forehand_ts_md", 32);
	uParam0->f_535[21 /*12*/] = 0.08f;
	uParam0->f_535[21 /*12*/].f_1 = 0.14f;
	uParam0->f_535[21 /*12*/].f_2 = 0.615f;
	uParam0->f_535[21 /*12*/].f_3 = 62;
	StringCopy(&(uParam0->f_535[21 /*12*/].f_4), "forehand_ts_hi", 32);
	uParam0->f_535[23 /*12*/] = 0.094f;
	uParam0->f_535[23 /*12*/].f_1 = 0.16f;
	uParam0->f_535[23 /*12*/].f_2 = 0.643f;
	uParam0->f_535[23 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[23 /*12*/].f_4), "forehand_ts_lo", 32);
	uParam0->f_535[22 /*12*/] = 0.108f;
	uParam0->f_535[22 /*12*/].f_1 = 0.18f;
	uParam0->f_535[22 /*12*/].f_2 = 0.779f;
	uParam0->f_535[22 /*12*/].f_3 = 45;
	StringCopy(&(uParam0->f_535[22 /*12*/].f_4), "forehand_ts_md", 32);
	uParam0->f_535[54 /*12*/] = 0.28f;
	uParam0->f_535[54 /*12*/].f_1 = 0.37f;
	uParam0->f_535[54 /*12*/].f_2 = 0.708f;
	uParam0->f_535[54 /*12*/].f_3 = 57;
	StringCopy(&(uParam0->f_535[54 /*12*/].f_4), "lunge_bh_hi", 32);
	uParam0->f_535[56 /*12*/] = 0.275f;
	uParam0->f_535[56 /*12*/].f_1 = 0.37f;
	uParam0->f_535[56 /*12*/].f_2 = 0.695f;
	uParam0->f_535[56 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[56 /*12*/].f_4), "lunge_bh_lo", 32);
	uParam0->f_535[55 /*12*/] = 0.27f;
	uParam0->f_535[55 /*12*/].f_1 = 0.37f;
	uParam0->f_535[55 /*12*/].f_2 = 0.688f;
	uParam0->f_535[55 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[55 /*12*/].f_4), "lunge_bh_mid", 32);
	uParam0->f_535[57 /*12*/] = 0.26f;
	uParam0->f_535[57 /*12*/].f_1 = 0.41f;
	uParam0->f_535[57 /*12*/].f_2 = 0.705f;
	uParam0->f_535[57 /*12*/].f_3 = 54;
	StringCopy(&(uParam0->f_535[57 /*12*/].f_4), "lunge_fh_hi", 32);
	uParam0->f_535[59 /*12*/] = 0.26f;
	uParam0->f_535[59 /*12*/].f_1 = 0.42f;
	uParam0->f_535[59 /*12*/].f_2 = 0.738f;
	uParam0->f_535[59 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[59 /*12*/].f_4), "lunge_fh_lo", 32);
	uParam0->f_535[58 /*12*/] = 0.263f;
	uParam0->f_535[58 /*12*/].f_1 = 0.43f;
	uParam0->f_535[58 /*12*/].f_2 = 0.695f;
	uParam0->f_535[58 /*12*/].f_3 = 50;
	StringCopy(&(uParam0->f_535[58 /*12*/].f_4), "lunge_fh_mid", 32);
	uParam0->f_535[72 /*12*/] = 0.073f;
	uParam0->f_535[72 /*12*/].f_1 = 0.17f;
	uParam0->f_535[72 /*12*/].f_2 = 0.77f;
	uParam0->f_535[72 /*12*/].f_3 = 102;
	StringCopy(&(uParam0->f_535[72 /*12*/].f_4), "dive_bh", 32);
	uParam0->f_535[73 /*12*/] = 0.053f;
	uParam0->f_535[73 /*12*/].f_1 = 0.17f;
	uParam0->f_535[73 /*12*/].f_2 = 0.781f;
	uParam0->f_535[73 /*12*/].f_3 = 102;
	StringCopy(&(uParam0->f_535[73 /*12*/].f_4), "dive_fh", 32);
	uParam0->f_535[60 /*12*/] = 0f;
	uParam0->f_535[60 /*12*/].f_1 = 0.15f;
	uParam0->f_535[60 /*12*/].f_2 = 0.95f;
	uParam0->f_535[60 /*12*/].f_3 = 65;
	StringCopy(&(uParam0->f_535[60 /*12*/].f_4), "forehand_ts_lo_far", 32);
	uParam0->f_535[61 /*12*/] = 0f;
	uParam0->f_535[61 /*12*/].f_1 = 0.17f;
	uParam0->f_535[61 /*12*/].f_2 = 0.95f;
	uParam0->f_535[61 /*12*/].f_3 = 58;
	StringCopy(&(uParam0->f_535[61 /*12*/].f_4), "forehand_ts_md_far", 32);
	uParam0->f_535[62 /*12*/] = 0f;
	uParam0->f_535[62 /*12*/].f_1 = 0.13f;
	uParam0->f_535[62 /*12*/].f_2 = 0.95f;
	uParam0->f_535[62 /*12*/].f_3 = 74;
	StringCopy(&(uParam0->f_535[62 /*12*/].f_4), "forehand_ts_hi_far", 32);
	uParam0->f_535[63 /*12*/] = 0f;
	uParam0->f_535[63 /*12*/].f_1 = 0.2f;
	uParam0->f_535[63 /*12*/].f_2 = 0.95f;
	uParam0->f_535[63 /*12*/].f_3 = 40;
	StringCopy(&(uParam0->f_535[63 /*12*/].f_4), "close_bh_lo", 32);
	uParam0->f_535[64 /*12*/] = 0f;
	uParam0->f_535[64 /*12*/].f_1 = 0.2f;
	uParam0->f_535[64 /*12*/].f_2 = 0.95f;
	uParam0->f_535[64 /*12*/].f_3 = 40;
	StringCopy(&(uParam0->f_535[64 /*12*/].f_4), "close_bh_md", 32);
	uParam0->f_535[65 /*12*/] = 0f;
	uParam0->f_535[65 /*12*/].f_1 = 0.2f;
	uParam0->f_535[65 /*12*/].f_2 = 0.95f;
	uParam0->f_535[65 /*12*/].f_3 = 40;
	StringCopy(&(uParam0->f_535[65 /*12*/].f_4), "close_bh_hi", 32);
	uParam0->f_535[66 /*12*/] = 0f;
	uParam0->f_535[66 /*12*/].f_1 = 0.174f;
	uParam0->f_535[66 /*12*/].f_2 = 0.95f;
	uParam0->f_535[66 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[66 /*12*/].f_4), "close_fh_lo", 32);
	uParam0->f_535[67 /*12*/] = 0f;
	uParam0->f_535[67 /*12*/].f_1 = 0.174f;
	uParam0->f_535[67 /*12*/].f_2 = 0.95f;
	uParam0->f_535[67 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[67 /*12*/].f_4), "close_fh_md", 32);
	uParam0->f_535[68 /*12*/] = 0f;
	uParam0->f_535[68 /*12*/].f_1 = 0.174f;
	uParam0->f_535[68 /*12*/].f_2 = 0.95f;
	uParam0->f_535[68 /*12*/].f_3 = 46;
	StringCopy(&(uParam0->f_535[68 /*12*/].f_4), "close_fh_hi", 32);
	uParam0->f_535[69 /*12*/] = 0f;
	uParam0->f_535[69 /*12*/].f_1 = 0.25f;
	uParam0->f_535[69 /*12*/].f_2 = 0.95f;
	uParam0->f_535[69 /*12*/].f_3 = 48;
	StringCopy(&(uParam0->f_535[69 /*12*/].f_4), "mid_bh_lo", 32);
	uParam0->f_535[70 /*12*/] = 0f;
	uParam0->f_535[70 /*12*/].f_1 = 0.231f;
	uParam0->f_535[70 /*12*/].f_2 = 0.95f;
	uParam0->f_535[70 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[70 /*12*/].f_4), "mid_bh_md", 32);
	uParam0->f_535[71 /*12*/] = 0f;
	uParam0->f_535[71 /*12*/].f_1 = 0.231f;
	uParam0->f_535[71 /*12*/].f_2 = 0.95f;
	uParam0->f_535[71 /*12*/].f_3 = 52;
	StringCopy(&(uParam0->f_535[71 /*12*/].f_4), "mid_bh_hi", 32);
}

void func_318(var uParam0)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_303[5 /*3*/] = { -0.8036f, 0.6726f, -0.6097f };
	uParam0->f_303[4 /*3*/] = { -0.8147f, 0.6746f, -0.0154f };
	uParam0->f_303[3 /*3*/] = { -0.8298f, 0.6483f, 0.615f };
	uParam0->f_303[2 /*3*/] = { -0.8254f, 0.6648f, -0.6352f };
	uParam0->f_303[1 /*3*/] = { -0.8217f, 0.6774f, -0.012f };
	uParam0->f_303[0 /*3*/] = { -0.8072f, 0.6576f, 0.5741f };
	uParam0->f_303[17 /*3*/] = { 0.813f, 0.6795f, -0.5939f };
	uParam0->f_303[16 /*3*/] = { 0.8651f, 0.6928f, 0.0177f };
	uParam0->f_303[15 /*3*/] = { 0.8592f, 0.6398f, 0.585f };
	uParam0->f_303[14 /*3*/] = { 0.8073f, 0.6708f, -0.5718f };
	uParam0->f_303[13 /*3*/] = { 0.831f, 0.6645f, 0.0059f };
	uParam0->f_303[12 /*3*/] = { 0.8462f, 0.6823f, 0.6137f };
	uParam0->f_303[18 /*3*/] = { 0.0038f, 0.571f, 1.4844f };
	uParam0->f_303[19 /*3*/] = { -0.6106f, 0.6003f, 1.4926f };
	uParam0->f_303[20 /*3*/] = { 0.5791f, 0.6003f, 1.4524f };
	uParam0->f_303[35 /*3*/] = { -0.1276f, 0.6496f, -0.6081f };
	uParam0->f_303[34 /*3*/] = { -0.1219f, 0.6858f, -0.0039f };
	uParam0->f_303[33 /*3*/] = { -0.158f, 0.6565f, 0.5989f };
	uParam0->f_303[32 /*3*/] = { -0.1302f, 0.6646f, -0.6002f };
	uParam0->f_303[31 /*3*/] = { -0.1243f, 0.6686f, 0.0104f };
	uParam0->f_303[30 /*3*/] = { -0.1614f, 0.6659f, 0.6349f };
	uParam0->f_303[41 /*3*/] = { 0.2654f, 0.7156f, -0.6474f };
	uParam0->f_303[40 /*3*/] = { 0.2594f, 0.6587f, -0.0193f };
	uParam0->f_303[39 /*3*/] = { 0.2755f, 0.6588f, 0.5959f };
	uParam0->f_303[38 /*3*/] = { 0.2617f, 0.701f, -0.6222f };
	uParam0->f_303[37 /*3*/] = { 0.2718f, 0.6637f, -0.0077f };
	uParam0->f_303[36 /*3*/] = { 0.269f, 0.6677f, 0.6025f };
	uParam0->f_303[11 /*3*/] = { -0.7118f, 0.5888f, -0.6097f };
	uParam0->f_303[10 /*3*/] = { -0.7944f, 0.5983f, -0.0154f };
	uParam0->f_303[9 /*3*/] = { -0.7291f, 0.5708f, 0.615f };
	uParam0->f_303[8 /*3*/] = { -0.6591f, 0.4535f, -0.6352f };
	uParam0->f_303[7 /*3*/] = { -0.7722f, 0.6042f, -0.012f };
	uParam0->f_303[6 /*3*/] = { -0.8057f, 0.6484f, 0.5741f };
	uParam0->f_303[26 /*3*/] = { 0.7679f, 0.5793f, -0.5939f };
	uParam0->f_303[25 /*3*/] = { 0.7837f, 0.616f, 0.0177f };
	uParam0->f_303[24 /*3*/] = { 0.6994f, 0.5786f, 0.585f };
	uParam0->f_303[23 /*3*/] = { 0.8024f, 0.5107f, -0.5718f };
	uParam0->f_303[22 /*3*/] = { 0.8475f, 0.4297f, 0.0059f };
	uParam0->f_303[21 /*3*/] = { 0.8012f, 0.6051f, 0.6137f };
	uParam0->f_303[27 /*3*/] = { -0.0045f, 0.4354f, 1.4844f };
	uParam0->f_303[28 /*3*/] = { -0.5737f, 0.4354f, 1.4926f };
	uParam0->f_303[29 /*3*/] = { 0.5691f, 0.4354f, 1.4524f };
	uParam0->f_303[47 /*3*/] = { -0.4511f, 0.4966f, -0.6081f };
	uParam0->f_303[46 /*3*/] = { -0.5103f, 0.51f, -0.0039f };
	uParam0->f_303[45 /*3*/] = { -0.4779f, 0.3857f, 0.5989f };
	uParam0->f_303[44 /*3*/] = { -0.3778f, 0.5049f, -0.6002f };
	uParam0->f_303[43 /*3*/] = { -0.3224f, 0.5942f, 0.0104f };
	uParam0->f_303[42 /*3*/] = { -0.3764f, 0.6902f, 0.6349f };
	uParam0->f_303[53 /*3*/] = { 0.4805f, 0.7156f, -0.6474f };
	uParam0->f_303[52 /*3*/] = { 0.7625f, 0.6532f, -0.0193f };
	uParam0->f_303[51 /*3*/] = { 0.6043f, 0.6588f, 0.5959f };
	uParam0->f_303[50 /*3*/] = { 0.473f, 0.6992f, -0.6222f };
	uParam0->f_303[49 /*3*/] = { 0.5413f, 0.6353f, -0.0077f };
	uParam0->f_303[48 /*3*/] = { 0.714f, 0.6593f, 0.6025f };
	uParam0->f_303[56 /*3*/] = { -1.3525f, 0.6005f, -0.7221f };
	uParam0->f_303[55 /*3*/] = { -1.5755f, 0.4699f, -0.0379f };
	uParam0->f_303[54 /*3*/] = { -1.318f, 0.4631f, 0.7024f };
	uParam0->f_303[59 /*3*/] = { 1.9622f, 0.2122f, -0.6432f };
	uParam0->f_303[58 /*3*/] = { 1.9598f, 0.5945f, -0.0585f };
	uParam0->f_303[57 /*3*/] = { 1.8166f, 0.3588f, 0.7322f };
	uParam0->f_303[73 /*3*/] = { 2.2269f, -0.0119f, 0.0417f };
	uParam0->f_303[72 /*3*/] = { -2.2644f, -0.1467f, 0.0997f };
	uParam0->f_303[60 /*3*/] = { 1.4174f, 0.6731f, -0.5824f };
	uParam0->f_303[61 /*3*/] = { 1.4134f, 0.6671f, 0.0059f };
	uParam0->f_303[62 /*3*/] = { 1.4031f, 0.6845f, 0.6133f };
	uParam0->f_303[63 /*3*/] = { -0.1726f, 0.6642f, -0.6095f };
	uParam0->f_303[64 /*3*/] = { -0.2261f, 0.7049f, 0.0018f };
	uParam0->f_303[65 /*3*/] = { -0.1558f, 0.6787f, 0.6703f };
	uParam0->f_303[66 /*3*/] = { 0.2443f, 0.6567f, -0.5885f };
	uParam0->f_303[67 /*3*/] = { 0.2594f, 0.6587f, -0.0193f };
	uParam0->f_303[68 /*3*/] = { 0.2594f, 0.6387f, 0.6221f };
	uParam0->f_303[69 /*3*/] = { -0.4975f, 0.6646f, -0.6002f };
	uParam0->f_303[70 /*3*/] = { -0.4998f, 0.6686f, 0.0104f };
	uParam0->f_303[71 /*3*/] = { -0.4952f, 0.6659f, 0.6349f };
	uParam0->f_303[74 /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_303[76 /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_303[75 /*3*/] = { 1000f, 1000f, 1000f };
	uParam0->f_1571[0] = -2.2644f;
	uParam0->f_1571[1] = -0.826f;
	uParam0->f_1571[2] = -0.6969f;
	uParam0->f_1571[3] = -0.4494f;
	uParam0->f_1571[4] = -0.2019f;
	uParam0->f_1571[5] = 0.0456f;
	uParam0->f_1571[6] = 0.2931f;
	uParam0->f_1571[7] = 0.5406f;
	uParam0->f_1571[8] = 0.7881f;
	uParam0->f_1571[9] = 1.0356f;
	uParam0->f_1571[10] = 2.6669f;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			uParam0->f_1460[iVar0 /*11*/][iVar1] = 75;
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_1460[0 /*11*/][0] = 3;
	uParam0->f_1460[0 /*11*/][1] = 54;
	uParam0->f_1460[0 /*11*/][2] = 55;
	uParam0->f_1460[0 /*11*/][3] = 56;
	uParam0->f_1460[0 /*11*/][4] = 72;
	uParam0->f_1460[1 /*11*/][0] = 0;
	uParam0->f_1460[1 /*11*/][1] = 1;
	uParam0->f_1460[1 /*11*/][2] = 2;
	uParam0->f_1460[1 /*11*/][3] = 4;
	uParam0->f_1460[1 /*11*/][4] = 5;
	uParam0->f_1460[1 /*11*/][5] = 6;
	uParam0->f_1460[1 /*11*/][6] = 7;
	uParam0->f_1460[1 /*11*/][7] = 9;
	uParam0->f_1460[1 /*11*/][8] = 10;
	uParam0->f_1460[1 /*11*/][9] = 11;
	uParam0->f_1460[2 /*11*/][0] = 8;
	uParam0->f_1460[2 /*11*/][1] = 19;
	uParam0->f_1460[2 /*11*/][2] = 28;
	uParam0->f_1460[2 /*11*/][3] = 45;
	uParam0->f_1460[2 /*11*/][4] = 46;
	uParam0->f_1460[2 /*11*/][5] = 47;
	uParam0->f_1460[2 /*11*/][6] = 69;
	uParam0->f_1460[2 /*11*/][7] = 70;
	uParam0->f_1460[2 /*11*/][8] = 71;
	uParam0->f_1460[3 /*11*/][0] = 42;
	uParam0->f_1460[3 /*11*/][1] = 43;
	uParam0->f_1460[3 /*11*/][2] = 44;
	uParam0->f_1460[3 /*11*/][3] = 64;
	uParam0->f_1460[4 /*11*/][0] = 18;
	uParam0->f_1460[4 /*11*/][1] = 27;
	uParam0->f_1460[4 /*11*/][2] = 30;
	uParam0->f_1460[4 /*11*/][3] = 31;
	uParam0->f_1460[4 /*11*/][4] = 32;
	uParam0->f_1460[4 /*11*/][5] = 33;
	uParam0->f_1460[4 /*11*/][6] = 34;
	uParam0->f_1460[4 /*11*/][7] = 35;
	uParam0->f_1460[4 /*11*/][8] = 63;
	uParam0->f_1460[4 /*11*/][9] = 65;
	uParam0->f_1460[5 /*11*/][0] = 36;
	uParam0->f_1460[5 /*11*/][1] = 37;
	uParam0->f_1460[5 /*11*/][2] = 38;
	uParam0->f_1460[5 /*11*/][3] = 39;
	uParam0->f_1460[5 /*11*/][4] = 40;
	uParam0->f_1460[5 /*11*/][5] = 41;
	uParam0->f_1460[5 /*11*/][6] = 66;
	uParam0->f_1460[5 /*11*/][7] = 67;
	uParam0->f_1460[5 /*11*/][8] = 68;
	uParam0->f_1460[6 /*11*/][0] = 50;
	uParam0->f_1460[6 /*11*/][1] = 53;
	uParam0->f_1460[7 /*11*/][0] = 20;
	uParam0->f_1460[7 /*11*/][1] = 24;
	uParam0->f_1460[7 /*11*/][2] = 25;
	uParam0->f_1460[7 /*11*/][3] = 26;
	uParam0->f_1460[7 /*11*/][4] = 29;
	uParam0->f_1460[7 /*11*/][5] = 48;
	uParam0->f_1460[7 /*11*/][6] = 49;
	uParam0->f_1460[7 /*11*/][7] = 51;
	uParam0->f_1460[7 /*11*/][8] = 52;
	uParam0->f_1460[8 /*11*/][0] = 12;
	uParam0->f_1460[8 /*11*/][1] = 13;
	uParam0->f_1460[8 /*11*/][2] = 14;
	uParam0->f_1460[8 /*11*/][3] = 15;
	uParam0->f_1460[8 /*11*/][4] = 16;
	uParam0->f_1460[8 /*11*/][5] = 17;
	uParam0->f_1460[8 /*11*/][6] = 21;
	uParam0->f_1460[8 /*11*/][7] = 22;
	uParam0->f_1460[8 /*11*/][8] = 23;
	uParam0->f_1460[9 /*11*/][0] = 57;
	uParam0->f_1460[9 /*11*/][1] = 58;
	uParam0->f_1460[9 /*11*/][2] = 59;
	uParam0->f_1460[9 /*11*/][3] = 60;
	uParam0->f_1460[9 /*11*/][4] = 61;
	uParam0->f_1460[9 /*11*/][5] = 62;
	uParam0->f_1460[9 /*11*/][6] = 73;
}

void func_319(var uParam0)
{
	uParam0->f_282[0 /*2*/] = 45;
	uParam0->f_282[1 /*2*/] = 40;
	uParam0->f_282[2 /*2*/] = 35;
	uParam0->f_282[3 /*2*/] = 30;
	uParam0->f_282[4 /*2*/] = 25;
	uParam0->f_282[5 /*2*/] = 20;
	uParam0->f_282[6 /*2*/] = 30;
	uParam0->f_282[7 /*2*/] = 35;
	uParam0->f_282[8 /*2*/] = 24;
	uParam0->f_282[9 /*2*/] = 27;
	uParam0->f_282[0 /*2*/].f_1 = 355;
	uParam0->f_282[1 /*2*/].f_1 = 356;
	uParam0->f_282[2 /*2*/].f_1 = 358;
	uParam0->f_282[3 /*2*/].f_1 = 2;
	uParam0->f_282[4 /*2*/].f_1 = 5;
	uParam0->f_282[5 /*2*/].f_1 = 9;
	uParam0->f_282[6 /*2*/].f_1 = 354;
	uParam0->f_282[7 /*2*/].f_1 = 2;
	uParam0->f_282[8 /*2*/].f_1 = 15;
	uParam0->f_282[9 /*2*/].f_1 = 4;
}

void func_320(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_321(var uParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam4)
{
	uParam0->f_36 = 75;
	uParam0->f_1 = iParam1;
	uParam0->f_40 = { vParam3 / FtoV(vmag(vParam3)) };
	uParam0->f_43 = { vParam4 / FtoV(vmag(vParam4)) };
	uParam0->f_63 = (3f + 1f);
	switch (iParam2)
	{
		case 0:
			uParam0->f_31 = iParam2;
			break;
		
		case 1:
			uParam0->f_31 = iParam2;
			break;
		
		case 2:
			uParam0->f_31 = iParam2;
			break;
		
		case 3:
			uParam0->f_31 = iParam2;
			break;
		
		case 4:
			func_322(&(uParam0->f_4));
			uParam0->f_31 = iParam2;
			break;
	}
}

void func_322(var uParam0)
{
	func_236(uParam0, 0);
	func_323(uParam0, 0);
}

void func_323(var uParam0, int iParam1)
{
	uParam0->f_20 = iParam1;
}

void func_324(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	func_329(&(uParam1->f_1656));
	fVar0 = 0.46f;
	fVar1 = 0.5f;
	if (uParam1->f_1656 == 16 && uParam1->f_1657 != 1)
	{
		uParam0->f_3[0 /*3*/] = { -768.966f, 165.352f, 66.474f };
		uParam0->f_3[1 /*3*/] = { -777.028f, 165.364f, 66.474f };
		uParam0->f_3[2 /*3*/] = { -777.045f, 141.573f, 66.474f };
		uParam0->f_3[3 /*3*/] = { -768.972f, 141.566f, 66.475f };
		fVar1 = 0.474f;
		uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
		uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
		uParam1->f_1664 = { func_188(uParam1->f_1661, uParam1->f_1658) };
		func_328(uParam0, vmag(uParam1->f_1661));
		uParam0->f_49 = { uParam1->f_1658 / FtoV(vmag(uParam1->f_1658)) };
		uParam0->f_52 = { uParam1->f_1661 / FtoV(vmag(uParam1->f_1661)) };
		uParam0->f_16[0 /*3*/] = { -768.994f, 160.238f, 66.474f };
		uParam0->f_16[1 /*3*/] = { -777.009f, 160.23f, 66.474f };
		uParam0->f_16[2 /*3*/] = { -776.999f, 146.539f, 66.474f };
		uParam0->f_16[3 /*3*/] = { -768.988f, 146.552f, 66.474f };
		uParam0->f_29 = { -773.017f, 153.584f, 66.474f };
		uParam0->f_32[0 /*3*/] = { -768.981f, 153.584f, 66.474f };
		uParam0->f_32[1 /*3*/] = { -777.006f, 153.584f, 66.474f };
		uParam0->f_39[0 /*3*/] = { uParam0->f_29 + uParam1->f_1661 * Vector(-0.834f, -0.834f, -0.834f) };
		uParam0->f_39[0 /*3*/].f_2 = (uParam0->f_39[0 /*3*/].f_2 + 1.148f);
		uParam0->f_39[1 /*3*/] = { uParam0->f_29 };
		uParam0->f_39[1 /*3*/].f_2 = (uParam0->f_39[1 /*3*/].f_2 + 0.928f);
		uParam0->f_39[2 /*3*/] = { uParam0->f_29 + uParam1->f_1661 * Vector(0.834f, 0.834f, 0.834f) };
		uParam0->f_39[2 /*3*/].f_2 = (uParam0->f_39[2 /*3*/].f_2 + 1.148f);
		func_327(uParam0, 0);
		func_326(uParam0, 0.43f);
		uParam0->f_55 = { -780.4614f, 156.5187f, 66.4744f };
	}
	else if (uParam1->f_1656 == 13 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
		uParam0->f_3[0 /*3*/] = { -1173.349f, -1604.72f, 3.3738f };
		uParam0->f_3[1 /*3*/] = { -1180.108f, -1609.459f, 3.3738f };
		uParam0->f_3[2 /*3*/] = { -1166.443f, -1628.969f, 3.3738f };
		uParam0->f_3[3 /*3*/] = { -1159.67f, -1624.238f, 3.3738f };
		func_325(uParam0, uParam1, 0.5f, 0.46f, 1);
		func_327(uParam0, 1);
	}
	else if (uParam1->f_1656 == 19 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { 487.5186f, -217.7697f, 52.7864f };
		uParam0->f_3[0 /*3*/] = { 479.669f, -227.811f, 52.787f };
		uParam0->f_3[1 /*3*/] = { 487.252f, -230.572f, 52.787f };
		uParam0->f_3[2 /*3*/] = { 495.403f, -208.181f, 52.787f };
		uParam0->f_3[3 /*3*/] = { 487.807f, -205.4f, 52.787f };
		func_325(uParam0, uParam1, 0.5f, 0.428f, 0);
		func_327(uParam0, 2);
	}
	else if (uParam1->f_1656 == 23 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -49.912f, 942.5634f, 231.1741f };
		uParam0->f_3[0 /*3*/] = { -54.665f, 947.136f, 231.174f };
		uParam0->f_3[1 /*3*/] = { -55.353f, 939.187f, 231.174f };
		uParam0->f_3[2 /*3*/] = { -31.706f, 937.116f, 231.174f };
		uParam0->f_3[3 /*3*/] = { -31.008f, 945.056f, 231.174f };
		func_325(uParam0, uParam1, 0.5f, 0.428f, 0);
		func_327(uParam0, 8);
	}
	else if (uParam1->f_1656 == 17 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -1225.454f, 344.8268f, 78.9859f };
		uParam0->f_3[0 /*3*/] = { -1223.264f, 351.306f, 78.9867f };
		uParam0->f_3[1 /*3*/] = { -1231.37f, 348.946f, 78.9867f };
		uParam0->f_3[2 /*3*/] = { -1224.658f, 325.996f, 78.9867f };
		uParam0->f_3[3 /*3*/] = { -1216.553f, 328.359f, 78.9867f };
		func_325(uParam0, uParam1, 0.5f, 0.46f, 1);
		func_327(uParam0, 3);
	}
	else if (uParam1->f_1656 == 15 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -1623.454f, 257.1566f, 58.5552f };
		uParam0->f_3[0 /*3*/] = { -1627.471f, 275.479f, 58.5552f };
		uParam0->f_3[1 /*3*/] = { -1634.971f, 271.977f, 58.5552f };
		uParam0->f_3[2 /*3*/] = { -1624.893f, 250.367f, 58.5552f };
		uParam0->f_3[3 /*3*/] = { -1617.398f, 253.864f, 58.5552f };
		func_325(uParam0, uParam1, 0.5f, 0.46f, 1);
		func_327(uParam0, 4);
	}
	else if (uParam1->f_1656 == 18 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -939.6168f, -1255.732f, 6.9773f };
		uParam0->f_3[1 /*3*/] = { -945.684f, -1253.143f, 6.9773f };
		uParam0->f_3[2 /*3*/] = { -933.813f, -1273.726f, 6.9773f };
		uParam0->f_3[3 /*3*/] = { -926.823f, -1269.7f, 6.9773f };
		uParam0->f_3[0 /*3*/] = { -938.693f, -1249.116f, 6.9773f };
		func_325(uParam0, uParam1, 0.5f, 0.428f, 1);
		func_327(uParam0, 5);
	}
	else if (uParam1->f_1656 == 20 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -1371.275f, -107.9437f, 49.7046f };
		uParam0->f_3[0 /*3*/] = { -1374.66f, -114.005f, 49.7046f };
		uParam0->f_3[1 /*3*/] = { -1366.627f, -113.082f, 49.7046f };
		uParam0->f_3[2 /*3*/] = { -1369.309f, -89.432f, 49.7046f };
		uParam0->f_3[3 /*3*/] = { -1377.338f, -90.342f, 49.7046f };
		func_325(uParam0, uParam1, 0.5f, 0.43f, 1);
		func_327(uParam0, 6);
	}
	else if (uParam1->f_1656 == 14 && uParam1->f_1657 != 1)
	{
		uParam0->f_55 = { -2869.991f, 9.2297f, 10.6083f };
		uParam0->f_3[0 /*3*/] = { -2875.503f, 5.33f, 10.6083f };
		uParam0->f_3[1 /*3*/] = { -2867.721f, 3.09f, 10.6083f };
		uParam0->f_3[2 /*3*/] = { -2861.163f, 25.966f, 10.6083f };
		uParam0->f_3[3 /*3*/] = { -2868.95f, 28.198f, 10.6083f };
		func_325(uParam0, uParam1, 0.5f, 0.458f, 1);
		func_327(uParam0, 7);
	}
	else if (uParam1->f_1657 == 1)
	{
		func_327(uParam0, 9);
	}
	switch (iParam2)
	{
		case 0:
			uParam0->f_3[0 /*3*/] = { -1173.374f, -1604.762f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1180.065f, -1609.454f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1166.428f, -1628.932f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1159.739f, -1624.236f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_188(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 1:
			uParam0->f_3[0 /*3*/] = { -1157.2f, -1627.22f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1163.84f, -1632.52f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1150.21f, -1652.12f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1143.55f, -1647.38f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_188(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 2:
			uParam0->f_3[0 /*3*/] = { -1186.49f, -1613.97f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1193.2f, -1618.66f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1179.52f, -1638.12f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1172.85f, -1633.42f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_188(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 3:
			uParam0->f_3[0 /*3*/] = { -1170.43f, -1637.13f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1177.05f, -1641.73f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1163.35f, -1661.24f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1156.67f, -1656.57f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_188(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 4:
			uParam0->f_3[0 /*3*/] = { -1199.63f, -1623.2f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1206.29f, -1627.84f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1192.65f, -1647.33f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1185.96f, -1642.67f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_188(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 5:
			uParam0->f_3[0 /*3*/] = { -1183.47f, -1646.29f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1190.16f, -1650.97f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1176.48f, -1670.47f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1169.79f, -1665.81f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_188(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 6:
			uParam0->f_3[0 /*3*/] = { -1196.58f, -1655.5f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1203.27f, -1660.14f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1189.58f, -1679.62f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1182.9f, -1674.99f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_188(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 7:
			uParam0->f_3[0 /*3*/] = { -1212.78f, -1632.34f, 3.1734f };
			uParam0->f_3[1 /*3*/] = { -1219.5f, -1636.97f, 3.1734f };
			uParam0->f_3[2 /*3*/] = { -1205.75f, -1656.57f, 3.1734f };
			uParam0->f_3[3 /*3*/] = { -1199.12f, -1651.88f, 3.1734f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_188(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -1171.28f, -1599.59f, 3.34f };
			break;
		
		case 8:
			uParam0->f_3[0 /*3*/] = { -54.61f, 947f, 231.19f };
			uParam0->f_3[1 /*3*/] = { -55.26f, 939.3f, 231.19f };
			uParam0->f_3[2 /*3*/] = { -31.67f, 937.09f, 231.18f };
			uParam0->f_3[3 /*3*/] = { -31.11f, 945.09f, 231.19f };
			fVar1 = 0.5f;
			uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fVar1, fVar1, fVar1) };
			uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
			uParam1->f_1664 = { func_188(uParam1->f_1661, uParam1->f_1658) };
			fVar0 = 0.46f;
			uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fVar0, fVar0, fVar0) };
			uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
			uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
			uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
			uParam0->f_55 = { -43.02f, 942.03f, 232.19f };
			break;
		
		default:
			break;
	}
}

void func_325(var uParam0, var uParam1, float fParam2, float fParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	uParam1->f_1658 = { uParam0->f_3[3 /*3*/] - uParam0->f_3[0 /*3*/] * Vector(fParam2, fParam2, fParam2) };
	uParam1->f_1661 = { uParam0->f_3[1 /*3*/] - uParam0->f_3[0 /*3*/] };
	uParam1->f_1664 = { func_188(uParam1->f_1661, uParam1->f_1658) };
	uParam0->f_49 = { uParam1->f_1658 / FtoV(vmag(uParam1->f_1658)) };
	uParam0->f_52 = { uParam1->f_1661 / FtoV(vmag(uParam1->f_1661)) };
	uParam0->f_16[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_16[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_16[2 /*3*/] = { uParam0->f_3[2 /*3*/] - uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_16[3 /*3*/] = { uParam0->f_3[3 /*3*/] - uParam1->f_1658 * Vector(fParam3, fParam3, fParam3) };
	uParam0->f_29 = { uParam0->f_3[0 /*3*/] + uParam0->f_3[2 /*3*/] * Vector(0.5f, 0.5f, 0.5f) };
	uParam0->f_32[0 /*3*/] = { uParam0->f_3[0 /*3*/] + uParam1->f_1658 };
	uParam0->f_32[1 /*3*/] = { uParam0->f_3[1 /*3*/] + uParam1->f_1658 };
	func_328(uParam0, vmag(uParam1->f_1661));
	func_326(uParam0, fParam3);
	if (bParam4)
	{
		fVar0 = -0.694f;
		fVar1 = 0.693f;
		fVar2 = 1.075f;
		fVar3 = 0.87f;
	}
	else
	{
		fVar0 = -0.834f;
		fVar1 = 0.834f;
		fVar2 = 1.148f;
		fVar3 = 0.928f;
	}
	uParam0->f_39[0 /*3*/] = { uParam0->f_29 + uParam1->f_1661 * Vector(fVar0, fVar0, fVar0) };
	uParam0->f_39[0 /*3*/].f_2 = (uParam0->f_39[0 /*3*/].f_2 + fVar2);
	uParam0->f_39[1 /*3*/] = { uParam0->f_29 };
	uParam0->f_39[1 /*3*/].f_2 = (uParam0->f_39[1 /*3*/].f_2 + fVar3);
	uParam0->f_39[2 /*3*/] = { uParam0->f_29 + uParam1->f_1661 * Vector(fVar1, fVar1, fVar1) };
	uParam0->f_39[2 /*3*/].f_2 = (uParam0->f_39[2 /*3*/].f_2 + fVar2);
}

void func_326(var uParam0, float fParam1)
{
	uParam0->f_2 = fParam1;
}

void func_327(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_328(var uParam0, float fParam1)
{
	uParam0->f_1 = fParam1;
}

var func_329(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	bool bVar3;
	
	fVar0 = 1E+08f;
	bVar3 = unk_0x437347B10A200C4B(unk_0x16F2683693E537C9(), 0);
	if (func_225(unk_0xD803B885F5E47A62(), 0))
	{
		bVar3 = unk_0x437347B10A200C4B(unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001())), 0);
	}
	if (!bVar3)
	{
		if (func_225(unk_0xD803B885F5E47A62(), 0))
		{
			vVar2 = { unk_0x68F4C0EC296D3901(unk_0x9539D44F3E4492F6(unk_0x4B2BFE4A3BC248ED(unk_0x0D03A641486A2001())), true) };
		}
		else
		{
			vVar2 = { unk_0x68F4C0EC296D3901(unk_0x16F2683693E537C9(), true) };
		}
		fVar1 = vdist2(vVar2, -769.058f, 165.294f, 66.474f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 16;
		}
		fVar1 = vdist2(vVar2, -1171.28f, -1599.59f, 3.34f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 13;
		}
		fVar1 = vdist2(vVar2, 487.5186f, -217.7697f, 52.7864f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 19;
		}
		fVar1 = vdist2(vVar2, -49.912f, 942.5634f, 231.1741f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 23;
		}
		fVar1 = vdist2(vVar2, -1225.454f, 344.8268f, 78.9859f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 17;
		}
		fVar1 = vdist2(vVar2, -1623.454f, 257.1566f, 58.5552f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 15;
		}
		fVar1 = vdist2(vVar2, -939.6168f, -1255.732f, 6.9773f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 18;
		}
		fVar1 = vdist2(vVar2, -1371.275f, -107.9437f, 49.7046f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 20;
		}
		fVar1 = vdist2(vVar2, -2869.991f, 9.2297f, 10.6083f);
		if (fVar1 < fVar0)
		{
			fVar0 = fVar1;
			*uParam0 = 14;
		}
	}
	return *uParam0;
}

void func_330(var uParam0, int iParam1, int iParam2)
{
	unk_0x523BCC9DC80CD82F(joaat("prop_tennis_ball"));
	unk_0x523BCC9DC80CD82F(iParam1);
	unk_0x523BCC9DC80CD82F(iParam2);
	unk_0x523BCC9DC80CD82F(joaat("prop_tennis_rack_01b"));
	unk_0x3F423BF5B8125A50("mini@tennis");
	unk_0x3F423BF5B8125A50("mini@tennis@female");
	unk_0x3F423BF5B8125A50("weapons@tennis@male");
	uParam0->f_1668 = iParam1;
	uParam0->f_1669 = iParam2;
}

int func_331(int iParam0)
{
	if (!func_44(iParam0))
	{
		return func_47(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_332()
{
	int iVar0;
	
	if (unk_0x1FBF08B001C4788A("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_111638.f_9080 || func_341(0))
	{
		if (!func_340())
		{
			iVar0 = func_339();
			if (iVar0 != -1)
			{
				if (!func_334(iVar0))
				{
					return;
				}
				unk_0x5D96D8530B3D0904(&(Global_89496[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_333();
		}
	}
}

void func_333()
{
	Global_98779 = 1;
	if (unk_0xA3C1B19E1596F41E(unk_0xD803B885F5E47A62(), 1))
	{
		if (unk_0xEA6BC48857E0AC4C(&Global_76854))
		{
			switch (func_41())
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
			switch (func_41())
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

int func_334(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_333();
	if (unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
	{
		unk_0x2DA3D7F5B74119E5(5000);
	}
	iVar0 = Global_89496[iParam0 /*5*/];
	iVar1 = Global_76891.f_109[iVar0 /*4*/];
	func_338(iVar1, 1);
	unk_0xAE08886CF478C471(unk_0xD803B885F5E47A62(), 0);
	unk_0x0D00405AED37B7C4(unk_0xD803B885F5E47A62(), 0);
	func_335(&(Global_111638.f_2358.f_539), iVar1);
	if (Global_92919 == Global_98781)
	{
		Global_111638.f_9080.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xEAE0D21A50E6C7F4(Global_89532[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0xE1DBBD6CE209517C(unk_0xD803B885F5E47A62()))
		{
			unk_0x67E5ECB8FD7F5018(0);
		}
	}
	Global_111638.f_9080.f_330[iVar1 /*6*/].f_2++;
	Global_92919 = Global_98781;
	if (iParam0 == -1)
	{
		if (Global_111638.f_9080)
		{
		}
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_89496[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xEAE0D21A50E6C7F4(Global_89496[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_335(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_111638.f_18528[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xEAE0D21A50E6C7F4(Global_111638.f_9080.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_337(Global_111638.f_18528[iVar0], &vVar2, &fVar3))
			{
				Global_111638.f_18528[iVar0] = 318;
				func_336(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96134[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_9 = 0f;
				Global_96134[iVar0 /*29*/].f_12 = 0f;
				Global_96134[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_10 = 0f;
				Global_96134[iVar0 /*29*/].f_13 = 0f;
				Global_96134[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_11 = 0f;
				Global_96134[iVar0 /*29*/].f_14 = 0f;
				Global_96134[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_26 = 0f;
				Global_96134[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_27 = 0f;
				Global_96134[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_96134[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_336(var uParam0)
{
	*uParam0 = -15;
}

int func_337(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_337(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_337(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_338(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92729[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92729[iParam0 /*2*/] = 0;
	}
}

int func_339()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xEAE0D21A50E6C7F4(Global_89496[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_340()
{
	if (((Global_98744 == 13 || Global_98744 == 10) || Global_98744 == 11) || Global_98744 == 12)
	{
		return 0;
	}
	return 1;
}

bool func_341(bool bParam0)
{
	if (!bParam0 && unk_0x8A22C4C08282BF26(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xEAE0D21A50E6C7F4(Global_76870, 0);
}

