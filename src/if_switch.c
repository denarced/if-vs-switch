#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void withIf(int number);
void withSwitch(int number);
void runWith(int flag, int runCount);

#define USE_IF 0
#define USE_SWITCH 1
#define LIMIT 1000

int main(int argc, char **argv) {
    int noRuns = -1;
    if (1 < argc) {
        sscanf(argv[1], "%d", &noRuns);
        if (noRuns < 1) {
            printf("The number must be higher than 0.\n");
            return 1;
        }
    } else {
        printf("Give me a number.\n");
        return 1;
    }
    printf("%d runs:\n", noRuns);
    runWith(USE_IF, noRuns);
    runWith(USE_SWITCH, noRuns);
    return 0;
}

void runWith(int flag, int runCount) {
    printf("\t");
    void (*f_ptr)(int) = NULL;
    if (flag == USE_IF) {
        printf("using if-else: ");
        f_ptr = &withIf;
    } else if (flag == USE_SWITCH) {
        printf("using switch-case: ");
        f_ptr = &withSwitch;
    } else {
        fprintf(stderr, "Error, undefined flag value.\n");
        exit(1);
    }
    clock_t start = clock();
    int i;
    for (i = 0; i < runCount; ++i) {
        (*f_ptr)(-1);
    }
    printf("%lf\n", (double)(clock() - start) / CLOCKS_PER_SEC);
}

