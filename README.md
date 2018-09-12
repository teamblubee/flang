Flang
=====

Flang is a Fortran compiler targeting LLVM.

Visit the flang wiki for more information:

https://github.com/flang-compiler/flang/wiki

We have mailing lists for announcements and developers.
Here's the link with the sign-up information:

http://lists.flang-compiler.org/mailman/listinfo

We have a flang-compiler channel on Slack.  Slack is invitation only but anyone can join.  Here's the link:

https://join.slack.com/t/flang-compiler/shared_invite/MjExOTEyMzQ3MjIxLTE0OTk4NzQyNzUtODQzZWEyMjkwYw


## Building Flang

Instructions for building Flang can be found on the Flang wiki:
https://github.com/flang-compiler/flang/wiki/Building-Flang


## Compiler Options

For a list of compiler options, enter

```
% flang -help
```

The Flang compiler supports accepts all clang 4.0 compiler options and supports many, as well as the following flang-specific compiler options:

```lang-none
-noFlangLibs          Do not link against Flang libraries
-mp                   Enable OpenMP and link with with OpenMP library libomp
-nomp                 Do not link with OpenMP library libomp
-Mbackslash           Treat backslash character like a C-style escape character
-Mno-backslash        Treat backslash like any other character
-Mbyteswapio          Swap byte-order for unformatted input/output
-Mfixed               Assume fixed-format source
-Mextend              Allow source lines up to 132 characters
-Mfreeform            Assume free-format source
-Mpreprocess          Run preprocessor for Fortran files
-Mrecursive           Generate code to allow recursive subprograms
-Mstandard            Check standard conformance
-Msave                Assume all variables have SAVE attribute
-module               path to module file (-I also works)
-Mallocatable=95      Select Fortran 95 semantics for assignments to allocatable objects (Default)
-Mallocatable=03      Select Fortran 03 semantics for assignments to allocatable objects
-static-flang-libs    Link using static Flang libraries
-M[no]daz             Treat denormalized numbers as zero
-M[no]flushz          Set SSE to flush-to-zero mode
-Mcache_align         Align large objects on cache-line boundaries
-M[no]fprelaxed       This option is ignored
-fdefault-integer-8   Treat INTEGER and LOGICAL as INTEGER*8 and LOGICAL*8
-fdefault-real-8      Treat REAL as REAL*8
-i8                   Treat INTEGER and LOGICAL as INTEGER*8 and LOGICAL*8
-r8                   Treat REAL as REAL*8
-fno-fortran-main     Don't link in Fortran main
```

