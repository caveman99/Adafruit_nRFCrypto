/*
   The MIT License (MIT)
   Copyright (c) 2021 Kongduino
   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:
   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.
   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
   THE SOFTWARE.
*/

#ifndef NRFCRYPTO_CHACHA_H_
#define NRFCRYPTO_CHACHA_H_

#include "nrf_cc310/include/crys_chacha_error.h"
#include "nrf_cc310/include/crys_chacha.h"

class nRFCrypto_Chacha {
  public:
    nRFCrypto_Chacha(void);
    bool begin(void);
    void end(void);
    CRYSError_t Process(uint8_t *, uint32_t, uint8_t *, CRYS_CHACHA_EncryptMode_t);
    CRYS_CHACHA_EncryptMode_t encryptFlag = (CRYS_CHACHA_EncryptMode_t) 0;
    CRYS_CHACHA_EncryptMode_t decryptFlag = (CRYS_CHACHA_EncryptMode_t) 1;
  private:
    bool _begun;
};

#endif /* NRFCRYPTO_RANDOM_H_ */
