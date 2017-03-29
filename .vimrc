"Basics
set number
set tabstop=4
set shiftwidth=4
set nopaste
set noautoindent
set hlsearch
set smartindent


syntax on
filetype plugin indent on
"colo desert
"colo industry
colo koehler


"Pathogen Plugin
execute pathogen#infect()
"Syntastic
set statusline+=%#warningmsg#
set statusline+=%{SyntasticStatuslineFlag()}
set statusline+=%*
let g:syntastic_always_populate_loc_list = 1
let g:syntastic_auto_loc_list = 1
let g:syntastic_check_on_open = 0
let g:syntastic_check_on_wq = 0

"Vim Airline
"let g:airline_section_b = '%{strftime("%c")}'
"let g:airline_section_y = 'BN: %{bufnr("%")}'
"let g:airline#extensions#tabline#enabled = 1
"
"let g:airline_theme='monochrome'
"set laststatus=2
"let g:airline_powerline_fonts=1
"set noshowmode "dont show default bar
"let g:bufferline_echo=0


"set leader to space
let mapleader = "\<Space>"


"shortcut to open NERDTree
nnoremap <Leader>n :NERDTreeToggle<CR>
let g:NERDTreeWinSize = 18

"mapping qq to switch between windows
noremap q <C-w>wq
"mark location before wq
noremap :wq ma:wq



"mapping jj to ESC 
inoremap jj <Esc>
inoremap \ <C-p>


"quick back to terminal check 
noremap <Leader>4 :! 
"set marks before set & exit 
noremap <Leader>3 ma:xa<Enter>
"quick jump back to mark set by above
noremap <Leader>f `azz
"exit without saving (requires comfirmation)
noremap <Leader>2 :qa! 
noremap <Leader>w :w<Enter>

"toggling highlight
nnoremap <Leader>h :nohlsearch<Bar>:echo<CR>
"toggling syntastic
nnoremap <Leader>9 :SyntasticReset<Enter>