FreeBSD AMD64 
```fortran
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM377BEGIN*            TEST RESULTS - FM377

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  XSINH - (197) INTRINSIC FUNCTIONS

  SINH, COSH    (HYPERBOLIC SINE, COSINE)

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  15 TESTS


        TEST OF SINH
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------

        TEST OF COSH
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
 
 -------------------------------------------------------------------------------
 
                         15 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         15 OF  15 TESTS EXECUTED
 
 *FM377END*              END OF TEST - FM377

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM356BEGIN*            TEST RESULTS - FM356

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

  XABS - (156) INTRINSIC FUNCTIONS--

           ABS, IABS (ABSOLUTE VALUE)

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  10 TESTS


        TEST OF ABS
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  

        TEST OF IABS
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
 
 -------------------------------------------------------------------------------
 
                         10 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         10 OF  10 TESTS EXECUTED
 
 *FM356END*              END OF TEST - FM356

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM259BEGIN*            TEST RESULTS - FM259

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 BLKIF2 - (301) BLOCK IF

  WITH OTHER CONTROL CONSTRUCTS (I)

  SUBSET REF.  11.1-11.3, 11.6-11.10
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   3 TESTS


                                                 TEST 1 (1 COMPUTED RESULT)
                                                 TEST 2 (1 COMPUTED RESULT)
                                                 TEST 3 (4 COMPUTED RESULTS)
                                                 ALL ANSWERS SHOULD BE ZERO
     1    INSPECT
                                    0
     2    INSPECT
                                    0
     3    INSPECT
                                    0
                                    0
                                    0
                                    0
 
 -------------------------------------------------------------------------------
 
                          0 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          3 TESTS REQUIRE INSPECTION
                          3 OF   3 TESTS EXECUTED
 
 *FM259END*              END OF TEST - FM259

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM830BEGIN*            TEST RESULTS - FM830

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 YGEN2 - (207) GENERIC FUNCTIONS --

  AINT, ANINT, NINT, SQRT, EXP, LOG, LOG10

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   9 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
 
 -------------------------------------------------------------------------------
 
                          9 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          9 OF   9 TESTS EXECUTED
 
 *FM830END*              END OF TEST - FM830

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       103       PASS
       104       PASS
       105       PASS
       106       PASS
       107       PASS
       108       PASS
       109       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM011
 
                    0 ERRORS ENCOUNTERED
                    7 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM811BEGIN*            TEST RESULTS - FM811

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

 YCMMX - (174) INTRINSIC FUNCTIONS--

                INTEGER, REAL, D.P.
                AND COMPLEX IN MIXED MODE EXPRESSIONS

  ANS REF. - 15.10
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  10 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
 
 -------------------------------------------------------------------------------
 
                         10 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         10 OF  10 TESTS EXECUTED
 
 *FM811END*              END OF TEST - FM811

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       265       PASS
       266       PASS
       267       PASS
       268       PASS
       269       PASS
       270       PASS
       271       PASS
       272       PASS
       273       PASS
       274       PASS
       275       PASS
       276       PASS
       277       PASS
       278       PASS
       279       PASS
       280       PASS
       281       PASS
       282       PASS
       283       PASS
       284       PASS
       285       PASS
       286       PASS
       287       PASS
       288       PASS
       289       PASS
       290       PASS
       291       PASS
       292       PASS
       293       PASS
       294       PASS
       295       PASS
       296       PASS
       297       PASS
       298       PASS
       299       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM030
 
                    0 ERRORS ENCOUNTERED
                   35 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM912BEGIN*            TEST RESULTS - FM912

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  DIRAF3 - (412) DIRECT ACCESS FORMATTED FILE
  WITH OPTION TO OPEN AS A SEQUENTIAL FILE
  ANS REF. - 12.5
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  26 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
    19     PASS  
    20     PASS  
    21     PASS  
    22     PASS  
    23     PASS  
    24     PASS  
    25     PASS  
    26     PASS  
 
 -------------------------------------------------------------------------------
 
                         26 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         26 OF  26 TESTS EXECUTED
 
 *FM912END*              END OF TEST - FM912

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       939       PASS
       940       PASS
       941       PASS
       942       PASS
       943       PASS
       944       PASS
       945       PASS
       946       PASS
       947       PASS
       948       PASS
       949       PASS
       950       PASS
       951       PASS
       952       PASS
       953       PASS
       954       PASS
       955       PASS
       956       PASS
       957       PASS
       958       PASS
       959       PASS
       960       PASS
       961       PASS
       962       PASS
       963       PASS
       964       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM099
 
                    0 ERRORS ENCOUNTERED
                   26 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
          FILE I08 CREATED WITH 31 SEQUENTIAL RECORDS
       125       PASS
       126       PASS
       127       PASS
       128       PASS
       129       PASS
       130       PASS
       131       PASS
       132       PASS
       133       PASS
       134       PASS
       135       PASS
       136       PASS
       137       PASS
       138       PASS
       139       PASS
       140       PASS
       141       PASS
       142       PASS
       143       PASS
       144       PASS
       145       PASS
       146       PASS
       147       PASS
       148       PASS
       149       PASS
       150       PASS
       151       PASS
       152       PASS
       153       PASS
       154       PASS
       155       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM108
 
                    0 ERRORS ENCOUNTERED
                   31 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       747       PASS
       748       PASS
       749       PASS
       750       PASS
       751       PASS
       752       PASS
       753       PASS
       754       PASS
       755       PASS
       756       PASS
       757       PASS
       758       PASS
       759       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM045
 
                    0 ERRORS ENCOUNTERED
                   13 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM361BEGIN*            TEST RESULTS - FM361

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

  XMAX - (165) INTRINSIC FUNCTIONS--  

             AMAX0, AMAX1, MAX0, MAX1  
             (CHOOSING LARGEST VALUE)

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  48 TESTS


        TEST OF AMAX0
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------

        TEST OF AMAX1
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
    19     PASS  
    20     PASS  
    21     PASS  
    22     PASS  
    23     PASS  
    24     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------

        TEST OF MAX0
    25     PASS  
    26     PASS  
    27     PASS  
    28     PASS  
    29     PASS  
    30     PASS  
    31     PASS  
    32     PASS  
    33     PASS  
    34     PASS  
    35     PASS  
    36     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------

        TEST OF MAX1
    37     PASS  
    38     PASS  
    39     PASS  
    40     PASS  
    41     PASS  
    42     PASS  
    43     PASS  
    44     PASS  
    45     PASS  
    46     PASS  
    47     PASS  
    48     PASS  
 
 -------------------------------------------------------------------------------
 
                         48 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         48 OF  48 TESTS EXECUTED
 
 *FM361END*              END OF TEST - FM361

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM908BEGIN*            TEST RESULTS - FM908

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 INTER3 - (392) INTERNAL FILES -- USING READ

 ANS. REF. - 12.2.5
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  54 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
    19     PASS  
    20     PASS  
    21     PASS  
    22     PASS  
    23     PASS  
    24     PASS  
    25     PASS  
    26     PASS  
    27     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
    28     PASS  
    29     PASS  
    30     PASS  
    31     PASS  
    32     PASS  
    33     PASS  
    34     PASS  
    35     PASS  
    36     PASS  
    37     PASS  
    38     PASS  
    39     PASS  
    40     PASS  
    41     PASS  
    42     PASS  
    43     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
    44     PASS  
    45     PASS  
    46     PASS  
    47     PASS  
    48     PASS  
    49     PASS  
    50     PASS  
    51     PASS  
    52     PASS  
    53     PASS  
    54     PASS  
 
 -------------------------------------------------------------------------------
 
                         54 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         54 OF  54 TESTS EXECUTED
 
 *FM908END*              END OF TEST - FM908

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM807BEGIN*            TEST RESULTS - FM807

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

 YDMIN1 - (168) INTRINSIC FUNCTION-- 

                 DMIN1  (CHOOSING SMALLEST VALUE) 

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  12 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
 
 -------------------------------------------------------------------------------
 
                         12 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         12 OF  12 TESTS EXECUTED
 
 *FM807END*              END OF TEST - FM807

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       666       PASS
       667       PASS
       668       PASS
       669       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM026
 
                    0 ERRORS ENCOUNTERED
                    4 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM826BEGIN*            TEST RESULTS - FM826

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  YDTANH - (200) INTRINSIC FUNCTIONS

  DTANH  (DOUBLE PRECISION HYPERBOLIC TANGENT)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   9 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
 
 -------------------------------------------------------------------------------
 
                          9 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          9 OF   9 TESTS EXECUTED
 
 *FM826END*              END OF TEST - FM826

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM407BEGIN*            TEST RESULTS - FM407

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 DIRAF1 - (410) DIRECT ACCESS UNFORMATTED FILE

 SUBSET REF. - 12.10.1
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   4 TESTS

                                                 EACH TEST READS 10 RECORDS AND 
                                                 EACH RECORD IS CHECKED, I.E.,  
                                                 THERE ARE 10 SUBTESTS MADE FOR 
                                                 EACH TEST                      
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
 
 -------------------------------------------------------------------------------
 
                          4 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          4 OF   4 TESTS EXECUTED
 
 *FM407END*              END OF TEST - FM407

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
          FILE I06 CREATED WITH 28 SEQUENTIAL RECORDS
        87       PASS
        88       PASS
        89       PASS
        90       PASS
        91       PASS
        92       PASS
        93       PASS
        94       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM104
 
                    0 ERRORS ENCOUNTERED
                    8 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
        80       PASS
        81       PASS
        82       PASS
        83       PASS
        84       PASS
        85       PASS
        86       PASS
        87       PASS
        88       PASS
        89       PASS
        90       PASS
        91       PASS
        92       PASS
        93       PASS
        94       PASS
        95       PASS
        96       PASS
        97       PASS
        98       PASS
        99       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM007
 
                    0 ERRORS ENCOUNTERED
                   20 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM376BEGIN*            TEST RESULTS - FM376

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  XATAN - (195) INTRINSIC FUNCTIONS

  ATAN, ATAN2   (ARCTANGENT)

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  13 TESTS


        TEST OF ATAN
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  

        TEST OF ATAN2
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
 
 -------------------------------------------------------------------------------
 
                         13 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         13 OF  13 TESTS EXECUTED
 
 *FM376END*              END OF TEST - FM376

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM357BEGIN*            TEST RESULTS - FM357

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

  XAMOD - (159) INTRINSIC FUNCTION-- 

                AMOD, MOD (REMAINDERING)

 SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  22 TESTS


        TEST OF AMOD
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  

        TEST OF MOD
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
    19     PASS  
    20     PASS  
    21     PASS  
    22     PASS  
 
 -------------------------------------------------------------------------------
 
                         22 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         22 OF  22 TESTS EXECUTED
 
 *FM357END*              END OF TEST - FM357

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       100       PASS
       101       PASS
       102       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM010
 
                    0 ERRORS ENCOUNTERED
                    3 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM258BEGIN*            TEST RESULTS - FM258

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    

  BLKIF1 - (300) BLOCK IF - SIMPLE TEST

  SUBSET REF.  11.6 - 11.9
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   8 TESTS


                                                 TESTS 1-3 (2 COMPUTED RESULTS)
                                                 TESTS 4-7 (3 COMPUTED RESULTS)
                                                 TEST  8   (4 COMPUTED RESULTS)
                                                 ALL ANSWERS SHOULD BE ZERO
     1    INSPECT
                                    0
                                    0
     2    INSPECT
                                    0
                                    0
     3    INSPECT
                                    0
                                    0
     4    INSPECT
                                    0
                                    0
                                    0
     5    INSPECT
                                    0
                                    0
                                    0
     6    INSPECT
                                    0
                                    0
                                    0
     7    INSPECT
                                    0
                                    0
                                    0
     8    INSPECT
                                    0
                                    0
                                    0
                                    0
 
 -------------------------------------------------------------------------------
 
                          0 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          8 TESTS REQUIRE INSPECTION
                          8 OF   8 TESTS EXECUTED
 
 *FM258END*              END OF TEST - FM258

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM831BEGIN*            TEST RESULTS - FM831

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 YGEN3 - (208) GENERIC FUNCTIONS --

  ABS, MOD, SIGN, SIN, COS, TAN, SINH, COSH, TANH

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  12 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
 
 -------------------------------------------------------------------------------
 
                         12 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         12 OF  12 TESTS EXECUTED
 
 *FM831END*              END OF TEST - FM831

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       300       PASS
       301       PASS
       302       PASS
       303       PASS
       304       PASS
       305       PASS
       306       PASS
       307       PASS
       308       PASS
       309       PASS
       310       PASS
       311       PASS
       312       PASS
       313       PASS
       314       PASS
       315       PASS
       316       PASS
       317       PASS
       318       PASS
       319       PASS
       320       PASS
       321       PASS
       322       PASS
       323       PASS
       324       PASS
       325       PASS
       326       PASS
       327       PASS
       328       PASS
       329       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM031
 
                    0 ERRORS ENCOUNTERED
                   30 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM810BEGIN*            TEST RESULTS - FM810

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

 YDMMX - (173) INTRINSIC FUNCTIONS--

                INTEGER, REAL AND D.P.
                AND MIXED MODE EXPRESSIONS

  ANS REF. - 15.3, 15.10, 6.1.4
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  10 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
 
 -------------------------------------------------------------------------------
 
                         10 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         10 OF  10 TESTS EXECUTED
 
 *FM810END*              END OF TEST - FM810

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      ----------------------------------------------
 
          TEST   156
     LAST LINE ON THIS PAGE
1     THIS IS FIRST LINE ON PAGE
 
          TEST   157
 
 THERE IS ONE BLANK LINE BEFORE THIS LINE
           
           
 THERE ARE TWO BLANK LINES BEFORE THIS LINE



 THERE ARE THREE BLANK LINES BEFORE THIS LINE
 
          TEST   158
 NEXT LINE CONTAINS 54 CHARACTERS
 123456789012345678901234567890123456789012345678901234
 
          TEST   159
           THIS TEST PRINTS 3 UNDER I1 DESCRIPTOR
           3
 
          TEST   160
           THIS TEST PRINTS 15 UNDER I2 DESCRIPTOR
           15
 
          TEST   161
           THIS TEST PRINTS 291 UNDER I3 DESCRIPTOR
           291
 
          TEST   162
           THIS TEST PRINTS 4321 UNDER I4 DESCRIPTOR
           4321
 
          TEST   163
           THIS TEST PRINTS 12345 UNDER I5 DESCRIPTOR
           12345
 
          TEST   164
   THIS TEST PRINTS 1, 22, 333, 4444, AND 25555 UNDER
          (10X,I1,3X,I2,3X,I3,3X,I4,3X,I5)
          1   22   333   4444   25555
 
          TEST   165
          NEXT TWO LINES ARE IDENTICAL
      IVON01 =  113   IVON02 =    8
      IVON01 =  113   IVON02 =    8
 
          TEST   166
           THIS TEST PRINTS -1 UNDER I2 DESCRIPTOR
           -1
 
          TEST   167
           THIS TEST PRINTS -22 UNDER I3 DESCRIPTOR
           -22
 
          TEST   168
           THIS TEST PRINTS -333 UNDER I4 DESCRIPTOR
           -333
 
          TEST   169
           THIS TEST PRINTS -4444 UNDER I5 DESCRIPTOR
           -4444
 
          TEST   170
           THIS TEST PRINTS -15555 UNDER DESCRIPTOR I6
           -15555
 
          TEST   171
        THIS TEST PRINTS -9, -88, -777, -6666, AND -25555
           UNDER FORMAT 10X,I2,3X,I3,3X,I4,3X,I5,3X,I6
          -9   -88   -777   -6666   -25555
 
          TEST   172
                  THIS TEST PRINTS 5, -54, 543, -5432, AND 32000
           UNDER I5 NUMERIC FIELD DESCRIPTOR
               5     -54     543   -5432   32000
 
          TEST   173
 
 THERE IS ONE BLANK LINE BEFORE THIS LINE
0
 THERE ARE TWO BLANK LINES BEFORE THIS LINE
 
0
 THERE ARE THREE BLANK LINES BEFORE THIS LINE
0
0
 THERE ARE FOUR  BLANK LINES BEFORE THIS LINE
 
          TEST   174
 
           1ST LINE - AABBCCDD
+                         WWXXYYZZ OVERPRINTS - 2ND LINE





 
 
           11    44     1ST         LINE
+            22    55       2ND
+              33    66         3RD
 
          TEST   175
           THIS TESTS PRINTS 3. UNDER F3.0 DESCRIPTOR
            3.
 
          TEST   176
           THIS TEST  PRINTS -15. WITH F4.0 DESCRIPTOR
           -15.
 
          TEST   177
           THIS TEST PRINTS -0.12345E+03 USING E12.5
           -0.12345E+03
 
      ----------------------------------------------
 
                     END OF PROGRAM FM109
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       907       PASS
       908       PASS
       909       PASS
       910       PASS
       911       PASS
       912       PASS
       913       PASS
       914       PASS
       915       PASS
       916       PASS
       917       PASS
       918       PASS
       919       PASS
       920       PASS
       921       PASS
       922       PASS
       923       PASS
       924       PASS
       925       PASS
       926       PASS
       927       PASS
       928       PASS
       929       PASS
       930       PASS
       931       PASS
       932       PASS
       933       PASS
       934       PASS
       935       PASS
       936       PASS
       937       PASS
       938       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM098
 
                    0 ERRORS ENCOUNTERED
                   32 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM360BEGIN*            TEST RESULTS - FM360

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

  XDIM - (163) INTRINSIC FUNCTIONS-- 

            DIM, IDIM (POSITIVE DIFFERENCE)

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  14 TESTS


        TEST OF DIM
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  

        TEST OF IDIM
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
 
 -------------------------------------------------------------------------------
 
                         14 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         14 OF  14 TESTS EXECUTED
 
 *FM360END*              END OF TEST - FM360

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       719       PASS
       720       PASS
       721       PASS
       722       PASS
       723       PASS
       724       PASS
       725       PASS
       726       PASS
       727       PASS
       728       PASS
       729       PASS
       730       PASS
       731       PASS
       732       PASS
       733       PASS
       734       PASS
       735       PASS
       736       PASS
       737       PASS
       738       PASS
       739       PASS
       740       PASS
       741       PASS
       742       PASS
       743       PASS
       744       PASS
       745       PASS
       746       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM044
 
                    0 ERRORS ENCOUNTERED
                   28 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM909BEGIN*            TEST RESULTS - FM909

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 INTER4 - (393) INTERNAL FILES --  USING WRITE

 ANS. REF. - 12.2.5
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  27 TESTS

                                                 NOTE 1: FOR NUMERIC VALUES,    
                                                    OPTIONAL LEADING ZERO MAY BE
                                                    BLANK FOR ABSOLUTE VALUE < 1
                                                 NOTE 2: LEADING PLUS SIGN IS   
                                                    OPTIONAL FOR NUMERIC VALUES 
                                                 NOTE 3: E FORMAT EXPONENT MAY  
                                                    BE E+NN OR +0NN FOR REALS   
                                                 NOTE 4: D FORMAT EXPONENT MAY  
                                                    BE D+NN, E+NN, OR +0NN FOR  
                                                    DOUBLE PRECISION VALUES     

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
    19     PASS  
    20     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
    21     PASS  
    22     PASS  
    23     PASS  
    24     PASS  
    25     PASS  
    26     PASS  
    27     PASS  
 
 -------------------------------------------------------------------------------
 
                         27 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         27 OF  27 TESTS EXECUTED
 
 *FM909END*              END OF TEST - FM909

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM905BEGIN*            TEST RESULTS - FM905

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 LSTDO1 - (371)  LIST DIRECTED OUTPUT FOR SUBSET DATA TYPES

 ANS REF. - 13.6  12.4
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  10 TESTS

                                                 THE CORRECT LINE OF EACH TEST  
                                                 IS HOLLERITH INFORMATION.      
                                                 COLUMN SPACING,  LINE BREAKS,  
                                                 AND THE NUMBER OF DECIMAL      
                                                 PLACES FOR REAL NUMBERS ARE    
                                                 PROCESSOR DEPENDENT.           
                                                 EITHER E OR F FORMAT MAY BE    
                                                 USED FOR REAL NUMBERS.         

     1    INSPECT
                 COMPUTED= 
            2
                 CORRECT=  
       2
     2    INSPECT
                 COMPUTED= 
            1            3            5            7            9
                 CORRECT=  
       1  3  5  7  9
     3    INSPECT
                 COMPUTED= 
    2.500000    
                 CORRECT=  
       2.5
     4    INSPECT
                 COMPUTED= 
   2.5000000E-11   0.2500000        250.0000       2.5000000E+09
                 CORRECT=  
        2.5E-11  0.25  250.0   2.5E+09
     5    INSPECT
                 COMPUTED= 
  T  F  T
                 CORRECT=  
       T  F  T
     6    INSPECT
                 COMPUTED= 
 ONE  TWO  THREEFOUR 
                 CORRECT=  
       ONE  TWO  THREEFOUR 
     7    INSPECT
                 COMPUTED= 
           -3    15.25000     HELLO  T
                 CORRECT=  
       -3  15.25  HELLO  T
     8    INSPECT
                 COMPUTED= 
 5 O'CLOCK
                 CORRECT=  
       5 O'CLOCK
     9    INSPECT
                 COMPUTED= 
 SHORTTHIS IS A LONGER CHARACTER STRING
 123456789012345678901234567890123456789012345678901234567890123456789012          
                 CORRECT=  
 SHORT  THIS IS A LONGER CHARACTER STRING 123456789012345678901234567890123456789
 012345678901234567890123456789012
    10    INSPECT
                 COMPUTED= 
            5            5            5            5            5
                 CORRECT=  
       5  5  5  5  5  OR  5*5
 
 -------------------------------------------------------------------------------
 
                          0 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                         10 TESTS REQUIRE INSPECTION
                         10 OF  10 TESTS EXECUTED
 
 *FM905END*              END OF TEST - FM905

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM806BEGIN*            TEST RESULTS - FM806

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

 YDMAX1 - (166) INTRINSIC FUNCTION-- 

                 DMAX1  (CHOOSING LARGEST VALUE)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  12 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
 
 -------------------------------------------------------------------------------
 
                         12 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         12 OF  12 TESTS EXECUTED
 
 *FM806END*              END OF TEST - FM806

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
        50       PASS
        51       PASS
        52       PASS
        53       PASS
        54       PASS
        55       PASS
        56       PASS
        57       PASS
        58       PASS
        59       PASS
        60       PASS
        61       PASS
        62       PASS
        63       PASS
        64       PASS
        65       PASS
        66       PASS
        67       PASS
        68       PASS
        69       PASS
        70       PASS
        71       PASS
        72       PASS
        73       PASS
        74       PASS
        75       PASS
        76       PASS
        77       PASS
        78       PASS
        79       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM006
 
                    0 ERRORS ENCOUNTERED
                   30 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
          FILE I08 CREATED WITH 28 SEQUENTIAL RECORDS
        95       PASS
        96       PASS
        97       PASS
        98       PASS
        99       PASS
       100       PASS
       101       PASS
       102       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM105
 
                    0 ERRORS ENCOUNTERED
                    8 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM406BEGIN*            TEST RESULTS - FM406

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 INTER2 - (391) INTERNAL FILES -- USING WRITE

 SUBSET REF. - 12.2.5
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  12 TESTS

                                                 NOTE 1: OPTIONAL LEADING ZERO  
                                                    MAY BE BLANK FOR ABSOLUTE   
                                                    VALUE < 1                   
                                                 NOTE 2: LEADING PLUS SIGN IS   
                                                    OPTIONAL                    
                                                 NOTE 3: E EXPONENT MAY BE E+   
                                                    OR +0 BEFORE VALUE          
     1     PASS  
     2     PASS  
     3     FAIL                                  COMPUTED VALUE NOT CONSISTENT  
                                                 WITH PERMISSIBLE OPTIONS ABOVE 
                 COMPUTED=            -0.0      
                 CORRECT=   0.0                 
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
 
 -------------------------------------------------------------------------------
 
                         11 TESTS PASSED
                          1 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         12 OF  12 TESTS EXECUTED
 
 *FM406END*              END OF TEST - FM406

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM827BEGIN*            TEST RESULTS - FM827

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  YDFOR - (202) INTRINSIC FUNCTIONS

  DOUBLE PRECISION TRIGONOMETRIC FORMULAE

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  10 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
 
 -------------------------------------------------------------------------------
 
                         10 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         10 OF  10 TESTS EXECUTED
 
 *FM827END*              END OF TEST - FM827

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM354BEGIN*            TEST RESULTS - FM354

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

  XREAL - (152) INTRINSIC FUNCTIONS--

                 FLOAT, REAL (TYPE CONVERSION)

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  14 TESTS


        TEST OF FLOAT
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  

        TEST OF REAL
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
 
 -------------------------------------------------------------------------------
 
                         14 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         14 OF  14 TESTS EXECUTED
 
 *FM354END*              END OF TEST - FM354

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM375BEGIN*            TEST RESULTS - FM375

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  XASIN - (193) INTRINSIC FUNCTIONS

  ASIN, ACOS  (ARCSIN, ARCCOSINE) 

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  12 TESTS

0        TEST OF ASIN
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
0        TEST OF ACOS
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
 
 -------------------------------------------------------------------------------
 
                         12 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         12 OF  12 TESTS EXECUTED
 
 *FM375END*              END OF TEST - FM375

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM813BEGIN*            TEST RESULTS - FM813

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  YCSQRT - (177) INTRINSIC FUNCTIONS

  CSQRT (COMPLEX SQUARE ROOT)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  13 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
 
 -------------------------------------------------------------------------------
 
                         13 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         13 OF  13 TESTS EXECUTED
 
 *FM813END*              END OF TEST - FM813

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM910BEGIN*            TEST RESULTS - FM910

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 DIRAF2 - (411) DIRECT ACCESS UNFORMATTED FILE

 WITH OPTION TO OPEN AS A SEQUENTIAL FILE

 ANS REF. - 12.5
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   6 TESTS

                                                 TESTS 2 THRU 6 ARE EXPECTED TO 
                                                 EXECUTE                        
                                                 TEST 1 IS OPTIONAL AND IS NOT  
                                                 EXECUTED IF DIRECT ACCESS      
                                                 FILE CANNOT BE REOPENED AS     
                                                 A SEQUENTIAL FILE              
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
 
 -------------------------------------------------------------------------------
 
                          5 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          5 OF   6 TESTS EXECUTED
 
 *FM910END*              END OF TEST - FM910

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       330       PASS
       331       PASS
       332       PASS
       333       PASS
       334       PASS
       335       PASS
       336       PASS
       337       PASS
       338       PASS
       339       PASS
       340       PASS
       341       PASS
       342       PASS
       343       PASS
       344       PASS
       345       PASS
       346       PASS
       347       PASS
       348       PASS
       349       PASS
       350       PASS
       351       PASS
       352       PASS
       353       PASS
       354       PASS
       355       PASS
       356       PASS
       357       PASS
       358       PASS
       359       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM032
 
                    0 ERRORS ENCOUNTERED
                   30 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM379BEGIN*            TEST RESULTS - FM379

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  XRFOR - (201) INTRINSIC FUNCTIONS

  TRIGONOMETRIC FORMULAE

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  10 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
 
 -------------------------------------------------------------------------------
 
                         10 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         10 OF  10 TESTS EXECUTED
 
 *FM379END*              END OF TEST - FM379

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM832BEGIN*            TEST RESULTS - FM832

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 YGEN5 - (210) GENERIC FUNCTIONS --

  SQRT,EXP,LOG,LOG10,COS,SINH,TANH,ASIN,ATAN,ATAN2

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  20 TESTS


        TEST WITH REAL ARGUMENTS
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------

        TEST WITH DOUBLE PRECISION ARGUMENTS
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
    19     PASS  
    20     PASS  
 
 -------------------------------------------------------------------------------
 
                         20 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         20 OF  20 TESTS EXECUTED
 
 *FM832END*              END OF TEST - FM832

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       126       PASS
       127       PASS
       128       PASS
       129       PASS
       130       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM013
 
                    0 ERRORS ENCOUNTERED
                    5 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       670       PASS
       671       PASS
       672       PASS
       673       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM028
 
                    0 ERRORS ENCOUNTERED
                    4 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM363BEGIN*            TEST RESULTS - FM363

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

  X66MX - (171) SUBSET INTRINSIC FUNCTIONS--

          IN ARITHMETIC EXPRESSIONS

   SUBSET REF. - 15.10, 6.1.4
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  14 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
 
 -------------------------------------------------------------------------------
 
                         14 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         14 OF  14 TESTS EXECUTED
 
 *FM363END*              END OF TEST - FM363

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM260BEGIN*            TEST RESULTS - FM260

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
  BLKIF3 - (302) BLOCK IF

  WITH OTHER CONTROL CONSTRUCTS (II)

  SUBSET REF.  11.1 - 11.3, 11.6 - 11.10
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   2 TESTS


                                                 TEST 1 (11 COMPUTED RESULTS)
                                                 TEST 2 (8 COMPUTED RESULTS)
                                                 ALL ANSWERS SHOULD BE ZERO
     1    INSPECT
                                    0
                                    0
                                    0
                                    0
                                    0
                                    0
                                    0
                                    0
                                    0
                                    0
                                    0
     2    INSPECT
                                    0
                                    0
                                    0
                                    0
                                    0
                                    0
                                    0
                                    0
 
 -------------------------------------------------------------------------------
 
                          0 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          2 TESTS REQUIRE INSPECTION
                          2 OF   2 TESTS EXECUTED
 
 *FM260END*              END OF TEST - FM260

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM809BEGIN*            TEST RESULTS - FM809

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

 YCONJG - (170) INTRINSIC FUNCTION--

                 CMPLX (CONVERT TO COMPLEX),
                 AIMAG (IMAG. PART),
                 CONJG (CONJUGATE)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  25 TESTS


        TEST OF CMPLX
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------

        TEST OF AIMAG
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------

        TEST OF CONJG
    19     PASS  
    20     PASS  
    21     PASS  
    22     PASS  
    23     PASS  
    24     PASS  
    25     PASS  
 
 -------------------------------------------------------------------------------
 
                         25 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         25 OF  25 TESTS EXECUTED
 
 *FM809END*              END OF TEST - FM809

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       235       PASS
       236       PASS
       237       PASS
       238       PASS
       239       PASS
       240       PASS
       241       PASS
       242       PASS
       243       PASS
       244       PASS
       245       PASS
       246       PASS
       247       PASS
       248       PASS
       249       PASS
       250       PASS
       251       PASS
       252       PASS
       253       PASS
       254       PASS
       255       PASS
       256       PASS
       257       PASS
       258       PASS
       259       PASS
       260       PASS
       261       PASS
       262       PASS
       263       PASS
       264       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM009
 
                    0 ERRORS ENCOUNTERED
                   30 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM828BEGIN*            TEST RESULTS - FM828

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  YCFOR - (203) INTRINSIC FUNCTIONS

  COMPLEX TRIGONOMETRIC FORMULAE

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   9 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
 
 -------------------------------------------------------------------------------
 
                          9 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          9 OF   9 TESTS EXECUTED
 
 *FM828END*              END OF TEST - FM828

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM405BEGIN*            TEST RESULTS - FM405

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    

   INTER1 - (390) INTERNAL FILES -- USING READ

 SUBSET REF. - 12.2.5
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  15 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
 
 -------------------------------------------------------------------------------
 
                         15 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         15 OF  15 TESTS EXECUTED
 
 *FM405END*              END OF TEST - FM405

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
          FILE I09 CREATED WITH 124 SEQUENTIAL RECORDS
       103       PASS
       104       PASS
       105       PASS
       106       PASS
       107       PASS
       108       PASS
       109       PASS
       110       PASS
       111       PASS
       112       PASS
       113       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM106
 
                    0 ERRORS ENCOUNTERED
                   11 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM824BEGIN*            TEST RESULTS - FM824

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  YDATAN - (196) INTRINSIC FUNCTIONS

  DATAN, DATAN2 (DOUBLE PRECISION ARCTANGENT)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  13 TESTS


        TEST OF DATAN
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  

        TEST OF DATAN2
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
 
 -------------------------------------------------------------------------------
 
                         13 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         13 OF  13 TESTS EXECUTED
 
 *FM824END*              END OF TEST - FM824

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       875       PASS
       876       PASS
       877       PASS
       878       PASS
       879       PASS
       880       PASS
       881       PASS
       882       PASS
       883       PASS
       884       PASS
       885       PASS
       886       PASS
       887       PASS
       888       PASS
       889       PASS
       890       PASS
       891       PASS
       892       PASS
       893       PASS
       894       PASS
       895       PASS
       896       PASS
       897       PASS
       898       PASS
       899       PASS
       900       PASS
       901       PASS
       902       PASS
       903       PASS
       904       PASS
       905       PASS
       906       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM097
 
                    0 ERRORS ENCOUNTERED
                   32 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM506BEGIN*            TEST RESULTS - FM506

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 BLKD3 - (262) BLOCK DATA SUBPROGRAM --

  VARYING CHARACTER VARIABLE LENGTHS

  ANS REF. - 16
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   4 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
 
 -------------------------------------------------------------------------------
 
                          4 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          4 OF   4 TESTS EXECUTED
 
 *FM506END*              END OF TEST - FM506

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      ----------------------------------------------
 
          TEST 33
     LAST LINE ON THIS PAGE
1     THIS IS FIRST LINE ON PAGE
 
          TEST 34
 
 THERE IS ONE BLANK LINE BEFORE THIS LINE
           
           
 THERE ARE TWO BLANK LINES BEFORE THIS LINE



 THERE ARE THREE BLANK LINES BEFORE THIS LINE
 
          TEST 35
 NEXT LINE CONTAINS 54 CHARACTERS
 123456789012345678901234567890123456789012345678901234
1
 
          TEST 36
           THIS TEST PRINTS 3 UNDER I1 DESCRIPTOR
           3
 
          TEST 37
           THIS TEST PRINTS 15 UNDER I2 DESCRIPTOR
           15
 
          TEST 38
           THIS TEST PRINTS 291 UNDER I3 DESCRIPTOR
           291
 
          TEST 39
           THIS TEST PRINTS 4321 UNDER I4 DESCRIPTOR
           4321
 
          TEST 40
           THIS TEST PRINTS 12345 UNDER I5 DESCRIPTOR
           12345
 
          TEST 41
   THIS TEST PRINTS 1, 22, 333, 4444, AND 25555 UNDER
          (10X,I1,3X,I2,3X,I3,3X,I4,3X,I5)
          1   22   333   4444   25555
 
          TEST 42
          NEXT TWO LINES ARE IDENTICAL
      IVON01 =  113   IVON02 =    8
      IVON01 =  113   IVON02 =    8
1
 
          TEST 43
           THIS TEST PRINTS -1 UNDER I2 DESCRIPTOR
           -1
 
          TEST 44
           THIS TEST PRINTS -22 UNDER I3 DESCRIPTOR
           -22
 
          TEST 45
           THIS TEST PRINTS -333 UNDER I4 DESCRIPTOR
           -333
 
          TEST 46
           THIS TEST PRINTS -4444 UNDER I5 DESCRIPTOR
           -4444
 
          TEST 47
           THIS TEST PRINTS -15555 UNDER DESCRIPTOR I6
           -15555
 
          TEST 48
        THIS TEST PRINTS -9, -88, -777, -6666, AND -25555
           UNDER FORMAT 10X,I2,3X,I3,3X,I4,3X,I5,3X,I6
          -9   -88   -777   -6666   -25555
 
          TEST 49
                  THIS TEST PRINTS 5, -54, 543, -5432, AND 32000
           UNDER I5 NUMERIC FIELD DESCRIPTOR
               5     -54     543   -5432   32000
 
      ----------------------------------------------
 
                     END OF PROGRAM FM005
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM805BEGIN*            TEST RESULTS - FM805

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

 YDDIM - (164) INTRINSIC FUNCTIONS-- 

                DDIM (POSITIVE DIFFERENCE)
                DPROD (D.P. PRODUCT)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  18 TESTS


        TEST OF DDIM
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  


        TEST OF DPROD
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
 
 -------------------------------------------------------------------------------
 
                         18 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         18 OF  18 TESTS EXECUTED
 
 *FM805END*              END OF TEST - FM805

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       645       PASS
       646       PASS
       647       PASS
       648       PASS
       649       PASS
       650       PASS
       651       PASS
       652       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM024
 
                    0 ERRORS ENCOUNTERED
                    8 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM355BEGIN*            TEST RESULTS - FM355

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

  XAINT - (154) INTRINSIC FUNCTIONS--

          AINT, ANINT, NINT (TYPE CONVERSION) 

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  48 TESTS


        TEST OF AINT
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------

        TEST OF ANINT
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
    19     PASS  
    20     PASS  
    21     PASS  
    22     PASS  
    23     PASS  
    24     PASS  
    25     PASS  
    26     PASS  
    27     PASS  
    28     PASS  
    29     PASS  
    30     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------

        TEST OF NINT
    31     PASS  
    32     PASS  
    33     PASS  
    34     PASS  
    35     PASS  
    36     PASS  
    37     PASS  
    38     PASS  
    39     PASS  
    40     PASS  
    41     PASS  
    42     PASS  
    43     PASS  
    44     PASS  
    45     PASS  
    46     PASS  
    47     PASS  
    48     PASS  
 
 -------------------------------------------------------------------------------
 
                         48 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         48 OF  48 TESTS EXECUTED
 
 *FM355END*              END OF TEST - FM355

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM374BEGIN*            TEST RESULTS - FM374

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  XTAN - (191) INTRINSIC FUNCTIONS

  TAN   (TANGENT)

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  12 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
 
 -------------------------------------------------------------------------------
 
                         12 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         12 OF  12 TESTS EXECUTED
 
 *FM374END*              END OF TEST - FM374

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       400       PASS
       401       PASS
       402       PASS
       403       PASS
       404       PASS
       405       PASS
       406       PASS
       407       PASS
       408       PASS
       409       PASS
       410       PASS
       411       PASS
       412       PASS
       413       PASS
       414       PASS
       415       PASS
       416       PASS
       417       PASS
       418       PASS
       419       PASS
       420       PASS
       421       PASS
       422       PASS
       423       PASS
       424       PASS
       425       PASS
       426       PASS
       427       PASS
       428       PASS
       429       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM050
 
                    0 ERRORS ENCOUNTERED
                   30 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       360       PASS
       361       PASS
       362       PASS
       363       PASS
       364       PASS
       365       PASS
       366       PASS
       367       PASS
       368       PASS
       369       PASS
       370       PASS
       371       PASS
       372       PASS
       373       PASS
       374       PASS
       375       PASS
       376       PASS
       377       PASS
       378       PASS
       379       PASS
       380       PASS
       381       PASS
       382       PASS
       383       PASS
       384       PASS
       385       PASS
       386       PASS
       387       PASS
       388       PASS
       389       PASS
       390       PASS
       391       PASS
       392       PASS
       393       PASS
       394       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM033
 
                    0 ERRORS ENCOUNTERED
                   35 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM378BEGIN*            TEST RESULTS - FM378

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  XTANH - (199) INTRINSIC FUNCTIONS

  TANH  (HYPERBOLIC TANGENT)

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   9 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
 
 -------------------------------------------------------------------------------
 
                          9 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          9 OF   9 TESTS EXECUTED
 
 *FM378END*              END OF TEST - FM378

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM812BEGIN*            TEST RESULTS - FM812

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  YDSQRT - (176) INTRINSIC FUNCTIONS

  DSQRT (DOUBLE PRECISION SQUARE ROOT)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  13 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
 
 -------------------------------------------------------------------------------
 
                         13 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         13 OF  13 TESTS EXECUTED
 
 *FM812END*              END OF TEST - FM812

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM359BEGIN*            TEST RESULTS - FM359

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

  XSIGN - (161) INTRINSIC FUNCTIONS-- 

            SIGN, ISIGN (TRANSFER OF SIGN)

  SUBSET REF. - 15.3 
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  22 TESTS


        TEST OF SIGN
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  

        TEST OF ISIGN
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
    19     PASS  
    20     PASS  
    21     PASS  
    22     PASS  
 
 -------------------------------------------------------------------------------
 
                         22 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         22 OF  22 TESTS EXECUTED
 
 *FM359END*              END OF TEST - FM359

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       674       PASS
       675       PASS
       676       PASS
       677       PASS
       678       PASS
       679       PASS
       680       PASS
       681       PASS
       682       PASS
       683       PASS
       684       PASS
       685       PASS
       686       PASS
       687       PASS
       688       PASS
       689       PASS
       690       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM080
 
                    0 ERRORS ENCOUNTERED
                   17 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       110       PASS
       111       PASS
       112       PASS
       113       PASS
       114       PASS
       115       PASS
       116       PASS
       117       PASS
       118       PASS
       119       PASS
       120       PASS
       121       PASS
       122       PASS
       124       PASS
       125       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM012
 
                    0 ERRORS ENCOUNTERED
                   15 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM833BEGIN*            TEST RESULTS - FM833

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 YGEN6 - (211) GENERIC FUNCTIONS --

  SPECIFIC AND GENERIC NAME OF SAME FUNCTION IN A STATEMENT

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  11 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
 
 -------------------------------------------------------------------------------
 
                         11 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         11 OF  11 TESTS EXECUTED
 
 *FM833END*              END OF TEST - FM833

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM261BEGIN*            TEST RESULTS - FM261

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 BLKIF4 - (303) BLOCK IF

  BLOCK IF WITH SUBPROGRAM CALL

  SUBSET REF. 11.6 - 11.9, 15.6
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   2 TESTS


                                                 TEST 1 (1 COMPUTED RESULT)
                                                 TEST 2 (2 COMPUTED RESULTS)
                                                 ALL ANSWERS SHOULD BE ZERO
     1    INSPECT
                                    0
     2    INSPECT
                                    0
                                    0
 
 -------------------------------------------------------------------------------
 
                          0 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          2 TESTS REQUIRE INSPECTION
                          2 OF   2 TESTS EXECUTED
 
 *FM261END*              END OF TEST - FM261

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM808BEGIN*            TEST RESULTS - FM808

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

 YDBLE - (169) INTRINSIC FUNCTION--

                DBLE (TYPE CONVERSION)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   8 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
 
 -------------------------------------------------------------------------------
 
                          8 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          8 OF   8 TESTS EXECUTED
 
 *FM808END*              END OF TEST - FM808

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM362BEGIN*            TEST RESULTS - FM362

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

  XMIN - (167) INTRINSIC FUNCTIONS--  

             AMIN0, AMIN1, MIN0, MIN1
             (CHOOSING SMALLEST VALUE)

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  47 TESTS


        TEST OF AMIN0
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------

        TEST OF AMIN1
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
    19     PASS  
    20     PASS  
    21     PASS  
    22     PASS  
    23     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------

        TEST OF MIN0
    24     PASS  
    25     PASS  
    26     PASS  
    27     PASS  
    28     PASS  
    29     PASS  
    30     PASS  
    31     PASS  
    32     PASS  
    33     PASS  
    34     PASS  
    35     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------

        TEST OF MIN1
    36     PASS  
    37     PASS  
    38     PASS  
    39     PASS  
    40     PASS  
    41     PASS  
    42     PASS  
    43     PASS  
    44     PASS  
    45     PASS  
    46     PASS  
    47     PASS  
 
 -------------------------------------------------------------------------------
 
                         47 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         47 OF  47 TESTS EXECUTED
 
 *FM362END*              END OF TEST - FM362

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM829BEGIN*            TEST RESULTS - FM829

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 YGEN1 - (206) GENERIC FUNCTIONS --

  INT, REAL, DBLE, CMPLX

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  35 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
    19     PASS  
    20     PASS  
    21     PASS  
    22     PASS  
    23     PASS  
    24     PASS  
    25     PASS  
    26     PASS  
    27     PASS  
    28     PASS  
    29     PASS  
    30     PASS  
    31     PASS  
    32     PASS  
    33     PASS  
    34     PASS  
    35     PASS  
 
 -------------------------------------------------------------------------------
 
                         35 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         35 OF  35 TESTS EXECUTED
 
 *FM829END*              END OF TEST - FM829

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       200       PASS
       201       PASS
       202       PASS
       203       PASS
       204       PASS
       205       PASS
       206       PASS
       207       PASS
       208       PASS
       209       PASS
       210       PASS
       211       PASS
       212       PASS
       213       PASS
       214       PASS
       215       PASS
       216       PASS
       217       PASS
       218       PASS
       219       PASS
       220       PASS
       221       PASS
       222       PASS
       223       PASS
       224       PASS
       225       PASS
       226       PASS
       227       PASS
       228       PASS
       229       PASS
       230       PASS
       231       PASS
       232       PASS
       233       PASS
       234       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM008
 
                    0 ERRORS ENCOUNTERED
                   35 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
        21       PASS
        22       PASS
        23       PASS
        24       PASS
        25       PASS
        26       PASS
        27       PASS
        28       PASS
        29       PASS
        30       PASS
        31       PASS
        32       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM004
 
                    0 ERRORS ENCOUNTERED
                   12 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM825BEGIN*            TEST RESULTS - FM825

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  YDSINH - (198) INTRINSIC FUNCTIONS

  DSINH, DCOSH (DOUBLE PRECISION HYPERBOLIC SINE, COSINE)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  16 TESTS


        TEST OF DSINH
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------

        TEST OF DCOSH
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
 
 -------------------------------------------------------------------------------
 
                         16 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         16 OF  16 TESTS EXECUTED
 
 *FM825END*              END OF TEST - FM825

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
          FILE I06 CREATED WITH 137 SEQUENTIAL RECORDS
       114       PASS
       115       PASS
       116       PASS
       117       PASS
       118       PASS
       119       PASS
       120       PASS
       121       PASS
       122       PASS
       123       PASS
       124       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM107
 
                    0 ERRORS ENCOUNTERED
                   11 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM907BEGIN*            TEST RESULTS - FM907

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 LSTDO2 - (373)  LIST DIRECTED OUTPUT FOR D.P. AND COMPLEX DATA TYPES

 ANS REF. - 13.6  12.4
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   8 TESTS

                                                 THE CORRECT LINE OF EACH TEST  
                                                 IS HOLLERITH INFORMATION.      
                                                 COLUMN SPACING,  LINE BREAKS,  
                                                 AND THE NUMBER OF DECIMAL      
                                                 PLACES FOR DOUBLE PRECISION    
                                                 OR COMPLEX NUMBERS ARE         
                                                 PROCESSOR DEPENDENT.           
                                                 EITHER E OR F FORMAT MAY BE    
                                                 USED FOR DOUBLE PRECISION OR   
                                                 COMPLEX NUMBERS.               

     1    INSPECT
                 COMPUTED= 
    2.500000000000000     
                 CORRECT=  
       2.5
     2    INSPECT
                 COMPUTED= 
 (3.000000,4.000000)
                 CORRECT=  
        (3.0,4.0)
     3    INSPECT
                 COMPUTED= 
    2.500000000000000        2.5000000000000002E-010    25000000000.00000     
                 CORRECT=  
       2.5  2.5D-10  2.5D+10
     4    INSPECT
                 COMPUTED= 
 (0.000000,1.000000)  (8.000000,10.00000)  (-5.000000,0.000000)  
 (0.000000,0.000000)
                 CORRECT=  
        (0.0,1.0)   (8.0,10.0)   (-5.0,0.0)   (0.0,0.0)
     5    INSPECT
                 COMPUTED= 
 (3.000000,4.000000)    5.000000000000000        -5.000000000000000       
 (-3.000000,-4.000000)
                 CORRECT=  
        (3.0,4.0)  5.0  -5.0   (-3.0,-4.0)
     6    INSPECT
                 COMPUTED= 
 (6.000000,9.000000)
                 CORRECT=  
        (6.0,9.0)
     7    INSPECT
                 COMPUTED= 
    3.250000    
                 CORRECT=  
       3.25
     8    INSPECT
                 COMPUTED= 
 (2.000000,-3.000000)  T    15.62500     GOODBYE FOR NOW
                 CORRECT=  
        (2.0,-3.0)  T  15.625  GOODBYE  FOR NOW
 
 -------------------------------------------------------------------------------
 
                          0 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          8 TESTS REQUIRE INSPECTION
                          8 OF   8 TESTS EXECUTED
 
 *FM907END*              END OF TEST - FM907

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       653       PASS
       654       PASS
       655       PASS
       656       PASS
       657       PASS
       658       PASS
       659       PASS
       660       PASS
       661       PASS
       662       PASS
       665       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM025
 
                    0 ERRORS ENCOUNTERED
                   11 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM804BEGIN*            TEST RESULTS - FM804

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

 YDMOD - (160) INTRINSIC FUNCTION--

                DMOD (REMAINDERING)

  ANS REF. - 15.3  
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  11 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
 
 -------------------------------------------------------------------------------
 
                         11 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         11 OF  11 TESTS EXECUTED
 
 *FM804END*              END OF TEST - FM804

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM834BEGIN*            TEST RESULTS - FM834

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 YGEN7 - (212) GENERIC FUNCTIONS --

  AS ARGUMENTS TO OTHER FUNCTIONS

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   7 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
 
 -------------------------------------------------------------------------------
 
                          7 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          7 OF   7 TESTS EXECUTED
 
 *FM834END*              END OF TEST - FM834

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM916BEGIN*            TEST RESULTS - FM916

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 INQU3 - (432) INQUIRE BY UNIT

 DIRECT ACCESS FORMATTED FILE

 ANS REF. - 12.10.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   1 TESTS

     1     PASS  
 
 -------------------------------------------------------------------------------
 
                          1 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          1 OF   1 TESTS EXECUTED
 
 *FM916END*              END OF TEST - FM916

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       395       PASS
       396       PASS
       397       PASS
       398       PASS
       399       PASS
       400       PASS
       401       PASS
       402       PASS
       403       PASS
       404       PASS
       405       PASS
       406       PASS
       407       PASS
       408       PASS
       409       PASS
       410       PASS
       411       PASS
       412       PASS
       413       PASS
       414       PASS
       415       PASS
       416       PASS
       417       PASS
       418       PASS
       419       PASS
       420       PASS
       421       PASS
       422       PASS
       423       PASS
       424       PASS
       425       PASS
       426       PASS
       427       PASS
       428       PASS
       429       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM034
 
                    0 ERRORS ENCOUNTERED
                   35 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM815BEGIN*            TEST RESULTS - FM815

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  YCEXP - (180) INTRINSIC FUNCTIONS

  CEXP (COMPLEX EXPONENTIAL)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   9 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
 
 -------------------------------------------------------------------------------
 
                          9 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          9 OF   9 TESTS EXECUTED
 
 *FM815END*              END OF TEST - FM815

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM819BEGIN*            TEST RESULTS - FM819

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 YDSIN - (187) INTRINSIC FUNCTIONS

  DSIN - (DOUBLE PRECISION SINE)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  19 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
    19     PASS  
 
 -------------------------------------------------------------------------------
 
                         19 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         19 OF  19 TESTS EXECUTED
 
 *FM819END*              END OF TEST - FM819

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       520       PASS
       521       PASS
       522       PASS
       523       PASS
       524       PASS
       525       PASS
       526       PASS
       527       PASS
       528       PASS
       529       PASS
       530       PASS
       531       PASS
       532       PASS
       533       PASS
       534       PASS
       535       PASS
       536       PASS
       537       PASS
       538       PASS
       539       PASS
       540       PASS
       541       PASS
       542       PASS
       543       PASS
       544       PASS
       545       PASS
       546       PASS
       547       PASS
       548       PASS
       549       PASS
       550       PASS
       551       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM038
 
                    0 ERRORS ENCOUNTERED
                   32 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM373BEGIN*            TEST RESULTS - FM373

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 XCOS - (189) INTRINSIC FUNCTIONS

  COS (COSINE)

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  18 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
 
 -------------------------------------------------------------------------------
 
                         18 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         18 OF  18 TESTS EXECUTED
 
 *FM373END*              END OF TEST - FM373

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       530       PASS
       531       PASS
       532       PASS
       533       PASS
       534       PASS
       535       PASS
       536       PASS
       537       PASS
       538       PASS
       539       PASS
       540       PASS
       541       PASS
       542       PASS
       543       PASS
       544       PASS
       545       PASS
       546       PASS
       547       PASS
       548       PASS
       549       PASS
       550       PASS
       551       PASS
       552       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM019
 
                    0 ERRORS ENCOUNTERED
                   23 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       604       PASS
       605       PASS
       606       PASS
       607       PASS
       608       PASS
       609       PASS
       610       PASS
       611       PASS
       612       PASS
       613       PASS
       614       PASS
       615       PASS
       616       PASS
       617       PASS
       618       PASS
       619       PASS
       620       PASS
       621       PASS
       622       PASS
       623       PASS
       624       PASS
       625       PASS
       626       PASS
       627       PASS
       628       PASS
       629       PASS
       630       PASS
       631       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM022
 
                    0 ERRORS ENCOUNTERED
                   28 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM369BEGIN*            TEST RESULTS - FM369

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  XEXP - (178) INTRINSIC FUNCTIONS

  EXP (EXPONENTIAL)

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  19 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
    19     PASS  
 
 -------------------------------------------------------------------------------
 
                         19 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         19 OF  19 TESTS EXECUTED
 
 *FM369END*              END OF TEST - FM369

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM803BEGIN*            TEST RESULTS - FM803

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

 YCABS - (158) INTRINSIC FUNCTION--

                CABS (ABSOLUTE VALUE)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   9 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
 
 -------------------------------------------------------------------------------
 
                          9 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          9 OF   9 TESTS EXECUTED
 
 *FM803END*              END OF TEST - FM803

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
        13       PASS
        14       PASS
        15       PASS
        16       PASS
        17       PASS
        18       PASS
        19       PASS
        20       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM003
 
                    0 ERRORS ENCOUNTERED
                    8 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM500BEGIN*            TEST RESULTS - FM500

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    

 BLKD1 - (260) BLOCK DATA SUBPROGRAMS --
  IMPLICIT, PARAMETER, EXTERNAL, SAVE

  ANS REF. - 16
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  37 TESTS


                                                 ALL VISUAL ANSWERS SHOULD BE
                                                 ZERO FOR TEST SEGMENT TO BE
                                                 SUCCESSFUL
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6    INSPECT
                               0
                               0
     7     PASS  
     8     PASS  
     9     PASS  
 
    11    INSPECT
                              0.00
                              0.00
    12    INSPECT
                              0.00
                              0.00
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18    INSPECT
                           (   0.00,    0.00)    SHOULD BE ZERO
    19    INSPECT
                           (   0.00,    0.00)    SHOULD BE ZERO
    20    INSPECT
                           (   0.00,    0.00)    SHOULD BE ZERO
    21    INSPECT
                           (   0.00,    0.00)    SHOULD BE ZERO
    22    INSPECT
                           (   0.00,    0.00)    SHOULD BE ZERO
    23    INSPECT
                           (   0.00,    0.00)    SHOULD BE ZERO
    24     PASS  
    25     PASS  
    26     PASS  
    27     PASS  
    28     PASS  
    29     PASS  
    30     PASS  
    31     PASS  
    32     PASS  
    33     PASS  
    34     PASS  
    35     PASS  
    36     PASS  
    37     PASS  
 
 -------------------------------------------------------------------------------
 
                         28 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          9 TESTS REQUIRE INSPECTION
                         37 OF  37 TESTS EXECUTED
 
 *FM500END*              END OF TEST - FM500

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM921BEGIN*            TEST RESULTS - FM921

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 INQF4 - (441) INQUIRE BY FILE

 DIRECT ACCESS UNFORMATTED FILE

 ANS REF. - 12.10.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   3 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
 
 -------------------------------------------------------------------------------
 
                          3 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          3 OF   3 TESTS EXECUTED
 
 *FM921END*              END OF TEST - FM921

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
          FILE I06 CREATED WITH 31 SEQUENTIAL RECORDS
         1       PASS
         2       PASS
         3       PASS
         4       PASS
         5       PASS
         6       PASS
         7       PASS
         8       PASS
         9       PASS
        10       PASS
        11       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM100
 
                    0 ERRORS ENCOUNTERED
                   11 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM822BEGIN*            TEST RESULTS - FM822

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  YDTAN - (192) INTRINSIC FUNCTIONS

  DTAN  (DOUBLE PRECISION TANGENT)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  14 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
 
 -------------------------------------------------------------------------------
 
                         14 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         14 OF  14 TESTS EXECUTED
 
 *FM822END*              END OF TEST - FM822

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
         1       PASS
         2       PASS
         3       PASS
         4       PASS
         5       PASS
         6       PASS
         7       PASS
         8       PASS
         9       PASS
        10       PASS
        11       PASS
        12       PASS
        13       PASS
        14       PASS
        15       PASS
        16       PASS
        17       PASS
        18       PASS
        19       PASS
        20       PASS
        21       PASS
        22       PASS
        23       PASS
        24       PASS
        25       PASS
        26       PASS
        27       PASS
        28       PASS
        29       PASS
        30       PASS
        31       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM060
 
                    0 ERRORS ENCOUNTERED
                   31 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       615       PASS
       616       PASS
       617       PASS
       618       PASS
       619       PASS
       620       PASS
       621       PASS
       622       PASS
       623       PASS
       624       PASS
       625       PASS
       626       PASS
       627       PASS
       628       PASS
       629       PASS
       630       PASS
       631       PASS
       632       PASS
       633       PASS
       634       PASS
       635       PASS
       636       PASS
       637       PASS
       638       PASS
       639       PASS
       640       PASS
       641       PASS
       642       PASS
       643       PASS
       644       PASS
       645       PASS
       646       PASS
       647       PASS
       648       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM041
 
                    0 ERRORS ENCOUNTERED
                   34 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       131       PASS
       132       PASS
       133       PASS
       134       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM014
 
                    0 ERRORS ENCOUNTERED
                    4 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM814BEGIN*            TEST RESULTS - FM814

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  YDEXP - (179) INTRINSIC FUNCTIONS

  DEXP (DOUBLE PRECISION EXPONENTIAL)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  19 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
    19     PASS  
 
 -------------------------------------------------------------------------------
 
                         19 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         19 OF  19 TESTS EXECUTED
 
 *FM814END*              END OF TEST - FM814

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       430       PASS
       431       PASS
       432       PASS
       433       PASS
       434       PASS
       435       PASS
       436       PASS
       437       PASS
       438       PASS
       439       PASS
       440       PASS
       441       PASS
       442       PASS
       443       PASS
       444       PASS
       445       PASS
       446       PASS
       447       PASS
       448       PASS
       449       PASS
       450       PASS
       451       PASS
       452       PASS
       453       PASS
       454       PASS
       455       PASS
       456       PASS
       457       PASS
       458       PASS
       459       PASS
       460       PASS
       461       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM035
 
                    0 ERRORS ENCOUNTERED
                   32 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM917BEGIN*            TEST RESULTS - FM917

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 INQU4 - (433) INQUIRE BY UNIT

 DIRECT ACCESS UNFORMATTED FILE

 ANS REF. - 12.10.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   3 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
 
 -------------------------------------------------------------------------------
 
                          3 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          3 OF   3 TESTS EXECUTED
 
 *FM917END*              END OF TEST - FM917

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       552       PASS
       553       PASS
       554       PASS
       555       PASS
       556       PASS
       557       PASS
       558       PASS
       559       PASS
       560       PASS
       561       PASS
       562       PASS
       563       PASS
       564       PASS
       565       PASS
       566       PASS
       567       PASS
       568       PASS
       569       PASS
       570       PASS
       571       PASS
       572       PASS
       573       PASS
       574       PASS
       575       PASS
       576       PASS
       577       PASS
       578       PASS
       579       PASS
       580       PASS
       581       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM039
 
                    0 ERRORS ENCOUNTERED
                   30 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM372BEGIN*            TEST RESULTS - FM372

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
  XSIN - (186) INTRINSIC FUNCTIONS

  SIN (SINE)

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  17 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
 
 -------------------------------------------------------------------------------
 
                         17 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         17 OF  17 TESTS EXECUTED
 
 *FM372END*              END OF TEST - FM372

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       430       PASS
       431       PASS
       432       PASS
       433       PASS
       434       PASS
       435       PASS
       436       PASS
       437       PASS
       438       PASS
       439       PASS
       440       PASS
       441       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM056
 
                    0 ERRORS ENCOUNTERED
                   12 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM818BEGIN*            TEST RESULTS - FM818

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  YDLG10 - (185) INTRINSIC FUNCTIONS

  DLOG10 (DOUBLE PRECISION COMMON LOGARITHM)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  15 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
 
 -------------------------------------------------------------------------------
 
                         15 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         15 OF  15 TESTS EXECUTED
 
 *FM818END*              END OF TEST - FM818

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM353BEGIN*            TEST RESULTS - FM353

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  XINT - (150) INTRINSIC FUNCTIONS--
                  IFIX, INT (TYPE CONVERSION)
  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  14 TESTS

                                                 - EACH TEST HAS TWO PARTS.

                                                 BELOW ANSWERS SHOULD BE ZERO 
                                                 FOR TEST SEGMENT TO PASS 
                        IFIX      INT 
     1    INSPECT         0         0
     2    INSPECT         0         0
     3    INSPECT         0         0
     4    INSPECT         0         0
     5    INSPECT         0         0
     6    INSPECT         0         0
     7    INSPECT         0         0
     8    INSPECT         0         0
     9    INSPECT         0         0
    10    INSPECT         0         0
    11    INSPECT         0         0
    12    INSPECT         0         0
    13    INSPECT         0         0
    14    INSPECT         0         0
 
 -------------------------------------------------------------------------------
 
                          0 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                         14 TESTS REQUIRE INSPECTION
                         14 OF  14 TESTS EXECUTED
 
 *FM353END*              END OF TEST - FM353

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       500       PASS
       501       PASS
       502       PASS
       503       PASS
       504       PASS
       505       PASS
       506       PASS
       507       PASS
       508       PASS
       509       PASS
       510       PASS
       511       PASS
       512       PASS
       513       PASS
       514       PASS
       515       PASS
       516       PASS
       517       PASS
       518       PASS
       519       PASS
       520       PASS
       521       PASS
       522       PASS
       523       PASS
       524       PASS
       525       PASS
       526       PASS
       527       PASS
       528       PASS
       529       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM018
 
                    0 ERRORS ENCOUNTERED
                   30 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM802BEGIN*            TEST RESULTS - FM802

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

 YDABS - (157) INTRINSIC FUNCTION--

                DABS (ABSOLUTE VALUE ) 

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   6 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
 
 -------------------------------------------------------------------------------
 
                          6 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          6 OF   6 TESTS EXECUTED
 
 *FM802END*              END OF TEST - FM802

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       632       PASS
       633       PASS
       634       PASS
       635       PASS
       636       PASS
       637       PASS
       638       PASS
       639       PASS
       640       PASS
       641       PASS
       642       PASS
       643       PASS
       644       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM023
 
                    0 ERRORS ENCOUNTERED
                   13 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM368BEGIN*            TEST RESULTS - FM368

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  XSQRT - (175) INTRINSIC FUNCTIONS

  SQRT (SQUARE ROOT)

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  13 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
 
 -------------------------------------------------------------------------------
 
                         13 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         13 OF  13 TESTS EXECUTED
 
 *FM368END*              END OF TEST - FM368

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM823BEGIN*            TEST RESULTS - FM823

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  YDASIN - (194) INTRINSIC FUNCTIONS

  DASIN, DACOS (DOUBLE PRECISION ARCSINE, ARCCOSINE)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  12 TESTS

0        TEST OF DASIN
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
0        TEST OF DACOS
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
 
 -------------------------------------------------------------------------------
 
                         12 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         12 OF  12 TESTS EXECUTED
 
 *FM823END*              END OF TEST - FM823

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
          FILE I07 CREATED WITH 31 SEQUENTIAL RECORDS
        12       PASS
        13       PASS
        14       PASS
        15       PASS
        16       PASS
        17       PASS
        18       PASS
        19       PASS
        20       PASS
        21       PASS
        22       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM101
 
                    0 ERRORS ENCOUNTERED
                   11 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM920BEGIN*            TEST RESULTS - FM920

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 INQF2 - (439) INQUIRE BY FILE

 SEQUENTIAL UNFORMATTED FILE, CONNECTED BY OPEN

 ANS REF. - 12.10.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   3 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
 
 -------------------------------------------------------------------------------
 
                          3 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          3 OF   3 TESTS EXECUTED
 
 *FM920END*              END OF TEST - FM920

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
         4       PASS
         5       PASS
         6       PASS
         7       PASS
         8       PASS
         9       PASS
        10       PASS
        11       PASS
        12       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM002
 
                    0 ERRORS ENCOUNTERED
                    9 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
        32       PASS
        33       PASS
        34       PASS
        35       PASS
        36       PASS
        37       PASS
        38       PASS
        39       PASS
        40       PASS
        41       PASS
        42       PASS
        43       PASS
        44       PASS
        45       PASS
        46       PASS
        47       PASS
        48       PASS
        49       PASS
        50       PASS
        51       PASS
        52       PASS
        53       PASS
        54       PASS
        55       PASS
        56       PASS
        57       PASS
        58       PASS
        59       PASS
        60       PASS
        61       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM061
 
                    0 ERRORS ENCOUNTERED
                   30 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       582       PASS
       583       PASS
       584       PASS
       585       PASS
       586       PASS
       587       PASS
       588       PASS
       589       PASS
       590       PASS
       591       PASS
       592       PASS
       593       PASS
       594       PASS
       595       PASS
       596       PASS
       597       PASS
       598       PASS
       599       PASS
       600       PASS
       601       PASS
       602       PASS
       603       PASS
       604       PASS
       605       PASS
       606       PASS
       607       PASS
       608       PASS
       609       PASS
       610       PASS
       611       PASS
       612       PASS
       613       PASS
       614       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM040
 
                    0 ERRORS ENCOUNTERED
                   33 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM364BEGIN*            TEST RESULTS - FM364

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    

 XRMNX - (172) SUBSET INTRINSIC FUNCTIONS
               IN MIXED MODE EXPRESSIONS

 SUBSET REF. - 15.10, 15.3, 6.1.4
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  14 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    10     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
 
 -------------------------------------------------------------------------------
 
                         14 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         14 OF  14 TESTS EXECUTED
 
 *FM364END*              END OF TEST - FM364

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       462       PASS
       463       PASS
       464       PASS
       465       PASS
       466       PASS
       467       PASS
       468       PASS
       469       PASS
       470       PASS
       471       PASS
       472       PASS
       473       PASS
       474       PASS
       475       PASS
       476       PASS
       477       PASS
       478       PASS
       479       PASS
       480       PASS
       481       PASS
       482       PASS
       483       PASS
       484       PASS
       485       PASS
       486       PASS
       487       PASS
       488       PASS
       489       PASS
       490       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM036
 
                    0 ERRORS ENCOUNTERED
                   29 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM914BEGIN*            TEST RESULTS - FM914

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 INQU1 - (430) INQUIRE BY UNIT

 SEQUENTIAL FORMATTED FILE, CONNECTED BY OPEN

 ANS REF. - 12.10.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   1 TESTS

     1     PASS  
 
 -------------------------------------------------------------------------------
 
                          1 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          1 OF   1 TESTS EXECUTED
 
 *FM914END*              END OF TEST - FM914

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM817BEGIN*            TEST RESULTS - FM817

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  YCLOG - (183) INTRINSIC FUNCTIONS

  CLOG (COMPLEX NATURAL LOGARITHM)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  11 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
 
 -------------------------------------------------------------------------------
 
                         11 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         11 OF  11 TESTS EXECUTED
 
 *FM817END*              END OF TEST - FM817

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       170       PASS
       171       PASS
       172       PASS
       173       PASS
       174       PASS
       175       PASS
       176       PASS
       177       PASS
       178       PASS
       179       PASS
       180       PASS
       181       PASS
       182       PASS
       183       PASS
       184       PASS
       185       PASS
       186       PASS
       187       PASS
       188       PASS
       189       PASS
       190       PASS
       191       PASS
       192       PASS
       193       PASS
       194       PASS
       195       PASS
       196       PASS
       197       PASS
       198       PASS
       199       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM017
 
                    0 ERRORS ENCOUNTERED
                   30 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM371BEGIN*            TEST RESULTS - FM371

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  XALG10 - (184) INTRINSIC FUNCTIONS

  ALOG10 (COMMON LOGARITHM)

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  15 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
 
 -------------------------------------------------------------------------------
 
                         15 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         15 OF  15 TESTS EXECUTED
 
 *FM371END*              END OF TEST - FM371

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
         1       PASS
         2       FAIL               2              2
         3       DELETED
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM001
 
                    1 ERRORS ENCOUNTERED
                    1 TESTS PASSED
                    1 TESTS DELETED
1
 
           THE PROGRAM FM001 EXECUTED CORRECTLY IF
 
                TEST 1 PASSED
                TEST 2 FAILED WITH COMPUTED AND CORRECT =2
                TEST 3 WAS DELETED
                THE RUN SUMMARY TOTALS ALL EQUAL 1
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM820BEGIN*            TEST RESULTS - FM820

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  YCSIN - (188) INTRINSIC FUNCTIONS

  CSIN, CCOS  (COMPLEX SINE, COSINE)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  18 TESTS


        TEST OF CSIN
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------

        TEST OF CCOS
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
 
 -------------------------------------------------------------------------------
 
                         18 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         18 OF  18 TESTS EXECUTED
 
 *FM820END*              END OF TEST - FM820

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
          FILE I08 CREATED WITH 31 SEQUENTIAL RECORDS
        23       PASS
        24       PASS
        25       PASS
        26       PASS
        27       PASS
        28       PASS
        29       PASS
        30       PASS
        31       PASS
        32       PASS
        33       PASS
        34       PASS
        35       PASS
        36       PASS
        37       PASS
        38       PASS
        39       PASS
        40       PASS
        41       PASS
        42       PASS
        43       PASS
        44       PASS
        45       PASS
        46       PASS
        47       PASS
        48       PASS
        49       PASS
        50       PASS
        51       PASS
        52       PASS
        53       PASS
        54       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM102
 
                    0 ERRORS ENCOUNTERED
                   32 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       553       PASS
       554       PASS
       555       PASS
       556       PASS
       557       PASS
       558       PASS
       559       PASS
       560       PASS
       561       PASS
       562       PASS
       563       PASS
       564       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM020
 
                    0 ERRORS ENCOUNTERED
                   12 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM801BEGIN*            TEST RESULTS - FM801

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

 YDINT - (155) INTRINSIC FUNCTIONS--

                DINT, DNINT, IDNINT (TYPE CONVERSION) 

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  45 TESTS



        TEST OF DINT
     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------


        TEST OF DNINT
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
    19     PASS  
    20     PASS  
    21     PASS  
    22     PASS  
    23     PASS  
    24     PASS  
    25     PASS  
    26     PASS  
    27     PASS  
    28     PASS  
1
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------


        TEST OF IDNINT
    29     PASS  
    30     PASS  
    31     PASS  
    32     PASS  
    33     PASS  
    34     PASS  
    35     PASS  
    36     PASS  
    37     PASS  
    38     PASS  
    39     PASS  
    40     PASS  
    41     PASS  
    42     PASS  
    43     PASS  
    44     PASS  
    45     PASS  
 
 -------------------------------------------------------------------------------
 
                         45 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         45 OF  45 TESTS EXECUTED
 
 *FM801END*              END OF TEST - FM801

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       683       PASS
       684       PASS
       685       PASS
       686       PASS
       687       PASS
       688       PASS
       689       PASS
       690       PASS
       691       PASS
       692       PASS
       693       PASS
       694       PASS
       695       PASS
       696       PASS
       697       PASS
       698       PASS
       699       PASS
       700       PASS
       701       PASS
       702       PASS
       703       PASS
       704       PASS
       705       PASS
       706       PASS
       707       PASS
       708       PASS
       709       PASS
       710       PASS
       711       PASS
       712       PASS
       713       PASS
       714       PASS
       715       PASS
       716       PASS
       717       PASS
       718       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM043
 
                    0 ERRORS ENCOUNTERED
                   36 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
        62       PASS
        63       PASS
        64       PASS
        65       PASS
        66       PASS
        67       PASS
        68       PASS
        69       PASS
        70       PASS
        71       PASS
        72       PASS
        73       PASS
        74       PASS
        75       PASS
        76       PASS
        77       PASS
        78       PASS
        79       PASS
        80       PASS
        81       PASS
        82       PASS
        83       PASS
        84       PASS
        85       PASS
        86       PASS
        87       PASS
        88       PASS
        89       PASS
        90       PASS
        91       PASS
        92       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM062
 
                    0 ERRORS ENCOUNTERED
                   31 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM816BEGIN*            TEST RESULTS - FM816

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  YDLOG - (182) INTRINSIC FUNCTIONS

  DLOG (DOUBLE PRECISION NATURAL LOGARITHM)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  16 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
 
 -------------------------------------------------------------------------------
 
                         16 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         16 OF  16 TESTS EXECUTED
 
 *FM816END*              END OF TEST - FM816

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM915BEGIN*            TEST RESULTS - FM915

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 INQU2 - (431) INQUIRE BY UNIT

 SEQUENTIAL UNFORMATTED FILE, CONNECTED BY OPEN

 ANS REF. - 12.10.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   3 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
 
 -------------------------------------------------------------------------------
 
                          3 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          3 OF   3 TESTS EXECUTED
 
 *FM915END*              END OF TEST - FM915

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       491       PASS
       492       PASS
       493       PASS
       494       PASS
       495       PASS
       496       PASS
       497       PASS
       498       PASS
       499       PASS
       500       PASS
       501       PASS
       502       PASS
       503       PASS
       504       PASS
       505       PASS
       506       PASS
       507       PASS
       508       PASS
       509       PASS
       510       PASS
       511       PASS
       512       PASS
       513       PASS
       514       PASS
       515       PASS
       516       PASS
       517       PASS
       518       PASS
       519       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM037
 
                    0 ERRORS ENCOUNTERED
                   29 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       139       PASS
       140       PASS
       141       PASS
       142       PASS
       143       PASS
       144       PASS
       145       PASS
       146       PASS
       147       PASS
       148       PASS
       149       PASS
       150       PASS
       151       PASS
       152       PASS
       153       PASS
       154       PASS
       155       PASS
       156       PASS
       157       PASS
       158       PASS
       159       PASS
       160       PASS
       161       PASS
       162       PASS
       163       PASS
       164       PASS
       165       PASS
       166       PASS
       167       PASS
       168       PASS
       169       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM016
 
                    0 ERRORS ENCOUNTERED
                   31 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM370BEGIN*            TEST RESULTS - FM370

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  XALOG - (181) INTRINSIC FUNCTIONS

  ALOG (NATURAL LOGARITHM)

  SUBSET REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  16 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
 
 -------------------------------------------------------------------------------
 
                         16 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         16 OF  16 TESTS EXECUTED
 
 *FM370END*              END OF TEST - FM370

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM919BEGIN*            TEST RESULTS - FM919

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 INQF1 - (438) INQUIRE BY FILE

 SEQUENTIAL FORMATTED FILE, CONNECTED BY OPEN

 ANS REF. - 12.10.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   1 TESTS

     1     PASS  
 
 -------------------------------------------------------------------------------
 
                          1 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          1 OF   1 TESTS EXECUTED
 
 *FM919END*              END OF TEST - FM919

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
          FILE I09 CREATED WITH 31 SEQUENTIAL RECORDS
        55       PASS
        56       PASS
        57       PASS
        58       PASS
        59       PASS
        60       PASS
        61       PASS
        62       PASS
        63       PASS
        64       PASS
        65       PASS
        66       PASS
        67       PASS
        68       PASS
        69       PASS
        70       PASS
        71       PASS
        72       PASS
        73       PASS
        74       PASS
        75       PASS
        76       PASS
        77       PASS
        78       PASS
        79       PASS
        80       PASS
        81       PASS
        82       PASS
        83       PASS
        84       PASS
        85       PASS
        86       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM103
 
                    0 ERRORS ENCOUNTERED
                   32 TESTS PASSED
                    0 TESTS DELETED
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM821BEGIN*            TEST RESULTS - FM821

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 YDCOS - (190) INTRINSIC FUNCTIONS

  DCOS (DOUBLE PRECISION COSINE)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  19 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
    13     PASS  
    14     PASS  
    15     PASS  
    16     PASS  
    17     PASS  
    18     PASS  
    19     PASS  
 
 -------------------------------------------------------------------------------
 
                         19 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         19 OF  19 TESTS EXECUTED
 
 *FM821END*              END OF TEST - FM821

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM503BEGIN*            TEST RESULTS - FM503

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
 BLKD2 - (261) BLOCK DATA SUBPROGRAM --

  DATA INTERNAL FORMS

  ANS REF. - 16
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   8 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
 
 -------------------------------------------------------------------------------
 
                          8 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          8 OF   8 TESTS EXECUTED
 
 *FM503END*              END OF TEST - FM503

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM922BEGIN*            TEST RESULTS - FM922

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 
  INQF5 - (442) INQUIRE BY FILE
  FILE NOT CONNECTED TO A UNIT
  ANS REF. - 12.10.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS   1 TESTS

     1     PASS  
 
 -------------------------------------------------------------------------------
 
                          1 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                          1 OF   1 TESTS EXECUTED
 
 *FM922END*              END OF TEST - FM922

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
                     NATIONAL INSTITUTE OF STANDARDS AND TECHNOLOGY
                    FORTRAN COMPILER VALIDATION SYSTEM
                      VERSION 2.1  93/10/21*21.02.00
 
 *FM800BEGIN*            TEST RESULTS - FM800

         TEST DATE*TIME= *NO DATE*TIME      -  COMPILER= *NONE SPECIFIED*    
 

 YIDINT - (151) INTRINSIC FUNCTION--

                 IDINT (TYPE CONVERSION)

  ANS REF. - 15.3
 
 
  TEST   PASS/FAIL       DISPLAYED RESULTS       REMARKS
 -------------------------------------------------------------------------------
                                                 THIS PROGRAM HAS  12 TESTS

     1     PASS  
     2     PASS  
     3     PASS  
     4     PASS  
     5     PASS  
     6     PASS  
     7     PASS  
     8     PASS  
     9     PASS  
    10     PASS  
    11     PASS  
    12     PASS  
 
 -------------------------------------------------------------------------------
 
                         12 TESTS PASSED
                          0 TESTS FAILED
                          0 TESTS DELETED
                          0 TESTS REQUIRE INSPECTION
                         12 OF  12 TESTS EXECUTED
 
 *FM800END*              END OF TEST - FM800

 *NO PROJECT*              *NO COMPANY NAME*      *   *NO TAPE* /*NO TAPE DATE
 FOR OFFICIAL USE ONLY                                        COPYRIGHT  1982
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       565       PASS
       566       PASS
       567       PASS
       568       PASS
       569       PASS
       570       PASS
       571       PASS
       572       PASS
       573       PASS
       574       PASS
       575       PASS
       576       PASS
       577       PASS
       578       PASS
       579       PASS
       580       PASS
       581       PASS
       582       PASS
       583       PASS
       584       PASS
       585       PASS
       586       PASS
       587       PASS
       588       PASS
       589       PASS
       590       PASS
       591       PASS
       592       PASS
       593       PASS
       594       PASS
       595       PASS
       596       PASS
       597       PASS
       598       PASS
       599       PASS
       600       PASS
       601       PASS
       602       PASS
       603       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM021
 
                    0 ERRORS ENCOUNTERED
                   39 TESTS PASSED
                    0 TESTS DELETED
1
           FORTRAN COMPILER VALIDATION SYSTEM
 
 
                      VERSION 2.1
 
           FOR OFFICIAL USE ONLY - COPYRIGHT 1978
 
                   SUBSET LEVEL TEST
 
 
      TEST     PASS/FAIL     COMPUTED        CORRECT
      ----------------------------------------------
 
       649       PASS
       650       PASS
       651       PASS
       652       PASS
       653       PASS
       654       PASS
       655       PASS
       656       PASS
       657       PASS
       658       PASS
       659       PASS
       660       PASS
       661       PASS
       662       PASS
       663       PASS
       664       PASS
       665       PASS
       666       PASS
       667       PASS
       668       PASS
       669       PASS
       670       PASS
       671       PASS
       672       PASS
       673       PASS
       674       PASS
       675       PASS
       676       PASS
       677       PASS
       678       PASS
       679       PASS
       680       PASS
       681       PASS
       682       PASS
 
      ----------------------------------------------
 
 
                     END OF PROGRAM FM042
 
                    0 ERRORS ENCOUNTERED
                   34 TESTS PASSED
                    0 TESTS DELETED
```
