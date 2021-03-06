/*
The MIT License (MIT)

Copyright (c) 2017 Wassim Filali

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
___________________________________________________________________________________
 dependencies :
 - 
___________________________________________________________________________________

creation date : 01.11.2017

mesh protocol construction


*/

#include "utils.hpp"
#include "serial.hpp"

#include <string>

typedef std::vector<uint16_t> light_vector_t;

namespace mesh
{
    void set_source_nodId(uint8_t Id);

    namespace raw
    {
        void send(Serial &l_str,uint8_t *buffer);
        void send_txt(Serial &l_str,uint8_t *buffer);
        void send_txt(Serial &l_str,std::string &message);
    }
    namespace bcast
    {

    }
    
    namespace msg
    {
        void color_txt(Serial &l_str,uint8_t TargetNodeId,uint8_t R,uint8_t G,uint8_t B);
        namespace dimmer
        {
            void all(Serial &l_str,uint8_t TargetNodeId,uint16_t light);
            void channel(Serial &l_str,uint8_t TargetNodeId,uint8_t chan, uint16_t light);
            void chan_array(Serial &l_str,uint8_t TargetNodeId,light_vector_t v);
        }
    }

}
