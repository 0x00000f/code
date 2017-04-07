"Basics
set number
set tabstop=4
set shiftwidth=4
set nopaste
set noautoindent
set hlsearch
set smartindent
set showmode

syntax on
filetype plugin indent on
"colo desert
"colo industry
colo koehler

"Pathogen Plugin
"uncomment this to enable syntastic
execute pathogen#infect()

"Syntastic
"set statusline+=%#warningmsg#
"set statusline+=%{SyntasticStatuslineFlag()}
"set statusline+=%*
"let g:syntastic_always_populate_loc_list = 1
"let g:syntastic_auto_loc_list = 1
"let g:syntastic_check_on_open = 0
"let g:syntastic_check_on_wq = 0

call plug#begin()
Plug 'yuttie/comfortable-motion.vim'
call plug#end()

"THIS SCROLLS LINES INSTEAD OF SCREEN
"let g:comfortable_motion_scroll_down_key = "j"
"let g:comfortable_motion_scroll_up_key = "k"

nnoremap <silent> <C-j> :call comfortable_motion#flick(100)<CR>
nnoremap <silent> <C-k> :call comfortable_motion#flick(-100)<CR>
"nnoremap <silent> <C-f> :call comfortable_motion#flick(200)<CR>
"nnoremap <silent> <C-b> :call comfortable_motion#flick(-200)<CR>

"optimal
let g:comfortable_motion_friction = 80.0
let g:comfortable_motion_air_drag = 5.0
let g:comfortable_motion_interval = 100.0 / 60.0

"NO EX MODE
map Q <Nop>

"set leader to space
let mapleader = "\<Space>"

"shortcut to open NERDTree
nnoremap <Leader>n :NERDTreeToggle<CR>
let g:NERDTreeWinSize = 18

"mapping q to switch between windows
noremap q <C-w>w

"mark location before quitting
noremap :wq ma:wq
noremap :q ma:q
noremap :q! ma:q!

"each permutation of quit
noremap :Wq ma:wq
noremap :WQ ma:wq
noremap :wQ ma:wq
noremap :W ma:w
noremap :Q ma:q

"mapping jj to ESC 
inoremap jj <Esc>

"mapping autocomplete
inoremap \ <C-p>

"quick back to terminal check 
noremap <Leader>4 :! 
"
"quick jump back to mark set by above
noremap <Leader>f `azz

"beginning of line 
noremap <Leader>0 $

"toggling highlight
nnoremap <Leader>h :nohlsearch<Bar>:echo<CR>

"toggling syntastic
nnoremap <Leader>9 :SyntasticReset<Enter>

