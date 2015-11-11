set nu
set et
set cindent
set softtabstop=4
set ts=4
set sw=4
set expandtab
syntax enable
syntax on
%retab!
"set fdm=indent
filetype plugin on
filetype indent on
let mapleader = ","
botright cwindow

set bg=dark

"reload the current file if it's been changed from outside
set autoread

"reload ~/.vimrc when it's been edited
autocmd! bufwritepost vimrc source ~/.vimrc

"release to make chinese in files came from windows printed correct
set enc=GBK 
set tenc=GBK
set tenc=UTF-8

nmap <leader>tu :set tenc=UTF-8<CR>
nmap <leader>tg :set tenc=GBK<CR>
nmap <leader>gbk :set enc=GBK<CR>
nmap <leader>utf8 :set enc=UTF-8<CR>
nmap <leader>utf :set enc=UTF-8<CR>

let Tlist_Show_One_File=1
let Tlist_Exit_OnlyWindow=1
let g:winManagerWindowLayout='FileExplorer,TagList'
let g:winManagerWidth=30
nmap wm :WMToggle<cr>
"ignore some files in winmanager's file list
let g:explHideFiles='.*\.so.*,.*\.o$,\.out$,_ngo$,^\.,\.log$,^core$,\.exe$'
let g:explHideDirs='_ngo$'

	if has("cscope")
		set csprg=/usr/bin/cscope
		set csto=0
		set cst
		set nocsverb
		" add any database in current directory
		if filereadable ( "cscope.out" )
		    cscope add cscope.out
		" else add database pointed to by environment
		elseif $CSCOPE_DB != ""
		    cscope add $CSCOPE_DB
		endif
		set csverb
	endif
:set cscopequickfix=s-,c-,d-,i-,t-,e-


"find this C symbol
nmap <F2> :cs find s <C-R>=expand("<cword>")<CR><CR>
"find this definition
nmap <F3> :cs find g <C-R>=expand("<cword>")<CR><CR>
"find functions calling this function
nmap <F4> :cs find c <C-R>=expand("<cword>")<CR><CR>
"find this text string
"nmap <C-_>t :cs find t <C-R>=expand("<cword>")<CR><CR>
nmap <silent><leader>cst :cs find t <C-R>=expand("<cword>")<CR><CR>
"find functions called by this function
nmap <silent><leader>csd :cs find d <C-R>=expand("<cword>")<CR><CR>
"find the egrep pattern
nmap <silent><leader>cse :cs find e <C-R>=expand("<cword>")<CR><CR>
"find this file
nmap <silent><leader>csf :cs find f <C-R>=expand("<cfile>")<CR><CR>
"find files #including this file
nmap <silent><leader>csi :cs find i <C-R>=expand("<cfile>")<CR><CR>

"nmap <F5> :Grep <C-R>=expand("<cword>")<CR><CR>
nnoremap <silent> <F7> : Rgrep <CR><CR><CR><CR>
:let Grep_Skip_Dirs = '.svn _xmsgs ipcore_dir utest'
:let Grep_Skip_Files = '*.bak *~ *.o *.lo *.out *.a *.swp core *tags *bat *tcl *.xise *.gise'
nmap <leader>grep : Rgrep <CR><CR><CR><CR>
nmap <leader>/ /<C-R>=expand("<cword>")<CR><CR>

"open quickfix list, this's useful after run :mak 
nmap <leader>qf :copen<CR>
nmap <leader>co :copen<CR>

"switch in hex mode and switch back
nmap <leader>hex :%!xxd<CR>
nmap <leader>rhex :%!xxd -r<CR>

let g:miniBufExplMapCTabSwitchBufs=1
let g:miniBufExplMapWindowNavVim=1
let g:minibufExplMapWindowNavArrows=1
let g:miniBufExplorerMoreThanOne=3
let g:miniBufExplMaxSize = 3 "<max lines: defualt 3>


nmap <silent><C-F11> :!cscope -Rbq <CR>
nmap <leader>cscope :!cscope -Rbq <CR>
nmap <leader>csc :!cscope -Rbq <CR>
nmap <silent><C-F12> :!ctags -R --c++-kinds=+p --fields=+iaS --extra=+q -f ./.tags .<CR>
nmap <leader>ct :!ctags -R --c++-kinds=+p --fields=+iaS --extra=+q -f ./.tags .<CR>
"specify for golang
nmap <leader>gct :!ctags -R /usr/local/go/src/pkg/ --go-kinds=+vcpft --fields=+iaS --extra=+q -f ./.tags .<CR>
"some more for golang
nmap <leader>gof :w<CR>:!go fmt % <CR><CR>:e<CR>
cmap gof :w<CR>:!go fmt % <CR><CR>:e<CR>
nmap <leader>got :w<CR>:!go test % <CR>
nmap <leader>gor :w<CR>:!go run % <CR>
nmap <leader>gob :w<CR>:!go build % <CR>

"auto popup after ::
let OmniCpp_MayCompleteScope = 1
"let OmniCpp_DefaultNamespaces = ["std", "_GLIBCXX_STD"]
" auto disappear the preview window after a selection
autocmd CursorMovedI * if pumvisible() == 0|pclose|endif
autocmd InsertLeave * if pumvisible() == 0|pclose|endif


"preview a ctag symbol
nmap <leader>pt :ptag <C-R>=expand("<cword>")<CR><CR>
nmap <leader>pc :pclose<CR>

"we know <C-O> gets pre tag, so add this to get next tag
nmap <silent><C-p> :tag<CR>

"after inputting : or / , tab to try complete word in buffer C^p  C^n
"cmap <silent><C-tab> <Plug>CmdlineCompleteForward

"in insert mode, Ctrl+U make the word just inputed UpCapital
inoremap <C-u> <esc>gUiwea  


"the next lines begin with "HDL_" are for the plugin hdl_plugin.vim
    let g:HDL_Width_of_Component = "55"
    let g:HDL_Height_of_Component = "25"
" the next lines are easy too understand
    let g:HDL_Author = ""
    let g:HDL_Company = ""
    let g:HDL_Verilog_Timescale = "1ns / 1ps"
    let g:HDL_Clock_Period = 8 

"nmap <F7> :grep <C-R>=expand("<cword>")<CR> * -rn <CR> 

set tags=.tags