void withIf(int number) {
    int other = 0;
    if (number == 0) {
        other++;
    } else if (number == 1) {
        other++;
    } else if (number == 2) {
        other++;
    } else if (number == 3) {
        other++;
    } else if (number == 4) {
        other++;
    } else if (number == 5) {
        other++;
    } else if (number == 6) {
        other++;
    } else if (number == 7) {
        other++;
    } else if (number == 8) {
        other++;
    } else if (number == 9) {
        other++;
    } else if (number == 10) {
        other++;
    } else if (number == 11) {
        other++;
    } else if (number == 12) {
        other++;
    } else if (number == 13) {
        other++;
    } else if (number == 14) {
        other++;
    } else if (number == 15) {
        other++;
    } else if (number == 16) {
        other++;
    } else if (number == 17) {
        other++;
    } else if (number == 18) {
        other++;
    } else if (number == 19) {
        other++;
    } else if (number == 20) {
        other++;
    } else if (number == 21) {
        other++;
    } else if (number == 22) {
        other++;
    } else if (number == 23) {
        other++;
    } else if (number == 24) {
        other++;
    } else if (number == 25) {
        other++;
    } else if (number == 26) {
        other++;
    } else if (number == 27) {
        other++;
    } else if (number == 28) {
        other++;
    } else if (number == 29) {
        other++;
    } else if (number == 30) {
        other++;
    } else if (number == 31) {
        other++;
    } else if (number == 32) {
        other++;
    } else if (number == 33) {
        other++;
    } else if (number == 34) {
        other++;
    } else if (number == 35) {
        other++;
    } else if (number == 36) {
        other++;
    } else if (number == 37) {
        other++;
    } else if (number == 38) {
        other++;
    } else if (number == 39) {
        other++;
    } else if (number == 40) {
        other++;
    } else if (number == 41) {
        other++;
    } else if (number == 42) {
        other++;
    } else if (number == 43) {
        other++;
    } else if (number == 44) {
        other++;
    } else if (number == 45) {
        other++;
    } else if (number == 46) {
        other++;
    } else if (number == 47) {
        other++;
    } else if (number == 48) {
        other++;
    } else if (number == 49) {
        other++;
    } else if (number == 50) {
        other++;
    } else if (number == 51) {
        other++;
    } else if (number == 52) {
        other++;
    } else if (number == 53) {
        other++;
    } else if (number == 54) {
        other++;
    } else if (number == 55) {
        other++;
    } else if (number == 56) {
        other++;
    } else if (number == 57) {
        other++;
    } else if (number == 58) {
        other++;
    } else if (number == 59) {
        other++;
    } else if (number == 60) {
        other++;
    } else if (number == 61) {
        other++;
    } else if (number == 62) {
        other++;
    } else if (number == 63) {
        other++;
    } else if (number == 64) {
        other++;
    } else if (number == 65) {
        other++;
    } else if (number == 66) {
        other++;
    } else if (number == 67) {
        other++;
    } else if (number == 68) {
        other++;
    } else if (number == 69) {
        other++;
    } else if (number == 70) {
        other++;
    } else if (number == 71) {
        other++;
    } else if (number == 72) {
        other++;
    } else if (number == 73) {
        other++;
    } else if (number == 74) {
        other++;
    } else if (number == 75) {
        other++;
    } else if (number == 76) {
        other++;
    } else if (number == 77) {
        other++;
    } else if (number == 78) {
        other++;
    } else if (number == 79) {
        other++;
    } else if (number == 80) {
        other++;
    } else if (number == 81) {
        other++;
    } else if (number == 82) {
        other++;
    } else if (number == 83) {
        other++;
    } else if (number == 84) {
        other++;
    } else if (number == 85) {
        other++;
    } else if (number == 86) {
        other++;
    } else if (number == 87) {
        other++;
    } else if (number == 88) {
        other++;
    } else if (number == 89) {
        other++;
    } else if (number == 90) {
        other++;
    } else if (number == 91) {
        other++;
    } else if (number == 92) {
        other++;
    } else if (number == 93) {
        other++;
    } else if (number == 94) {
        other++;
    } else if (number == 95) {
        other++;
    } else if (number == 96) {
        other++;
    } else if (number == 97) {
        other++;
    } else if (number == 98) {
        other++;
    } else if (number == 99) {
        other++;
    } else if (number == 100) {
        other++;
    } else if (number == 101) {
        other++;
    } else if (number == 102) {
        other++;
    } else if (number == 103) {
        other++;
    } else if (number == 104) {
        other++;
    } else if (number == 105) {
        other++;
    } else if (number == 106) {
        other++;
    } else if (number == 107) {
        other++;
    } else if (number == 108) {
        other++;
    } else if (number == 109) {
        other++;
    } else if (number == 110) {
        other++;
    } else if (number == 111) {
        other++;
    } else if (number == 112) {
        other++;
    } else if (number == 113) {
        other++;
    } else if (number == 114) {
        other++;
    } else if (number == 115) {
        other++;
    } else if (number == 116) {
        other++;
    } else if (number == 117) {
        other++;
    } else if (number == 118) {
        other++;
    } else if (number == 119) {
        other++;
    } else if (number == 120) {
        other++;
    } else if (number == 121) {
        other++;
    } else if (number == 122) {
        other++;
    } else if (number == 123) {
        other++;
    } else if (number == 124) {
        other++;
    } else if (number == 125) {
        other++;
    } else if (number == 126) {
        other++;
    } else if (number == 127) {
        other++;
    } else if (number == 128) {
        other++;
    } else if (number == 129) {
        other++;
    } else if (number == 130) {
        other++;
    } else if (number == 131) {
        other++;
    } else if (number == 132) {
        other++;
    } else if (number == 133) {
        other++;
    } else if (number == 134) {
        other++;
    } else if (number == 135) {
        other++;
    } else if (number == 136) {
        other++;
    } else if (number == 137) {
        other++;
    } else if (number == 138) {
        other++;
    } else if (number == 139) {
        other++;
    } else if (number == 140) {
        other++;
    } else if (number == 141) {
        other++;
    } else if (number == 142) {
        other++;
    } else if (number == 143) {
        other++;
    } else if (number == 144) {
        other++;
    } else if (number == 145) {
        other++;
    } else if (number == 146) {
        other++;
    } else if (number == 147) {
        other++;
    } else if (number == 148) {
        other++;
    } else if (number == 149) {
        other++;
    } else if (number == 150) {
        other++;
    } else if (number == 151) {
        other++;
    } else if (number == 152) {
        other++;
    } else if (number == 153) {
        other++;
    } else if (number == 154) {
        other++;
    } else if (number == 155) {
        other++;
    } else if (number == 156) {
        other++;
    } else if (number == 157) {
        other++;
    } else if (number == 158) {
        other++;
    } else if (number == 159) {
        other++;
    } else if (number == 160) {
        other++;
    } else if (number == 161) {
        other++;
    } else if (number == 162) {
        other++;
    } else if (number == 163) {
        other++;
    } else if (number == 164) {
        other++;
    } else if (number == 165) {
        other++;
    } else if (number == 166) {
        other++;
    } else if (number == 167) {
        other++;
    } else if (number == 168) {
        other++;
    } else if (number == 169) {
        other++;
    } else if (number == 170) {
        other++;
    } else if (number == 171) {
        other++;
    } else if (number == 172) {
        other++;
    } else if (number == 173) {
        other++;
    } else if (number == 174) {
        other++;
    } else if (number == 175) {
        other++;
    } else if (number == 176) {
        other++;
    } else if (number == 177) {
        other++;
    } else if (number == 178) {
        other++;
    } else if (number == 179) {
        other++;
    } else if (number == 180) {
        other++;
    } else if (number == 181) {
        other++;
    } else if (number == 182) {
        other++;
    } else if (number == 183) {
        other++;
    } else if (number == 184) {
        other++;
    } else if (number == 185) {
        other++;
    } else if (number == 186) {
        other++;
    } else if (number == 187) {
        other++;
    } else if (number == 188) {
        other++;
    } else if (number == 189) {
        other++;
    } else if (number == 190) {
        other++;
    } else if (number == 191) {
        other++;
    } else if (number == 192) {
        other++;
    } else if (number == 193) {
        other++;
    } else if (number == 194) {
        other++;
    } else if (number == 195) {
        other++;
    } else if (number == 196) {
        other++;
    } else if (number == 197) {
        other++;
    } else if (number == 198) {
        other++;
    } else if (number == 199) {
        other++;
    } else if (number == 200) {
        other++;
    } else if (number == 201) {
        other++;
    } else if (number == 202) {
        other++;
    } else if (number == 203) {
        other++;
    } else if (number == 204) {
        other++;
    } else if (number == 205) {
        other++;
    } else if (number == 206) {
        other++;
    } else if (number == 207) {
        other++;
    } else if (number == 208) {
        other++;
    } else if (number == 209) {
        other++;
    } else if (number == 210) {
        other++;
    } else if (number == 211) {
        other++;
    } else if (number == 212) {
        other++;
    } else if (number == 213) {
        other++;
    } else if (number == 214) {
        other++;
    } else if (number == 215) {
        other++;
    } else if (number == 216) {
        other++;
    } else if (number == 217) {
        other++;
    } else if (number == 218) {
        other++;
    } else if (number == 219) {
        other++;
    } else if (number == 220) {
        other++;
    } else if (number == 221) {
        other++;
    } else if (number == 222) {
        other++;
    } else if (number == 223) {
        other++;
    } else if (number == 224) {
        other++;
    } else if (number == 225) {
        other++;
    } else if (number == 226) {
        other++;
    } else if (number == 227) {
        other++;
    } else if (number == 228) {
        other++;
    } else if (number == 229) {
        other++;
    } else if (number == 230) {
        other++;
    } else if (number == 231) {
        other++;
    } else if (number == 232) {
        other++;
    } else if (number == 233) {
        other++;
    } else if (number == 234) {
        other++;
    } else if (number == 235) {
        other++;
    } else if (number == 236) {
        other++;
    } else if (number == 237) {
        other++;
    } else if (number == 238) {
        other++;
    } else if (number == 239) {
        other++;
    } else if (number == 240) {
        other++;
    } else if (number == 241) {
        other++;
    } else if (number == 242) {
        other++;
    } else if (number == 243) {
        other++;
    } else if (number == 244) {
        other++;
    } else if (number == 245) {
        other++;
    } else if (number == 246) {
        other++;
    } else if (number == 247) {
        other++;
    } else if (number == 248) {
        other++;
    } else if (number == 249) {
        other++;
    } else if (number == 250) {
        other++;
    } else if (number == 251) {
        other++;
    } else if (number == 252) {
        other++;
    } else if (number == 253) {
        other++;
    } else if (number == 254) {
        other++;
    } else if (number == 255) {
        other++;
    } else if (number == 256) {
        other++;
    } else if (number == 257) {
        other++;
    } else if (number == 258) {
        other++;
    } else if (number == 259) {
        other++;
    } else if (number == 260) {
        other++;
    } else if (number == 261) {
        other++;
    } else if (number == 262) {
        other++;
    } else if (number == 263) {
        other++;
    } else if (number == 264) {
        other++;
    } else if (number == 265) {
        other++;
    } else if (number == 266) {
        other++;
    } else if (number == 267) {
        other++;
    } else if (number == 268) {
        other++;
    } else if (number == 269) {
        other++;
    } else if (number == 270) {
        other++;
    } else if (number == 271) {
        other++;
    } else if (number == 272) {
        other++;
    } else if (number == 273) {
        other++;
    } else if (number == 274) {
        other++;
    } else if (number == 275) {
        other++;
    } else if (number == 276) {
        other++;
    } else if (number == 277) {
        other++;
    } else if (number == 278) {
        other++;
    } else if (number == 279) {
        other++;
    } else if (number == 280) {
        other++;
    } else if (number == 281) {
        other++;
    } else if (number == 282) {
        other++;
    } else if (number == 283) {
        other++;
    } else if (number == 284) {
        other++;
    } else if (number == 285) {
        other++;
    } else if (number == 286) {
        other++;
    } else if (number == 287) {
        other++;
    } else if (number == 288) {
        other++;
    } else if (number == 289) {
        other++;
    } else if (number == 290) {
        other++;
    } else if (number == 291) {
        other++;
    } else if (number == 292) {
        other++;
    } else if (number == 293) {
        other++;
    } else if (number == 294) {
        other++;
    } else if (number == 295) {
        other++;
    } else if (number == 296) {
        other++;
    } else if (number == 297) {
        other++;
    } else if (number == 298) {
        other++;
    } else if (number == 299) {
        other++;
    } else if (number == 300) {
        other++;
    } else if (number == 301) {
        other++;
    } else if (number == 302) {
        other++;
    } else if (number == 303) {
        other++;
    } else if (number == 304) {
        other++;
    } else if (number == 305) {
        other++;
    } else if (number == 306) {
        other++;
    } else if (number == 307) {
        other++;
    } else if (number == 308) {
        other++;
    } else if (number == 309) {
        other++;
    } else if (number == 310) {
        other++;
    } else if (number == 311) {
        other++;
    } else if (number == 312) {
        other++;
    } else if (number == 313) {
        other++;
    } else if (number == 314) {
        other++;
    } else if (number == 315) {
        other++;
    } else if (number == 316) {
        other++;
    } else if (number == 317) {
        other++;
    } else if (number == 318) {
        other++;
    } else if (number == 319) {
        other++;
    } else if (number == 320) {
        other++;
    } else if (number == 321) {
        other++;
    } else if (number == 322) {
        other++;
    } else if (number == 323) {
        other++;
    } else if (number == 324) {
        other++;
    } else if (number == 325) {
        other++;
    } else if (number == 326) {
        other++;
    } else if (number == 327) {
        other++;
    } else if (number == 328) {
        other++;
    } else if (number == 329) {
        other++;
    } else if (number == 330) {
        other++;
    } else if (number == 331) {
        other++;
    } else if (number == 332) {
        other++;
    } else if (number == 333) {
        other++;
    } else if (number == 334) {
        other++;
    } else if (number == 335) {
        other++;
    } else if (number == 336) {
        other++;
    } else if (number == 337) {
        other++;
    } else if (number == 338) {
        other++;
    } else if (number == 339) {
        other++;
    } else if (number == 340) {
        other++;
    } else if (number == 341) {
        other++;
    } else if (number == 342) {
        other++;
    } else if (number == 343) {
        other++;
    } else if (number == 344) {
        other++;
    } else if (number == 345) {
        other++;
    } else if (number == 346) {
        other++;
    } else if (number == 347) {
        other++;
    } else if (number == 348) {
        other++;
    } else if (number == 349) {
        other++;
    } else if (number == 350) {
        other++;
    } else if (number == 351) {
        other++;
    } else if (number == 352) {
        other++;
    } else if (number == 353) {
        other++;
    } else if (number == 354) {
        other++;
    } else if (number == 355) {
        other++;
    } else if (number == 356) {
        other++;
    } else if (number == 357) {
        other++;
    } else if (number == 358) {
        other++;
    } else if (number == 359) {
        other++;
    } else if (number == 360) {
        other++;
    } else if (number == 361) {
        other++;
    } else if (number == 362) {
        other++;
    } else if (number == 363) {
        other++;
    } else if (number == 364) {
        other++;
    } else if (number == 365) {
        other++;
    } else if (number == 366) {
        other++;
    } else if (number == 367) {
        other++;
    } else if (number == 368) {
        other++;
    } else if (number == 369) {
        other++;
    } else if (number == 370) {
        other++;
    } else if (number == 371) {
        other++;
    } else if (number == 372) {
        other++;
    } else if (number == 373) {
        other++;
    } else if (number == 374) {
        other++;
    } else if (number == 375) {
        other++;
    } else if (number == 376) {
        other++;
    } else if (number == 377) {
        other++;
    } else if (number == 378) {
        other++;
    } else if (number == 379) {
        other++;
    } else if (number == 380) {
        other++;
    } else if (number == 381) {
        other++;
    } else if (number == 382) {
        other++;
    } else if (number == 383) {
        other++;
    } else if (number == 384) {
        other++;
    } else if (number == 385) {
        other++;
    } else if (number == 386) {
        other++;
    } else if (number == 387) {
        other++;
    } else if (number == 388) {
        other++;
    } else if (number == 389) {
        other++;
    } else if (number == 390) {
        other++;
    } else if (number == 391) {
        other++;
    } else if (number == 392) {
        other++;
    } else if (number == 393) {
        other++;
    } else if (number == 394) {
        other++;
    } else if (number == 395) {
        other++;
    } else if (number == 396) {
        other++;
    } else if (number == 397) {
        other++;
    } else if (number == 398) {
        other++;
    } else if (number == 399) {
        other++;
    } else if (number == 400) {
        other++;
    } else if (number == 401) {
        other++;
    } else if (number == 402) {
        other++;
    } else if (number == 403) {
        other++;
    } else if (number == 404) {
        other++;
    } else if (number == 405) {
        other++;
    } else if (number == 406) {
        other++;
    } else if (number == 407) {
        other++;
    } else if (number == 408) {
        other++;
    } else if (number == 409) {
        other++;
    } else if (number == 410) {
        other++;
    } else if (number == 411) {
        other++;
    } else if (number == 412) {
        other++;
    } else if (number == 413) {
        other++;
    } else if (number == 414) {
        other++;
    } else if (number == 415) {
        other++;
    } else if (number == 416) {
        other++;
    } else if (number == 417) {
        other++;
    } else if (number == 418) {
        other++;
    } else if (number == 419) {
        other++;
    } else if (number == 420) {
        other++;
    } else if (number == 421) {
        other++;
    } else if (number == 422) {
        other++;
    } else if (number == 423) {
        other++;
    } else if (number == 424) {
        other++;
    } else if (number == 425) {
        other++;
    } else if (number == 426) {
        other++;
    } else if (number == 427) {
        other++;
    } else if (number == 428) {
        other++;
    } else if (number == 429) {
        other++;
    } else if (number == 430) {
        other++;
    } else if (number == 431) {
        other++;
    } else if (number == 432) {
        other++;
    } else if (number == 433) {
        other++;
    } else if (number == 434) {
        other++;
    } else if (number == 435) {
        other++;
    } else if (number == 436) {
        other++;
    } else if (number == 437) {
        other++;
    } else if (number == 438) {
        other++;
    } else if (number == 439) {
        other++;
    } else if (number == 440) {
        other++;
    } else if (number == 441) {
        other++;
    } else if (number == 442) {
        other++;
    } else if (number == 443) {
        other++;
    } else if (number == 444) {
        other++;
    } else if (number == 445) {
        other++;
    } else if (number == 446) {
        other++;
    } else if (number == 447) {
        other++;
    } else if (number == 448) {
        other++;
    } else if (number == 449) {
        other++;
    } else if (number == 450) {
        other++;
    } else if (number == 451) {
        other++;
    } else if (number == 452) {
        other++;
    } else if (number == 453) {
        other++;
    } else if (number == 454) {
        other++;
    } else if (number == 455) {
        other++;
    } else if (number == 456) {
        other++;
    } else if (number == 457) {
        other++;
    } else if (number == 458) {
        other++;
    } else if (number == 459) {
        other++;
    } else if (number == 460) {
        other++;
    } else if (number == 461) {
        other++;
    } else if (number == 462) {
        other++;
    } else if (number == 463) {
        other++;
    } else if (number == 464) {
        other++;
    } else if (number == 465) {
        other++;
    } else if (number == 466) {
        other++;
    } else if (number == 467) {
        other++;
    } else if (number == 468) {
        other++;
    } else if (number == 469) {
        other++;
    } else if (number == 470) {
        other++;
    } else if (number == 471) {
        other++;
    } else if (number == 472) {
        other++;
    } else if (number == 473) {
        other++;
    } else if (number == 474) {
        other++;
    } else if (number == 475) {
        other++;
    } else if (number == 476) {
        other++;
    } else if (number == 477) {
        other++;
    } else if (number == 478) {
        other++;
    } else if (number == 479) {
        other++;
    } else if (number == 480) {
        other++;
    } else if (number == 481) {
        other++;
    } else if (number == 482) {
        other++;
    } else if (number == 483) {
        other++;
    } else if (number == 484) {
        other++;
    } else if (number == 485) {
        other++;
    } else if (number == 486) {
        other++;
    } else if (number == 487) {
        other++;
    } else if (number == 488) {
        other++;
    } else if (number == 489) {
        other++;
    } else if (number == 490) {
        other++;
    } else if (number == 491) {
        other++;
    } else if (number == 492) {
        other++;
    } else if (number == 493) {
        other++;
    } else if (number == 494) {
        other++;
    } else if (number == 495) {
        other++;
    } else if (number == 496) {
        other++;
    } else if (number == 497) {
        other++;
    } else if (number == 498) {
        other++;
    } else if (number == 499) {
        other++;
    } else if (number == 500) {
        other++;
    } else if (number == 501) {
        other++;
    } else if (number == 502) {
        other++;
    } else if (number == 503) {
        other++;
    } else if (number == 504) {
        other++;
    } else if (number == 505) {
        other++;
    } else if (number == 506) {
        other++;
    } else if (number == 507) {
        other++;
    } else if (number == 508) {
        other++;
    } else if (number == 509) {
        other++;
    } else if (number == 510) {
        other++;
    } else if (number == 511) {
        other++;
    } else if (number == 512) {
        other++;
    } else if (number == 513) {
        other++;
    } else if (number == 514) {
        other++;
    } else if (number == 515) {
        other++;
    } else if (number == 516) {
        other++;
    } else if (number == 517) {
        other++;
    } else if (number == 518) {
        other++;
    } else if (number == 519) {
        other++;
    } else if (number == 520) {
        other++;
    } else if (number == 521) {
        other++;
    } else if (number == 522) {
        other++;
    } else if (number == 523) {
        other++;
    } else if (number == 524) {
        other++;
    } else if (number == 525) {
        other++;
    } else if (number == 526) {
        other++;
    } else if (number == 527) {
        other++;
    } else if (number == 528) {
        other++;
    } else if (number == 529) {
        other++;
    } else if (number == 530) {
        other++;
    } else if (number == 531) {
        other++;
    } else if (number == 532) {
        other++;
    } else if (number == 533) {
        other++;
    } else if (number == 534) {
        other++;
    } else if (number == 535) {
        other++;
    } else if (number == 536) {
        other++;
    } else if (number == 537) {
        other++;
    } else if (number == 538) {
        other++;
    } else if (number == 539) {
        other++;
    } else if (number == 540) {
        other++;
    } else if (number == 541) {
        other++;
    } else if (number == 542) {
        other++;
    } else if (number == 543) {
        other++;
    } else if (number == 544) {
        other++;
    } else if (number == 545) {
        other++;
    } else if (number == 546) {
        other++;
    } else if (number == 547) {
        other++;
    } else if (number == 548) {
        other++;
    } else if (number == 549) {
        other++;
    } else if (number == 550) {
        other++;
    } else if (number == 551) {
        other++;
    } else if (number == 552) {
        other++;
    } else if (number == 553) {
        other++;
    } else if (number == 554) {
        other++;
    } else if (number == 555) {
        other++;
    } else if (number == 556) {
        other++;
    } else if (number == 557) {
        other++;
    } else if (number == 558) {
        other++;
    } else if (number == 559) {
        other++;
    } else if (number == 560) {
        other++;
    } else if (number == 561) {
        other++;
    } else if (number == 562) {
        other++;
    } else if (number == 563) {
        other++;
    } else if (number == 564) {
        other++;
    } else if (number == 565) {
        other++;
    } else if (number == 566) {
        other++;
    } else if (number == 567) {
        other++;
    } else if (number == 568) {
        other++;
    } else if (number == 569) {
        other++;
    } else if (number == 570) {
        other++;
    } else if (number == 571) {
        other++;
    } else if (number == 572) {
        other++;
    } else if (number == 573) {
        other++;
    } else if (number == 574) {
        other++;
    } else if (number == 575) {
        other++;
    } else if (number == 576) {
        other++;
    } else if (number == 577) {
        other++;
    } else if (number == 578) {
        other++;
    } else if (number == 579) {
        other++;
    } else if (number == 580) {
        other++;
    } else if (number == 581) {
        other++;
    } else if (number == 582) {
        other++;
    } else if (number == 583) {
        other++;
    } else if (number == 584) {
        other++;
    } else if (number == 585) {
        other++;
    } else if (number == 586) {
        other++;
    } else if (number == 587) {
        other++;
    } else if (number == 588) {
        other++;
    } else if (number == 589) {
        other++;
    } else if (number == 590) {
        other++;
    } else if (number == 591) {
        other++;
    } else if (number == 592) {
        other++;
    } else if (number == 593) {
        other++;
    } else if (number == 594) {
        other++;
    } else if (number == 595) {
        other++;
    } else if (number == 596) {
        other++;
    } else if (number == 597) {
        other++;
    } else if (number == 598) {
        other++;
    } else if (number == 599) {
        other++;
    } else if (number == 600) {
        other++;
    } else if (number == 601) {
        other++;
    } else if (number == 602) {
        other++;
    } else if (number == 603) {
        other++;
    } else if (number == 604) {
        other++;
    } else if (number == 605) {
        other++;
    } else if (number == 606) {
        other++;
    } else if (number == 607) {
        other++;
    } else if (number == 608) {
        other++;
    } else if (number == 609) {
        other++;
    } else if (number == 610) {
        other++;
    } else if (number == 611) {
        other++;
    } else if (number == 612) {
        other++;
    } else if (number == 613) {
        other++;
    } else if (number == 614) {
        other++;
    } else if (number == 615) {
        other++;
    } else if (number == 616) {
        other++;
    } else if (number == 617) {
        other++;
    } else if (number == 618) {
        other++;
    } else if (number == 619) {
        other++;
    } else if (number == 620) {
        other++;
    } else if (number == 621) {
        other++;
    } else if (number == 622) {
        other++;
    } else if (number == 623) {
        other++;
    } else if (number == 624) {
        other++;
    } else if (number == 625) {
        other++;
    } else if (number == 626) {
        other++;
    } else if (number == 627) {
        other++;
    } else if (number == 628) {
        other++;
    } else if (number == 629) {
        other++;
    } else if (number == 630) {
        other++;
    } else if (number == 631) {
        other++;
    } else if (number == 632) {
        other++;
    } else if (number == 633) {
        other++;
    } else if (number == 634) {
        other++;
    } else if (number == 635) {
        other++;
    } else if (number == 636) {
        other++;
    } else if (number == 637) {
        other++;
    } else if (number == 638) {
        other++;
    } else if (number == 639) {
        other++;
    } else if (number == 640) {
        other++;
    } else if (number == 641) {
        other++;
    } else if (number == 642) {
        other++;
    } else if (number == 643) {
        other++;
    } else if (number == 644) {
        other++;
    } else if (number == 645) {
        other++;
    } else if (number == 646) {
        other++;
    } else if (number == 647) {
        other++;
    } else if (number == 648) {
        other++;
    } else if (number == 649) {
        other++;
    } else if (number == 650) {
        other++;
    } else if (number == 651) {
        other++;
    } else if (number == 652) {
        other++;
    } else if (number == 653) {
        other++;
    } else if (number == 654) {
        other++;
    } else if (number == 655) {
        other++;
    } else if (number == 656) {
        other++;
    } else if (number == 657) {
        other++;
    } else if (number == 658) {
        other++;
    } else if (number == 659) {
        other++;
    } else if (number == 660) {
        other++;
    } else if (number == 661) {
        other++;
    } else if (number == 662) {
        other++;
    } else if (number == 663) {
        other++;
    } else if (number == 664) {
        other++;
    } else if (number == 665) {
        other++;
    } else if (number == 666) {
        other++;
    } else if (number == 667) {
        other++;
    } else if (number == 668) {
        other++;
    } else if (number == 669) {
        other++;
    } else if (number == 670) {
        other++;
    } else if (number == 671) {
        other++;
    } else if (number == 672) {
        other++;
    } else if (number == 673) {
        other++;
    } else if (number == 674) {
        other++;
    } else if (number == 675) {
        other++;
    } else if (number == 676) {
        other++;
    } else if (number == 677) {
        other++;
    } else if (number == 678) {
        other++;
    } else if (number == 679) {
        other++;
    } else if (number == 680) {
        other++;
    } else if (number == 681) {
        other++;
    } else if (number == 682) {
        other++;
    } else if (number == 683) {
        other++;
    } else if (number == 684) {
        other++;
    } else if (number == 685) {
        other++;
    } else if (number == 686) {
        other++;
    } else if (number == 687) {
        other++;
    } else if (number == 688) {
        other++;
    } else if (number == 689) {
        other++;
    } else if (number == 690) {
        other++;
    } else if (number == 691) {
        other++;
    } else if (number == 692) {
        other++;
    } else if (number == 693) {
        other++;
    } else if (number == 694) {
        other++;
    } else if (number == 695) {
        other++;
    } else if (number == 696) {
        other++;
    } else if (number == 697) {
        other++;
    } else if (number == 698) {
        other++;
    } else if (number == 699) {
        other++;
    } else if (number == 700) {
        other++;
    } else if (number == 701) {
        other++;
    } else if (number == 702) {
        other++;
    } else if (number == 703) {
        other++;
    } else if (number == 704) {
        other++;
    } else if (number == 705) {
        other++;
    } else if (number == 706) {
        other++;
    } else if (number == 707) {
        other++;
    } else if (number == 708) {
        other++;
    } else if (number == 709) {
        other++;
    } else if (number == 710) {
        other++;
    } else if (number == 711) {
        other++;
    } else if (number == 712) {
        other++;
    } else if (number == 713) {
        other++;
    } else if (number == 714) {
        other++;
    } else if (number == 715) {
        other++;
    } else if (number == 716) {
        other++;
    } else if (number == 717) {
        other++;
    } else if (number == 718) {
        other++;
    } else if (number == 719) {
        other++;
    } else if (number == 720) {
        other++;
    } else if (number == 721) {
        other++;
    } else if (number == 722) {
        other++;
    } else if (number == 723) {
        other++;
    } else if (number == 724) {
        other++;
    } else if (number == 725) {
        other++;
    } else if (number == 726) {
        other++;
    } else if (number == 727) {
        other++;
    } else if (number == 728) {
        other++;
    } else if (number == 729) {
        other++;
    } else if (number == 730) {
        other++;
    } else if (number == 731) {
        other++;
    } else if (number == 732) {
        other++;
    } else if (number == 733) {
        other++;
    } else if (number == 734) {
        other++;
    } else if (number == 735) {
        other++;
    } else if (number == 736) {
        other++;
    } else if (number == 737) {
        other++;
    } else if (number == 738) {
        other++;
    } else if (number == 739) {
        other++;
    } else if (number == 740) {
        other++;
    } else if (number == 741) {
        other++;
    } else if (number == 742) {
        other++;
    } else if (number == 743) {
        other++;
    } else if (number == 744) {
        other++;
    } else if (number == 745) {
        other++;
    } else if (number == 746) {
        other++;
    } else if (number == 747) {
        other++;
    } else if (number == 748) {
        other++;
    } else if (number == 749) {
        other++;
    } else if (number == 750) {
        other++;
    } else if (number == 751) {
        other++;
    } else if (number == 752) {
        other++;
    } else if (number == 753) {
        other++;
    } else if (number == 754) {
        other++;
    } else if (number == 755) {
        other++;
    } else if (number == 756) {
        other++;
    } else if (number == 757) {
        other++;
    } else if (number == 758) {
        other++;
    } else if (number == 759) {
        other++;
    } else if (number == 760) {
        other++;
    } else if (number == 761) {
        other++;
    } else if (number == 762) {
        other++;
    } else if (number == 763) {
        other++;
    } else if (number == 764) {
        other++;
    } else if (number == 765) {
        other++;
    } else if (number == 766) {
        other++;
    } else if (number == 767) {
        other++;
    } else if (number == 768) {
        other++;
    } else if (number == 769) {
        other++;
    } else if (number == 770) {
        other++;
    } else if (number == 771) {
        other++;
    } else if (number == 772) {
        other++;
    } else if (number == 773) {
        other++;
    } else if (number == 774) {
        other++;
    } else if (number == 775) {
        other++;
    } else if (number == 776) {
        other++;
    } else if (number == 777) {
        other++;
    } else if (number == 778) {
        other++;
    } else if (number == 779) {
        other++;
    } else if (number == 780) {
        other++;
    } else if (number == 781) {
        other++;
    } else if (number == 782) {
        other++;
    } else if (number == 783) {
        other++;
    } else if (number == 784) {
        other++;
    } else if (number == 785) {
        other++;
    } else if (number == 786) {
        other++;
    } else if (number == 787) {
        other++;
    } else if (number == 788) {
        other++;
    } else if (number == 789) {
        other++;
    } else if (number == 790) {
        other++;
    } else if (number == 791) {
        other++;
    } else if (number == 792) {
        other++;
    } else if (number == 793) {
        other++;
    } else if (number == 794) {
        other++;
    } else if (number == 795) {
        other++;
    } else if (number == 796) {
        other++;
    } else if (number == 797) {
        other++;
    } else if (number == 798) {
        other++;
    } else if (number == 799) {
        other++;
    } else if (number == 800) {
        other++;
    } else if (number == 801) {
        other++;
    } else if (number == 802) {
        other++;
    } else if (number == 803) {
        other++;
    } else if (number == 804) {
        other++;
    } else if (number == 805) {
        other++;
    } else if (number == 806) {
        other++;
    } else if (number == 807) {
        other++;
    } else if (number == 808) {
        other++;
    } else if (number == 809) {
        other++;
    } else if (number == 810) {
        other++;
    } else if (number == 811) {
        other++;
    } else if (number == 812) {
        other++;
    } else if (number == 813) {
        other++;
    } else if (number == 814) {
        other++;
    } else if (number == 815) {
        other++;
    } else if (number == 816) {
        other++;
    } else if (number == 817) {
        other++;
    } else if (number == 818) {
        other++;
    } else if (number == 819) {
        other++;
    } else if (number == 820) {
        other++;
    } else if (number == 821) {
        other++;
    } else if (number == 822) {
        other++;
    } else if (number == 823) {
        other++;
    } else if (number == 824) {
        other++;
    } else if (number == 825) {
        other++;
    } else if (number == 826) {
        other++;
    } else if (number == 827) {
        other++;
    } else if (number == 828) {
        other++;
    } else if (number == 829) {
        other++;
    } else if (number == 830) {
        other++;
    } else if (number == 831) {
        other++;
    } else if (number == 832) {
        other++;
    } else if (number == 833) {
        other++;
    } else if (number == 834) {
        other++;
    } else if (number == 835) {
        other++;
    } else if (number == 836) {
        other++;
    } else if (number == 837) {
        other++;
    } else if (number == 838) {
        other++;
    } else if (number == 839) {
        other++;
    } else if (number == 840) {
        other++;
    } else if (number == 841) {
        other++;
    } else if (number == 842) {
        other++;
    } else if (number == 843) {
        other++;
    } else if (number == 844) {
        other++;
    } else if (number == 845) {
        other++;
    } else if (number == 846) {
        other++;
    } else if (number == 847) {
        other++;
    } else if (number == 848) {
        other++;
    } else if (number == 849) {
        other++;
    } else if (number == 850) {
        other++;
    } else if (number == 851) {
        other++;
    } else if (number == 852) {
        other++;
    } else if (number == 853) {
        other++;
    } else if (number == 854) {
        other++;
    } else if (number == 855) {
        other++;
    } else if (number == 856) {
        other++;
    } else if (number == 857) {
        other++;
    } else if (number == 858) {
        other++;
    } else if (number == 859) {
        other++;
    } else if (number == 860) {
        other++;
    } else if (number == 861) {
        other++;
    } else if (number == 862) {
        other++;
    } else if (number == 863) {
        other++;
    } else if (number == 864) {
        other++;
    } else if (number == 865) {
        other++;
    } else if (number == 866) {
        other++;
    } else if (number == 867) {
        other++;
    } else if (number == 868) {
        other++;
    } else if (number == 869) {
        other++;
    } else if (number == 870) {
        other++;
    } else if (number == 871) {
        other++;
    } else if (number == 872) {
        other++;
    } else if (number == 873) {
        other++;
    } else if (number == 874) {
        other++;
    } else if (number == 875) {
        other++;
    } else if (number == 876) {
        other++;
    } else if (number == 877) {
        other++;
    } else if (number == 878) {
        other++;
    } else if (number == 879) {
        other++;
    } else if (number == 880) {
        other++;
    } else if (number == 881) {
        other++;
    } else if (number == 882) {
        other++;
    } else if (number == 883) {
        other++;
    } else if (number == 884) {
        other++;
    } else if (number == 885) {
        other++;
    } else if (number == 886) {
        other++;
    } else if (number == 887) {
        other++;
    } else if (number == 888) {
        other++;
    } else if (number == 889) {
        other++;
    } else if (number == 890) {
        other++;
    } else if (number == 891) {
        other++;
    } else if (number == 892) {
        other++;
    } else if (number == 893) {
        other++;
    } else if (number == 894) {
        other++;
    } else if (number == 895) {
        other++;
    } else if (number == 896) {
        other++;
    } else if (number == 897) {
        other++;
    } else if (number == 898) {
        other++;
    } else if (number == 899) {
        other++;
    } else if (number == 900) {
        other++;
    } else if (number == 901) {
        other++;
    } else if (number == 902) {
        other++;
    } else if (number == 903) {
        other++;
    } else if (number == 904) {
        other++;
    } else if (number == 905) {
        other++;
    } else if (number == 906) {
        other++;
    } else if (number == 907) {
        other++;
    } else if (number == 908) {
        other++;
    } else if (number == 909) {
        other++;
    } else if (number == 910) {
        other++;
    } else if (number == 911) {
        other++;
    } else if (number == 912) {
        other++;
    } else if (number == 913) {
        other++;
    } else if (number == 914) {
        other++;
    } else if (number == 915) {
        other++;
    } else if (number == 916) {
        other++;
    } else if (number == 917) {
        other++;
    } else if (number == 918) {
        other++;
    } else if (number == 919) {
        other++;
    } else if (number == 920) {
        other++;
    } else if (number == 921) {
        other++;
    } else if (number == 922) {
        other++;
    } else if (number == 923) {
        other++;
    } else if (number == 924) {
        other++;
    } else if (number == 925) {
        other++;
    } else if (number == 926) {
        other++;
    } else if (number == 927) {
        other++;
    } else if (number == 928) {
        other++;
    } else if (number == 929) {
        other++;
    } else if (number == 930) {
        other++;
    } else if (number == 931) {
        other++;
    } else if (number == 932) {
        other++;
    } else if (number == 933) {
        other++;
    } else if (number == 934) {
        other++;
    } else if (number == 935) {
        other++;
    } else if (number == 936) {
        other++;
    } else if (number == 937) {
        other++;
    } else if (number == 938) {
        other++;
    } else if (number == 939) {
        other++;
    } else if (number == 940) {
        other++;
    } else if (number == 941) {
        other++;
    } else if (number == 942) {
        other++;
    } else if (number == 943) {
        other++;
    } else if (number == 944) {
        other++;
    } else if (number == 945) {
        other++;
    } else if (number == 946) {
        other++;
    } else if (number == 947) {
        other++;
    } else if (number == 948) {
        other++;
    } else if (number == 949) {
        other++;
    } else if (number == 950) {
        other++;
    } else if (number == 951) {
        other++;
    } else if (number == 952) {
        other++;
    } else if (number == 953) {
        other++;
    } else if (number == 954) {
        other++;
    } else if (number == 955) {
        other++;
    } else if (number == 956) {
        other++;
    } else if (number == 957) {
        other++;
    } else if (number == 958) {
        other++;
    } else if (number == 959) {
        other++;
    } else if (number == 960) {
        other++;
    } else if (number == 961) {
        other++;
    } else if (number == 962) {
        other++;
    } else if (number == 963) {
        other++;
    } else if (number == 964) {
        other++;
    } else if (number == 965) {
        other++;
    } else if (number == 966) {
        other++;
    } else if (number == 967) {
        other++;
    } else if (number == 968) {
        other++;
    } else if (number == 969) {
        other++;
    } else if (number == 970) {
        other++;
    } else if (number == 971) {
        other++;
    } else if (number == 972) {
        other++;
    } else if (number == 973) {
        other++;
    } else if (number == 974) {
        other++;
    } else if (number == 975) {
        other++;
    } else if (number == 976) {
        other++;
    } else if (number == 977) {
        other++;
    } else if (number == 978) {
        other++;
    } else if (number == 979) {
        other++;
    } else if (number == 980) {
        other++;
    } else if (number == 981) {
        other++;
    } else if (number == 982) {
        other++;
    } else if (number == 983) {
        other++;
    } else if (number == 984) {
        other++;
    } else if (number == 985) {
        other++;
    } else if (number == 986) {
        other++;
    } else if (number == 987) {
        other++;
    } else if (number == 988) {
        other++;
    } else if (number == 989) {
        other++;
    } else if (number == 990) {
        other++;
    } else if (number == 991) {
        other++;
    } else if (number == 992) {
        other++;
    } else if (number == 993) {
        other++;
    } else if (number == 994) {
        other++;
    } else if (number == 995) {
        other++;
    } else if (number == 996) {
        other++;
    } else if (number == 997) {
        other++;
    } else if (number == 998) {
        other++;
    } else if (number == 999) {
        other++;
    } else if (number == 1000) {
        other++;
    } else {
        other++;
    }
}

