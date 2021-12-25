call plug#begin('~/.vim/plugged')
Plug 'lervag/vimtex'
call plug#end()
let &t_SI = "\<Esc>[6 q"
let &t_SR = "\<Esc>[4 q"
let &t_EI = "\<Esc>[2 q"
let &t_TI = ""
let &t_TE = ""
set makeprg=g++\ -std=c++17\ -I../\ -g\ -o\ %<\ %
set clipboard=unnamedplus
set number relativenumber
noremap <Up> <Nop>
noremap <Down> <Nop>
noremap <Left> <Nop>
noremap <Right> <Nop>
noremap! <Up> <Nop>
noremap! <Down> <Nop>
noremap! <Left> <Nop>
noremap! <Right> <Nop>
command! -bar -nargs=1 S :new|:r <args>  
