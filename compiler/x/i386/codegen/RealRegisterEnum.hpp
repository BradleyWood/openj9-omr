/*******************************************************************************
 * Copyright (c) 2000, 2022 IBM Corp. and others
 *
 * This program and the accompanying materials are made available under
 * the terms of the Eclipse Public License 2.0 which accompanies this
 * distribution and is available at http://eclipse.org/legal/epl-2.0
 * or the Apache License, Version 2.0 which accompanies this distribution
 * and is available at https://www.apache.org/licenses/LICENSE-2.0.
 *
 * This Source Code may also be made available under the following Secondary
 * Licenses when the conditions for such availability set forth in the
 * Eclipse Public License, v. 2.0 are satisfied: GNU General Public License,
 * version 2 with the GNU Classpath Exception [1] and GNU General Public
 * License, version 2 with the OpenJDK Assembly Exception [2].
 *
 * [1] https://www.gnu.org/software/classpath/license.html
 * [2] http://openjdk.java.net/legal/assembly-exception.html
 *
 * SPDX-License-Identifier: EPL-2.0 OR Apache-2.0 OR GPL-2.0 WITH Classpath-exception-2.0 OR LicenseRef-GPL-2.0 WITH Assembly-exception
 *******************************************************************************/

/*
 * This file will be included within an enum.  Only comments and enumerator
 * definitions are permitted.
 */

   NoReg                   = 0,

   // The order of the GPRS registers is defined by the linkage
   // convention, and the VM may rely on it (eg. for GC).
   eax                     = 1,
   FirstGPR                = eax,
   ebx                     = 2,
   ecx                     = 3,
   edx                     = 4,
   Last8BitGPR             = edx,
   edi                     = 5,
   esi                     = 6,
   ebp                     = 7,
   LastAssignableGPR       = ebp,
   esp                     = 8,
   LastGPR                 = esp,

   vfp                     = 9,

   FPRMaskOffset           = LastGPR,
   st0                     = 10,
   FirstFPR                = st0,
   st1                     = 11,
   st2                     = 12,
   st3                     = 13,
   st4                     = 14,
   st5                     = 15,
   st6                     = 16,
   st7                     = 17,
   LastFPR                 = st7,
   LastAssignableFPR       = st7,

   XMMRMaskOffset          = LastGPR,
   xmm0                    = 18,
   FirstXMMR               = xmm0,
   xmm1                    = 19,
   xmm2                    = 20,
   xmm3                    = 21,
   xmm4                    = 22,
   xmm5                    = 23,
   xmm6                    = 24,
   xmm7                    = 25,
   LastXMMR                = xmm7,

   ByteReg                 = 26,
   BestFreeReg             = 27,
   SpilledReg              = 28,
   NumRegisters            = 29,

   NumXMMRegisters         = LastXMMR - FirstXMMR + 1,
   MaxAssignableRegisters  = NumXMMRegisters + (LastAssignableGPR - FirstGPR + 1) - 1 // -1 for stack pointer