void withSwitch(int number) {
    int other = 0;
    switch (number) {
    case 0:
        other++;
        break;
    case 1:
        other++;
        break;
    case 2:
        other++;
        break;
    case 3:
        other++;
        break;
    case 4:
        other++;
        break;
    case 5:
        other++;
        break;
    case 6:
        other++;
        break;
    case 7:
        other++;
        break;
    case 8:
        other++;
        break;
    case 9:
        other++;
        break;
    case 10:
        other++;
        break;
    case 11:
        other++;
        break;
    case 12:
        other++;
        break;
    case 13:
        other++;
        break;
    case 14:
        other++;
        break;
    case 15:
        other++;
        break;
    case 16:
        other++;
        break;
    case 17:
        other++;
        break;
    case 18:
        other++;
        break;
    case 19:
        other++;
        break;
    case 20:
        other++;
        break;
    case 21:
        other++;
        break;
    case 22:
        other++;
        break;
    case 23:
        other++;
        break;
    case 24:
        other++;
        break;
    case 25:
        other++;
        break;
    case 26:
        other++;
        break;
    case 27:
        other++;
        break;
    case 28:
        other++;
        break;
    case 29:
        other++;
        break;
    case 30:
        other++;
        break;
    case 31:
        other++;
        break;
    case 32:
        other++;
        break;
    case 33:
        other++;
        break;
    case 34:
        other++;
        break;
    case 35:
        other++;
        break;
    case 36:
        other++;
        break;
    case 37:
        other++;
        break;
    case 38:
        other++;
        break;
    case 39:
        other++;
        break;
    case 40:
        other++;
        break;
    case 41:
        other++;
        break;
    case 42:
        other++;
        break;
    case 43:
        other++;
        break;
    case 44:
        other++;
        break;
    case 45:
        other++;
        break;
    case 46:
        other++;
        break;
    case 47:
        other++;
        break;
    case 48:
        other++;
        break;
    case 49:
        other++;
        break;
    case 50:
        other++;
        break;
    case 51:
        other++;
        break;
    case 52:
        other++;
        break;
    case 53:
        other++;
        break;
    case 54:
        other++;
        break;
    case 55:
        other++;
        break;
    case 56:
        other++;
        break;
    case 57:
        other++;
        break;
    case 58:
        other++;
        break;
    case 59:
        other++;
        break;
    case 60:
        other++;
        break;
    case 61:
        other++;
        break;
    case 62:
        other++;
        break;
    case 63:
        other++;
        break;
    case 64:
        other++;
        break;
    case 65:
        other++;
        break;
    case 66:
        other++;
        break;
    case 67:
        other++;
        break;
    case 68:
        other++;
        break;
    case 69:
        other++;
        break;
    case 70:
        other++;
        break;
    case 71:
        other++;
        break;
    case 72:
        other++;
        break;
    case 73:
        other++;
        break;
    case 74:
        other++;
        break;
    case 75:
        other++;
        break;
    case 76:
        other++;
        break;
    case 77:
        other++;
        break;
    case 78:
        other++;
        break;
    case 79:
        other++;
        break;
    case 80:
        other++;
        break;
    case 81:
        other++;
        break;
    case 82:
        other++;
        break;
    case 83:
        other++;
        break;
    case 84:
        other++;
        break;
    case 85:
        other++;
        break;
    case 86:
        other++;
        break;
    case 87:
        other++;
        break;
    case 88:
        other++;
        break;
    case 89:
        other++;
        break;
    case 90:
        other++;
        break;
    case 91:
        other++;
        break;
    case 92:
        other++;
        break;
    case 93:
        other++;
        break;
    case 94:
        other++;
        break;
    case 95:
        other++;
        break;
    case 96:
        other++;
        break;
    case 97:
        other++;
        break;
    case 98:
        other++;
        break;
    case 99:
        other++;
        break;
    case 100:
        other++;
        break;
    case 101:
        other++;
        break;
    case 102:
        other++;
        break;
    case 103:
        other++;
        break;
    case 104:
        other++;
        break;
    case 105:
        other++;
        break;
    case 106:
        other++;
        break;
    case 107:
        other++;
        break;
    case 108:
        other++;
        break;
    case 109:
        other++;
        break;
    case 110:
        other++;
        break;
    case 111:
        other++;
        break;
    case 112:
        other++;
        break;
    case 113:
        other++;
        break;
    case 114:
        other++;
        break;
    case 115:
        other++;
        break;
    case 116:
        other++;
        break;
    case 117:
        other++;
        break;
    case 118:
        other++;
        break;
    case 119:
        other++;
        break;
    case 120:
        other++;
        break;
    case 121:
        other++;
        break;
    case 122:
        other++;
        break;
    case 123:
        other++;
        break;
    case 124:
        other++;
        break;
    case 125:
        other++;
        break;
    case 126:
        other++;
        break;
    case 127:
        other++;
        break;
    case 128:
        other++;
        break;
    case 129:
        other++;
        break;
    case 130:
        other++;
        break;
    case 131:
        other++;
        break;
    case 132:
        other++;
        break;
    case 133:
        other++;
        break;
    case 134:
        other++;
        break;
    case 135:
        other++;
        break;
    case 136:
        other++;
        break;
    case 137:
        other++;
        break;
    case 138:
        other++;
        break;
    case 139:
        other++;
        break;
    case 140:
        other++;
        break;
    case 141:
        other++;
        break;
    case 142:
        other++;
        break;
    case 143:
        other++;
        break;
    case 144:
        other++;
        break;
    case 145:
        other++;
        break;
    case 146:
        other++;
        break;
    case 147:
        other++;
        break;
    case 148:
        other++;
        break;
    case 149:
        other++;
        break;
    case 150:
        other++;
        break;
    case 151:
        other++;
        break;
    case 152:
        other++;
        break;
    case 153:
        other++;
        break;
    case 154:
        other++;
        break;
    case 155:
        other++;
        break;
    case 156:
        other++;
        break;
    case 157:
        other++;
        break;
    case 158:
        other++;
        break;
    case 159:
        other++;
        break;
    case 160:
        other++;
        break;
    case 161:
        other++;
        break;
    case 162:
        other++;
        break;
    case 163:
        other++;
        break;
    case 164:
        other++;
        break;
    case 165:
        other++;
        break;
    case 166:
        other++;
        break;
    case 167:
        other++;
        break;
    case 168:
        other++;
        break;
    case 169:
        other++;
        break;
    case 170:
        other++;
        break;
    case 171:
        other++;
        break;
    case 172:
        other++;
        break;
    case 173:
        other++;
        break;
    case 174:
        other++;
        break;
    case 175:
        other++;
        break;
    case 176:
        other++;
        break;
    case 177:
        other++;
        break;
    case 178:
        other++;
        break;
    case 179:
        other++;
        break;
    case 180:
        other++;
        break;
    case 181:
        other++;
        break;
    case 182:
        other++;
        break;
    case 183:
        other++;
        break;
    case 184:
        other++;
        break;
    case 185:
        other++;
        break;
    case 186:
        other++;
        break;
    case 187:
        other++;
        break;
    case 188:
        other++;
        break;
    case 189:
        other++;
        break;
    case 190:
        other++;
        break;
    case 191:
        other++;
        break;
    case 192:
        other++;
        break;
    case 193:
        other++;
        break;
    case 194:
        other++;
        break;
    case 195:
        other++;
        break;
    case 196:
        other++;
        break;
    case 197:
        other++;
        break;
    case 198:
        other++;
        break;
    case 199:
        other++;
        break;
    case 200:
        other++;
        break;
    case 201:
        other++;
        break;
    case 202:
        other++;
        break;
    case 203:
        other++;
        break;
    case 204:
        other++;
        break;
    case 205:
        other++;
        break;
    case 206:
        other++;
        break;
    case 207:
        other++;
        break;
    case 208:
        other++;
        break;
    case 209:
        other++;
        break;
    case 210:
        other++;
        break;
    case 211:
        other++;
        break;
    case 212:
        other++;
        break;
    case 213:
        other++;
        break;
    case 214:
        other++;
        break;
    case 215:
        other++;
        break;
    case 216:
        other++;
        break;
    case 217:
        other++;
        break;
    case 218:
        other++;
        break;
    case 219:
        other++;
        break;
    case 220:
        other++;
        break;
    case 221:
        other++;
        break;
    case 222:
        other++;
        break;
    case 223:
        other++;
        break;
    case 224:
        other++;
        break;
    case 225:
        other++;
        break;
    case 226:
        other++;
        break;
    case 227:
        other++;
        break;
    case 228:
        other++;
        break;
    case 229:
        other++;
        break;
    case 230:
        other++;
        break;
    case 231:
        other++;
        break;
    case 232:
        other++;
        break;
    case 233:
        other++;
        break;
    case 234:
        other++;
        break;
    case 235:
        other++;
        break;
    case 236:
        other++;
        break;
    case 237:
        other++;
        break;
    case 238:
        other++;
        break;
    case 239:
        other++;
        break;
    case 240:
        other++;
        break;
    case 241:
        other++;
        break;
    case 242:
        other++;
        break;
    case 243:
        other++;
        break;
    case 244:
        other++;
        break;
    case 245:
        other++;
        break;
    case 246:
        other++;
        break;
    case 247:
        other++;
        break;
    case 248:
        other++;
        break;
    case 249:
        other++;
        break;
    case 250:
        other++;
        break;
    case 251:
        other++;
        break;
    case 252:
        other++;
        break;
    case 253:
        other++;
        break;
    case 254:
        other++;
        break;
    case 255:
        other++;
        break;
    case 256:
        other++;
        break;
    case 257:
        other++;
        break;
    case 258:
        other++;
        break;
    case 259:
        other++;
        break;
    case 260:
        other++;
        break;
    case 261:
        other++;
        break;
    case 262:
        other++;
        break;
    case 263:
        other++;
        break;
    case 264:
        other++;
        break;
    case 265:
        other++;
        break;
    case 266:
        other++;
        break;
    case 267:
        other++;
        break;
    case 268:
        other++;
        break;
    case 269:
        other++;
        break;
    case 270:
        other++;
        break;
    case 271:
        other++;
        break;
    case 272:
        other++;
        break;
    case 273:
        other++;
        break;
    case 274:
        other++;
        break;
    case 275:
        other++;
        break;
    case 276:
        other++;
        break;
    case 277:
        other++;
        break;
    case 278:
        other++;
        break;
    case 279:
        other++;
        break;
    case 280:
        other++;
        break;
    case 281:
        other++;
        break;
    case 282:
        other++;
        break;
    case 283:
        other++;
        break;
    case 284:
        other++;
        break;
    case 285:
        other++;
        break;
    case 286:
        other++;
        break;
    case 287:
        other++;
        break;
    case 288:
        other++;
        break;
    case 289:
        other++;
        break;
    case 290:
        other++;
        break;
    case 291:
        other++;
        break;
    case 292:
        other++;
        break;
    case 293:
        other++;
        break;
    case 294:
        other++;
        break;
    case 295:
        other++;
        break;
    case 296:
        other++;
        break;
    case 297:
        other++;
        break;
    case 298:
        other++;
        break;
    case 299:
        other++;
        break;
    case 300:
        other++;
        break;
    case 301:
        other++;
        break;
    case 302:
        other++;
        break;
    case 303:
        other++;
        break;
    case 304:
        other++;
        break;
    case 305:
        other++;
        break;
    case 306:
        other++;
        break;
    case 307:
        other++;
        break;
    case 308:
        other++;
        break;
    case 309:
        other++;
        break;
    case 310:
        other++;
        break;
    case 311:
        other++;
        break;
    case 312:
        other++;
        break;
    case 313:
        other++;
        break;
    case 314:
        other++;
        break;
    case 315:
        other++;
        break;
    case 316:
        other++;
        break;
    case 317:
        other++;
        break;
    case 318:
        other++;
        break;
    case 319:
        other++;
        break;
    case 320:
        other++;
        break;
    case 321:
        other++;
        break;
    case 322:
        other++;
        break;
    case 323:
        other++;
        break;
    case 324:
        other++;
        break;
    case 325:
        other++;
        break;
    case 326:
        other++;
        break;
    case 327:
        other++;
        break;
    case 328:
        other++;
        break;
    case 329:
        other++;
        break;
    case 330:
        other++;
        break;
    case 331:
        other++;
        break;
    case 332:
        other++;
        break;
    case 333:
        other++;
        break;
    case 334:
        other++;
        break;
    case 335:
        other++;
        break;
    case 336:
        other++;
        break;
    case 337:
        other++;
        break;
    case 338:
        other++;
        break;
    case 339:
        other++;
        break;
    case 340:
        other++;
        break;
    case 341:
        other++;
        break;
    case 342:
        other++;
        break;
    case 343:
        other++;
        break;
    case 344:
        other++;
        break;
    case 345:
        other++;
        break;
    case 346:
        other++;
        break;
    case 347:
        other++;
        break;
    case 348:
        other++;
        break;
    case 349:
        other++;
        break;
    case 350:
        other++;
        break;
    case 351:
        other++;
        break;
    case 352:
        other++;
        break;
    case 353:
        other++;
        break;
    case 354:
        other++;
        break;
    case 355:
        other++;
        break;
    case 356:
        other++;
        break;
    case 357:
        other++;
        break;
    case 358:
        other++;
        break;
    case 359:
        other++;
        break;
    case 360:
        other++;
        break;
    case 361:
        other++;
        break;
    case 362:
        other++;
        break;
    case 363:
        other++;
        break;
    case 364:
        other++;
        break;
    case 365:
        other++;
        break;
    case 366:
        other++;
        break;
    case 367:
        other++;
        break;
    case 368:
        other++;
        break;
    case 369:
        other++;
        break;
    case 370:
        other++;
        break;
    case 371:
        other++;
        break;
    case 372:
        other++;
        break;
    case 373:
        other++;
        break;
    case 374:
        other++;
        break;
    case 375:
        other++;
        break;
    case 376:
        other++;
        break;
    case 377:
        other++;
        break;
    case 378:
        other++;
        break;
    case 379:
        other++;
        break;
    case 380:
        other++;
        break;
    case 381:
        other++;
        break;
    case 382:
        other++;
        break;
    case 383:
        other++;
        break;
    case 384:
        other++;
        break;
    case 385:
        other++;
        break;
    case 386:
        other++;
        break;
    case 387:
        other++;
        break;
    case 388:
        other++;
        break;
    case 389:
        other++;
        break;
    case 390:
        other++;
        break;
    case 391:
        other++;
        break;
    case 392:
        other++;
        break;
    case 393:
        other++;
        break;
    case 394:
        other++;
        break;
    case 395:
        other++;
        break;
    case 396:
        other++;
        break;
    case 397:
        other++;
        break;
    case 398:
        other++;
        break;
    case 399:
        other++;
        break;
    case 400:
        other++;
        break;
    case 401:
        other++;
        break;
    case 402:
        other++;
        break;
    case 403:
        other++;
        break;
    case 404:
        other++;
        break;
    case 405:
        other++;
        break;
    case 406:
        other++;
        break;
    case 407:
        other++;
        break;
    case 408:
        other++;
        break;
    case 409:
        other++;
        break;
    case 410:
        other++;
        break;
    case 411:
        other++;
        break;
    case 412:
        other++;
        break;
    case 413:
        other++;
        break;
    case 414:
        other++;
        break;
    case 415:
        other++;
        break;
    case 416:
        other++;
        break;
    case 417:
        other++;
        break;
    case 418:
        other++;
        break;
    case 419:
        other++;
        break;
    case 420:
        other++;
        break;
    case 421:
        other++;
        break;
    case 422:
        other++;
        break;
    case 423:
        other++;
        break;
    case 424:
        other++;
        break;
    case 425:
        other++;
        break;
    case 426:
        other++;
        break;
    case 427:
        other++;
        break;
    case 428:
        other++;
        break;
    case 429:
        other++;
        break;
    case 430:
        other++;
        break;
    case 431:
        other++;
        break;
    case 432:
        other++;
        break;
    case 433:
        other++;
        break;
    case 434:
        other++;
        break;
    case 435:
        other++;
        break;
    case 436:
        other++;
        break;
    case 437:
        other++;
        break;
    case 438:
        other++;
        break;
    case 439:
        other++;
        break;
    case 440:
        other++;
        break;
    case 441:
        other++;
        break;
    case 442:
        other++;
        break;
    case 443:
        other++;
        break;
    case 444:
        other++;
        break;
    case 445:
        other++;
        break;
    case 446:
        other++;
        break;
    case 447:
        other++;
        break;
    case 448:
        other++;
        break;
    case 449:
        other++;
        break;
    case 450:
        other++;
        break;
    case 451:
        other++;
        break;
    case 452:
        other++;
        break;
    case 453:
        other++;
        break;
    case 454:
        other++;
        break;
    case 455:
        other++;
        break;
    case 456:
        other++;
        break;
    case 457:
        other++;
        break;
    case 458:
        other++;
        break;
    case 459:
        other++;
        break;
    case 460:
        other++;
        break;
    case 461:
        other++;
        break;
    case 462:
        other++;
        break;
    case 463:
        other++;
        break;
    case 464:
        other++;
        break;
    case 465:
        other++;
        break;
    case 466:
        other++;
        break;
    case 467:
        other++;
        break;
    case 468:
        other++;
        break;
    case 469:
        other++;
        break;
    case 470:
        other++;
        break;
    case 471:
        other++;
        break;
    case 472:
        other++;
        break;
    case 473:
        other++;
        break;
    case 474:
        other++;
        break;
    case 475:
        other++;
        break;
    case 476:
        other++;
        break;
    case 477:
        other++;
        break;
    case 478:
        other++;
        break;
    case 479:
        other++;
        break;
    case 480:
        other++;
        break;
    case 481:
        other++;
        break;
    case 482:
        other++;
        break;
    case 483:
        other++;
        break;
    case 484:
        other++;
        break;
    case 485:
        other++;
        break;
    case 486:
        other++;
        break;
    case 487:
        other++;
        break;
    case 488:
        other++;
        break;
    case 489:
        other++;
        break;
    case 490:
        other++;
        break;
    case 491:
        other++;
        break;
    case 492:
        other++;
        break;
    case 493:
        other++;
        break;
    case 494:
        other++;
        break;
    case 495:
        other++;
        break;
    case 496:
        other++;
        break;
    case 497:
        other++;
        break;
    case 498:
        other++;
        break;
    case 499:
        other++;
        break;
    case 500:
        other++;
        break;
    case 501:
        other++;
        break;
    case 502:
        other++;
        break;
    case 503:
        other++;
        break;
    case 504:
        other++;
        break;
    case 505:
        other++;
        break;
    case 506:
        other++;
        break;
    case 507:
        other++;
        break;
    case 508:
        other++;
        break;
    case 509:
        other++;
        break;
    case 510:
        other++;
        break;
    case 511:
        other++;
        break;
    case 512:
        other++;
        break;
    case 513:
        other++;
        break;
    case 514:
        other++;
        break;
    case 515:
        other++;
        break;
    case 516:
        other++;
        break;
    case 517:
        other++;
        break;
    case 518:
        other++;
        break;
    case 519:
        other++;
        break;
    case 520:
        other++;
        break;
    case 521:
        other++;
        break;
    case 522:
        other++;
        break;
    case 523:
        other++;
        break;
    case 524:
        other++;
        break;
    case 525:
        other++;
        break;
    case 526:
        other++;
        break;
    case 527:
        other++;
        break;
    case 528:
        other++;
        break;
    case 529:
        other++;
        break;
    case 530:
        other++;
        break;
    case 531:
        other++;
        break;
    case 532:
        other++;
        break;
    case 533:
        other++;
        break;
    case 534:
        other++;
        break;
    case 535:
        other++;
        break;
    case 536:
        other++;
        break;
    case 537:
        other++;
        break;
    case 538:
        other++;
        break;
    case 539:
        other++;
        break;
    case 540:
        other++;
        break;
    case 541:
        other++;
        break;
    case 542:
        other++;
        break;
    case 543:
        other++;
        break;
    case 544:
        other++;
        break;
    case 545:
        other++;
        break;
    case 546:
        other++;
        break;
    case 547:
        other++;
        break;
    case 548:
        other++;
        break;
    case 549:
        other++;
        break;
    case 550:
        other++;
        break;
    case 551:
        other++;
        break;
    case 552:
        other++;
        break;
    case 553:
        other++;
        break;
    case 554:
        other++;
        break;
    case 555:
        other++;
        break;
    case 556:
        other++;
        break;
    case 557:
        other++;
        break;
    case 558:
        other++;
        break;
    case 559:
        other++;
        break;
    case 560:
        other++;
        break;
    case 561:
        other++;
        break;
    case 562:
        other++;
        break;
    case 563:
        other++;
        break;
    case 564:
        other++;
        break;
    case 565:
        other++;
        break;
    case 566:
        other++;
        break;
    case 567:
        other++;
        break;
    case 568:
        other++;
        break;
    case 569:
        other++;
        break;
    case 570:
        other++;
        break;
    case 571:
        other++;
        break;
    case 572:
        other++;
        break;
    case 573:
        other++;
        break;
    case 574:
        other++;
        break;
    case 575:
        other++;
        break;
    case 576:
        other++;
        break;
    case 577:
        other++;
        break;
    case 578:
        other++;
        break;
    case 579:
        other++;
        break;
    case 580:
        other++;
        break;
    case 581:
        other++;
        break;
    case 582:
        other++;
        break;
    case 583:
        other++;
        break;
    case 584:
        other++;
        break;
    case 585:
        other++;
        break;
    case 586:
        other++;
        break;
    case 587:
        other++;
        break;
    case 588:
        other++;
        break;
    case 589:
        other++;
        break;
    case 590:
        other++;
        break;
    case 591:
        other++;
        break;
    case 592:
        other++;
        break;
    case 593:
        other++;
        break;
    case 594:
        other++;
        break;
    case 595:
        other++;
        break;
    case 596:
        other++;
        break;
    case 597:
        other++;
        break;
    case 598:
        other++;
        break;
    case 599:
        other++;
        break;
    case 600:
        other++;
        break;
    case 601:
        other++;
        break;
    case 602:
        other++;
        break;
    case 603:
        other++;
        break;
    case 604:
        other++;
        break;
    case 605:
        other++;
        break;
    case 606:
        other++;
        break;
    case 607:
        other++;
        break;
    case 608:
        other++;
        break;
    case 609:
        other++;
        break;
    case 610:
        other++;
        break;
    case 611:
        other++;
        break;
    case 612:
        other++;
        break;
    case 613:
        other++;
        break;
    case 614:
        other++;
        break;
    case 615:
        other++;
        break;
    case 616:
        other++;
        break;
    case 617:
        other++;
        break;
    case 618:
        other++;
        break;
    case 619:
        other++;
        break;
    case 620:
        other++;
        break;
    case 621:
        other++;
        break;
    case 622:
        other++;
        break;
    case 623:
        other++;
        break;
    case 624:
        other++;
        break;
    case 625:
        other++;
        break;
    case 626:
        other++;
        break;
    case 627:
        other++;
        break;
    case 628:
        other++;
        break;
    case 629:
        other++;
        break;
    case 630:
        other++;
        break;
    case 631:
        other++;
        break;
    case 632:
        other++;
        break;
    case 633:
        other++;
        break;
    case 634:
        other++;
        break;
    case 635:
        other++;
        break;
    case 636:
        other++;
        break;
    case 637:
        other++;
        break;
    case 638:
        other++;
        break;
    case 639:
        other++;
        break;
    case 640:
        other++;
        break;
    case 641:
        other++;
        break;
    case 642:
        other++;
        break;
    case 643:
        other++;
        break;
    case 644:
        other++;
        break;
    case 645:
        other++;
        break;
    case 646:
        other++;
        break;
    case 647:
        other++;
        break;
    case 648:
        other++;
        break;
    case 649:
        other++;
        break;
    case 650:
        other++;
        break;
    case 651:
        other++;
        break;
    case 652:
        other++;
        break;
    case 653:
        other++;
        break;
    case 654:
        other++;
        break;
    case 655:
        other++;
        break;
    case 656:
        other++;
        break;
    case 657:
        other++;
        break;
    case 658:
        other++;
        break;
    case 659:
        other++;
        break;
    case 660:
        other++;
        break;
    case 661:
        other++;
        break;
    case 662:
        other++;
        break;
    case 663:
        other++;
        break;
    case 664:
        other++;
        break;
    case 665:
        other++;
        break;
    case 666:
        other++;
        break;
    case 667:
        other++;
        break;
    case 668:
        other++;
        break;
    case 669:
        other++;
        break;
    case 670:
        other++;
        break;
    case 671:
        other++;
        break;
    case 672:
        other++;
        break;
    case 673:
        other++;
        break;
    case 674:
        other++;
        break;
    case 675:
        other++;
        break;
    case 676:
        other++;
        break;
    case 677:
        other++;
        break;
    case 678:
        other++;
        break;
    case 679:
        other++;
        break;
    case 680:
        other++;
        break;
    case 681:
        other++;
        break;
    case 682:
        other++;
        break;
    case 683:
        other++;
        break;
    case 684:
        other++;
        break;
    case 685:
        other++;
        break;
    case 686:
        other++;
        break;
    case 687:
        other++;
        break;
    case 688:
        other++;
        break;
    case 689:
        other++;
        break;
    case 690:
        other++;
        break;
    case 691:
        other++;
        break;
    case 692:
        other++;
        break;
    case 693:
        other++;
        break;
    case 694:
        other++;
        break;
    case 695:
        other++;
        break;
    case 696:
        other++;
        break;
    case 697:
        other++;
        break;
    case 698:
        other++;
        break;
    case 699:
        other++;
        break;
    case 700:
        other++;
        break;
    case 701:
        other++;
        break;
    case 702:
        other++;
        break;
    case 703:
        other++;
        break;
    case 704:
        other++;
        break;
    case 705:
        other++;
        break;
    case 706:
        other++;
        break;
    case 707:
        other++;
        break;
    case 708:
        other++;
        break;
    case 709:
        other++;
        break;
    case 710:
        other++;
        break;
    case 711:
        other++;
        break;
    case 712:
        other++;
        break;
    case 713:
        other++;
        break;
    case 714:
        other++;
        break;
    case 715:
        other++;
        break;
    case 716:
        other++;
        break;
    case 717:
        other++;
        break;
    case 718:
        other++;
        break;
    case 719:
        other++;
        break;
    case 720:
        other++;
        break;
    case 721:
        other++;
        break;
    case 722:
        other++;
        break;
    case 723:
        other++;
        break;
    case 724:
        other++;
        break;
    case 725:
        other++;
        break;
    case 726:
        other++;
        break;
    case 727:
        other++;
        break;
    case 728:
        other++;
        break;
    case 729:
        other++;
        break;
    case 730:
        other++;
        break;
    case 731:
        other++;
        break;
    case 732:
        other++;
        break;
    case 733:
        other++;
        break;
    case 734:
        other++;
        break;
    case 735:
        other++;
        break;
    case 736:
        other++;
        break;
    case 737:
        other++;
        break;
    case 738:
        other++;
        break;
    case 739:
        other++;
        break;
    case 740:
        other++;
        break;
    case 741:
        other++;
        break;
    case 742:
        other++;
        break;
    case 743:
        other++;
        break;
    case 744:
        other++;
        break;
    case 745:
        other++;
        break;
    case 746:
        other++;
        break;
    case 747:
        other++;
        break;
    case 748:
        other++;
        break;
    case 749:
        other++;
        break;
    case 750:
        other++;
        break;
    case 751:
        other++;
        break;
    case 752:
        other++;
        break;
    case 753:
        other++;
        break;
    case 754:
        other++;
        break;
    case 755:
        other++;
        break;
    case 756:
        other++;
        break;
    case 757:
        other++;
        break;
    case 758:
        other++;
        break;
    case 759:
        other++;
        break;
    case 760:
        other++;
        break;
    case 761:
        other++;
        break;
    case 762:
        other++;
        break;
    case 763:
        other++;
        break;
    case 764:
        other++;
        break;
    case 765:
        other++;
        break;
    case 766:
        other++;
        break;
    case 767:
        other++;
        break;
    case 768:
        other++;
        break;
    case 769:
        other++;
        break;
    case 770:
        other++;
        break;
    case 771:
        other++;
        break;
    case 772:
        other++;
        break;
    case 773:
        other++;
        break;
    case 774:
        other++;
        break;
    case 775:
        other++;
        break;
    case 776:
        other++;
        break;
    case 777:
        other++;
        break;
    case 778:
        other++;
        break;
    case 779:
        other++;
        break;
    case 780:
        other++;
        break;
    case 781:
        other++;
        break;
    case 782:
        other++;
        break;
    case 783:
        other++;
        break;
    case 784:
        other++;
        break;
    case 785:
        other++;
        break;
    case 786:
        other++;
        break;
    case 787:
        other++;
        break;
    case 788:
        other++;
        break;
    case 789:
        other++;
        break;
    case 790:
        other++;
        break;
    case 791:
        other++;
        break;
    case 792:
        other++;
        break;
    case 793:
        other++;
        break;
    case 794:
        other++;
        break;
    case 795:
        other++;
        break;
    case 796:
        other++;
        break;
    case 797:
        other++;
        break;
    case 798:
        other++;
        break;
    case 799:
        other++;
        break;
    case 800:
        other++;
        break;
    case 801:
        other++;
        break;
    case 802:
        other++;
        break;
    case 803:
        other++;
        break;
    case 804:
        other++;
        break;
    case 805:
        other++;
        break;
    case 806:
        other++;
        break;
    case 807:
        other++;
        break;
    case 808:
        other++;
        break;
    case 809:
        other++;
        break;
    case 810:
        other++;
        break;
    case 811:
        other++;
        break;
    case 812:
        other++;
        break;
    case 813:
        other++;
        break;
    case 814:
        other++;
        break;
    case 815:
        other++;
        break;
    case 816:
        other++;
        break;
    case 817:
        other++;
        break;
    case 818:
        other++;
        break;
    case 819:
        other++;
        break;
    case 820:
        other++;
        break;
    case 821:
        other++;
        break;
    case 822:
        other++;
        break;
    case 823:
        other++;
        break;
    case 824:
        other++;
        break;
    case 825:
        other++;
        break;
    case 826:
        other++;
        break;
    case 827:
        other++;
        break;
    case 828:
        other++;
        break;
    case 829:
        other++;
        break;
    case 830:
        other++;
        break;
    case 831:
        other++;
        break;
    case 832:
        other++;
        break;
    case 833:
        other++;
        break;
    case 834:
        other++;
        break;
    case 835:
        other++;
        break;
    case 836:
        other++;
        break;
    case 837:
        other++;
        break;
    case 838:
        other++;
        break;
    case 839:
        other++;
        break;
    case 840:
        other++;
        break;
    case 841:
        other++;
        break;
    case 842:
        other++;
        break;
    case 843:
        other++;
        break;
    case 844:
        other++;
        break;
    case 845:
        other++;
        break;
    case 846:
        other++;
        break;
    case 847:
        other++;
        break;
    case 848:
        other++;
        break;
    case 849:
        other++;
        break;
    case 850:
        other++;
        break;
    case 851:
        other++;
        break;
    case 852:
        other++;
        break;
    case 853:
        other++;
        break;
    case 854:
        other++;
        break;
    case 855:
        other++;
        break;
    case 856:
        other++;
        break;
    case 857:
        other++;
        break;
    case 858:
        other++;
        break;
    case 859:
        other++;
        break;
    case 860:
        other++;
        break;
    case 861:
        other++;
        break;
    case 862:
        other++;
        break;
    case 863:
        other++;
        break;
    case 864:
        other++;
        break;
    case 865:
        other++;
        break;
    case 866:
        other++;
        break;
    case 867:
        other++;
        break;
    case 868:
        other++;
        break;
    case 869:
        other++;
        break;
    case 870:
        other++;
        break;
    case 871:
        other++;
        break;
    case 872:
        other++;
        break;
    case 873:
        other++;
        break;
    case 874:
        other++;
        break;
    case 875:
        other++;
        break;
    case 876:
        other++;
        break;
    case 877:
        other++;
        break;
    case 878:
        other++;
        break;
    case 879:
        other++;
        break;
    case 880:
        other++;
        break;
    case 881:
        other++;
        break;
    case 882:
        other++;
        break;
    case 883:
        other++;
        break;
    case 884:
        other++;
        break;
    case 885:
        other++;
        break;
    case 886:
        other++;
        break;
    case 887:
        other++;
        break;
    case 888:
        other++;
        break;
    case 889:
        other++;
        break;
    case 890:
        other++;
        break;
    case 891:
        other++;
        break;
    case 892:
        other++;
        break;
    case 893:
        other++;
        break;
    case 894:
        other++;
        break;
    case 895:
        other++;
        break;
    case 896:
        other++;
        break;
    case 897:
        other++;
        break;
    case 898:
        other++;
        break;
    case 899:
        other++;
        break;
    case 900:
        other++;
        break;
    case 901:
        other++;
        break;
    case 902:
        other++;
        break;
    case 903:
        other++;
        break;
    case 904:
        other++;
        break;
    case 905:
        other++;
        break;
    case 906:
        other++;
        break;
    case 907:
        other++;
        break;
    case 908:
        other++;
        break;
    case 909:
        other++;
        break;
    case 910:
        other++;
        break;
    case 911:
        other++;
        break;
    case 912:
        other++;
        break;
    case 913:
        other++;
        break;
    case 914:
        other++;
        break;
    case 915:
        other++;
        break;
    case 916:
        other++;
        break;
    case 917:
        other++;
        break;
    case 918:
        other++;
        break;
    case 919:
        other++;
        break;
    case 920:
        other++;
        break;
    case 921:
        other++;
        break;
    case 922:
        other++;
        break;
    case 923:
        other++;
        break;
    case 924:
        other++;
        break;
    case 925:
        other++;
        break;
    case 926:
        other++;
        break;
    case 927:
        other++;
        break;
    case 928:
        other++;
        break;
    case 929:
        other++;
        break;
    case 930:
        other++;
        break;
    case 931:
        other++;
        break;
    case 932:
        other++;
        break;
    case 933:
        other++;
        break;
    case 934:
        other++;
        break;
    case 935:
        other++;
        break;
    case 936:
        other++;
        break;
    case 937:
        other++;
        break;
    case 938:
        other++;
        break;
    case 939:
        other++;
        break;
    case 940:
        other++;
        break;
    case 941:
        other++;
        break;
    case 942:
        other++;
        break;
    case 943:
        other++;
        break;
    case 944:
        other++;
        break;
    case 945:
        other++;
        break;
    case 946:
        other++;
        break;
    case 947:
        other++;
        break;
    case 948:
        other++;
        break;
    case 949:
        other++;
        break;
    case 950:
        other++;
        break;
    case 951:
        other++;
        break;
    case 952:
        other++;
        break;
    case 953:
        other++;
        break;
    case 954:
        other++;
        break;
    case 955:
        other++;
        break;
    case 956:
        other++;
        break;
    case 957:
        other++;
        break;
    case 958:
        other++;
        break;
    case 959:
        other++;
        break;
    case 960:
        other++;
        break;
    case 961:
        other++;
        break;
    case 962:
        other++;
        break;
    case 963:
        other++;
        break;
    case 964:
        other++;
        break;
    case 965:
        other++;
        break;
    case 966:
        other++;
        break;
    case 967:
        other++;
        break;
    case 968:
        other++;
        break;
    case 969:
        other++;
        break;
    case 970:
        other++;
        break;
    case 971:
        other++;
        break;
    case 972:
        other++;
        break;
    case 973:
        other++;
        break;
    case 974:
        other++;
        break;
    case 975:
        other++;
        break;
    case 976:
        other++;
        break;
    case 977:
        other++;
        break;
    case 978:
        other++;
        break;
    case 979:
        other++;
        break;
    case 980:
        other++;
        break;
    case 981:
        other++;
        break;
    case 982:
        other++;
        break;
    case 983:
        other++;
        break;
    case 984:
        other++;
        break;
    case 985:
        other++;
        break;
    case 986:
        other++;
        break;
    case 987:
        other++;
        break;
    case 988:
        other++;
        break;
    case 989:
        other++;
        break;
    case 990:
        other++;
        break;
    case 991:
        other++;
        break;
    case 992:
        other++;
        break;
    case 993:
        other++;
        break;
    case 994:
        other++;
        break;
    case 995:
        other++;
        break;
    case 996:
        other++;
        break;
    case 997:
        other++;
        break;
    case 998:
        other++;
        break;
    case 999:
        other++;
        break;
    case 1000:
        other++;
        break;
    default:
        other++;
        break;
    }
}
