/*
 * =============================================================================
 *
 *       Filename:  string_encode.h
 *
 *    Description:  
 *
 *     Created on:  2015Äê12ÔÂ23ÈÕ 
 *
 *     Created by:  root 
 *
 * =============================================================================
 */

class CodeStringFile{
    public:
        CodeStringFile();
        ~CodeStringFile();

        int EnCodeString(const char * src_1st,const char * src_2nd);
        int DeCodeFile(const char *Filename,char * string_1st,char * string_2nd);
        char Schar2Cchar(char ch);
};

